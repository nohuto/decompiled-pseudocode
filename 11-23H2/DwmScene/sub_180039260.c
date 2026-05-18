/*
 * XREFs of sub_180039260 @ 0x180039260
 * Callers:
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180039000 @ 0x180039000 (sub_180039000.c)
 *     sub_1800390BC @ 0x1800390BC (sub_1800390BC.c)
 *     sub_180039140 @ 0x180039140 (sub_180039140.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180039260(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 v2; // r11
  __int64 *v3; // rax
  __int64 *v4; // r8
  __int64 v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rdx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  sub_180011C50((__int64)(a1 + 9), &v8);
  v10 = v8;
  v3 = sub_180039000(&v11, &v10, v2);
  v4 = (__int64 *)(a1 + 12);
  if ( a1 + 12 != (__int64 (__fastcall ****)(_QWORD, __int64))v3 )
  {
    v5 = *v3;
    *v3 = 0LL;
    v6 = (__int64 (__fastcall ***)(_QWORD, __int64))*v4;
    *v4 = v5;
    if ( v6 )
      sub_180039140(v5, v6);
  }
  sub_1800390BC(&v11);
  if ( v9 )
    sub_180010530(v9);
  ((void (__fastcall *)(__int64 (__fastcall ****)(_QWORD, __int64)))(*a1)[6])(a1);
  return 1;
}
