/*
 * XREFs of sub_14054CEAC @ 0x14054CEAC
 * Callers:
 *     sub_14039DA34 @ 0x14039DA34 (sub_14039DA34.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054C8F0 @ 0x14054C8F0 (sub_14054C8F0.c)
 */

char __fastcall sub_14054CEAC(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // r9
  unsigned int v7; // r8d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int128 v12; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-E0h]
  __int64 v14; // [rsp+40h] [rbp-D8h]
  _BYTE v15[192]; // [rsp+48h] [rbp-D0h] BYREF

  v13 = 0LL;
  LODWORD(v14) = 0;
  v12 = 0LL;
  v6 = sub_14039DF90((PHYSICAL_ADDRESS *)&v12, 1, (__int64)v15, 96LL);
  *v6 = a1;
  v7 = a3 == 0 ? 4 : 0;
  v8 = v6 + 2;
  v9 = v7 | 2;
  if ( a1 )
    v9 = v7;
  v6[1] = v9;
  v10 = sub_14054C8F0(a2, v6 + 2, (v12 & 2) != 0 ? 64 : 4064);
  if ( v10 == -1 )
    v10 = sub_14054C8F0(0LL, v8, 0);
  HvlInvokeHypercall(((v10 + 7) << 14) & 0x3FE0000 | 0x13);
  return sub_14039D8F0((__int64)&v12);
}
