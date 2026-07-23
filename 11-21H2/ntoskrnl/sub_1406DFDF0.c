/*
 * XREFs of sub_1406DFDF0 @ 0x1406DFDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406DFE10 @ 0x1406DFE10 (sub_1406DFE10.c)
 */

__int64 __fastcall sub_1406DFDF0(LPCGUID SettingGuid, PVOID Value, __int64 ValueLength, PVOID Context)
{
  sub_1406DFE10(0LL, SettingGuid, ValueLength, Value);
  return 0LL;
}
