/*
 * XREFs of CemRcTableFindOrInsertEx @ 0x1800151C8
 * Callers:
 *     ?RmpProcEntryStart@@YAJPEAU_RM_PROC_ENTRY@@@Z @ 0x180014B80 (-RmpProcEntryStart@@YAJPEAU_RM_PROC_ENTRY@@@Z.c)
 * Callees:
 *     ?RmpProcEntryCompare@@YAJPEAX0@Z @ 0x180013F28 (-RmpProcEntryCompare@@YAJPEAX0@Z.c)
 *     CempRcTableFindUnsafe @ 0x180015450 (CempRcTableFindUnsafe.c)
 */

__int64 __fastcall CemRcTableFindOrInsertEx(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // r14
  char v10; // bl
  __int64 Unsafe; // rax
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
    Unsafe = CempRcTableFindUnsafe(a1, a2);
    if ( !Unsafe )
      break;
    if ( *(_QWORD *)(Unsafe + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(Unsafe + 24)) <= 1 )
        __fastfail(0xEu);
      *a6 = Unsafe;
      RtlReleaseSRWLockExclusive(v6);
      return 0LL;
    }
    RtlSleepConditionVariableSRW(a1 + 32, v6, 0LL, 0LL);
  }
  v13 = *(_QWORD *)a1;
  v14 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
  {
LABEL_17:
    if ( !v13 )
      goto LABEL_24;
    while ( 1 )
    {
      if ( (int)RmpProcEntryCompare(a2, (_DWORD *)v13) < 0 )
      {
        v15 = *(_QWORD *)v13;
        if ( v14 )
        {
          if ( !v15 )
            goto LABEL_24;
          v15 ^= v13;
        }
        if ( !v15 )
          goto LABEL_24;
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
          goto LABEL_24;
        }
      }
      v13 = v15;
    }
  }
  if ( v13 )
  {
    v13 ^= a1;
    goto LABEL_17;
  }
  v13 = 0LL;
LABEL_24:
  LOBYTE(v12) = v10;
  RtlRbInsertNodeEx(a1, v13, v12, a4);
  *(_QWORD *)(a1 + 40) += 2LL;
  RtlReleaseSRWLockExclusive(v6);
  RtlWakeAllConditionVariable(a1 + 32);
  *a6 = a4;
  return 0LL;
}
