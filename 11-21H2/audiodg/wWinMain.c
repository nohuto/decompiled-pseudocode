/*
 * XREFs of wWinMain @ 0x140001774
 * Callers:
 *     __scrt_common_main_seh @ 0x14002F3B0 (__scrt_common_main_seh.c)
 * Callees:
 *     WppInitUm @ 0x1400016AC (WppInitUm.c)
 *     McGenEventRegister_EtwEventRegister @ 0x140001734 (McGenEventRegister_EtwEventRegister.c)
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140001A04 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 *     WPP_SF_S @ 0x1400518C0 (WPP_SF_S.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14006E478 (-AERTMemoryShutdown@@YAJXZ.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // edi
  _QWORD *v9; // rbx
  LPVOID Context; // [rsp+20h] [rbp-18h] BYREF

  byte_1400C12E0 = 0;
  qword_1400C15A8 = 0LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  qword_1400C15B0 = 1LL;
  WppInitUm();
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, lpCmdLine);
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
      v7 = ATL::CAtlExeModuleT<CAudioDGModule>::WinMain((CAudioDGModule *)&_AtlModule);
      v8 = v7;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids, v7);
      }
      AERTMemoryShutdown();
    }
    else
    {
      v8 = -2147024882;
    }
  }
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    while ( v9 )
    {
      if ( v9[1] )
      {
        EtwUnregisterTraceGuids();
        v9[1] = 0LL;
      }
      v9 = (_QWORD *)*v9;
    }
    WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
  }
  return v8;
}
