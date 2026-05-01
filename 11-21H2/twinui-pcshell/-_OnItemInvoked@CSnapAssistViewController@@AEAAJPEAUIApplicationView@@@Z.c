/*
 * XREFs of ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B47F8
 * Callers:
 *     ?InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804B4280 (-InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewForegroundStaging@@@?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewForegroundStaging@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AD2A4 (--$As@UIMultitaskingViewForegroundStaging@@@-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Mic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___ @ 0x1804B3CA0 (Windows--Internal--ComTaskPool--QueueTask__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSnapAssistViewController::_OnItemInvoked(
        CSnapAssistViewController *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  struct IApplicationView *v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+48h] [rbp-28h] BYREF
  struct IApplicationView *v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *((_BYTE *)this + 176) = 1;
  v16 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v15 = 0LL;
  v4 = *((_QWORD *)this + 18);
  v13 = 2;
  v17 = v4;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v15,
         (__int64)&GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d,
         &v17,
         &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v14 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::As<IMultitaskingViewForegroundStaging>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 19,
           &v14);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v18 = *((_OWORD *)this + 10);
        v19 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
        v20 = v15;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
        v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___(v11, &v18);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
        if ( v6 >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
          goto LABEL_11;
        }
        v8 = (unsigned int)v6;
        v9 = 161LL;
      }
      else
      {
        v8 = (unsigned int)v10;
        v9 = 150LL;
      }
    }
    else
    {
      v8 = (unsigned int)v7;
      v9 = 149LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
    (const char *)(unsigned int)v5);
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v6;
}
