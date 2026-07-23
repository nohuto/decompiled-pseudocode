/*
 * XREFs of sub_140A4C204 @ 0x140A4C204
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     sub_14038C118 @ 0x14038C118 (sub_14038C118.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A4C2CC @ 0x140A4C2CC (sub_140A4C2CC.c)
 *     sub_140A4C45C @ 0x140A4C45C (sub_140A4C45C.c)
 */

__int64 __fastcall sub_140A4C204(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-188h]
  _DWORD v11[4]; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v12[22]; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v13[128]; // [rsp+100h] [rbp-A8h] BYREF

  memset(v12, 0, sizeof(v12));
  v11[0] = 0;
  while ( 1 )
  {
    result = sub_14038C118(a1, (unsigned __int64)v11, (__int64)v13, (__int64)v12, a3, *(_QWORD *)(a2 + 8));
    v7 = result;
    if ( !result )
      break;
    v8 = v12[3];
    *(_QWORD *)(a2 + 56) += result;
    LOBYTE(v10) = a3;
    v9 = sub_140A4C45C(a1, a2, v11, v8, v10, result, 0LL);
    sub_140A4C2CC(a2, v9, v11, v13, v7, 0);
  }
  return result;
}
