/*
 * XREFs of ViDeadlockEmptyDatabase @ 0x140AD9E40
 * Callers:
 *     ViDeadlockDetectionApplySettings @ 0x140AD9D8C (ViDeadlockDetectionApplySettings.c)
 * Callees:
 *     ViLowerIrql @ 0x1405D1B48 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405D1BC0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140AD9DD8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD9E10 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140ADA280 (ViDeadlockFree.c)
 *     ViDeadlockRemoveResource @ 0x140ADAA68 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140ADAC20 (ViDeadlockRemoveThread.c)
 */

void ViDeadlockEmptyDatabase()
{
  __int64 v0; // rdi
  _QWORD *v1; // r14
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r15
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rbp
  _QWORD *i; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rbx
  unsigned __int8 v19; // [rsp+60h] [rbp+8h]

  v0 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v19 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1);
  ViDeadlockDetectionEnabled = 0;
  if ( ViDeadlockGlobals )
  {
    v3 = *((_QWORD *)ViDeadlockGlobals + 2);
    v4 = 1023LL;
    v5 = 1023LL;
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD **)(v6 + v3);
      while ( v7 != (_QWORD *)(v0 + v3) )
      {
        v8 = v7 - 5;
        v7 = (_QWORD *)*v7;
        ViDeadlockRemoveResource((__int64)v8);
        v9 = ViDeadlockGlobals;
        *v8 = v2;
        v2 = v8;
        v3 = v9[2];
      }
      v0 += 16LL;
      v6 += 16LL;
      --v5;
    }
    while ( v5 );
    v10 = 0LL;
    v11 = 0LL;
    v12 = *((_QWORD *)ViDeadlockGlobals + 2050);
    do
    {
      v13 = *(_QWORD **)(v10 + v12);
      for ( i = (_QWORD *)(v11 + v12); v13 != i; i = (_QWORD *)(v12 + v11) )
      {
        v15 = v13 - 3;
        v13 = (_QWORD *)*v13;
        ViDeadlockRemoveThread((__int64)v15);
        v16 = ViDeadlockGlobals;
        *v15 = v1;
        v1 = v15;
        v12 = v16[2050];
      }
      v11 += 16LL;
      v10 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  ViDeadlockDetectionUnlock(1);
  ViLowerIrql(v19);
  if ( v1 )
  {
    do
    {
      v17 = (_QWORD *)*v1;
      ViDeadlockFree(v1);
      v1 = v17;
    }
    while ( v17 );
  }
  if ( v2 )
  {
    do
    {
      v18 = (_QWORD *)*v2;
      ViDeadlockFree(v2);
      v2 = v18;
    }
    while ( v18 );
  }
}
