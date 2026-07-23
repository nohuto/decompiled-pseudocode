/*
 * XREFs of sub_140AFA228 @ 0x140AFA228
 * Callers:
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_140A635B8 @ 0x140A635B8 (sub_140A635B8.c)
 *     sub_140A63600 @ 0x140A63600 (sub_140A63600.c)
 */

__int64 (*__fastcall sub_140AFA228(__int64 a1))()
{
  __int64 v1; // rax
  __int64 (*result)(); // rax
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v1 = sub_140213A40(a1, 1414483778, 0, 0);
  qword_140C54C38 = v1;
  if ( v1 && *(_DWORD *)(v1 + 4) >= 0x28u && *(_BYTE *)(v1 + 36) > 9u )
  {
    if ( !(unsigned int)sub_140A635B8((__int64)&v3) && (v3 & 1) == 0 )
      sub_140A63600(v3 | 1);
  }
  else
  {
    qword_140C54C38 = 0LL;
  }
  result = sub_140865520;
  off_140C02168[0] = sub_140865520;
  return result;
}
