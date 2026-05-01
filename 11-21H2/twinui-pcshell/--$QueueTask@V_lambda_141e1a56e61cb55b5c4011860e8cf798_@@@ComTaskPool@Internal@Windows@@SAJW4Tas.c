/*
 * XREFs of ??$QueueTask@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@Z @ 0x18053E0C4
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@H$$ZH@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJH@ZV?$tuple@H@std@@@Z @ 0x18053E6E4 (--$_QueueNotification2@UIVirtualDesktopNotification@@H$$ZH@CVirtualDesktopNotifications@@AEAAJP8.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@Z @ 0x18053DF98 (--$Make@V-$CTaskWrapper@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Window.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_141e1a56e61cb55b5c4011860e8cf798_>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_141e1a56e61cb55b5c4011860e8cf798_>,_lambda_141e1a56e61cb55b5c4011860e8cf798_>(
         &v10,
         a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
