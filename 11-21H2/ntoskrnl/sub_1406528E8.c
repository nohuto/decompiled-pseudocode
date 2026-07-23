/*
 * XREFs of sub_1406528E8 @ 0x1406528E8
 * Callers:
 *     sub_140B31348 @ 0x140B31348 (sub_140B31348.c)
 * Callees:
 *     sub_1406528CC @ 0x1406528CC (sub_1406528CC.c)
 *     sub_1406529D4 @ 0x1406529D4 (sub_1406529D4.c)
 *     sub_140652A5C @ 0x140652A5C (sub_140652A5C.c)
 *     sub_140652B94 @ 0x140652B94 (sub_140652B94.c)
 */

__int64 sub_1406528E8()
{
  __int128 *v0; // r8
  __int64 result; // rax
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]

  if ( sub_1406528CC((__int64)&xmmword_140C10CA0) )
    return 0LL;
  if ( v0 )
  {
    xmmword_140C10CA0 = *v0;
    xmmword_140C10CB0 = v0[1];
LABEL_7:
    dword_140C10CF4 = 7;
    dword_140C10CE4 = 5000000;
    dword_140C10CF0 = 5000000;
    dword_140C10CEC = 1000;
    dword_140C10CE8 = 30;
    dword_140C10CE0 = 2000000;
    goto LABEL_8;
  }
  v3 = 0LL;
  v4 = 0;
  if ( (int)sub_140652A5C(&v3) >= 0 && (int)sub_140652B94(v2, &v3) >= 0 )
    goto LABEL_7;
LABEL_8:
  if ( DWORD1(xmmword_140C10CA0) != 1 || sub_1406528CC((__int64)&xmmword_140C10CA0) && !BYTE8(xmmword_140C10CB0) )
    return 3221225659LL;
  result = sub_1406529D4();
  if ( (int)result >= 0 )
    byte_140C10CF8 = 1;
  return result;
}
