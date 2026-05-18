/*
 * XREFs of sub_180098B20 @ 0x180098B20
 * Callers:
 *     sub_18009A000 @ 0x18009A000 (sub_18009A000.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_1800982D8 @ 0x1800982D8 (sub_1800982D8.c)
 *     sub_180099D3C @ 0x180099D3C (sub_180099D3C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_180098B20(__int64 a1, _OWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF

  sub_1800982D8(*a4, (__int64 *)&v10);
  v7 = v10;
  v8 = (__int64 *)sub_180099D3C(a1, v12);
  sub_18002BC44(v7, v8);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 40LL))(v10, a3) )
  {
    v12[0] = 0LL;
    v11 = v10;
    v10 = 0uLL;
    sub_180010910((__int64)&v11);
    sub_180010910((__int64)v12);
  }
  *a2 = v10;
  v10 = 0LL;
  sub_180010910((__int64)&v10);
  return a2;
}
