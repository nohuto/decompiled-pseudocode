/*
 * XREFs of ?Complete@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAJXZ @ 0x180187E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InvokeCompletedHandler@CompositionNotificationDeferral@Composition@UI@Windows@@AEAAXXZ @ 0x180187FC0 (-InvokeCompletedHandler@CompositionNotificationDeferral@Composition@UI@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNotificationDeferral::Complete(
        Windows::UI::Composition::CompositionNotificationDeferral *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 16, 1, 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionnotificationdeferral.cpp",
      (const char *)0x80000013LL);
    return 2147483667LL;
  }
  else
  {
    Windows::UI::Composition::CompositionNotificationDeferral::InvokeCompletedHandler(this);
    return 0LL;
  }
}
