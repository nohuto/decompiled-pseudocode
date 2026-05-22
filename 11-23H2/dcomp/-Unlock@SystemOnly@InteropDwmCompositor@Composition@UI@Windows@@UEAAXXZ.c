/*
 * XREFs of ?Unlock@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAXXZ @ 0x18015BD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::InteropDwmCompositor::SystemOnly::Unlock(
        Windows::UI::Composition::InteropDwmCompositor::SystemOnly *this)
{
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1288));
}
