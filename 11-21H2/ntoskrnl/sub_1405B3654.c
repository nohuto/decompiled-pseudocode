/*
 * XREFs of sub_1405B3654 @ 0x1405B3654
 * Callers:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall sub_1405B3654(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  volatile LONG *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rcx
  __int64 v11; // rdx

  v2 = a1 + 40;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
  {
LABEL_16:
    v10 = (_BYTE *)(a2 + 24);
    v11 = 4LL;
    do
    {
      if ( *v10 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)v10 - 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        *v10 = 0;
      }
      v10 += 24;
      --v11;
    }
    while ( v11 );
    *(_BYTE *)a2 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
  }
  else
  {
    v5 = (volatile LONG *)(a1 + 32);
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 24);
        if ( v6 != 0x3FFFFFFFFFLL )
          break;
        v7 = 0LL;
        ExAcquireSpinLockSharedAtDpcLevel(v5);
        if ( *(_QWORD *)(a1 + 24) == 0x3FFFFFFFFFLL )
          goto LABEL_9;
        ExReleaseSpinLockSharedFromDpcLevel(v5);
      }
      v7 = 48 * v6 - 0x220000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_16;
      }
      ExAcquireSpinLockSharedAtDpcLevel(v5);
      if ( v6 == *(_QWORD *)(a1 + 24) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel(v5);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_9:
    v8 = v7;
    v9 = 0x3FFFFFFFFFLL;
    if ( v7 )
      v9 = v6;
    else
      v8 = v2;
    *(_QWORD *)(a2 + 16) = v8;
    *(_QWORD *)(a2 + 8) = v9;
    *(_BYTE *)(a2 + 24) = 1;
    *(_QWORD *)(a2 + 40) = v2;
    *(_QWORD *)(a2 + 32) = 0x3FFFFFFFFFLL;
    if ( v7 )
      *(_BYTE *)(a2 + 48) = 1;
    *(_BYTE *)a2 = 1;
  }
}
