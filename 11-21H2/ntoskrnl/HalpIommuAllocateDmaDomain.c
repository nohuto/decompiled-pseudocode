/*
 * XREFs of HalpIommuAllocateDmaDomain @ 0x1403BB820
 * Callers:
 *     HalpIommuInitializeDmar @ 0x1403BB7AC (HalpIommuInitializeDmar.c)
 *     IommuDomainCreateEx @ 0x140824A80 (IommuDomainCreateEx.c)
 *     IommuDomainCreate @ 0x14090AAC0 (IommuDomainCreate.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpIommuDomainMapLogicalRange @ 0x14051AC2C (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x14051AD44 (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuFreeDmaDomain @ 0x14051AF88 (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x14051B254 (HalpIommuGetPageTableType.c)
 *     IommupHvConfigureDeviceDomain @ 0x140527480 (IommupHvConfigureDeviceDomain.c)
 *     HalpIommuCreateDmarPageTable @ 0x140529654 (HalpIommuCreateDmarPageTable.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405298F8 (HalpIommuGetDmarptRootAddress.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x1405346EC (HalpBuddyAllocatorCreateAllocator.c)
 */

__int64 __fastcall HalpIommuAllocateDmaDomain(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4, __int64 a5)
{
  int v8; // r13d
  int PageTableType; // edi
  _BYTE *v10; // rax
  _BYTE *v11; // rsi
  unsigned __int64 v12; // rcx
  char v13; // r8
  int v14; // r12d
  __int64 *v15; // rbx
  _QWORD *v16; // rax
  bool v18; // zf
  unsigned __int32 v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  char v25; // [rsp+40h] [rbp-41h]
  __int64 v26; // [rsp+48h] [rbp-39h] BYREF
  __int64 v27; // [rsp+50h] [rbp-31h]
  __int128 v28; // [rsp+58h] [rbp-29h] BYREF
  __int128 v29; // [rsp+68h] [rbp-19h]
  int v30; // [rsp+78h] [rbp-9h]
  __int64 v31; // [rsp+80h] [rbp-1h] BYREF
  bool v32; // [rsp+88h] [rbp+7h]
  __int16 v33; // [rsp+89h] [rbp+8h]
  char v34; // [rsp+8Bh] [rbp+Ah]

  v27 = a5;
  LODWORD(v26) = 0;
  v8 = a1;
  v30 = 0;
  v28 = 0LL;
  PageTableType = 0;
  v29 = 0LL;
  v10 = (_BYTE *)HalpMmAllocCtxAlloc(a1, 64LL);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741670;
  memset(v10, 0, 0x40uLL);
  if ( v8 )
  {
    v12 = (unsigned int)(v8 - 1);
    if ( v8 == 1 )
    {
      v13 = 1;
      v25 = 0;
    }
    else
    {
      if ( v8 != 2 )
      {
LABEL_21:
        PageTableType = -1073741585;
LABEL_22:
        HalpIommuFreeDmaDomain(v11);
        return (unsigned int)PageTableType;
      }
      v13 = 0;
      v25 = 0;
    }
  }
  else
  {
    v13 = 1;
    v12 = (unsigned __int64)a2 >> 61;
    LOBYTE(v12) = (a2 & 0x2000000000000000LL) != 0;
    v25 = 1;
  }
  v11[52] = v12;
  switch ( v8 )
  {
    case 0:
      goto LABEL_26;
    case 1:
      v14 = 0;
      break;
    case 2:
LABEL_26:
      v14 = 2;
      break;
    default:
      v14 = 3;
      break;
  }
  if ( !v13 )
    goto LABEL_27;
  if ( HalpHvIommu )
  {
    if ( (_BYTE)v12 )
      v18 = HalpHvParaVirtIommuDomain == 0;
    else
      v18 = HalpHvIommuDeviceDomain == 0;
    if ( !v18 )
    {
      if ( v8 != 1 )
      {
        v19 = _InterlockedIncrement(&HalpIommuDomainId);
        *((_DWORD *)v11 + 12) = v19;
        v31 = v19;
        BYTE4(v31) = v11[52];
        v34 = 0;
        v32 = (a2 & 0x4000000000000000LL) != 0;
        v33 = a2 < 0;
        PageTableType = ((__int64 (__fastcall *)(__int64 *))qword_140C4C5F0)(&v31);
        if ( PageTableType < 0 )
          goto LABEL_22;
      }
      if ( v11[52] )
      {
        LOBYTE(v12) = 1;
        PageTableType = HalpIommuGetPageTableType(v12, &v26);
        if ( PageTableType < 0 )
          goto LABEL_22;
        PageTableType = HalpIommuCreateDmarPageTable(v26, 4, 4);
        if ( PageTableType < 0 )
          goto LABEL_22;
        v20 = *((_QWORD *)v11 + 5);
        LODWORD(v28) = 1;
        LOBYTE(v29) = 1;
        HalpIommuGetDmarptRootAddress(v20, 4LL, (char *)&v28 + 8);
        LOBYTE(v21) = v11[52];
        PageTableType = IommupHvConfigureDeviceDomain(*((unsigned int *)v11 + 12), v21, v22, &v28);
        if ( PageTableType < 0 )
          goto LABEL_22;
      }
      goto LABEL_14;
    }
LABEL_27:
    PageTableType = -1073741637;
    goto LABEL_22;
  }
  if ( (a2 & 0x4000000000000000LL) != 0 || (a2 & 0x2000000000000000LL) != 0 )
    goto LABEL_27;
  if ( v14 )
  {
    PageTableType = HalpIommuGetPageTableType(0LL, &v26);
    if ( PageTableType < 0 )
      goto LABEL_22;
    PageTableType = HalpIommuCreateDmarPageTable(v26, HalpIommuMinPageTableDepth, HalpIommuMaxPageTableDepth);
    if ( PageTableType < 0 )
      goto LABEL_22;
  }
  *((_QWORD *)v11 + 4) = 0LL;
  *((_QWORD *)v11 + 3) = v11 + 16;
  *((_QWORD *)v11 + 2) = v11 + 16;
LABEL_14:
  if ( !a3 )
    goto LABEL_15;
  if ( !v25 && *a3 )
  {
    PageTableType = -1073741811;
    goto LABEL_22;
  }
  *((_QWORD *)v11 + 7) = 0LL;
  if ( !*a3 )
  {
    PageTableType = 0;
    goto LABEL_15;
  }
  if ( *a3 != 1 )
    goto LABEL_21;
  PageTableType = HalpBuddyAllocatorCreateAllocator((unsigned int)a3[1]);
  if ( PageTableType < 0 )
    goto LABEL_22;
LABEL_15:
  v15 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v23 = *((_QWORD *)v11 + 7);
      if ( v23 )
      {
        PageTableType = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 16LL))(
                          v23,
                          v15[1],
                          v15[2]);
        if ( PageTableType < 0 )
          break;
      }
      if ( *((_BYTE *)v15 + 24) )
      {
        PageTableType = HalpIommuDomainMapLogicalRange((_DWORD)v11, 3, v15[1], (unsigned int)v15[2] << 12, v15[1]);
        if ( PageTableType < 0 )
          break;
      }
      v15 = (__int64 *)*v15;
      if ( !v15 )
        goto LABEL_16;
    }
    while ( a4 != v15 )
    {
      if ( *((_BYTE *)a4 + 24) )
      {
        v24 = a4[1];
        v26 = a4[2] << 12;
        HalpIommuDomainUnmapLogicalRange(v11, v24, &v26, 0LL);
      }
      a4 = (__int64 *)*a4;
    }
    goto LABEL_22;
  }
LABEL_16:
  v16 = (_QWORD *)v27;
  *((_DWORD *)v11 + 3) = v14;
  *((_DWORD *)v11 + 2) = v8;
  *v16 = v11;
  return (unsigned int)PageTableType;
}
