/*
 * XREFs of sub_140547040 @ 0x140547040
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140547040(char a1)
{
  _QWORD *v2; // rax
  unsigned __int16 v3; // bx
  __int128 v5; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+38h] [rbp-70h]
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF

  v6 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v5, 1, (__int64)v8, 40LL);
  *(_DWORD *)v2 = 10;
  *((_BYTE *)v2 + 8) = a1;
  v3 = HvlInvokeHypercall(111);
  sub_14039D8F0((__int64)&v5);
  return sub_14054CA70(v3);
}
