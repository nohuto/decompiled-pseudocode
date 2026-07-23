/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x14038C0F0
 * Callers:
 *     sub_140A4BE04 @ 0x140A4BE04 (sub_140A4BE04.c)
 *     sub_140A6581C @ 0x140A6581C (sub_140A6581C.c)
 * Callees:
 *     sub_14038C4CC @ 0x14038C4CC (sub_14038C4CC.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225714LL;
  sub_14038C4CC();
  return 0LL;
}
