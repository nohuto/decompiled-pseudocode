/*
 * XREFs of sub_14022CE0C @ 0x14022CE0C
 * Callers:
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 * Callees:
 *     sub_14022CF78 @ 0x14022CF78 (sub_14022CF78.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C4980 @ 0x1405C4980 (sub_1405C4980.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_14022CE0C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _WORD *v3; // r15
  __int64 v5; // rbp
  int v7; // ebx
  volatile LONG *v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r10
  __int16 v12; // r9
  __int64 v13; // rax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  __int64 v22; // r9
  int v23; // eax

  v3 = *(_WORD **)a1;
  v5 = a3;
  v7 = 0;
  v8 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(v8);
    if ( !(_DWORD)v5 )
      break;
    v10 = sub_14022CF78(a1);
    if ( (*(_DWORD *)(sub_14022CF78(v10) + 48) & 0x3FFFFFFF) == 0 )
    {
      if ( v7 == 1 )
        v7 = 2;
LABEL_6:
      *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ (*(_DWORD *)(a1 + 52) - v5)) & 0x3FFFFFFF;
      break;
    }
    if ( v7 )
      goto LABEL_6;
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    result = sub_1405C4980(a1, v5);
    if ( (int)result < 0 )
      return result;
    v7 = 1;
  }
  *(_DWORD *)(a1 + 40) = (*a2 >> 12) - (*(_DWORD *)(a1 + 36) | ((*(_WORD *)(a1 + 32) & 0xFFC0) << 26));
  *(_WORD *)(a1 + 34) = *(_WORD *)(a1 + 34) & 0xF | (16 * *(_WORD *)a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = *((_QWORD *)v21 + 4375);
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v19 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v23;
        if ( v19 )
          sub_140418E4C(v21);
      }
    }
  }
  __writecr8(v9);
  if ( (_DWORD)v5 )
  {
    v11 = *(_QWORD *)v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)v3 + 24LL),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), -1LL, -1LL) + (v5 << 12));
    v12 = *(_WORD *)(v11 + 12);
    v13 = *(unsigned int *)(v11 + 8);
    *(_DWORD *)(v11 + 8) = v5 + v13;
    *(_WORD *)(v11 + 12) = v12 ^ (v12 ^ ((v5 + (v13 | ((unsigned __int64)(v12 & 0x3FF) << 32))) >> 32)) & 0x3FF;
    if ( v7 == 2 )
      sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (v3[30] & 0x3FF)), 1LL, v5);
  }
  return 0LL;
}
