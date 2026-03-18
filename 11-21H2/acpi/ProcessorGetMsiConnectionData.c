/*
 * XREFs of ProcessorGetMsiConnectionData @ 0x1C009C1C4
 * Callers:
 *     MsiGetTargetInfo @ 0x1C009C148 (MsiGetTargetInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ProcessorGetDestinationMode @ 0x1C009C258 (ProcessorGetDestinationMode.c)
 */

__int64 __fastcall ProcessorGetMsiConnectionData(__int64 a1)
{
  unsigned int v1; // ebx
  __int128 *v2; // r9
  __int128 v3; // xmm0
  int v4; // r10d
  __int64 v5; // r11
  int MessageRoutingInfo; // eax
  int v8; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v9[4]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-38h]
  int v11; // [rsp+48h] [rbp-28h]
  __int128 v12; // [rsp+4Ch] [rbp-24h]

  v1 = 0;
  v9[1] = 0;
  v9[3] = 0;
  v8 = 0;
  v12 = 0LL;
  ProcessorGetDestinationMode(a1, &v8);
  v3 = *v2;
  v9[0] = 0;
  v10 = v3;
  v9[2] = v4;
  v11 = v8;
  MessageRoutingInfo = HalGetMessageRoutingInfo(v9, v5);
  if ( MessageRoutingInfo < 0 )
    return (unsigned int)MessageRoutingInfo;
  return v1;
}
