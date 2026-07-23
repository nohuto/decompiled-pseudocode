/*
 * XREFs of sub_140368E90 @ 0x140368E90
 * Callers:
 *     PoSetUserPresent @ 0x140368E20 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1405CFE90 (PoSetSystemState.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140863D20 @ 0x140863D20 (sub_140863D20.c)
 * Callees:
 *     sub_140368ED4 @ 0x140368ED4 (sub_140368ED4.c)
 *     sub_140368F70 @ 0x140368F70 (sub_140368F70.c)
 *     sub_140369030 @ 0x140369030 (sub_140369030.c)
 */

__int64 __fastcall sub_140368E90(int a1, unsigned int a2)
{
  char v3; // bl
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v3 = a1;
    result = sub_140369030();
    if ( (v3 & 1) != 0 )
      result = sub_140368F70(3LL);
    if ( (v3 & 4) != 0 )
      return sub_140368ED4(a2);
  }
  return result;
}
