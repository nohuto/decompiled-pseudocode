/*
 * XREFs of sub_14040721C @ 0x14040721C
 * Callers:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 *     sub_140406784 @ 0x140406784 (sub_140406784.c)
 *     sub_140407254 @ 0x140407254 (sub_140407254.c)
 *     sub_1404079EC @ 0x1404079EC (sub_1404079EC.c)
 *     sub_14040844C @ 0x14040844C (sub_14040844C.c)
 *     sub_140409DC8 @ 0x140409DC8 (sub_140409DC8.c)
 * Callees:
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_14040721C(int a1, unsigned int a2)
{
  if ( a2 > 4 )
    sub_14056AF38(1701015604LL);
  return a2 * a1 + 32;
}
