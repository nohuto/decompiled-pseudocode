/*
 * XREFs of ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140008FF4
 * Callers:
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000A030 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000A150 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400214C0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140058940 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140059830 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x14005A0CC (WPP_SF_DDD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::SetGraphState(unsigned __int64 a1, int a2)
{
  __int64 v4; // r8
  int v5; // edi
  __int64 (*v6)(void); // rax
  int v7; // eax
  __int64 v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF

  v10 = *(_OWORD *)(a1 + 248);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  v5 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 112LL))(*(_QWORD *)(a1 + 328));
      goto LABEL_5;
    case 1:
      v6 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 120LL);
LABEL_4:
      v7 = v6();
      goto LABEL_5;
    case 2:
      v6 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 128LL);
      goto LABEL_4;
  }
  if ( a2 != 3 )
    goto LABEL_6;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 104LL))(
         *(_QWORD *)(a1 + 328),
         (a1 + 296) & ((unsigned __int128)-(__int128)a1 >> 64));
LABEL_5:
  v5 = v7;
LABEL_6:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
  {
    v9 = ((v5 >> 31) & 0xFFFFFFFE) + 4;
    if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)v9 )
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v9,
        v4,
        *(unsigned int *)(a1 + 336),
        a2,
        v5,
        v10,
        *((_QWORD *)&v10 + 1));
  }
  if ( v5 < 0 )
    a2 = *(_DWORD *)(a1 + 336);
  *(_DWORD *)(a1 + 336) = a2;
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v5;
}
