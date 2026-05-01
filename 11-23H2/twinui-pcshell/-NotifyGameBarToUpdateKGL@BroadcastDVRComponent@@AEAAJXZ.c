/*
 * XREFs of ?NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ @ 0x1803D9558
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___::Run @ 0x1803DB620 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802D2174 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x1802D22F2 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ??$?0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z @ 0x1803D10BC (--$-0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z.c)
 *     ??$?0$0BI@@StringReference@Internal@Windows@@QEAA@AEAY0BI@$$CBG@Z @ 0x1803D1114 (--$-0$0BI@@StringReference@Internal@Windows@@QEAA@AEAY0BI@$$CBG@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803D2618 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInfo@Applicatio.c)
 *     ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1803D921C (-LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V-$ComP.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall BroadcastDVRComponent::NotifyGameBarToUpdateKGL(
        BroadcastDVRComponent *this,
        const unsigned __int16 *a2)
{
  HSTRING v2; // rbx
  int ActivationFactory; // eax
  int v4; // ebx
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int v8; // edx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v22 = 0LL;
  v2 = *Windows::Internal::StringReference::StringReference(string, (const unsigned __int16 (*)[24])a2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_59ba2fbb_24cb_4c02_a4c4_8294569d54f1, &v22);
  v4 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v21 = 0LL;
    v5 = v22;
    v6 = *(void (__fastcall **)(__int64, HSTRING, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v22 + 104LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    Windows::Internal::StringReference::_ConstructorHelper(
      (Windows::Internal::StringReference *)string,
      c_wzGameBarProtocolScheme);
    v6(v5, string[0], &v21);
    v20 = 0LL;
    v7 = v21;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo *> *>>(
           v7,
           v8,
           v9);
    if ( v4 >= 0 )
      v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v7)[8])(v7, &v20);
    if ( v4 < 0 )
    {
      v10 = (unsigned int)v4;
      v11 = 1182LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)v10);
LABEL_20:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
      goto LABEL_21;
    }
    v18 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &v18);
    v4 = v12;
    if ( v12 < 0 )
    {
      v10 = (unsigned int)v12;
      v11 = 1185LL;
      goto LABEL_9;
    }
    if ( v18 )
    {
      v19 = 0LL;
      v13 = (__int64 *)Windows::Internal::StringReference::StringReference(string, L"Windows.Foundation.Uri");
      v14 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
              *v13,
              &v19);
      v4 = v14;
      if ( v14 < 0 )
      {
        v15 = 1191LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
        goto LABEL_20;
      }
      v23 = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      Windows::Internal::StringReference::_ConstructorHelper(
        (Windows::Internal::StringReference *)string,
        c_wzGameBarUpdateKGLUri);
      v14 = BroadcastDVRComponent::LaunchGameOverlayWithUri(v16, string, &v23);
      v4 = v14;
      if ( v14 < 0 )
      {
        v15 = 1193LL;
        goto LABEL_17;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    }
    v4 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x498,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return (unsigned int)v4;
}
