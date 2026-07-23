/*
 * XREFs of BCryptGetProperty @ 0x1407620D0
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055E274 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055ED54 (SecureDump_SymmetricEncryptionSetup.c)
 *     WbHashData @ 0x140761FB0 (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x140810AB0 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x1409DAA2C (SmCrEncStart.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA700 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptGetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  unsigned __int64 ExtensionTable; // rax

  v9 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v9 = (*(__int64 (__fastcall **)(BCRYPT_HANDLE, LPCWSTR, PUCHAR, __int64, ULONG *, _DWORD))(ExtensionTable + 168))(
           hObject,
           pszProperty,
           pbOutput,
           4LL,
           pcbResult,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v9;
}
