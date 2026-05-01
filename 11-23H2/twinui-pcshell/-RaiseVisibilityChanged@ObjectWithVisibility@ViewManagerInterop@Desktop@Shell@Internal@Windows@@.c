/*
 * XREFs of ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18002836C
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$Make@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@AEAE@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@12@AEAE@Z @ 0x180028458 (--$Make@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@AEAE@Deta.c)
 *     ??$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_de7a847248f7e9ff51c83bca1460305a_@@@Z @ 0x180028544 (--$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ?InternalRelease@?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003E92C (-InternalRelease@-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged(
        Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *this,
        char a2)
{
  __int64 v3; // rbx
  volatile int *v4; // rdx
  signed __int64 v5; // rax
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rtt
  int v8; // ebx
  Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *v10; // [rsp+20h] [rbp-20h] BYREF
  Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *v11; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *v16; // [rsp+78h] [rbp+38h] BYREF

  v14 = a2;
  Microsoft::WRL::Details::Make<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs,unsigned char &>(
    &v15,
    &v14);
  v3 = v15;
  if ( v15 )
  {
    v16 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    v10 = this;
    v11 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v12 = v3;
    v5 = *(_QWORD *)(v3 + 56);
    while ( 1 )
    {
      v6 = (unsigned __int64)v5 >> 63;
      if ( v5 < 0 )
        break;
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v6 = v5 + 1;
        v7 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 56), v5 + 1, v5);
        if ( v7 != v5 )
          continue;
      }
      goto LABEL_6;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v5 + 16), v4);
LABEL_6:
    v8 = Windows::Internal::ComTaskPool::QueueTask<_lambda_de7a847248f7e9ff51c83bca1460305a_>(
           v6,
           v4,
           *((unsigned int *)this + 10),
           &v10);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::InternalRelease(&v12);
    if ( v11 )
      (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)(unsigned int)v8,
        (int)v10);
    (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 16LL))(this);
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
      (const char *)0x8007000ELL,
      (int)v10);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::InternalRelease(&v15);
  return (unsigned int)v8;
}
