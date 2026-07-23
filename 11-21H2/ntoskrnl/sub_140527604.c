/*
 * XREFs of sub_140527604 @ 0x140527604
 * Callers:
 *     sub_1405264A0 @ 0x1405264A0 (sub_1405264A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140527604(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  bool v4; // zf
  __int64 result; // rax
  unsigned int v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)a1 == 1;
  v8 = 0LL;
  v9 = 0;
  if ( !v4 )
    return 3221225659LL;
  HIWORD(v7) = *(_WORD *)(a1 + 8);
  LOWORD(v7) = *(_WORD *)(a1 + 12);
  result = sub_14042A5E0(v7, &v8);
  if ( (int)result < 0 )
    return result;
  if ( (v8 & 1) == 0 || HIDWORD(v8) < dword_140C4A120 )
    return 3221225659LL;
  *a2 = v7;
  *a3 = qword_140C4A128 + ((unsigned __int64)v9 << 6);
  return 0LL;
}
