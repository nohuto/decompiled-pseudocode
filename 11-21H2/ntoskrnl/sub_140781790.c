/*
 * XREFs of sub_140781790 @ 0x140781790
 * Callers:
 *     sub_140781748 @ 0x140781748 (sub_140781748.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407817E8 @ 0x1407817E8 (sub_1407817E8.c)
 */

__int64 __fastcall sub_140781790(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r10
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0LL;
  result = sub_1407817E8(a1, 5LL, v5);
  if ( (int)result >= 0 )
  {
    if ( v5[0] )
      return sub_14042A5E0(v4, a2);
    else
      return 3221225474LL;
  }
  return result;
}
