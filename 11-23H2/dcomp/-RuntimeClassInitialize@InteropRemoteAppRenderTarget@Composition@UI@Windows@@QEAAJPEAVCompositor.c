/*
 * XREFs of ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUHWND__@@AEBUtagRECT@@_N@Z @ 0x180198318
 * Callers:
 *     ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAPEAUHWND__@@AEBUtagRECT@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAPEAUHWND__@@AEBUtagRECT@@$$QEA_N@Z @ 0x18015F708 (--$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInterop.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x1801983E4 (-RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJP_ea_1801983E4.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropRemoteAppRenderTarget::RuntimeClassInitialize(
        Windows::UI::Composition::InteropRemoteAppRenderTarget *this,
        struct Windows::UI::Composition::Compositor *a2,
        HWND a3,
        const struct tagRECT *a4,
        bool a5)
{
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = Windows::UI::Composition::InteropRemoteAppRenderTarget::RuntimeClassInitialize(this, a2, a5, 0LL, 1);
  if ( v8 < 0 )
  {
    v9 = 69LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropremoteapprendertarget.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), a3);
  if ( v8 < 0 )
  {
    v9 = 71LL;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(**((_QWORD **)this + 19) + 40LL))(
         *((_QWORD *)this + 19),
         a4);
  if ( v8 < 0 )
  {
    v9 = 72LL;
    goto LABEL_3;
  }
  return 0LL;
}
