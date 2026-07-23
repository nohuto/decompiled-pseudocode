/*
 * XREFs of sub_140B1E3C4 @ 0x140B1E3C4
 * Callers:
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 * Callees:
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 */

__int64 __fastcall sub_140B1E3C4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v3[1] = 1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v4 = 512LL;
  v3[0] = 65543;
  result = sub_1408486C4(&qword_140D06D80, a2, (unsigned __int16 *)v3);
  if ( (int)result < 0 )
    qword_140D06D80 = 0LL;
  return result;
}
