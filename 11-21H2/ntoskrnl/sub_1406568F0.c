/*
 * XREFs of sub_1406568F0 @ 0x1406568F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406568F0(__int64 a1, __int64 a2)
{
  return sub_14042A5E0(*(_QWORD *)a1 + (unsigned __int8)a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14), a2);
}
