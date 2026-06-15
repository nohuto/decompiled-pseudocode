/*
 * XREFs of ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BCD0
 * Callers:
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000E9E0 (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18001CE00 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18001D310 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Copy @ 0x18001EDC0 (std--_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Copy @ 0x18001EE00 (std--_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_--_Copy.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180027790 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x180027E3C (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180028500 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Copy @ 0x18002B0F0 (std--_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_::_Copy @ 0x18002B140 (std--_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Copy @ 0x18002B170 (std--_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_--_Copy.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180030A4C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Copy @ 0x180030BB0 (std--_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Copy @ 0x180030C20 (std--_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Copy @ 0x180030F00 (std--_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Copy @ 0x180030FA0 (std--_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Copy @ 0x180030FE0 (std--_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_::_Copy @ 0x180031030 (std--_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_--_Copy.c)
 *     PbmCastingAppStateChanged @ 0x180031490 (PbmCastingAppStateChanged.c)
 *     PbmPlayToStreamStateChanged @ 0x180031860 (PbmPlayToStreamStateChanged.c)
 *     PbmSetScreenReaderState @ 0x180031CE0 (PbmSetScreenReaderState.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rdx
  signed __int32 i; // eax

  v2 = *a2;
  *a1 = v2;
  if ( v2 )
  {
    for ( i = *(_DWORD *)(v2 + 20); i != 0x7FFFFFFF; i = *(_DWORD *)(v2 + 20) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 20), i + 1, i) )
        break;
    }
  }
  return a1;
}
