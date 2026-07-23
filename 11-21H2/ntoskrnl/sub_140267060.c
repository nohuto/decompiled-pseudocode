/*
 * XREFs of sub_140267060 @ 0x140267060
 * Callers:
 *     sub_1402662A0 @ 0x1402662A0 (sub_1402662A0.c)
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140594C08 @ 0x140594C08 (sub_140594C08.c)
 *     sub_1405B4EA0 @ 0x1405B4EA0 (sub_1405B4EA0.c)
 *     sub_1405C37D0 @ 0x1405C37D0 (sub_1405C37D0.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_140268654 @ 0x140268654 (sub_140268654.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_1405B05A0 @ 0x1405B05A0 (sub_1405B05A0.c)
 *     sub_1405B7574 @ 0x1405B7574 (sub_1405B7574.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 */

__int64 __fastcall sub_140267060(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _DWORD *a7)
{
  int v8; // r15d
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  BOOL v15; // esi
  int v16; // r12d
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r13d
  __int64 v23; // rdi
  _DWORD *v24; // r15
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-100h]
  __int64 v36; // [rsp+68h] [rbp-F0h]
  _DWORD v37[36]; // [rsp+80h] [rbp-D8h] BYREF

  v8 = a2;
  v10 = a4;
  memset(v37, 0, 0x8CuLL);
  v36 = 24512 * v10 + *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(v36 + 22608) && (dword_140D06880 & 0x30) != 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v11 = a3 + 1;
  while ( 1 )
  {
    v12 = sub_1402CA5E0(a1, v8, --v11, 1, v10, 4, a5, a6 | 0x82u, 0LL);
    v13 = v12;
    if ( v12 )
      break;
    v8 = a2;
    if ( !v11 )
      return 0LL;
  }
  v14 = *(_QWORD *)(v12 + 16);
  v15 = (v14 & 0x3E0) != 0;
  if ( qword_140C50780 && (v14 & 0x10) == 0 )
    v14 &= ~qword_140C50780;
  if ( HIDWORD(v14) != 4294967293 || (v16 = 1, (dword_140D0689C & 0x200000) == 0) )
    v16 = 0;
  if ( v11 == a3 )
  {
    v17 = *(_QWORD *)(a1 + 16) + 24512 * v10;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v17 + 22848));
    v18 = *(_QWORD *)(v17 + 22792);
    --*(_DWORD *)(v17 + 22788);
    *(_QWORD *)(v17 + 22792) = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 22848));
    if ( v18 )
      sub_1405B05A0(v18);
    v22 = a3;
    v23 = v13;
  }
  else
  {
    v22 = a3;
    v23 = v13 + 48 * qword_14001C780[a3] * (a2 % (qword_14001C780[v11] << 12) / (qword_14001C780[a3] << 12));
    sub_140268654(v36, v13, v11, a3, v23);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = -1LL << (CurrentIrql + 1);
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        v28 = ~(unsigned __int16)v19;
        v29 = (v28 & *(_DWORD *)(v21 + 20)) == 0;
        v20 = (unsigned int)v28 & *(_DWORD *)(v21 + 20);
        *(_DWORD *)(v21 + 20) = v20;
        if ( v29 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v15 && (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
    sub_1405AD468(0xAAAAAAAAAAAAAAABuLL * ((v23 + 0x220000000000LL) >> 4));
  v24 = v37;
  if ( v16 )
  {
    if ( !a7 )
    {
      v37[0] = 1;
      v37[2] = 16;
    }
    v24 = v37;
    if ( a7 )
      v24 = a7;
    if ( (unsigned int)sub_1405B7574(v24, 0xAAAAAAAAAAAAAAABuLL * ((v23 + 0x220000000000LL) >> 4), v22) )
      sub_1405B7E7C(v24, v30, v31, v32);
    if ( v24[1] && v24 == v37 )
      sub_1405B7E7C(v24, v30, v31, v32);
    *(_QWORD *)(v23 + 16) = sub_14033B6A0(*(_QWORD *)(v23 + 16), 0LL);
  }
  if ( v15 )
  {
    if ( v24[1] )
      sub_1405B7E7C(v24, v19, v20, v21);
    if ( v11 == 3 )
      sub_1402359C4(0xAAAAAAAAAAAAAAABuLL * ((v23 + 0x220000000000LL) >> 4), 0, a5);
    else
      sub_14026A28C(v23, v22, a5);
    *(_QWORD *)(v23 + 16) = 0LL;
  }
  return v23;
}
