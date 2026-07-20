/*
 * XREFs of SmpTerminateCSR @ 0x140001660
 * Callers:
 *     SmpStopCsr @ 0x140001840 (SmpStopCsr.c)
 *     SmpDestroyControlBlock @ 0x140003AD4 (SmpDestroyControlBlock.c)
 * Callees:
 *     SmpTerminateProcessAndWait @ 0x140001788 (SmpTerminateProcessAndWait.c)
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSubSysStartup @ 0x1400024F0 (SmpWaitForSubSysStartup.c)
 *     SmpSetCoreProcessIds @ 0x140002724 (SmpSetCoreProcessIds.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x140002858 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpUnlockKnownSubSysList @ 0x140003800 (SmpUnlockKnownSubSysList.c)
 */

__int64 __fastcall SmpTerminateCSR(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 *v4; // r10
  __int64 v5; // rax
  __int64 *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-10h] BYREF

  v1 = (unsigned int)a1;
  v10[1] = v10;
  v10[0] = v10;
  SmpWaitForSubSysStartup(a1, 0LL, v10, v11);
  SmpUnlockKnownSubSysList(v11);
  if ( (_QWORD *)v10[0] != v10 )
  {
    if ( (unsigned int)SmpSessionIdToInitialSessionIndex((unsigned int)v1) != -1 )
    {
      LOBYTE(v3) = 1;
      v12 = 0LL;
      SmpSetCoreProcessIds(v2, &v12, v3);
      v4 = (__int64 *)v10[0];
    }
    do
    {
      if ( (_QWORD *)v4[1] != v10 || (v5 = *v4, *(__int64 **)(*v4 + 8) != v4) )
        __fastfail(3u);
      v10[0] = *v4;
      v6 = v4 - 9;
      *(_QWORD *)(v5 + 8) = v10;
      v7 = SmpTerminateProcessAndWait(v4 - 9);
      if ( v7 < 0 )
      {
        v8 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v8 + 2] = 223;
        SmpGlobalLog[2 * v8 + 3] = v7;
        *(_QWORD *)&SmpGlobalLog[2 * v8 + 4] = v1;
      }
      SmpDereferenceKnownSubSys(v6);
      v4 = (__int64 *)v10[0];
    }
    while ( (_QWORD *)v10[0] != v10 );
  }
  return 0LL;
}
