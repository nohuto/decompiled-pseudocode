/*
 * XREFs of sub_18001B560 @ 0x18001B560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18001B560(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.System.AppMemoryUsageLimitChangingEventArgs", 0x33u, a2);
}
