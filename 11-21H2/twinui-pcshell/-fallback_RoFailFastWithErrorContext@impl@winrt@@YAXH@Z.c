/*
 * XREFs of ?fallback_RoFailFastWithErrorContext@impl@winrt@@YAXH@Z @ 0x18033D180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::fallback_RoFailFastWithErrorContext(winrt::impl *this, __int64 a2, __int64 a3, __int64 a4)
{
  _o_terminate(this, a2, a3, a4);
  __debugbreak();
  JUMPOUT(0x18033D191LL);
}
