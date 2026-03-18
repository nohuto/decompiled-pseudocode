/*
 * XREFs of SleepstudyHelperInitializeOnce @ 0x1C00B1FE0
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation_0 @ 0x1C000A942 (ZwPowerInformation_0.c)
 *     memset @ 0x1C000AC00 (memset.c)
 */

__int64 __fastcall SleepstudyHelperInitializeOnce(_RTL_RUN_ONCE *RunOnce, void *Parameter, void **Context)
{
  _SLEEPSTUDY_HELPER_ROUTINE_BLOCK *v3; // rdi
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  _SLEEPSTUDY_HELPER_ROUTINE_BLOCK *v6; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm1
  _SLEEPSTUDY_HELPER_ROUTINE_BLOCK *RoutineBlock; // [rsp+30h] [rbp-18h] BYREF
  _POWER_INFORMATION_INTERNAL_HEADER Header; // [rsp+68h] [rbp+20h] BYREF

  v3 = &SleepstudyHelperRoutineBlock;
  v4 = 0;
  RoutineBlock = 0LL;
  memset(&SleepstudyHelperRoutineBlock, 0, sizeof(SleepstudyHelperRoutineBlock));
  Header.Version = 0;
  Header.InternalType = PowerInternalQuerySleepStudyHelperRoutineBlock;
  v5 = ZwPowerInformation_0(PowerInformationInternal, &Header, 8u, &RoutineBlock, 8u);
  if ( v5 == -1073741637 )
  {
    return 1;
  }
  else if ( v5 >= 0 )
  {
    v6 = RoutineBlock;
    v4 = 1;
    if ( RoutineBlock->Version )
    {
      v7 = 2LL;
      do
      {
        *(_OWORD *)&v3->Version = *(_OWORD *)&v6->Version;
        *(_OWORD *)&v3->BlockerActiveReference = *(_OWORD *)&v6->BlockerActiveReference;
        *(_OWORD *)&v3->CreateBlockerData = *(_OWORD *)&v6->CreateBlockerData;
        *(_OWORD *)&v3->CreateBlockerFromDevice = *(_OWORD *)&v6->CreateBlockerFromDevice;
        *(_OWORD *)&v3->CreateLibrary = *(_OWORD *)&v6->CreateLibrary;
        *(_OWORD *)&v3->DestroyBlockerBuilder = *(_OWORD *)&v6->DestroyBlockerBuilder;
        *(_OWORD *)&v3->DestroyLibrary = *(_OWORD *)&v6->DestroyLibrary;
        v3 = (_SLEEPSTUDY_HELPER_ROUTINE_BLOCK *)((char *)v3 + 128);
        v8 = *(_OWORD *)&v6->QueryBlockerStatistics;
        v6 = (_SLEEPSTUDY_HELPER_ROUTINE_BLOCK *)((char *)v6 + 128);
        *(_OWORD *)&v3[-1].ReleaseComponentLock = v8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)&v3->Version = *(_QWORD *)&v6->Version;
    }
  }
  return v4;
}
