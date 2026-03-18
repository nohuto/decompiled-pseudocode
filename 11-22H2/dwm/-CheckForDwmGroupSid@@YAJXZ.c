/*
 * XREFs of ?CheckForDwmGroupSid@@YAJXZ @ 0x140003610
 * Callers:
 *     wWinMain @ 0x140003430 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000309C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 */

__int64 CheckForDwmGroupSid(void)
{
  int v0; // ebx
  NTSTATUS v1; // eax
  signed int LastError; // eax
  ULONG SubAuthority2; // [rsp+20h] [rbp-60h]
  WINBOOL IsMember; // [rsp+60h] [rbp-20h] BYREF
  PSID SidToCheck; // [rsp+68h] [rbp-18h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+70h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = 0;
  SidToCheck = 0LL;
  IsMember = 0;
  v1 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &SidToCheck);
  if ( v1 < 0 )
  {
    v0 = v1 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1 | 0x10000000, 0x20u);
  }
  else
  {
    SetLastError(0);
    if ( CheckTokenMembership(0LL, SidToCheck, &IsMember) )
    {
      if ( IsMember )
        goto LABEL_4;
      v0 = -2147024891;
      SubAuthority2 = 38;
    }
    else
    {
      LastError = GetLastError();
      v0 = LastError;
      if ( LastError > 0 )
        v0 = (unsigned __int16)LastError | 0x80070000;
      SubAuthority2 = 34;
      if ( v0 >= 0 )
        v0 = -2003304445;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v0, SubAuthority2);
  }
LABEL_4:
  if ( SidToCheck )
    RtlFreeSid(SidToCheck);
  return (unsigned int)v0;
}
