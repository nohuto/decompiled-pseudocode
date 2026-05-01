/*
 * XREFs of ??B?$base_one@UExpressionAnimation@Composition@UI@Windows@winrt@@UCompositionAnimation@2345@@impl@winrt@@QEBA?AUCompositionAnimation@Composition@UI@Windows@2@XZ @ 0x18055520C
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::base_one<winrt::Windows::UI::Composition::ExpressionAnimation,winrt::Windows::UI::Composition::CompositionAnimation>::operator winrt::Windows::UI::Composition::CompositionAnimation(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
