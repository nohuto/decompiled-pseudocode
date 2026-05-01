/*
 * XREFs of ?GetAppUserModelID@TaskbarLayoutItem@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x180293810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TaskbarLayoutItem::GetAppUserModelID(__int64 a1, HSTRING *a2)
{
  return TaskbarLayoutItem::GetAppUserModelID((TaskbarLayoutItem *)(a1 - 8), a2);
}
