/*
 * XREFs of sub_18002B8E0 @ 0x18002B8E0
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 *     sub_180036A60 @ 0x180036A60 (sub_180036A60.c)
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 *     sub_180058240 @ 0x180058240 (sub_180058240.c)
 *     sub_180058394 @ 0x180058394 (sub_180058394.c)
 *     sub_18005845C @ 0x18005845C (sub_18005845C.c)
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 *     sub_1800C5100 @ 0x1800C5100 (sub_1800C5100.c)
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 *     sub_1800CB170 @ 0x1800CB170 (sub_1800CB170.c)
 *     sub_1800E0E04 @ 0x1800E0E04 (sub_1800E0E04.c)
 *     sub_1800E0E84 @ 0x1800E0E84 (sub_1800E0E84.c)
 *     sub_1800E5BAD @ 0x1800E5BAD (sub_1800E5BAD.c)
 *     sub_1800E5FCB @ 0x1800E5FCB (sub_1800E5FCB.c)
 *     sub_1800F1714 @ 0x1800F1714 (sub_1800F1714.c)
 *     sub_1800F174A @ 0x1800F174A (sub_1800F174A.c)
 *     sub_1800F1918 @ 0x1800F1918 (sub_1800F1918.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_18002B8E0(__int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 8) )
    return Mtx_unlock(*(_Mtx_t *)a1);
  return result;
}
