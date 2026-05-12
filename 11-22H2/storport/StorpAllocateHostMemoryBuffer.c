/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x1C0047F00
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zdqqqqqqqqq_EtwWriteTransfer @ 0x1C004465C (McTemplateK0zdqqqqqqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpAllocateHostMemoryBuffer(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        __int64 a8,
        __int64 a9,
        unsigned int *a10)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r15
  unsigned __int128 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned int *v19; // rdi
  char v20; // si
  unsigned int v21; // edi
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r9
  __int64 v24; // rsi
  _QWORD *v25; // r12
  SIZE_T v26; // r15
  unsigned int *v27; // rbp
  __int64 (__fastcall *v28)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD); // r10
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  SIZE_T v33; // rax
  unsigned int *v34; // rax
  __int64 v35; // rbp
  struct _MDL *v36; // rcx
  unsigned int *v37; // rsi
  int *Flags; // [rsp+28h] [rbp-D0h]
  int v40; // [rsp+40h] [rbp-B8h]
  __int64 v41; // [rsp+70h] [rbp-88h]
  int v42; // [rsp+78h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+7Ch] [rbp-7Ch]
  unsigned __int64 v44; // [rsp+88h] [rbp-70h]
  __int64 *v45; // [rsp+90h] [rbp-68h]
  _QWORD *v46; // [rsp+98h] [rbp-60h]
  _QWORD *v47; // [rsp+A0h] [rbp-58h]
  __int64 v48; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v49; // [rsp+B0h] [rbp-48h]
  char v50; // [rsp+108h] [rbp+10h]
  char v51; // [rsp+110h] [rbp+18h]

  v51 = a3;
  v50 = a2;
  v10 = a3;
  v11 = a2;
  *(_QWORD *)&v12 = RaidpPortGetAdapter(a1);
  v41 = v12;
  v15 = v12;
  v42 = 0;
  v16 = 0LL;
  LOBYTE(v17) = 0;
  v18 = 0;
  v19 = 0LL;
  if ( !(_QWORD)v12 )
    goto LABEL_2;
  if ( *(_QWORD *)(v12 + 5528) )
  {
    v21 = -1056964607;
    v20 = 1;
    goto LABEL_60;
  }
  v13 = 4096LL;
  v22 = 4096LL;
  if ( v11 )
    v22 = v11;
  v49 = v22;
  if ( v10 < v22 )
    goto LABEL_2;
  if ( ((v10 | v22) & 0xFFF) != 0 || (*((_QWORD *)&v12 + 1) = 0x1000 % a5) != 0LL )
  {
    v20 = 3;
    goto LABEL_59;
  }
  v13 = (__int64)a10;
  if ( !a10 || (v43 = *a10) == 0 || a8 )
  {
LABEL_2:
    v20 = 2;
LABEL_59:
    v21 = -1056964602;
    goto LABEL_60;
  }
  if ( HmbAllocationPolicy == 1 )
    goto LABEL_20;
  if ( HmbAllocationPolicy == 2 )
  {
LABEL_19:
    v23 = v10;
    goto LABEL_21;
  }
  if ( HmbAllocationPolicy != 3 )
  {
    v21 = -1056964606;
    v20 = 4;
    goto LABEL_60;
  }
  v12 = v14 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
  v23 = (v14 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v23 < v22 )
  {
LABEL_20:
    v23 = v22;
    goto LABEL_21;
  }
  if ( v23 > v10 )
    goto LABEL_19;
LABEL_21:
  v17 = (unsigned int)HmbMaximumSize;
  v24 = v15;
  v48 = *(_QWORD *)(v15 + 760);
  v25 = 0LL;
  if ( v23 <= (unsigned int)HmbMaximumSize )
    v17 = v23;
  v44 = v17;
  v26 = v17;
  while ( v26 >= 0x1000 && v16 < v17 )
  {
    *(_QWORD *)&v12 = RaidAllocatePool(64LL, 40LL, 1161912658LL, *(_QWORD *)(v24 + 8));
    v27 = (unsigned int *)v12;
    if ( !(_QWORD)v12 )
    {
      LOBYTE(v17) = v44;
      break;
    }
    v46 = (_QWORD *)(v12 + 24);
    v45 = (__int64 *)(v12 + 8);
    v28 = *(__int64 (__fastcall **)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD))(*(_QWORD *)(v48 + 8) + 272LL);
    v47 = (_QWORD *)(v12 + 16);
    if ( v28 )
    {
      Flags = &v42;
      *(_QWORD *)&v12 = v28(v48, &LowAddress, &HighAddress, (unsigned int)v26, 0);
      *((_QWORD *)&v12 + 1) = v46;
      v29 = v45;
      *v46 = v12;
    }
    else
    {
      *(_QWORD *)&v12 = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v26, MmNonCached, 0x20u);
      v29 = v45;
      *((_QWORD *)&v12 + 1) = v46;
      *v45 = v12;
    }
    v30 = *v29;
    v13 = (__int64)v47;
    if ( *v29 )
    {
      *((_QWORD *)&v12 + 1) = *(unsigned int *)(v30 + 40);
      v13 = a9;
      v31 = 2LL * v18;
      v16 += *((_QWORD *)&v12 + 1);
      *(_QWORD *)(a9 + 8 * v31) = *(_QWORD *)(v30 + 48) << 12;
      *(_DWORD *)(v13 + 8 * v31 + 8) = DWORD2(v12);
LABEL_32:
      ++v18;
      if ( v19 )
        *v25 = v27;
      else
        v19 = v27;
      v25 = v27;
      goto LABEL_39;
    }
    if ( **((_QWORD **)&v12 + 1) )
    {
      *((_QWORD *)&v12 + 1) = a9;
      v32 = 2LL * v18;
      v16 += v26;
      *(_QWORD *)(a9 + 8 * v32) = *v47;
      *(_DWORD *)(*((_QWORD *)&v12 + 1) + 8 * v32 + 8) = v26;
      *((_QWORD *)v27 + 4) = v26;
      goto LABEL_32;
    }
    v26 -= 4096LL;
LABEL_39:
    v17 = v44;
    v33 = v44 - v16;
    if ( v26 <= v44 - v16 )
      v33 = v26;
    v26 = v33;
    if ( v18 >= v43 )
      break;
  }
  v20 = 0;
  if ( v18 )
  {
    if ( v16 < v49 )
    {
      if ( v19 )
      {
        v35 = v48;
        do
        {
          v36 = (struct _MDL *)*((_QWORD *)v19 + 1);
          v37 = *(unsigned int **)v19;
          if ( v36 )
          {
            MmFreePagesFromMdl(v36);
            ExFreePoolWithTag(*((PVOID *)v19 + 1), 0);
          }
          if ( *((_QWORD *)v19 + 3) )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v35 + 8) + 24LL))(
              v35,
              v19[8],
              *((_QWORD *)v19 + 2));
          ExFreePoolWithTag(v19, 0);
          v19 = v37;
        }
        while ( v37 );
      }
      v15 = v41;
      v21 = -1056964605;
      v20 = 5;
    }
    else
    {
      v15 = v41;
      v34 = a10;
      *(_QWORD *)(v41 + 5528) = v19;
      v21 = 0;
      *v34 = v18;
    }
    LOBYTE(v17) = v44;
  }
  else
  {
    v15 = v41;
    v21 = -1056964605;
    v20 = 5;
  }
  LOBYTE(v10) = v51;
  LOBYTE(v11) = v50;
LABEL_60:
  if ( (byte_1C0092A05 & 1) != 0 )
    McTemplateK0zdqqqqqqqqq_EtwWriteTransfer(
      *(unsigned int *)(v15 + 56),
      *((__int64 *)&v12 + 1),
      v13,
      *(const wchar_t **)(v15 + 48),
      *(_DWORD *)(v15 + 56),
      (int)Flags,
      v11,
      v10,
      v40,
      v17,
      v16,
      v18,
      v21 == 0,
      v20);
  return v21;
}
