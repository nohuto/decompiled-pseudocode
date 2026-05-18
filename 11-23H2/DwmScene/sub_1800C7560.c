/*
 * XREFs of sub_1800C7560 @ 0x1800C7560
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800C3064 @ 0x1800C3064 (sub_1800C3064.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C7560(__int64 a1, unsigned int a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  sub_1800C3064((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 4256), &v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, a2);
  return sub_18000E72C(&v4);
}
