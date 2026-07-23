/*
 * XREFs of sub_1402D1D14 @ 0x1402D1D14
 * Callers:
 *     sub_1402D1B24 @ 0x1402D1B24 (sub_1402D1B24.c)
 *     RtlTimeToElapsedTimeFields @ 0x1409B5DC0 (RtlTimeToElapsedTimeFields.c)
 * Callees:
 *     sub_1402D1D6C @ 0x1402D1D6C (sub_1402D1D6C.c)
 */

__int64 __fastcall sub_1402D1D14(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // r11d

  v4 = a3;
  LOBYTE(a3) = 13;
  v5 = sub_1402D1D6C(*a1, 0xD1B71758E219652CuLL, a3);
  LOBYTE(v6) = 26;
  result = sub_1402D1D6C(v5, 0xC6D750EBFA67B90EuLL, v6);
  *a2 = result;
  *v4 = v8 - 86400000 * result;
  return result;
}
