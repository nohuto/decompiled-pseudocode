/*
 * XREFs of sub_1403AE0B0 @ 0x1403AE0B0
 * Callers:
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1403AE0B0(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  unsigned __int64 v9; // rax
  _QWORD *v10; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+38h] [rbp-40h]
  int v12; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]

  if ( a2 )
  {
    v9 = sub_14027A1B4(a2);
    v13[1] = *(_QWORD *)(v9 + 24);
    sub_140230680((signed __int64 *)(a2 + 96), v9, 0x63536343u);
    if ( a3 )
      v14 = *a3;
    else
      v14 = 0LL;
    v12 = 0;
    v16 = a5;
    v13[0] = a1;
    v10 = v13;
    v15 = a4;
    v11 = 32;
    sub_14035EDE4((__int64)&v10, 1u, 0x80020000, 0x160Au, 0x401902u);
  }
}
