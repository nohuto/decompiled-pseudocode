/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x18002B858
 * Callers:
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B270 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002B798 (LdrpFetchAddressOfSecurityCookie.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006DBC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DCC0 (RtlGuardCheckExceptionHandler.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E15E4 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpGetTargetRvaFlag @ 0x18010B960 (RtlpGetTargetRvaFlag.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010BC74 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(unsigned __int64 a1)
{
  int v2; // eax
  _DWORD *v3; // rdx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1, a1, 0LL, &v7);
  if ( !a1 )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx(a1, 1, 0xAu, &v5, (__int64 *)&v6);
  v3 = v6;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( v3 && v5 && v5 == *v3 && *(_WORD *)(v7 + 4) == 0x8664 )
    return v3;
  else
    return 0LL;
}
