/*
 * XREFs of sub_18001B5C0 @ 0x18001B5C0
 * Callers:
 *     sub_1800173E0 @ 0x1800173E0 (sub_1800173E0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18001B5C0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.System.ProcessMemoryReport", 0x22u, a2);
}
