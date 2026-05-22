/*
 * XREFs of ?IsSessionRemote@@YAJPEA_N@Z @ 0x18005A1EC
 * Callers:
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x18005A044 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall IsSessionRemote(bool *a1, __int64 a2, __int64 a3, const char *a4)
{
  unsigned int v4; // edi
  LPWSTR v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD pBytesReturned; // [rsp+40h] [rbp+8h] BYREF
  LPWSTR ppBuffer; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  ppBuffer = 0LL;
  pBytesReturned = 0;
  if ( !a1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\SessionHelpers.h",
      a4);
  if ( IsEdition(10LL) )
  {
    *a1 = 1;
    if ( WTSQuerySessionInformationW(0LL, 0xFFFFFFFF, WTSIsRemoteSession, &ppBuffer, &pBytesReturned) )
    {
      v7 = ppBuffer;
      if ( ppBuffer && pBytesReturned == 1 )
        *a1 = *(_BYTE *)ppBuffer != 0;
      else
        v4 = -2147467259;
    }
    else
    {
      *a1 = GetSystemMetrics(4096) != 0;
      v7 = ppBuffer;
    }
    if ( v7 )
      WTSFreeMemory(v7);
    return v4;
  }
  else
  {
    *a1 = 0;
    return 0LL;
  }
}
