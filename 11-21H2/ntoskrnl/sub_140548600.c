/*
 * XREFs of sub_140548600 @ 0x140548600
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140548600(int a1, char a2, char a3)
{
  _QWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int64 v11; // [rsp+40h] [rbp-68h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v6 = sub_14039DF90((PHYSICAL_ADDRESS *)&v8, 1, (__int64)&v11, 40LL);
  *(_DWORD *)v6 = 3;
  *((_DWORD *)v6 + 2) = a1;
  *((_BYTE *)v6 + 12) = a2;
  *((_BYTE *)v6 + 13) = a3;
  LOWORD(a1) = HvlInvokeHypercall(111);
  sub_14039D8F0((__int64)&v8);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
