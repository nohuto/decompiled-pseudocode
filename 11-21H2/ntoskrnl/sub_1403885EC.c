/*
 * XREFs of sub_1403885EC @ 0x1403885EC
 * Callers:
 *     sub_14023EA5C @ 0x14023EA5C (sub_14023EA5C.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 * Callees:
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14038868C @ 0x14038868C (sub_14038868C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14058C0BC @ 0x14058C0BC (sub_14058C0BC.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_1403885EC(__int64 a1, __int64 a2, char a3)
{
  bool v3; // zf
  BOOL v4; // r12d
  unsigned __int64 v6; // rsi
  volatile LONG *v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  int v14; // edi
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  int v21; // eax
  __int64 v22; // r9
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  char *v26; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64) == 0LL;
  v26 = 0LL;
  v4 = !v3;
  LOBYTE(v6) = a2;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_3;
    DWORD1(v25) = 0;
    v9 = (volatile LONG *)(a1 + 72);
    v26 = (char *)&v25 + 8;
    *((_QWORD *)&v24 + 1) = 4LL;
    *((_QWORD *)&v25 + 1) = (char *)&v25 + 8;
    *(_QWORD *)&v24 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v24;
    LOWORD(v25) = 263;
    BYTE2(v25) = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v3 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v3 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v6);
    v14 = sub_140329730(0LL, 0LL, (__int64 *)(a1 + 128), 0LL, 0LL, 0x80000000, (int *)&v23);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    sub_14058C0BC(a1, &v24);
    if ( !HIDWORD(v24) )
      break;
    v15 = *(_QWORD *)(a1 + 40);
    if ( v15 != 1 || *(_QWORD *)(a1 + 24) )
    {
      v16 = 1;
      goto LABEL_17;
    }
  }
  if ( v14 >= 0 )
  {
LABEL_3:
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(a2) = v6;
    sub_14038868C(a1, a2, 0LL);
    return 1LL;
  }
  v15 = *(_QWORD *)(a1 + 40);
  v16 = 2;
LABEL_17:
  *(_QWORD *)(a1 + 40) = v15 - 1;
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  v17 = 0LL;
  if ( v16 == 2 && (v17 = sub_140287FB8(a1)) != 0 )
    v18 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v18 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v22 = *((_QWORD *)v20 + 4375);
        v3 = (v21 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v21;
        if ( v3 )
          sub_140418E4C(v20);
      }
    }
  }
  __writecr8(v6);
  if ( v17 )
    sub_1405C4B8C(v18, v4, v17);
  return 0LL;
}
