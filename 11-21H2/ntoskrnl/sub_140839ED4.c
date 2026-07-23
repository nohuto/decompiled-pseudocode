/*
 * XREFs of sub_140839ED4 @ 0x140839ED4
 * Callers:
 *     sub_140839E40 @ 0x140839E40 (sub_140839E40.c)
 *     sub_140948370 @ 0x140948370 (sub_140948370.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140839ED4(char a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  if ( (a1 & 4) != 0 )
  {
    v4 = 1024LL;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return 0;
    v4 = 4096LL;
  }
  if ( (unsigned __int64)(v4 + a2) > 0xFFFF )
    return 0;
  *a3 = v4 + a2;
  return 1;
}
