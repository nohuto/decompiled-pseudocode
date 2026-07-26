/*
 * XREFs of ?SetAffinity@NdisPoll@@QEAAXPEBU_PROCESSOR_NUMBER@@@Z @ 0x1C0134FB0
 * Callers:
 *     NdisSetPollAffinity @ 0x1C00C05F0 (NdisSetPollAffinity.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisPoll::SetAffinity(NdisPoll *this, const struct _PROCESSOR_NUMBER *a2)
{
  (*((void (__fastcall **)(_QWORD, const struct _PROCESSOR_NUMBER *))this + 9))(*((_QWORD *)this + 15), a2);
}
