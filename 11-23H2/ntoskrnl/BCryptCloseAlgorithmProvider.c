/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x140374AF4
 * Callers:
 *     SecureDump_Init @ 0x1403B0CE8 (SecureDump_Init.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055DBB4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_ReInitialize @ 0x14055E4B8 (SecureDump_ReInitialize.c)
 *     SmCrEncCleanup @ 0x1407B81FC (SmCrEncCleanup.c)
 *     RtlGenerateClass5Guid @ 0x1408107E0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm, ULONG dwFlags)
{
  NTSTATUS v3; // ebx
  unsigned __int64 ExtensionTable; // rax

  v3 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, _QWORD))(ExtensionTable + 32))(hAlgorithm, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v3;
}
