/*
 * XREFs of SleepstudyHelperDestroyBlockerBuilder @ 0x1407A8480
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1402099A0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407A81D4 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407A82B0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140844000 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x1408440B0 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x1408506A0 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x1409A21C0 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1409A24B0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1409A2570 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     SshpDereferenceBlocker @ 0x1407A850C (SshpDereferenceBlocker.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlockerBuilder(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  void *v4; // rcx
  ULONG v5; // esi
  void *v6; // rcx
  void *v7; // rcx

  v1 = 0;
  if ( a1 )
  {
    v3 = *a1;
    v4 = (void *)a1[7];
    v5 = *(_DWORD *)(v3 + 24);
    if ( v4 )
    {
      *((_DWORD *)a1 + 12) = 0;
      CmpFreeTransientPoolWithTag(v4, v5);
      a1[7] = 0LL;
    }
    v6 = (void *)a1[8];
    if ( v6 )
      CmpFreeTransientPoolWithTag(v6, v5);
    v7 = (void *)a1[9];
    if ( v7 )
      CmpFreeTransientPoolWithTag(v7, v5);
    if ( a1[10] )
      SshpDereferenceBlocker();
    CmpFreeTransientPoolWithTag(a1, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
