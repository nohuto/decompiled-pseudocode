/*
 * XREFs of sub_14097469C @ 0x14097469C
 * Callers:
 *     sub_140976790 @ 0x140976790 (sub_140976790.c)
 *     sub_1409779A4 @ 0x1409779A4 (sub_1409779A4.c)
 * Callees:
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_1409C0470 @ 0x1409C0470 (sub_1409C0470.c)
 */

__int64 __fastcall sub_14097469C(__int64 a1, int a2)
{
  int i; // ebx
  char v5; // dl
  __int64 result; // rax
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  for ( i = 0; (unsigned __int8)sub_1409C0470(a2, 1, i, (unsigned int)&v8, (__int64)&v7); ++i )
  {
    result = sub_140581D58(a1, v8, v7, v5, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
