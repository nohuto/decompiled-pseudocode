/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x140302B0C
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402118B0 (IopCheckInitiatorHint.c)
 *     IopRevokeFileObjectForProcess @ 0x140558ACC (IopRevokeFileObjectForProcess.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767940 (IopAllocateFoExtensionsOnCreate.c)
 *     IoSetFileObjectIgnoreSharing @ 0x1408A4CB0 (IoSetFileObjectIgnoreSharing.c)
 *     IoRegisterContainerNotification @ 0x1409481D0 (IoRegisterContainerNotification.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140250D50 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( a3 )
  {
    result = IopAllocateFileObjectExtension(a1, (__int64 *)&v6);
    if ( (int)result < 0 )
      return result;
    v5 = v6;
  }
  else
  {
    v5 = *(_DWORD **)(a1 + 208);
    if ( !v5 )
      return 3221226021LL;
  }
  *v5 |= a2;
  return 0LL;
}
