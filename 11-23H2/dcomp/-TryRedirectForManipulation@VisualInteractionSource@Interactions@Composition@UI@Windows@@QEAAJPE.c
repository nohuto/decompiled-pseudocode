/*
 * XREFs of ?TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAUIPointerPoint@Input@45@@Z @ 0x1801622A8
 * Callers:
 *     ?TryRedirectForManipulation@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAUIPointerPoint@Input@56@@Z @ 0x18011E3D0 (-TryRedirectForManipulation@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@Z @ 0x18015327C (-CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::TryRedirectForManipulation(
        Windows::UI::Composition::CompositionPointerEventRouter **this,
        struct Windows::UI::Input::IPointerPoint *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rcx
  const char *v9; // [rsp+28h] [rbp-18h]
  unsigned __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v12; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::IPointerPoint *, __int64 *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 42LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositioninteractionsourceg.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_14;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14 + 48LL))(v14, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 43LL;
    goto LABEL_13;
  }
  if ( v12 > 1 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositioninteractionsourceg.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid PointerDeviceType specified. Touch or Pen is expected.",
      v9);
LABEL_14:
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v14);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::IPointerPoint *, unsigned int *))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 53LL;
    goto LABEL_13;
  }
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::IPointerPoint *, unsigned __int64 *))(*(_QWORD *)a2 + 88LL))(
         a2,
         &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 54LL;
    goto LABEL_13;
  }
  v4 = Windows::UI::Composition::CompositionPointerEventRouter::CaptureManipulationInCompositor(this[30], v13, v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 57LL;
    goto LABEL_13;
  }
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
