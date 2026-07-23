/*
 * XREFs of sub_140800968 @ 0x140800968
 * Callers:
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 * Callees:
 *     sub_1408009E0 @ 0x1408009E0 (sub_1408009E0.c)
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 */

__int64 __fastcall sub_140800968(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = sub_140812B74(a1, qword_14000F1A8, &v4);
  if ( (int)result >= 0 )
  {
    v3 = sub_14080271C(v4, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = sub_14080271C(v4, 637534245LL);
      if ( v3 >= 0 )
        sub_1408009E0(a1);
    }
    sub_140812D00(v4);
    return (unsigned int)v3;
  }
  return result;
}
