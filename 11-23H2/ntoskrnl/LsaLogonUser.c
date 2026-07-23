/*
 * XREFs of LsaLogonUser @ 0x1409C9450
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA700 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall LsaLogonUser(
        HANDLE LsaHandle,
        PLSA_STRING OriginName,
        SECURITY_LOGON_TYPE LogonType,
        ULONG AuthenticationPackage,
        PVOID AuthenticationInformation,
        ULONG AuthenticationInformationLength,
        PTOKEN_GROUPS LocalGroups,
        PTOKEN_SOURCE SourceContext,
        PVOID *ProfileBuffer,
        PULONG ProfileBufferLength,
        PLUID LogonId,
        PHANDLE Token,
        PQUOTA_LIMITS Quotas,
        PNTSTATUS SubStatus)
{
  NTSTATUS v18; // ebx
  unsigned __int64 ExtensionTable; // rax

  v18 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v18 = (*(__int64 (__fastcall **)(HANDLE, PLSA_STRING, _QWORD, _QWORD, PVOID, ULONG, PTOKEN_GROUPS, PTOKEN_SOURCE, PVOID *, PULONG, PLUID, PHANDLE, PQUOTA_LIMITS, PNTSTATUS))(ExtensionTable + 24))(
            LsaHandle,
            OriginName,
            (unsigned int)LogonType,
            AuthenticationPackage,
            AuthenticationInformation,
            AuthenticationInformationLength,
            LocalGroups,
            SourceContext,
            ProfileBuffer,
            ProfileBufferLength,
            LogonId,
            Token,
            Quotas,
            SubStatus);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v18;
}
