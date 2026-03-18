/*
 * XREFs of BCryptGenRandom @ 0x1405B77F8
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055E694 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrGenRandom @ 0x1405CDC8C (SmCrGenRandom.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptGenRandom(BCRYPT_ALG_HANDLE hAlgorithm, PUCHAR pbBuffer, ULONG cbBuffer, ULONG dwFlags)
{
  NTSTATUS v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, PUCHAR, _QWORD, __int64))(ExtensionTable + 160))(
           0LL,
           pbBuffer,
           cbBuffer,
           2LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v6;
}
