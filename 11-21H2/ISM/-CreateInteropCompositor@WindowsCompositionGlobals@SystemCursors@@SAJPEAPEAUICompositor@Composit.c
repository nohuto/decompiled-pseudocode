/*
 * XREFs of ?CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x180041868
 * Callers:
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x1800417D8 (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800A8CF0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=7
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
  struct Windows::UI::Composition::ICompositor *v11; // rcx
  int v13; // [rsp+20h] [rbp-50h]
  int v14[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v16 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.UI.Composition.Compositor", 0x21u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2, v3, v4);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, &v16);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v13);
  }
  else
  {
    v15 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 **))v16)(
           v16,
           &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b,
           &v15);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
        (const char *)(unsigned int)v7,
        v13);
    }
    else
    {
      *(_QWORD *)v14 = 0LL;
      v8 = *v15;
      *(_QWORD *)v14 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, GUID *))(v8 + 48))(
             v15,
             0LL,
             0LL,
             &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8);
      v6 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x95,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
          (const char *)(unsigned int)v9,
          (int)v14);
        v11 = *(struct Windows::UI::Composition::ICompositor **)v14;
      }
      else
      {
        v10 = *(struct Windows::UI::Composition::ICompositor **)v14;
        v11 = 0LL;
        *(_QWORD *)v14 = 0LL;
        *a1 = v10;
        v6 = 0;
      }
      if ( v11 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositor *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v6;
}
