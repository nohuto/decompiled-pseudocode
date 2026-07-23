/*
 * XREFs of sub_140596904 @ 0x140596904
 * Callers:
 *     sub_140374278 @ 0x140374278 (sub_140374278.c)
 *     sub_14037432C @ 0x14037432C (sub_14037432C.c)
 * Callees:
 *     sub_14030C870 @ 0x14030C870 (sub_14030C870.c)
 */

__int64 __fastcall sub_140596904(__int64 a1, char a2)
{
  return sub_14030C870(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 16600LL)
                               + 2346LL));
}
