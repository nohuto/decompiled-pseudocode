/*
 * XREFs of sub_140B1E5EC @ 0x140B1E5EC
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_1402A03B0 @ 0x1402A03B0 (sub_1402A03B0.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 */

__int64 __fastcall sub_140B1E5EC(int a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+58h] [rbp-30h]
  __int64 (__fastcall **v5)(int, int, int, int, __int64); // [rsp+60h] [rbp-28h]
  __int128 v6; // [rsp+68h] [rbp-20h]

  if ( a1 )
  {
    if ( a1 == 2 )
    {
      sub_1406D2264(byte_140D05538, 0LL, 0LL);
      qword_140C18EA0 = (__int64)byte_140D05538;
    }
  }
  else
  {
    v3[1] = 2;
    v4 = 512LL;
    v3[0] = 1441800;
    v6 = 0LL;
    v5 = &off_140006490;
    result = sub_1408486C4(&qword_140C18EA8, a2, (unsigned __int16 *)v3);
    if ( (int)result < 0 )
      return result;
    sub_1402A03B0(&stru_140CF93C0, 0LL, 0LL, 512, 0, 0x8020uLL, 1649175894, 0, 0);
  }
  return 0LL;
}
