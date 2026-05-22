/*
 * XREFs of ?OpenSharedReadCaptureControllerFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionHandle@1Handles@Foundation@5@PEAPEAUIReadCaptureController@1345@@Z @ 0x180110050
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ToPartner@UIReadCaptureController@Internal@Composition@UI@Windows@@@SharedReadCaptureController@Internal@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UIReadCaptureController@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010E13C (--$ToPartner@UIReadCaptureController@Internal@Composition@UI@Windows@@@SharedReadCaptureControll.c)
 *     ?OpenSharedReadCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVSharedReadCaptureController@Internal@234@@Z @ 0x1801288BC (-OpenSharedReadCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEA.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::OpenSharedReadCaptureControllerFromHandle(
        Windows::UI::Composition::Compositor::Internal *this,
        struct Windows::Foundation::Handles::Internal::ICompositionHandle *a2,
        struct Windows::UI::Composition::Internal::IReadCaptureController **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rsi
  int v6; // edi
  __int64 (__fastcall **v7)(struct Windows::Foundation::Handles::Internal::ICompositionHandle *, GUID *, _QWORD **); // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+20h] [rbp-20h] BYREF
  void **p_hObject; // [rsp+28h] [rbp-18h]
  void *v18; // [rsp+30h] [rbp-10h] BYREF
  char v19; // [rsp+38h] [rbp-8h]
  _QWORD *v20; // [rsp+70h] [rbp+30h] BYREF
  HANDLE hObject; // [rsp+80h] [rbp+40h] BYREF
  struct Windows::UI::Composition::Internal::IReadCaptureController *v22; // [rsp+88h] [rbp+48h] BYREF

  v3 = (Windows::UI::Composition::Compositor::Internal *)((char *)this - 1112);
  *a3 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1112));
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_20;
  }
  v7 = *(__int64 (__fastcall ***)(struct Windows::Foundation::Handles::Internal::ICompositionHandle *, GUID *, _QWORD **))a2;
  hObject = 0LL;
  v20 = 0LL;
  v8 = (*v7)(a2, &GUID_be4059cd_d6d0_40d9_999d_60c7a6340dcc, &v20);
  v6 = v8;
  if ( v8 < 0 )
  {
    DoStackCaptureDirect(v8, 0x6D2u);
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
    }
    goto LABEL_18;
  }
  v9 = *v20;
  p_hObject = &hObject;
  v18 = 0LL;
  v19 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD *, void **))(v9 + 48))(v20, &v18);
  if ( v19 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      p_hObject,
      v18);
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x6D3u);
  }
  else
  {
    v16 = 0LL;
    v10 = Windows::UI::Composition::CompositorCommon::OpenSharedReadCaptureControllerFromHandle(v3, hObject, &v16);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v11 = v16;
      v22 = 0LL;
      Windows::UI::Composition::Internal::SharedReadCaptureController::ToPartner<Windows::UI::Composition::Internal::IReadCaptureController>(
        v16,
        (__int64 *)&v22);
      *a3 = v22;
      v6 = 0;
      v22 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v22);
      if ( !v11 )
        goto LABEL_11;
      v12 = v11;
      goto LABEL_10;
    }
    DoStackCaptureDirect(v10, 0x6D7u);
    v12 = v16;
    if ( v16 )
LABEL_10:
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
  }
LABEL_11:
  v13 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  }
LABEL_18:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
LABEL_20:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return (unsigned int)v6;
}
