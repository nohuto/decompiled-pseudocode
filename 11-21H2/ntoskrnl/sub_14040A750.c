/*
 * XREFs of sub_14040A750 @ 0x14040A750
 * Callers:
 *     sub_140400210 @ 0x140400210 (sub_140400210.c)
 *     sub_140400318 @ 0x140400318 (sub_140400318.c)
 *     sub_140405B20 @ 0x140405B20 (sub_140405B20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040A750(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_140006E30[12 * (*(_DWORD *)(a1 + 4) & 3)])(
           a1,
           a2,
           a3);
}
