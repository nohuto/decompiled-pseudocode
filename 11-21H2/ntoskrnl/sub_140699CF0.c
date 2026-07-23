/*
 * XREFs of sub_140699CF0 @ 0x140699CF0
 * Callers:
 *     sub_140699C30 @ 0x140699C30 (sub_140699C30.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077DE44 @ 0x14077DE44 (sub_14077DE44.c)
 */

__int64 __fastcall sub_140699CF0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  _QWORD v9[10]; // [rsp+30h] [rbp-58h] BYREF

  v9[0] = 0LL;
  memset(&v9[2], 0, 0x40uLL);
  if ( (_WORD)a4 )
    return 3221225485LL;
  result = sub_14077DE44(a1, a3, v9);
  if ( (int)result >= 0 )
  {
    if ( v9[0] )
    {
      LODWORD(v9[2]) = a4;
      return sub_14042A5E0(a1, a2);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
