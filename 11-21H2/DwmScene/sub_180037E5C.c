/*
 * XREFs of sub_180037E5C @ 0x180037E5C
 * Callers:
 *     sub_180016778 @ 0x180016778 (sub_180016778.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_1800394BC @ 0x1800394BC (sub_1800394BC.c)
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800802EC @ 0x1800802EC (sub_1800802EC.c)
 *     sub_1800802F8 @ 0x1800802F8 (sub_1800802F8.c)
 *     sub_1800804F8 @ 0x1800804F8 (sub_1800804F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180037E5C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v8)(__int64, _QWORD, __int64); // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r11

  v8 = *(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 912);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a4 + 8);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    sub_1800802F8(a1 + 368);
    v11 = sub_1800802EC();
    v12 = sub_1800804F8(v11);
    v8(v13, a2, v12);
  }
  sub_180010910(a3);
  return sub_180010910(a4);
}
