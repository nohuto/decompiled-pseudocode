/*
 * XREFs of ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x1800B736C
 * Callers:
 *     ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x1800B6940 (-RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE.c)
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x1800B70F0 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x1800B73D0 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GlobalInterfaceTable::Marshal(struct IUnknown *a1, const struct _GUID *a2, unsigned int *a3)
{
  __int64 result; // rax

  *a3 = 0;
  result = GlobalInterfaceTable::s_Retrieve();
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, struct IUnknown *, const struct _GUID *, unsigned int *))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RegisterInterfaceInGlobal)(
             GlobalInterfaceTable::s_pGlobalInterfaceTable,
             a1,
             a2,
             a3);
  return result;
}
