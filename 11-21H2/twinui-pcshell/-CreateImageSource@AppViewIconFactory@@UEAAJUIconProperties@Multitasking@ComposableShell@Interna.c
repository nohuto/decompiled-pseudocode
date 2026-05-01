/*
 * XREFs of ?CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIImageSource@Media@Xaml@UI@6@@Z @ 0x180453E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x1804531A4 (--$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x180454B2C (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall AppViewIconFactory::CreateImageSource(__int64 a1, __int64 a2, _QWORD *a3)
{
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)); // rax
  int v10; // eax
  int v11; // eax
  int v13; // [rsp+20h] [rbp-88h]
  int v14; // [rsp+20h] [rbp-88h]
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-78h] BYREF
  __int64 v16; // [rsp+38h] [rbp-70h] BYREF
  int v17[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-60h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  AppViewIconLoader *v20; // [rsp+58h] [rbp-50h] BYREF
  HSTRING_HEADER v21; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a3 = 0LL;
  v16 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v21,
    L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap",
    0x2Eu,
    0x2Du);
  ActivationFactory = RoGetActivationFactory(v22, &GUID_5563ebb1_3ef2_42c5_9c6d_1cf5dcc041ff, &v16);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5B,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
      (const char *)(unsigned int)ActivationFactory,
      v13);
  v7 = MulDiv((int)*(float *)a2, *(_DWORD *)(a2 + 24), 96);
  v8 = (unsigned int)MulDiv((int)*(float *)(a2 + 4), *(_DWORD *)(a2 + 24), 96);
  v15 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v16 + 48LL);
  v15 = 0LL;
  v10 = v9(v16, v7, v8, &v15);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewIconFactory.h",
      (const char *)(unsigned int)v10,
      v13);
  *(_QWORD *)v17 = *(_QWORD *)(a1 + 40);
  v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
  v19 = *(_QWORD *)(a1 + 32);
  wil::MakeAndInitializeOrThrow<AppViewIconLoader,Windows::Internal::ComposableShell::Multitasking::IconProperties &,IApplicationView *,Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *,IApplicationViewIconLoader *>(
    &v20,
    (_OWORD *)a2,
    &v19,
    &v18,
    (__int64 *)v17);
  v11 = (**v15)(v15, &GUID_737ef309_ea41_4d96_a71c_98e98efcab07, a3);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17F8,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v11,
      v14);
  Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v20);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v15);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
  return 0LL;
}
