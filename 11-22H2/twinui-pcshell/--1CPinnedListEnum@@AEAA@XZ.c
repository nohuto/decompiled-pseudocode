/*
 * XREFs of ??1CPinnedListEnum@@AEAA@XZ @ 0x180751A84
 * Callers:
 *     ?Release@CPinnedListEnum@@UEAAKXZ @ 0x18075A4F0 (-Release@CPinnedListEnum@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIStream@@@@YAXPEAPEAUIStream@@@Z @ 0x180749D68 (--$SafeRelease@UIStream@@@@YAXPEAPEAUIStream@@@Z.c)
 */

void __fastcall CPinnedListEnum::~CPinnedListEnum(CPinnedListEnum *this)
{
  *(_QWORD *)this = &CPinnedListEnum::`vftable';
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
  SafeRelease<IStream>((__int64 *)this + 4);
}
