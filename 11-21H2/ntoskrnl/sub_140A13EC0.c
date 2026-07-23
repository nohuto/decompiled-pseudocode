/*
 * XREFs of sub_140A13EC0 @ 0x140A13EC0
 * Callers:
 *     sub_1406498D0 @ 0x1406498D0 (sub_1406498D0.c)
 *     sub_140649A60 @ 0x140649A60 (sub_140649A60.c)
 *     sub_140A14110 @ 0x140A14110 (sub_140A14110.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 *     sub_140A15D60 @ 0x140A15D60 (sub_140A15D60.c)
 */

__int64 __fastcall sub_140A13EC0(_WORD *a1, unsigned __int64 a2, const WCHAR *a3)
{
  const WCHAR *v3; // r10
  int v7; // ebx
  __int128 v8; // [rsp+30h] [rbp-258h] BYREF
  int v9; // [rsp+40h] [rbp-248h]
  _WORD v10[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  v9 = 104;
  v8 = xmmword_140044340;
  if ( a2 < 0xA )
    return 3221225507LL;
  *a1 = 0;
  v10[0] = 0;
  if ( !a3 )
    v3 = &word_140011C40;
  v7 = sub_140A15B1C(&v8, v3, v10, 260LL);
  if ( v7 < 0 || (v7 = sub_140A15D60(a1, a2, v10), v7 < 0) )
    sub_1406E0C3C(1LL, (__int64)"SdbpGetPathAppPatch");
  return (unsigned int)v7;
}
