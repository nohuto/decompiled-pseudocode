/*
 * XREFs of RtlZombifyActivationContext @ 0x1800EAA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlZombifyActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  NTSTATUS v1; // edi
  ULONG Flags; // eax
  char v5; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( !ActivationContext
    || (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    return -1073741811;
  }
  Flags = ActivationContext->Flags;
  if ( (Flags & 1) == 0 )
  {
    if ( *(_QWORD *)ActivationContext->SentNotifications )
    {
      v5 = 0;
      (*(void (__fastcall **)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, char *))ActivationContext->SentNotifications)(
        2LL,
        ActivationContext,
        ActivationContext->NotificationContext,
        *(_QWORD *)&ActivationContext->SentNotifications[2],
        0LL,
        &v5);
      Flags = ActivationContext->Flags;
    }
    ActivationContext->Flags = Flags | 1;
  }
  return v1;
}
