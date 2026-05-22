/*
 * XREFs of ?OpenSharedVisualReferenceFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionHandle@1Handles@Foundation@5@PEAPEAUIVisualReference@1345@@Z @ 0x180110610
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OpenSharedVisualReferenceFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualReference@Internal@234@@Z @ 0x180128D14 (-OpenSharedVisualReferenceFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVi.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::OpenSharedVisualReferenceFromHandle(
        Windows::UI::Composition::Compositor::Internal *this,
        struct Windows::Foundation::Handles::Internal::ICompositionHandle *a2,
        struct Windows::UI::Composition::Internal::IVisualReference **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rdi
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  struct Windows::UI::Composition::Internal::VisualReference *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  void *v14; // [rsp+28h] [rbp-18h] BYREF
  char v15; // [rsp+30h] [rbp-10h]
  _QWORD *v16; // [rsp+60h] [rbp+20h] BYREF
  struct Windows::UI::Composition::Internal::VisualReference *v17; // [rsp+70h] [rbp+30h] BYREF
  HANDLE hObject; // [rsp+78h] [rbp+38h] BYREF

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
    goto LABEL_19;
  }
  hObject = 0LL;
  v16 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Handles::Internal::ICompositionHandle *, GUID *, _QWORD **))a2)(
         a2,
         &GUID_be4059cd_d6d0_40d9_999d_60c7a6340dcc,
         &v16);
  v6 = v7;
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x75Fu);
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    }
    goto LABEL_17;
  }
  v8 = *v16;
  v14 = 0LL;
  v15 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD *, void **))(v8 + 48))(v16, &v14);
  if ( v15 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      v14);
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x760u);
  }
  else
  {
    v17 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
    v9 = Windows::UI::Composition::CompositorCommon::OpenSharedVisualReferenceFromHandle(v3, hObject, &v17);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v10 = v17;
      v17 = 0LL;
      v6 = 0;
      *a3 = (struct Windows::UI::Composition::Internal::IVisualReference *)(((unsigned __int64)v10 + 136) & -(__int64)(v10 != 0LL));
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
      v11 = v16;
      if ( !v16 )
        goto LABEL_17;
      v16 = 0LL;
      goto LABEL_10;
    }
    DoStackCaptureDirect(v9, 0x764u);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
  }
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
LABEL_10:
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  }
LABEL_17:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
LABEL_19:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return (unsigned int)v6;
}
