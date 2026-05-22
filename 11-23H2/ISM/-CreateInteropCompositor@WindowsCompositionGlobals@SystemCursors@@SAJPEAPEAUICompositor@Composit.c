/*
 * XREFs of ?CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x1800458AC
 * Callers:
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x18004508C (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ACF0 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800C09F0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SystemCursors::WindowsCompositionGlobals::CreateInteropCompositor(
        struct Windows::UI::Composition::ICompositor **a1)
{
  HRESULT v2; // eax
  int v3; // edx
  unsigned int v4; // r8d
  int ActivationFactory; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  struct Windows::UI::Composition::ICompositor *v10; // rax
  int v12[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 **); // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.UI.Composition.Compositor", 0x21u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2, v3, v4);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, &v14);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  else
  {
    v13 = 0LL;
    v7 = (**v14)(v14, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, &v13);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
        (const char *)(unsigned int)v7);
    }
    else
    {
      *(_QWORD *)v12 = 0LL;
      v8 = *v13;
      *(_QWORD *)v12 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, GUID *, int *))(v8 + 48))(
             v13,
             0LL,
             0LL,
             &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
             v12);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v10 = *(struct Windows::UI::Composition::ICompositor **)v12;
        *(_QWORD *)v12 = 0LL;
        *a1 = v10;
        wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)v12);
        wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v13);
        wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v14);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)v12);
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v13);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v14);
  return v6;
}
