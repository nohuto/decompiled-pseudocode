/*
 * XREFs of ?GetDesktopApplicationId@TaskbarLayoutItem@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x180293830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TaskbarLayoutItem::GetDesktopApplicationId(__int64 a1, HSTRING *a2)
{
  return TaskbarLayoutItem::GetDesktopApplicationId((TaskbarLayoutItem *)(a1 - 8), a2);
}
