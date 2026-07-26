/*
 * XREFs of ndisWorkItemHandler @ 0x1C0025440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisWorkItemHandler(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 8))(a1, *(_QWORD *)a1);
}
