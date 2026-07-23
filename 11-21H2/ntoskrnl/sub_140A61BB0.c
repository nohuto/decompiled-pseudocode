/*
 * XREFs of sub_140A61BB0 @ 0x140A61BB0
 * Callers:
 *     sub_140517DCC @ 0x140517DCC (sub_140517DCC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A61BB0(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return sub_14042A5E0(*(_QWORD *)(a1 + 16), a2);
}
