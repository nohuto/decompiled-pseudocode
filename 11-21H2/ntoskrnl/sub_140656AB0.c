/*
 * XREFs of sub_140656AB0 @ 0x140656AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140656AB0(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  return sub_14042A5E0(*(_QWORD *)a1 + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14), a3);
}
