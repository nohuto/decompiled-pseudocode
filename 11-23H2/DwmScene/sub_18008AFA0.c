/*
 * XREFs of sub_18008AFA0 @ 0x18008AFA0
 * Callers:
 *     sub_1800D1BA0 @ 0x1800D1BA0 (sub_1800D1BA0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800342AC @ 0x1800342AC (sub_1800342AC.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008AFA0(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v6 = a1 + 17;
  v12 = a3;
  if ( sub_1800435C8((__int64)(a1 + 17), (__int64)&v12) == a1[17] )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    sub_1800342AC(v7, &v10, a3);
    (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 16LL))(a1, &v10);
    if ( v11 )
      sub_180010530(v11);
  }
  v12 = a3;
  v8 = sub_1800435C8((__int64)v6, (__int64)&v12);
  if ( v8 == *v6 )
  {
    *(_OWORD *)a2 = 0LL;
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001246C(a2, (_QWORD *)(v8 + 40));
  }
  return a2;
}
