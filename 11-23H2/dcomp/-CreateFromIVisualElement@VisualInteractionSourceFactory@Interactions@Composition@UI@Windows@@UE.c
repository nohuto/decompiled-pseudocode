/*
 * XREFs of ?CreateFromIVisualElement@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAUIVisualElement@345@PEAPEAUIVisualInteractionSource@2345@@Z @ 0x18011D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$CreateInteractionSource_NoLock@VVisualInteractionSource@Interactions@Composition@UI@Windows@@UIVisualInteractionSource@2345@@Interactions@Composition@UI@Windows@@YAJPEAUIVisual@123@_NPEAPEAUIVisualInteractionSource@0123@@Z @ 0x18011C29C (--$CreateInteractionSource_NoLock@VVisualInteractionSource@Interactions@Composition@UI@Windows@@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSourceFactory::CreateFromIVisualElement(
        Windows::UI::Composition::Interactions::VisualInteractionSourceFactory *this,
        struct Windows::UI::Composition::IVisualElement *a2,
        struct Windows::UI::Composition::Interactions::IVisualInteractionSource **a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  struct IUnknown *v8; // rcx
  __int64 v9; // rcx
  const char *v11; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct IUnknown *v13; // [rsp+48h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  if ( !a2 )
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x711,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid visualElement specified.",
      v11);
    return v4;
  }
  v14 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct Windows::UI::Composition::IVisualElement *, GUID *, __int64 *))a2)(
         a2,
         &GUID_993ae8a0_6057_5e40_918c_e06e0b7e7c64,
         &v14);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x716,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)(unsigned int)v5);
LABEL_7:
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v14);
    return v4;
  }
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v14 + 48LL))(v14, &v13);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v13);
    goto LABEL_7;
  }
  v7 = Windows::UI::Composition::Interactions::CreateInteractionSource_NoLock<Windows::UI::Composition::Interactions::VisualInteractionSource,Windows::UI::Composition::Interactions::IVisualInteractionSource>(
         v13,
         1,
         (unsigned __int64 *)a3);
  v8 = v13;
  v4 = v7;
  if ( v13 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  }
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v4;
}
