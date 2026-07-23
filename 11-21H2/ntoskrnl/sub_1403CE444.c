/*
 * XREFs of sub_1403CE444 @ 0x1403CE444
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 */

__int64 __fastcall sub_1403CE444(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v5)(int, int, int, int, __int64, __int64, __int64, __int64); // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v3[1] = 3;
  v4 = 512LL;
  v3[0] = 720902;
  v5 = &off_1400063D0;
  v6 = 0LL;
  v7 = 0LL;
  result = sub_1408486C4(&qword_140C474D8, a2, v3);
  if ( (int)result < 0 )
    qword_140C474D8 = 0LL;
  return result;
}
