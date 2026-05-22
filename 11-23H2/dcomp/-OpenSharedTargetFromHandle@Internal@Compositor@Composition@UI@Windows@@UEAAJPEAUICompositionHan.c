/*
 * XREFs of ?OpenSharedTargetFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionHandle@1Handles@Foundation@5@PEAPEAUICompositionTarget@345@@Z @ 0x180110240
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?OpenSharedTargetFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualTarget@234@@Z @ 0x18000B4C8 (-OpenSharedTargetFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualTarge.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::OpenSharedTargetFromHandle(
        Windows::UI::Composition::Compositor::Internal *this,
        struct Windows::Foundation::Handles::Internal::ICompositionHandle *a2,
        struct Windows::UI::Composition::ICompositionTarget **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rdi
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  void *v13; // [rsp+28h] [rbp-18h] BYREF
  char v14; // [rsp+30h] [rbp-10h]
  _QWORD *v15; // [rsp+60h] [rbp+20h] BYREF
  HANDLE hObject; // [rsp+70h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::Compositor::Internal *)((char *)this - 1112);
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
  hObject = 0LL;
  v15 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Handles::Internal::ICompositionHandle *, GUID *, _QWORD **))a2)(
         a2,
         &GUID_be4059cd_d6d0_40d9_999d_60c7a6340dcc,
         &v15);
  v6 = v7;
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x719u);
    v11 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    }
    goto LABEL_18;
  }
  v8 = *v15;
  v13 = 0LL;
  v14 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD *, void **))(v8 + 48))(v15, &v13);
  if ( v14 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      v13);
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x71Au);
  }
  else
  {
    v17 = 0LL;
    v9 = Windows::UI::Composition::CompositorCommon::OpenSharedTargetFromHandle(v3, hObject, &v17);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v6 = 0;
      *a3 = (struct Windows::UI::Composition::ICompositionTarget *)(((unsigned __int64)v17 + 160) & -(__int64)(v17 != 0LL));
      v10 = v15;
      if ( !v15 )
        goto LABEL_18;
      v15 = 0LL;
      goto LABEL_10;
    }
    DoStackCaptureDirect(v9, 0x71Eu);
    if ( v17 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v17);
  }
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
LABEL_10:
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  }
LABEL_18:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
LABEL_20:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return (unsigned int)v6;
}
