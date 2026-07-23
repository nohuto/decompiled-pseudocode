/*
 * XREFs of sub_14062C2E4 @ 0x14062C2E4
 * Callers:
 *     sub_1409D9A80 @ 0x1409D9A80 (sub_1409D9A80.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F78C @ 0x14045F78C (sub_14045F78C.c)
 *     sub_14062A30C @ 0x14062A30C (sub_14062A30C.c)
 *     sub_14062C524 @ 0x14062C524 (sub_14062C524.c)
 *     sub_1409DA634 @ 0x1409DA634 (sub_1409DA634.c)
 */

__int64 __fastcall sub_14062C2E4(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  __int64 result; // rax
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = sub_14045F78C(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a5 )
    __int2c();
  v9 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)(SpinLock + 2);
  while ( 1 )
  {
    if ( !v9 )
    {
      v11 = 0LL;
LABEL_17:
      __int2c();
      goto LABEL_18;
    }
    if ( a2 > *(_QWORD *)(v9 + 32) )
    {
      v10 = *(_QWORD *)(v9 + 8);
      goto LABEL_11;
    }
    if ( a2 >= *(_QWORD *)(v9 + 24) )
      break;
    v10 = *(_QWORD *)v9;
LABEL_11:
    if ( (SpinLock[4] & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
  v11 = (_QWORD *)(v9 - 24);
  if ( v9 == 24 )
    goto LABEL_17;
LABEL_18:
  v12 = *((_DWORD *)v11 + 16);
  if ( (v12 & 1) == 0 )
    __int2c();
  if ( v11[6] != a2 )
    __int2c();
  if ( v11[7] != a2 + a4 - 1 )
    __int2c();
  v13 = v11[2];
  if ( *(_QWORD *)(v13 + 24) != a3 )
    __int2c();
  if ( !*(_QWORD *)(v13 + 56) )
    __int2c();
  *((_DWORD *)v11 + 16) = v12 & 0xFFFFFFFE;
  v14 = sub_14062C524(v13);
  ++*((_QWORD *)SpinLock + 5);
  v15 = v14;
  sub_14062A30C(SpinLock, a2, a3, a4, &v22, 2);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = (unsigned __int8)v22;
  __writecr8((unsigned __int8)v22);
  if ( v15 )
    return sub_1409DA634(SpinLock, v15);
  return result;
}
