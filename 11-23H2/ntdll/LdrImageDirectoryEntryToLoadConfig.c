/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x18002B858
 * Callers:
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B270 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002B798 (LdrpFetchAddressOfSecurityCookie.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006DBC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DCC0 (RtlGuardCheckExceptionHandler.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E15E4 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpGetTargetRvaFlag @ 0x18010B930 (RtlpGetTargetRvaFlag.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010BC44 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(PVOID BaseOfImage)
{
  NTSTATUS v2; // eax
  _DWORD *v3; // rdx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  if ( !BaseOfImage )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 0xAu, &v5, &v6);
  v3 = (_DWORD *)v6;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( v3 && v5 && v5 == *v3 && OutHeaders->FileHeader.Machine == 0x8664 )
    return v3;
  else
    return 0LL;
}
