/*
 * XREFs of LsaCallAuthenticationPackage @ 0x1409C91F0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl LsaCallAuthenticationPackage(
        HANDLE LsaHandle,
        ULONG AuthenticationPackage,
        PVOID ProtocolSubmitBuffer,
        ULONG SubmitBufferLength,
        PVOID *ProtocolReturnBuffer,
        PULONG ReturnBufferLength,
        PNTSTATUS ProtocolStatus)
{
  NTSTATUS v11; // ebx
  __int64 (__fastcall **ExtensionTable)(HANDLE, _QWORD, PVOID, _QWORD, PVOID *, PULONG, PNTSTATUS); // rax

  v11 = -1073741822;
  ExtensionTable = (__int64 (__fastcall **)(HANDLE, _QWORD, PVOID, _QWORD, PVOID *, PULONG, PNTSTATUS))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v11 = (*ExtensionTable)(
            LsaHandle,
            AuthenticationPackage,
            ProtocolSubmitBuffer,
            SubmitBufferLength,
            ProtocolReturnBuffer,
            ReturnBufferLength,
            ProtocolStatus);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v11;
}
