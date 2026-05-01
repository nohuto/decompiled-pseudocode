/*
 * XREFs of sub_180016454 @ 0x180016454
 * Callers:
 *     sub_1800142CC @ 0x1800142CC (sub_1800142CC.c)
 * Callees:
 *     sub_180013624 @ 0x180013624 (sub_180013624.c)
 *     sub_1800166CC @ 0x1800166CC (sub_1800166CC.c)
 */

__int64 __fastcall sub_180016454(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // r14
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // ebp
  __int64 v15; // rax

  v6 = a1 + 16;
  RtlAcquireSRWLockExclusive(a1 + 16);
  v10 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a4 + 16) != -1LL )
      __int2c();
    if ( !*(_QWORD *)(a4 + 24) )
      __int2c();
    if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
      __int2c();
    v11 = sub_1800166CC(a1, a2);
    if ( !v11 )
      break;
    if ( *(_QWORD *)(v11 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
        __fastfail(0xEu);
      *a6 = v11;
      RtlReleaseSRWLockExclusive(v6);
      return 0LL;
    }
    RtlSleepConditionVariableSRW(a1 + 32, v6, 0LL, 0LL);
  }
  v13 = *(_QWORD *)a1;
  v14 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_24;
    v13 ^= a1;
  }
  if ( v13 )
  {
    while ( 1 )
    {
      if ( (int)sub_180013624(a2, v13) < 0 )
      {
        v15 = *(_QWORD *)v13;
        if ( v14 )
        {
          if ( !v15 )
            break;
          v15 ^= v13;
        }
        if ( !v15 )
          break;
      }
      else
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( v14 )
        {
          if ( !v15 )
            goto LABEL_23;
          v15 ^= v13;
        }
        if ( !v15 )
        {
LABEL_23:
          v10 = 1;
          break;
        }
      }
      v13 = v15;
    }
  }
LABEL_24:
  LOBYTE(v12) = v10;
  RtlRbInsertNodeEx(a1, v13, v12, a4);
  *(_QWORD *)(a1 + 40) += 2LL;
  RtlReleaseSRWLockExclusive(v6);
  RtlWakeAllConditionVariable(a1 + 32);
  *a6 = a4;
  return 0LL;
}
