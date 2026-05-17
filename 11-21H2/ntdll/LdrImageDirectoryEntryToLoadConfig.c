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

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // eax
  _DWORD *v5; // rdx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1LL, a1, 0LL, &v9);
  if ( !a1 )
    return 0LL;
  LOWORD(v3) = 10;
  LOBYTE(v2) = 1;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, v2, v3, (unsigned int)&v7, (__int64)&v8);
  v5 = v8;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 && v7 && v7 == *v5 && *(_WORD *)(v9 + 4) == 0x8664 )
    return v5;
  else
    return 0LL;
}
