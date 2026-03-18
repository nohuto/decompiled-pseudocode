/*
 * XREFs of IpmiHwInitializeContext @ 0x140677818
 * Callers:
 *     WheaSelLogInitialize @ 0x140B5320C (WheaSelLogInitialize.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406777FC (IpmiHwContextInitialized.c)
 *     IpmiHwKcsInit @ 0x14067790C (IpmiHwKcsInit.c)
 *     IpmiHwpReadSpmiConfiguration @ 0x140677A4C (IpmiHwpReadSpmiConfiguration.c)
 *     IpmiLibReadSmbiosRecord38 @ 0x140677B04 (IpmiLibReadSmbiosRecord38.c)
 *     IpmiLibpParseDeviceInfo @ 0x140677C40 (IpmiLibpParseDeviceInfo.c)
 */

__int64 IpmiHwInitializeContext()
{
  __int128 *v0; // r8
  __int64 result; // rax
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]

  if ( IpmiHwContextInitialized((__int64)&WheaIpmiContext) )
    return 0LL;
  if ( v0 )
  {
    WheaIpmiContext = *v0;
    xmmword_140C2CC30 = v0[1];
LABEL_8:
    dword_140C2CC74 = 7;
    dword_140C2CC64 = 5000000;
    dword_140C2CC70 = 5000000;
    dword_140C2CC6C = 1000;
    dword_140C2CC68 = 30;
    dword_140C2CC60 = 2000000;
    goto LABEL_9;
  }
  if ( (int)IpmiHwpReadSpmiConfiguration() >= 0 )
    goto LABEL_8;
  v3 = 0LL;
  v4 = 0;
  if ( (int)IpmiLibReadSmbiosRecord38(&v3) >= 0 && (int)IpmiLibpParseDeviceInfo(v2, &v3) >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( DWORD1(WheaIpmiContext) != 1 || IpmiHwContextInitialized((__int64)&WheaIpmiContext) && !BYTE8(xmmword_140C2CC30) )
    return 3221225659LL;
  result = IpmiHwKcsInit();
  if ( (int)result >= 0 )
    byte_140C2CC78 = 1;
  return result;
}
