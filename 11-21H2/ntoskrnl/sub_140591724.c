/*
 * XREFs of sub_140591724 @ 0x140591724
 * Callers:
 *     sub_1405A4C68 @ 0x1405A4C68 (sub_1405A4C68.c)
 * Callees:
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1404619C0 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall sub_140591724(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  volatile signed __int32 *v10; // rcx

  *(_QWORD *)a3 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4199) + 12488LL);
  if ( a2 )
  {
    *(_BYTE *)(a3 + 8) = 1;
    if ( !(unsigned int)ExTryAcquireSpinLockSharedAtDpcLevel((_DWORD *)(v6 + 128)) )
      return 0LL;
  }
  else
  {
    *(_BYTE *)(a3 + 8) = 0;
    sub_1402165BC(5);
  }
  v8 = (_QWORD *)*((_QWORD *)&xmmword_140C53100 + 1);
  while ( v8 )
  {
    v9 = v8[3];
    if ( a1 >= v9 )
    {
      if ( a1 < v9 + 512 )
      {
        v10 = (volatile signed __int32 *)(v8 + 8);
        if ( a2 )
        {
          if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v10) )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v6 + 128));
            *(_BYTE *)(a3 + 8) = 0;
            return 0LL;
          }
        }
        else
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(v10);
        }
        *(_QWORD *)a3 = v8;
        return 1LL;
      }
      v8 = (_QWORD *)v8[1];
    }
    else
    {
      v8 = (_QWORD *)*v8;
    }
  }
  return 1LL;
}
