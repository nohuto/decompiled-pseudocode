/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x180133EB8
 * Callers:
 *     _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator() @ 0x180133E00 (_lambda_5f803f865b4b07caa2d72f9fc7ffab60_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18007BE50 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e___ @ 0x180133F78 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801383D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1801383D0.c)
 */

__int64 __fastcall NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(
        NotificationDispatcher *this,
        __int64 *a2)
{
  __int64 v3; // rax
  struct IAsyncCallback **CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e; // rax
  struct IAsyncCallback *v5; // rbx
  volatile signed __int32 *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v14; // [rsp+48h] [rbp+10h] BYREF
  struct IAsyncCallback *v15; // [rsp+50h] [rbp+18h] BYREF

  v12[0] = 0LL;
  if ( v12 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v12[0] = v3;
  }
  v12[1] = a2[1];
  CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e = (struct IAsyncCallback **)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e___(&v14, v12);
  v5 = *CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e;
  *CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e = 0LL;
  v6 = v14;
  v15 = v5;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v6);
  }
  if ( v12[0] )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::Release();
  if ( !v5 )
  {
    v8 = -2147024882;
    v11 = 28LL;
    v10 = 2147942414LL;
    goto LABEL_12;
  }
  v7 = NotificationDispatcher::AddTask(this, v5);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 29LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
      (const char *)v10);
    goto LABEL_10;
  }
  v8 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return v8;
}
