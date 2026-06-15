/*
 * XREFs of wWinMain @ 0x140052BD8
 * Callers:
 *     __scrt_common_main_seh @ 0x140027C30 (__scrt_common_main_seh.c)
 * Callees:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140052528 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 *     McGenEventRegister_EtwEventRegister @ 0x14005273C (McGenEventRegister_EtwEventRegister.c)
 *     WPP_SF_S @ 0x140052910 (WPP_SF_S.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 *     WppInitUm @ 0x140052AC8 (WppInitUm.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14007AE24 (-AERTMemoryShutdown@@YAJXZ.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edi
  int v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  LPVOID Context; // [rsp+20h] [rbp-18h] BYREF

  byte_1400CF3B0 = 0;
  qword_1400CFAD8 = 0LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  qword_1400CFAE0 = 1LL;
  WppInitUm();
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, lpCmdLine);
  }
  HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  McGenEventRegister_EtwEventRegister();
  if ( gMaxSize )
  {
    v8 = -2147023649;
  }
  else
  {
    gInitialSize = 0x200000LL;
    gMinSize = 4LL;
    gMaxSize = 0x8000LL;
    if ( InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context) )
    {
      v9 = ATL::CAtlExeModuleT<CAudioDGModule>::WinMain((CAudioDGModule *)&_AtlModule, nShowCmd);
      v8 = v9;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x19u,
          (__int64)&WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids,
          v9);
      }
      AERTMemoryShutdown();
    }
    else
    {
      v8 = -2147024882;
    }
  }
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    while ( v10 )
    {
      v11 = v10[1];
      if ( v11 )
      {
        EtwUnregisterTraceGuids(v11);
        v10[1] = 0LL;
      }
      v10 = (_QWORD *)*v10;
    }
    WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
  }
  return v8;
}
