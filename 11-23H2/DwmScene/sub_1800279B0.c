/*
 * XREFs of sub_1800279B0 @ 0x1800279B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800279B0(__int64 a1, __int64 a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) && *(_DWORD *)a2 == a3;
}
