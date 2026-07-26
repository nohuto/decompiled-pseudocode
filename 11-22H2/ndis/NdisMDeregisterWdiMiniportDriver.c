/*
 * XREFs of NdisMDeregisterWdiMiniportDriver @ 0x1C013D960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C00B3C0C (-ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_T.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C013D59C (-DereferenceWdi@@YAXXZ.c)
 */

void __stdcall NdisMDeregisterWdiMiniportDriver(NDIS_MINIPORT_DRIVER_HANDLE NdisMiniportDriverHandle)
{
  const struct NDIS_MINIPORT_HOOK_PROVIDER_INFO *HookUnsafe; // rbx
  __int64 v2; // r9

  if ( *((_DWORD *)NdisMiniportDriverHandle + 224) == 1 )
  {
    if ( *((_BYTE *)NdisMiniportDriverHandle + 900) )
    {
      *((_BYTE *)NdisMiniportDriverHandle + 900) = 0;
      HookUnsafe = ndisMpHookGetHookUnsafe(1);
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))HookUnsafe + 2))(
        *(_QWORD *)HookUnsafe,
        v2,
        *(_QWORD *)(v2 + 888));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)HookUnsafe - 2);
      DereferenceWdi();
    }
  }
}
