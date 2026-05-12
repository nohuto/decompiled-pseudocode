/*
 * XREFs of ParseTcgEndSession @ 0x1C007F9AC
 * Callers:
 *     TcglibpCloseSession @ 0x1C007ECFC (TcglibpCloseSession.c)
 * Callees:
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     ParseToken @ 0x1C007FEE0 (ParseToken.c)
 */

__int64 __fastcall ParseTcgEndSession(__int64 a1)
{
  __int64 result; // rax
  int v2; // r9d
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = ParseToken(a1 + 56, &v3);
  if ( (int)result >= 0 )
  {
    v2 = *(_DWORD *)(v3 + 8);
    if ( v2 != 3 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x18u,
          (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
          v2);
      return 3221225861LL;
    }
  }
  return result;
}
