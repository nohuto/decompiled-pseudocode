/*
 * XREFs of ?AddRef@AppContentRootFactory@UI@Windows@@W7EAAKXZ @ 0x1800A95F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::AppContentRootFactory::AddRef(__int64 a1)
{
  return Windows::UI::UIContextFactory::AddRef((Windows::UI::UIContextFactory *)(a1 - 8));
}
