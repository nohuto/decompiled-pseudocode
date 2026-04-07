/*
 * XREFs of ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800CEBB4
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CEE78 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x1800195B8 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800402D4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF224 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectedShadowScene::CreateProjectedShadowReceiverVisual(CProjectedShadowScene *this, __int64 a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, GUID *, char *); // rdi
  _QWORD *v6; // r14
  int v7; // edi
  __int64 v8; // rdx
  __int64 (__fastcall *v10)(__int64, _QWORD, HANDLE *); // rdi
  __int64 (__fastcall *v11)(__int64, char *); // rdi
  int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  HANDLE hObject; // [rsp+50h] [rbp+30h] BYREF
  __int64 v16; // [rsp+60h] [rbp+40h] BYREF

  hObject = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v16 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v4 + 216LL);
  v6 = (_QWORD *)((char *)this + 48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  v7 = v5(v4, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, (char *)this + 48);
  if ( v7 < 0 )
  {
    v8 = 118LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    return (unsigned int)v7;
  }
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)v4 + 224LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v7 = v10(v4, *v6, &hObject);
  if ( v7 < 0 )
  {
    v8 = 121LL;
    goto LABEL_5;
  }
  v11 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  v7 = v11(v4, (char *)this + 40);
  if ( v7 < 0 )
  {
    v8 = 124LL;
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( v7 < 0 )
  {
    v8 = 125LL;
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, *((_QWORD *)this + 5));
  if ( v7 < 0 )
  {
    v8 = 128LL;
    goto LABEL_5;
  }
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( v12 < 0 )
  {
    v13 = 129LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    return (unsigned int)v12;
  }
  v12 = CVisual::CreateFromSharedHandle(hObject, (struct CVisual **)this + 7);
  if ( v12 < 0 )
  {
    v13 = 132LL;
    goto LABEL_18;
  }
  v12 = CProjectedShadowScene::PositionProjectedShadowReceiverVisual(this);
  if ( v12 < 0 )
  {
    v13 = 135LL;
    goto LABEL_18;
  }
  *((_QWORD *)this + 2) = a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return 0LL;
}
