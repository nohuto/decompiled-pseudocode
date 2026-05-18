/*
 * XREFs of sub_18004003C @ 0x18004003C
 * Callers:
 *     sub_180040284 @ 0x180040284 (sub_180040284.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_18003FDF4 @ 0x18003FDF4 (sub_18003FDF4.c)
 *     sub_18003FF04 @ 0x18003FF04 (sub_18003FF04.c)
 *     sub_18003FF34 @ 0x18003FF34 (sub_18003FF34.c)
 *     sub_1800E0DB0 @ 0x1800E0DB0 (sub_1800E0DB0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004003C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  sub_18003FF34((void **)(a1 + 200));
  sub_1800E0DB0(a1 + 184);
  sub_18003FDF4(a1 + 120);
  sub_18003FF04((void **)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  result = sub_180025BB0(a1 + 16);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
    return sub_180010574(v4);
  return result;
}
