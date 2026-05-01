/*
 * XREFs of ??$SafeRelease@UIShellLinkW@@@@YAXPEAPEAUIShellLinkW@@@Z @ 0x180750F28
 * Callers:
 *     ?Destruct@PINENTRY@@QEAAXXZ @ 0x180753AEC (-Destruct@PINENTRY@@QEAAXXZ.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180758E3C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18075CDB0 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18075F610 (-v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SafeRelease<IShellLinkW>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
