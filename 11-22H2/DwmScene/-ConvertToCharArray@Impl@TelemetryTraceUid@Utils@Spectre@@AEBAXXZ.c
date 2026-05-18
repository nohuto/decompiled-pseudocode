/*
 * XREFs of ?ConvertToCharArray@Impl@TelemetryTraceUid@Utils@Spectre@@AEBAXXZ @ 0x18002236C
 * Callers:
 *     ?CreateUid@TelemetryTraceUid@Utils@Spectre@@SA?AV123@XZ @ 0x180022454 (-CreateUid@TelemetryTraceUid@Utils@Spectre@@SA-AV123@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceUid::Impl::ConvertToCharArray(GUID *rguid)
{
  unsigned int v2; // edx
  CHAR *v3; // rcx
  GUID *i; // rbx
  CHAR MultiByteStr[16]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v6; // [rsp+50h] [rbp-88h]
  __int64 v7; // [rsp+60h] [rbp-78h]
  OLECHAR sz[40]; // [rsp+70h] [rbp-68h] BYREF

  memset_0(sz, 0, sizeof(sz));
  v7 = 0LL;
  *(_OWORD *)MultiByteStr = 0LL;
  v6 = 0LL;
  StringFromGUID2(rguid, sz, 40);
  WideCharToMultiByte(0, 0, sz, -1, MultiByteStr, 40, 0LL, 0LL);
  v2 = 0;
  v3 = MultiByteStr;
  for ( i = rguid + 1; *v3; ++v2 )
  {
    if ( v2 >= 0x28 )
      break;
    if ( ((*v3 - 123) & 0xFD) != 0 )
    {
      LOBYTE(i->Data1) = *v3;
      i = (GUID *)((char *)i + 1);
    }
    ++v3;
  }
  LOBYTE(i->Data1) = 0;
}
