/*
 * XREFs of sub_140A13FC0 @ 0x140A13FC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A142D0 @ 0x140A142D0 (sub_140A142D0.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 *     sub_140A17ABC @ 0x140A17ABC (sub_140A17ABC.c)
 */

__int64 __fastcall sub_140A13FC0(_WORD *a1, unsigned __int64 a2, const WCHAR *a3, __int64 a4)
{
  const WCHAR *v5; // r10
  int v6; // edi
  int v7; // esi
  int v9; // ebx
  _WORD v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v11; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+48h] [rbp-B8h]
  __int16 v14; // [rsp+4Ch] [rbp-B4h]
  _WORD v15[264]; // [rsp+50h] [rbp-B0h] BYREF

  v13 = 7471205;
  v5 = a3;
  v6 = a2;
  v14 = 0;
  v7 = (int)a1;
  v12 = xmmword_140044638;
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  v11 = -1;
  v10[0] = -1;
  v15[0] = 0;
  if ( !a3 )
    v5 = &word_140011C40;
  v9 = sub_140A15B1C(&v12, v5, v15, 260LL);
  if ( v9 < 0 || (v9 = sub_140A142D0(&v11, v10, a4), v9 < 0) )
    sub_1406E0C3C(1LL, (__int64)"SdbpGetPathAppraiser");
  else
    return (unsigned int)sub_140A17ABC(v7, v6, (unsigned int)v15, v11, (__int64)v10);
  return (unsigned int)v9;
}
