/*
 * XREFs of ?BeginUpdates@CMultitaskingViewFrame@@UEAAXXZ @ 0x18056CE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::BeginUpdates(CMultitaskingViewFrame *this)
{
  (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 309) + 24LL))(*((_QWORD *)this + 309), &GUID_NULL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 317) + 56LL))(*((_QWORD *)this + 317));
}
