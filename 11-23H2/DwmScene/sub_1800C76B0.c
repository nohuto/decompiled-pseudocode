/*
 * XREFs of sub_1800C76B0 @ 0x1800C76B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800393DC @ 0x1800393DC (sub_1800393DC.c)
 *     sub_1800C3064 @ 0x1800C3064 (sub_1800C3064.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C76B0(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD ***)(a1 + 272);
  if ( v2 )
    sub_1800393DC(v2);
  v5 = 0LL;
  v3 = sub_1800C589C(a1, &v6);
  sub_1800C3064((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v3, &v5);
  sub_18000E72C(&v6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  return sub_18000E72C(&v5);
}
