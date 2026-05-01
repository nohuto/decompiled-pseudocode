/*
 * XREFs of ??$SafeRelease@UIStream@@@@YAXPEAPEAUIStream@@@Z @ 0x180749D68
 * Callers:
 *     ??1CPinList@@QEAA@XZ @ 0x180751A34 (--1CPinList@@QEAA@XZ.c)
 *     ??1CPinnedListEnum@@AEAA@XZ @ 0x180751A84 (--1CPinnedListEnum@@AEAA@XZ.c)
 *     ?Next@CPinnedListEnum@@UEAAJKPEAPEFAU_ITEMIDLIST@@PEAK@Z @ 0x180759250 (-Next@CPinnedListEnum@@UEAAJKPEAPEFAU_ITEMIDLIST@@PEAK@Z.c)
 *     ?Reset@CPinnedListEnum@@UEAAJXZ @ 0x18075AF40 (-Reset@CPinnedListEnum@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SafeRelease<IStream>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
