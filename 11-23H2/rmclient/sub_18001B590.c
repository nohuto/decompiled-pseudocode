/*
 * XREFs of sub_18001B590 @ 0x18001B590
 * Callers:
 *     sub_1800173A0 @ 0x1800173A0 (sub_1800173A0.c)
 *     sub_1800173C0 @ 0x1800173C0 (sub_1800173C0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18001B590(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.System.AppMemoryReport", 0x1Eu, a2);
}
