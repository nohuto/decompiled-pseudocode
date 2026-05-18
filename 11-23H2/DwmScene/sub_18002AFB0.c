/*
 * XREFs of sub_18002AFB0 @ 0x18002AFB0
 * Callers:
 *     sub_18002AC04 @ 0x18002AC04 (sub_18002AC04.c)
 *     sub_18002AD28 @ 0x18002AD28 (sub_18002AD28.c)
 *     sub_180073F6C @ 0x180073F6C (sub_180073F6C.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

__int64 __fastcall sub_18002AFB0(unsigned __int64 a1)
{
  if ( a1 > 0x1AF286BCA1AF286LL )
    sub_180011AC4();
  return 152 * a1;
}
