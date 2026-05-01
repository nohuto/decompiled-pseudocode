/*
 * XREFs of MakeXamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0___ @ 0x18042BB94
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804324F4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0___ @ 0x18042B750 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874b.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeXamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_(
        __int64 *a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  _QWORD *XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a1 = 0LL;
  XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0 = Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0___(&v9, a2);
  v5 = (*XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0
      + 32LL) & -(__int64)(*XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0 != 0LL);
  v10 = v5;
  *XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_____lambda_baaea9c5454d5217874bd274f7881db0 = 0LL;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
  {
    v10 = 0LL;
    *a1 = v5;
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\TwinUI\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v3;
}
