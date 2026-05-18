/*
 * XREFs of sub_18008C1A0 @ 0x18008C1A0
 * Callers:
 *     sub_18008BEC0 @ 0x18008BEC0 (sub_18008BEC0.c)
 * Callees:
 *     sub_1800869BC @ 0x1800869BC (sub_1800869BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008C1A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a1 + 96) = *(_DWORD *)a3;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a3 + 8);
  sub_1800869BC((_QWORD *)(a1 + 112), (_QWORD *)(a3 + 16));
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 40);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a4);
  return sub_18007E7DC(a3 + 16);
}
