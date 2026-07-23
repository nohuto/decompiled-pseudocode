/*
 * XREFs of PsGetProcessStartKey @ 0x14023FCD0
 * Callers:
 *     sub_14068A3DC @ 0x14068A3DC (sub_14068A3DC.c)
 *     sub_140711E3C @ 0x140711E3C (sub_140711E3C.c)
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     sub_1407136E8 @ 0x1407136E8 (sub_1407136E8.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
