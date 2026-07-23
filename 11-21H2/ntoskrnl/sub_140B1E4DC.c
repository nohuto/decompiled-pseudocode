/*
 * XREFs of sub_140B1E4DC @ 0x140B1E4DC
 * Callers:
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 * Callees:
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 */

__int64 __fastcall sub_140B1E4DC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 (__fastcall **v4)(PVOID); // [rsp+30h] [rbp-28h]
  __int128 v5; // [rsp+38h] [rbp-20h]

  v3[1] = 0;
  v3[3] = 0;
  v3[0] = 131085;
  v5 = 0LL;
  v3[2] = 512;
  v4 = &off_140006460;
  result = sub_1408486C4(&qword_140D00BD8, a2, (unsigned __int16 *)v3);
  if ( (int)result < 0 )
    qword_140D00BD8 = 0LL;
  return result;
}
