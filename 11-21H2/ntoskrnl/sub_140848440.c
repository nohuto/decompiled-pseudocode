/*
 * XREFs of sub_140848440 @ 0x140848440
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 */

__int64 __fastcall sub_140848440(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v5)(); // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v3[1] = 3;
  v4 = 512LL;
  v3[0] = 65547;
  v5 = &off_140006560;
  v6 = 0LL;
  v7 = 0LL;
  result = sub_1408486C4(&qword_140C15CD0, a2, v3);
  if ( (int)result < 0 )
    qword_140C15CD0 = 0LL;
  return result;
}
