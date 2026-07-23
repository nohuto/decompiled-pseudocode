/*
 * XREFs of sub_140B1E58C @ 0x140B1E58C
 * Callers:
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 * Callees:
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 */

char __fastcall sub_140B1E58C(__int64 a1, __int64 a2)
{
  char v2; // bl
  _DWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v4[1] = 1;
  v5 = 1LL;
  v4[0] = 65540;
  v6 = 0LL;
  v2 = 1;
  v7 = 0LL;
  v8 = 0LL;
  if ( (int)sub_1408486C4(&qword_140C1BEE0, a2, (unsigned __int16 *)v4) < 0 )
  {
    qword_140C1BEE0 = 0LL;
    return 0;
  }
  return v2;
}
