/*
 * XREFs of sub_140704980 @ 0x140704980
 * Callers:
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 * Callees:
 *     sub_140297F80 @ 0x140297F80 (sub_140297F80.c)
 *     sub_140704E08 @ 0x140704E08 (sub_140704E08.c)
 */

__int64 __fastcall sub_140704980(int *a1, char a2)
{
  int v4; // edi
  __int64 result; // rax

  v4 = sub_140704E08(332LL);
  result = sub_140297F80(*a1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else
  {
    if ( (v4 & *a1) != 0 )
      return result;
    result = 3221225485LL;
  }
  if ( a2 )
  {
    *a1 = (v4 | *a1) & 0xD801007F;
    return 0LL;
  }
  return result;
}
