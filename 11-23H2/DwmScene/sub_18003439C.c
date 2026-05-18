/*
 * XREFs of sub_18003439C @ 0x18003439C
 * Callers:
 *     sub_180037050 @ 0x180037050 (sub_180037050.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180026698 @ 0x180026698 (sub_180026698.c)
 *     sub_1800266EC @ 0x1800266EC (sub_1800266EC.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003439C(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  _QWORD *v5; // rax
  _BYTE v7[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF

  sub_18003655C(a2, v10);
  v3 = (__int64 *)v10[0];
  v4 = (__int64 *)v10[1];
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      sub_180013300((__int64)v10);
      *(_OWORD *)a1 = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      return a1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 32LL))(*v3) )
      break;
LABEL_6:
    v3 += 2;
  }
  sub_18002A0C4(*v3 + 24, (__int64)v7);
  if ( !(unsigned int)sub_1800266EC(*v3) )
  {
    sub_180010F54((__int64)v7);
    goto LABEL_6;
  }
  v5 = sub_180026698(*v3, &v8, 0);
  *(_QWORD *)a1 = *v5;
  *(_QWORD *)(a1 + 8) = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( v9 )
    sub_180010530(v9);
  sub_180010F54((__int64)v7);
  sub_180013300((__int64)v10);
  return a1;
}
