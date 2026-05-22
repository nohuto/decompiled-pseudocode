/*
 * XREFs of ?OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ @ 0x180165958
 * Callers:
 *     ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x1801615BC (-OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073E5C (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?HasAny@_unnamed_type_m_connection_@GestureHandler@@QEBA_NXZ @ 0x180073EF8 (-HasAny@_unnamed_type_m_connection_@GestureHandler@@QEBA_NXZ.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180073FCC (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 */

void __fastcall GestureHandler::OnManagerConfiguredForAnotherDataSource(GestureHandler *this)
{
  GestureHandler::_unnamed_type_m_connection_ *v2; // rcx
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (GestureHandler *)((char *)this + 228);
  if ( !*(_DWORD *)v2 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
      (const char *)0x8000FFFFLL,
      v3);
  --*(_DWORD *)v2;
  if ( !GestureHandler::_unnamed_type_m_connection_::HasAny(v2) )
  {
    GestureHandler::SendAnimationEndedIfNeeded(this);
    GestureHandler::CleanupAnimationDataIfNeeded(this);
  }
}
