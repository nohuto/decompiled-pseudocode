/*
 * XREFs of ParseTcgReceivedPayload @ 0x1C007FD54
 * Callers:
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     ParseTcgPayloadStatus @ 0x1C007FBC0 (ParseTcgPayloadStatus.c)
 *     ParseToken @ 0x1C007FEE0 (ParseToken.c)
 *     PeekTokenInfo @ 0x1C0080228 (PeekTokenInfo.c)
 */

__int64 __fastcall ParseTcgReceivedPayload(__int64 a1)
{
  __int64 result; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = ParseToken(a1 + 56, a1 + 72);
  if ( (int)result >= 0 )
  {
    v4 = 0;
    v3 = 0;
    if ( (int)PeekTokenInfo(a1 + 56, &v3, &v4) < 0 || v3 == -7 )
    {
      ++*(_DWORD *)(a1 + 68);
      return ParseTcgPayloadStatus(a1);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x10u,
          (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids);
      return 3221225861LL;
    }
  }
  return result;
}
