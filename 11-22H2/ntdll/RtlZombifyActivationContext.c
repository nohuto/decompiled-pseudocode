/*
 * XREFs of RtlZombifyActivationContext @ 0x1800E9EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlZombifyActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  NTSTATUS v1; // edi
  void (__fastcall *v3)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, char *); // rax
  char v5; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( !ActivationContext
    || (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    return -1073741811;
  }
  if ( (ActivationContext->Flags & 1) == 0 )
  {
    v3 = *(void (__fastcall **)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, char *))ActivationContext->SentNotifications;
    if ( v3 )
    {
      v5 = 0;
      v3(
        2LL,
        ActivationContext,
        ActivationContext->NotificationContext,
        *(_QWORD *)&ActivationContext->SentNotifications[2],
        0LL,
        &v5);
    }
    ActivationContext->Flags |= 1u;
  }
  return v1;
}
