/*
 * XREFs of SleepstudyHelperInitializeOnce @ 0x1C00BF900
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation_0 @ 0x1C0036672 (ZwPowerInformation_0.c)
 *     memset @ 0x1C0036C00 (memset.c)
 */

__int64 __fastcall SleepstudyHelperInitializeOnce(_RTL_RUN_ONCE *RunOnce, void *Parameter, void **Context)
{
  void **p_SystemArgument1; // rbx
  unsigned int v4; // edi
  _SLEEPSTUDY_HELPER_ROUTINE_BLOCK *v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm1
  _SLEEPSTUDY_HELPER_ROUTINE_BLOCK *RoutineBlock; // [rsp+30h] [rbp-18h] BYREF
  _POWER_INFORMATION_INTERNAL_HEADER Header; // [rsp+68h] [rbp+20h] BYREF

  p_SystemArgument1 = &WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1;
  v4 = 0;
  RoutineBlock = 0LL;
  memset(&WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1, 0, 0x108uLL);
  Header.Version = 0;
  Header.InternalType = PowerInternalQuerySleepStudyHelperRoutineBlock;
  if ( ZwPowerInformation_0(PowerInformationInternal, &Header, 8u, &RoutineBlock, 8u) >= 0 )
  {
    v5 = RoutineBlock;
    if ( RoutineBlock->Version )
    {
      v6 = 2LL;
      do
      {
        *(_OWORD *)p_SystemArgument1 = *(_OWORD *)&v5->Version;
        *((_OWORD *)p_SystemArgument1 + 1) = *(_OWORD *)&v5->BlockerActiveReference;
        *((_OWORD *)p_SystemArgument1 + 2) = *(_OWORD *)&v5->CreateBlockerData;
        *((_OWORD *)p_SystemArgument1 + 3) = *(_OWORD *)&v5->CreateBlockerFromDevice;
        *((_OWORD *)p_SystemArgument1 + 4) = *(_OWORD *)&v5->CreateLibrary;
        *((_OWORD *)p_SystemArgument1 + 5) = *(_OWORD *)&v5->DestroyBlockerBuilder;
        *((_OWORD *)p_SystemArgument1 + 6) = *(_OWORD *)&v5->DestroyLibrary;
        p_SystemArgument1 += 16;
        v7 = *(_OWORD *)&v5->QueryBlockerStatistics;
        v5 = (_SLEEPSTUDY_HELPER_ROUTINE_BLOCK *)((char *)v5 + 128);
        *((_OWORD *)p_SystemArgument1 - 1) = v7;
        --v6;
      }
      while ( v6 );
      *p_SystemArgument1 = *(void **)&v5->Version;
    }
    return 1;
  }
  return v4;
}
