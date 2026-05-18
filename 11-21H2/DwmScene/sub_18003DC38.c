/*
 * XREFs of sub_18003DC38 @ 0x18003DC38
 * Callers:
 *     sub_1800283F0 @ 0x1800283F0 (sub_1800283F0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003DC38(__int64 a1, _QWORD *a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
}
