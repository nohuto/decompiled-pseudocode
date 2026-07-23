/*
 * XREFs of sub_1405449CC @ 0x1405449CC
 * Callers:
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 *     sub_140544A9C @ 0x140544A9C (sub_140544A9C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405449CC(__int64 a1, _DWORD *a2, _WORD *a3)
{
  __int64 result; // rax

  *a2 = -1;
  *a3 = -1;
  result = sub_14042A5E0(a1, a2);
  if ( *a3 == 0xFFFF )
    *a3 = 0;
  return result;
}
