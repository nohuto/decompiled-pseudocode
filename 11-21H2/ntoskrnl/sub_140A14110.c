/*
 * XREFs of sub_140A14110 @ 0x140A14110
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A13EC0 @ 0x140A13EC0 (sub_140A13EC0.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 */

__int64 __fastcall sub_140A14110(_WORD *a1, unsigned __int64 a2, const WCHAR *a3)
{
  const WCHAR *v3; // r10
  int v7; // ebx
  __int128 v8; // [rsp+30h] [rbp-258h] BYREF
  int v9; // [rsp+40h] [rbp-248h]
  __int16 v10; // [rsp+44h] [rbp-244h]
  WCHAR v11[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  v9 = 4325444;
  v10 = 0;
  v8 = xmmword_140044470;
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  v11[0] = 0;
  if ( !a3 )
    v3 = &word_140011C40;
  v7 = sub_140A15B1C(&v8, v3, v11, 260LL);
  if ( v7 >= 0 )
    return (unsigned int)sub_140A13EC0(a1, a2, v11);
  else
    sub_1406E0C3C(1LL, (__int64)"SdbpGetPathCustomSdb");
  return (unsigned int)v7;
}
