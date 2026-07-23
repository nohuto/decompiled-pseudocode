/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x180034A60
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x180032BD0 (RtlGuardCheckExceptionHandler.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180034354 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1800349A0 (LdrpFetchAddressOfSecurityCookie.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180034D40 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E1AA4 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpGetTargetRvaFlag @ 0x18010A300 (RtlpGetTargetRvaFlag.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010A614 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(void *a1)
{
  int v2; // eax
  _DWORD *v3; // rdx
  int v5; // [rsp+40h] [rbp+8h]
  _DWORD *v6; // [rsp+48h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS v7; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1u, a1, 0LL, &v7);
  if ( !a1 )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx(a1, (PIMAGE_NT_HEADERS)&v6);
  v3 = v6;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( v3 && v5 && v5 == *v3 && v7->FileHeader.Machine == 0x8664 )
    return v3;
  else
    return 0LL;
}
