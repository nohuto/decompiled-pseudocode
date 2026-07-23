/*
 * XREFs of sub_1407248C0 @ 0x1407248C0
 * Callers:
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     sub_1406CDC5C @ 0x1406CDC5C (sub_1406CDC5C.c)
 *     sub_1406D6C24 @ 0x1406D6C24 (sub_1406D6C24.c)
 *     ObGetObjectSecurity @ 0x1406E5110 (ObGetObjectSecurity.c)
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 *     sub_14072266C @ 0x14072266C (sub_14072266C.c)
 *     sub_140724550 @ 0x140724550 (sub_140724550.c)
 *     sub_1409B0030 @ 0x1409B0030 (sub_1409B0030.c)
 *     sub_1409EB814 @ 0x1409EB814 (sub_1409EB814.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14080BF48 @ 0x14080BF48 (sub_14080BF48.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407248C0(__int64 a1, PVOID *a2, _BYTE *a3)
{
  ULONG_PTR v6; // r14
  signed __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 Pool2; // rax
  int v14; // r12d
  __int64 v15; // rax
  unsigned int v16; // [rsp+90h] [rbp+8h]

  v6 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( *(_UNKNOWN **)(v6 + 152) != &sub_140725080 )
  {
    v16 = dword_140C095A0;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)dword_140C095A0, 1901290063LL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      *a3 = 1;
      v14 = sub_14042A5E0(a1, 1LL);
      if ( v14 != -1073741789 )
      {
LABEL_9:
        if ( v14 < 0 )
        {
          ExFreePoolWithTag(*a2, 0);
          *a2 = 0LL;
          *a3 = 0;
        }
        else if ( !*a2 && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
        {
          goto LABEL_24;
        }
        return (unsigned int)v14;
      }
      ExFreePoolWithTag(*a2, 0);
      *a3 = 0;
      dword_140C095A0 = v16;
      v15 = ExAllocatePool2(256LL, v16, 1901290063LL);
      *a2 = (PVOID)v15;
      if ( v15 )
      {
        *a3 = 1;
        v14 = sub_14042A5E0(a1, 1LL);
        goto LABEL_9;
      }
    }
    return 3221225626LL;
  }
  _m_prefetchw((const void *)(a1 - 8));
  v7 = *(_QWORD *)(a1 - 8);
  if ( (v7 & 0xF) != 0 )
  {
    do
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 8), v7 - 1, v7);
      if ( v7 == v8 )
        break;
      v7 = v8;
    }
    while ( (v8 & 0xF) != 0 );
  }
  v9 = v7;
  v10 = v7 & 0xF;
  v11 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (unsigned int)v10 <= 1 && v11 )
    v11 = sub_14080BF48(a1 - 48, v10, v11);
  *a2 = (PVOID)v11;
  *a3 = 0;
  if ( !*a2 && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
LABEL_24:
    KeBugCheckEx(0x189u, a1 - 48, v6, 1uLL, 0LL);
  return 0LL;
}
