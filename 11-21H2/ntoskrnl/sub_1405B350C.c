/*
 * XREFs of sub_1405B350C @ 0x1405B350C
 * Callers:
 *     sub_1405B130C @ 0x1405B130C (sub_1405B130C.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 */

__int64 __fastcall sub_1405B350C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  volatile LONG *v7; // r15
  char v8; // r14
  __int64 v9; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 == 0x3FFFFFFFFFLL )
    return -1LL;
  v7 = (volatile LONG *)(a1 + 32);
  v8 = 0;
  while ( 1 )
  {
    v9 = 48 * v4 - 0x220000000000LL;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v13, a2, a3, a4);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    ExAcquireSpinLockSharedAtDpcLevel(v7);
    if ( v4 == *(_QWORD *)(a1 + 16) )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v7);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 == 0x3FFFFFFFFFLL )
      return -1LL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
    goto LABEL_14;
  *(_QWORD *)(a2 + 16) = a1 + 40;
  *(_QWORD *)(a2 + 8) = 0x3FFFFFFFFFLL;
  *(_BYTE *)(a2 + 24) = 1;
  v11 = *(_QWORD *)v9 & 0xFFFFFFFFFFLL;
  if ( v11 != 0x3FFFFFFFFFLL )
  {
    v12 = 48 * v11 - 0x220000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      *(_QWORD *)(a2 + 40) = v12;
      v8 = 1;
      *(_QWORD *)(a2 + 32) = v11;
      goto LABEL_13;
    }
LABEL_14:
    *(_BYTE *)a2 = 1;
    sub_140338D00(a1, a2);
    *(_BYTE *)a2 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel(v7);
    return v4;
  }
LABEL_13:
  *(_BYTE *)(a2 + 48) = v8;
  *(_BYTE *)a2 = 1;
  return v4;
}
