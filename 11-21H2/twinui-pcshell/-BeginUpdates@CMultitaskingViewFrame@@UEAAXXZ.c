/*
 * XREFs of ?BeginUpdates@CMultitaskingViewFrame@@UEAAXXZ @ 0x1804B0470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::BeginUpdates(CMultitaskingViewFrame *this)
{
  (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 309) + 24LL))(*((_QWORD *)this + 309), &GUID_NULL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 317) + 56LL))(*((_QWORD *)this + 317));
}
