/*
 * XREFs of ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x1400273DC
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140003810 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140003B20 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140027090 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400271B0 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400272D0 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x14005739C (WPP_SF_DDD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::SetGraphState(unsigned __int64 a1, int a2)
{
  int v4; // edi
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF

  v8 = *(_OWORD *)(a1 + 248);
  v9 = v8;
  EtwEventActivityIdControl(4LL, &v9);
  v4 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 112LL))(*(_QWORD *)(a1 + 328));
      goto LABEL_5;
    case 1:
      v5 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 120LL);
LABEL_4:
      v6 = v5();
      goto LABEL_5;
    case 2:
      v5 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 128LL);
      goto LABEL_4;
  }
  if ( a2 != 3 )
    goto LABEL_6;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 104LL))(
         *(_QWORD *)(a1 + 328),
         (a1 + 296) & ((unsigned __int128)-(__int128)a1 >> 64));
LABEL_5:
  v4 = v6;
LABEL_6:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v4 >> 31) & 0xFFFFFFFE) + 4) )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      31LL,
      &WPP_7f2b06cbe2743c9445e1f0d7b0a3a743_Traceguids,
      *(unsigned int *)(a1 + 336),
      a2,
      v4,
      v8,
      *((_QWORD *)&v8 + 1));
  }
  if ( v4 < 0 )
    a2 = *(_DWORD *)(a1 + 336);
  *(_DWORD *)(a1 + 336) = a2;
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v4;
}
