/*
 * XREFs of sub_140548560 @ 0x140548560
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140548560(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int128 v4; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+30h] [rbp-78h]
  __int64 v6; // [rsp+38h] [rbp-70h]
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0LL;
  LODWORD(v6) = 0;
  v4 = 0LL;
  v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v4, 1, (__int64)v7, 40LL);
  *(_DWORD *)v2 = 4;
  v2[1] = *a1;
  LOWORD(a1) = HvlInvokeHypercall(111);
  sub_14039D8F0((__int64)&v4);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
