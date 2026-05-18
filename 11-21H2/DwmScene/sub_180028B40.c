/*
 * XREFs of sub_180028B40 @ 0x180028B40
 * Callers:
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180028B40(__int64 *a1, __int64 a2, _OWORD *a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm1
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF

  sub_18002C7C4(a1 + 3);
  (*(void (__fastcall **)(__int64 *, __int64, _OWORD *))(*a1 + 272))(a1, a2, a3);
  v6 = *a1;
  v7 = a3[1];
  v10[0] = *a3;
  v10[1] = v7;
  (*(void (__fastcall **)(__int64 *, _BYTE *, _OWORD *))(v6 + 136))(a1, v9, v10);
  return sub_180010910((__int64)v9);
}
