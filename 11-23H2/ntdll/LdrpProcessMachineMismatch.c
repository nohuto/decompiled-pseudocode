/*
 * XREFs of LdrpProcessMachineMismatch @ 0x1800E07FC
 * Callers:
 *     LdrpMinimalMapModule @ 0x18002C524 (LdrpMinimalMapModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     NtRaiseHardError @ 0x1800A3D00 (NtRaiseHardError.c)
 */

__int64 __fastcall LdrpProcessMachineMismatch(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+60h] [rbp+8h]
  int v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 0xEu, &v7, &v8);
  v4 = v8;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v4 && (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    return 0LL;
  }
  else if ( *(_WORD *)(LdrpAppHeaders + 72) <= 3u )
  {
    result = NtRaiseHardError();
    if ( (int)result >= 0 )
    {
      if ( v6 == 3 )
      {
        if ( LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
        return 3221225595LL;
      }
      else
      {
        *(_DWORD *)(v1 + 104) &= ~4u;
      }
    }
  }
  else
  {
    return 1073741838LL;
  }
  return result;
}
