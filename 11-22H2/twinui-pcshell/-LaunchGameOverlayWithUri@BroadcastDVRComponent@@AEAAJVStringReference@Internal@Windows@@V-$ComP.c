/*
 * XREFs of ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1803D921C
 * Callers:
 *     ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D8EC4 (-LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRAc.c)
 *     ?NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ @ 0x1803D9558 (-NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x1802D22F2 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ??$?0$0BI@@StringReference@Internal@Windows@@QEAA@AEAY0BI@$$CBG@Z @ 0x1803D1114 (--$-0$0BI@@StringReference@Internal@Windows@@QEAA@AEAY0BI@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803D1468 (--$ActivateInstance@V-$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Wind.c)
 *     ??$As@UILauncherOptions2@System@Windows@@@?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803D14A0 (--$As@UILauncherOptions2@System@Windows@@@-$ComPtr@UILauncherOptions@System@Windows@@@WRL@Micros.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803D280C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U-$IAsyncOperatio.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall BroadcastDVRComponent::LaunchGameOverlayWithUri(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 *); // rbx
  int ActivationFactory; // eax
  const unsigned __int16 *v8; // rdx
  int v9; // ebx
  __int64 v10; // rdx
  HSTRING v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING); // rdi
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v17; // edx
  __int64 v18; // r8
  int (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rdi
  _BYTE v21[8]; // [rsp+30h] [rbp-19h] BYREF
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-11h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-9h] BYREF
  __int64 v24; // [rsp+48h] [rbp-1h] BYREF
  __int64 v25; // [rsp+50h] [rbp+7h] BYREF
  __int64 v26[2]; // [rsp+58h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+68h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v26[1] = (__int64)a3;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v26[0] = 0LL;
  v22 = 0LL;
  v21[0] = 0;
  v5 = *a3;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*a3 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  ActivationFactory = v6(v5, *a2, &v25);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 3402LL;
LABEL_5:
    v12 = (unsigned int)ActivationFactory;
    goto LABEL_6;
  }
  v11 = *Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[24])v8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  ActivationFactory = RoGetActivationFactory(v11, &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, &v24);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 3404LL;
    goto LABEL_5;
  }
  if ( WindowsCreateStringReference(L"Windows.System.LauncherOptions", 0x1Eu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>>(
                        (__int64)string,
                        (__int64 *)&v23);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 3406LL;
    goto LABEL_5;
  }
  ActivationFactory = Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>::As<Windows::System::ILauncherOptions2>(
                        &v23,
                        v26);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 3407LL;
    goto LABEL_5;
  }
  v13 = v26[0];
  v14 = *(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v26[0] + 56LL);
  Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)&string, c_wzGameBarPfn);
  ActivationFactory = v14(v13, string);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 3408LL;
    goto LABEL_5;
  }
  v15 = v24;
  v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v24 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  ActivationFactory = v16(v15, v25, v23, &v22);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 3410LL;
    goto LABEL_5;
  }
  v19 = v22;
  v9 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool>>(
         v22,
         v17,
         v18);
  if ( v9 >= 0 )
    v9 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _BYTE *))(*v19)[8])(v19, v21);
  if ( v9 < 0 )
  {
    v12 = (unsigned int)v9;
    v10 = 3412LL;
    goto LABEL_6;
  }
  ActivationFactory = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _BYTE *))(*v22)[8])(
                        v22,
                        v21);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 3414LL;
    goto LABEL_5;
  }
  if ( v21[0] )
  {
    v9 = 0;
    goto LABEL_26;
  }
  v9 = -2147467259;
  v12 = 2147500037LL;
  v10 = 3416LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)v12);
LABEL_26:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a3);
  return (unsigned int)v9;
}
