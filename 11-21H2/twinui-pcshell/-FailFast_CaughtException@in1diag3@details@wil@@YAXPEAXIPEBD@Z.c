/*
 * XREFs of ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1805B8BC0
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryLoadSnapLayoutPickerExtension_::_1_::catch$73 @ 0x1805BB5DD (_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance_ea_1805BB5DD.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1805B702C (--$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::FailFast_CaughtException(
        wil::details::in1diag3 *this,
        __int64 a2,
        int a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_CaughtException<3>((int)this, a2, a3, (int)a4, v4, retaddr);
}
