/*
 * XREFs of ??$QueueTask@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_aa91cdbb300619209848d1d014bee82b_@@@Z @ 0x1804A2EC4
 * Callers:
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x1804A2DBC (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Windows@@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_aa91cdbb300619209848d1d014bee82b_@@@Z @ 0x1804A2E34 (--$Make@V-$CTaskWrapper@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Window.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_aa91cdbb300619209848d1d014bee82b_>(
        unsigned int a1,
        _QWORD *a2)
{
  volatile signed __int32 **v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_aa91cdbb300619209848d1d014bee82b_>,_lambda_aa91cdbb300619209848d1d014bee82b_>(
         &v9,
         a2);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v5);
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
