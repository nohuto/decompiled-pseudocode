/*
 * XREFs of ?OpenSharedVisualFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionHandle@1Handles@Foundation@5@PEAPEAUIVisual@345@@Z @ 0x180110420
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OpenSharedVisualFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisual@234@@Z @ 0x180128AE4 (-OpenSharedVisualFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisual@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::OpenSharedVisualFromHandle(
        Windows::UI::Composition::Compositor::Internal *this,
        struct Windows::Foundation::Handles::Internal::ICompositionHandle *a2,
        struct Windows::UI::Composition::IVisual **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rdi
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  struct Windows::UI::Composition::Visual *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  void *v17; // [rsp+28h] [rbp-18h] BYREF
  char v18; // [rsp+30h] [rbp-10h]
  _QWORD *v19; // [rsp+60h] [rbp+20h] BYREF
  struct Windows::UI::Composition::Visual *v20; // [rsp+70h] [rbp+30h] BYREF
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
  v19 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Handles::Internal::ICompositionHandle *, GUID *, _QWORD **))a2)(
         a2,
         &GUID_be4059cd_d6d0_40d9_999d_60c7a6340dcc,
         &v19);
  v6 = v7;
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x73Cu);
    v15 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
    }
    goto LABEL_17;
  }
  v8 = *v19;
  v17 = 0LL;
  v18 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD *, void **))(v8 + 48))(v19, &v17);
  if ( v18 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      v17);
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x73Du);
  }
  else
  {
    v20 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v20,
      v9);
    v10 = Windows::UI::Composition::CompositorCommon::OpenSharedVisualFromHandle(v3, hObject, &v20);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v12 = v20;
      v20 = 0LL;
      v6 = 0;
      *a3 = (struct Windows::UI::Composition::IVisual *)(((unsigned __int64)v12 + 168) & -(__int64)(v12 != 0LL));
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
        (volatile signed __int32 **)&v20,
        v11);
      v13 = v19;
      if ( !v19 )
        goto LABEL_17;
      v19 = 0LL;
      goto LABEL_10;
    }
    DoStackCaptureDirect(v10, 0x741u);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v20,
      v14);
  }
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
LABEL_10:
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  }
LABEL_17:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
LABEL_19:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return (unsigned int)v6;
}
