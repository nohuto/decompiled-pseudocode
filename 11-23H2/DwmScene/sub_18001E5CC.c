/*
 * XREFs of sub_18001E5CC @ 0x18001E5CC
 * Callers:
 *     sub_18002D850 @ 0x18002D850 (sub_18002D850.c)
 *     sub_18008EE7C @ 0x18008EE7C (sub_18008EE7C.c)
 *     sub_1800E5237 @ 0x1800E5237 (sub_1800E5237.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18001E5CC(__int64 a1)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
