/*
 * XREFs of sub_140699D9C @ 0x140699D9C
 * Callers:
 *     sub_140697384 @ 0x140697384 (sub_140697384.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077DE44 @ 0x14077DE44 (sub_14077DE44.c)
 */

__int64 __fastcall sub_140699D9C(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 result; // rax
  _QWORD v14[10]; // [rsp+30h] [rbp-50h] BYREF

  v14[0] = 0LL;
  memset(&v14[2], 0, 0x40uLL);
  result = sub_14077DE44(a1, a3, v14);
  if ( (int)result >= 0 )
  {
    if ( v14[0] )
    {
      LODWORD(v14[8]) = 0;
      v14[3] = a5;
      v14[5] = a7;
      LOBYTE(v14[4]) = a6;
      LODWORD(v14[6]) = a8;
      v14[7] = a9;
      v14[2] = a4;
      return sub_14042A5E0(a1, a2);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
