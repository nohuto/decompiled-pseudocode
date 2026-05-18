/*
 * XREFs of sub_180026B40 @ 0x180026B40
 * Callers:
 *     sub_180015C10 @ 0x180015C10 (sub_180015C10.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026B40(__int64 *a1, __int64 a2, _OWORD *a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int64 result; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  _OWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF

  sub_18002A404(a1 + 3);
  (*(void (__fastcall **)(__int64 *, __int64, _OWORD *))(*a1 + 272))(a1, a2, a3);
  v6 = *a1;
  v7 = a3[1];
  v11[0] = *a3;
  v11[1] = v7;
  result = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, _OWORD *))(v6 + 136))(a1, v9, v11);
  if ( v10 )
    return sub_180010530(v10);
  return result;
}
