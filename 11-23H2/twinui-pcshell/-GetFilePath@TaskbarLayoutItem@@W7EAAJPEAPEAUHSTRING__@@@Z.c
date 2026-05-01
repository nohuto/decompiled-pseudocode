/*
 * XREFs of ?GetFilePath@TaskbarLayoutItem@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x180293850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TaskbarLayoutItem::GetFilePath(__int64 a1, HSTRING *a2)
{
  return TaskbarLayoutItem::GetFilePath((TaskbarLayoutItem *)(a1 - 8), a2);
}
