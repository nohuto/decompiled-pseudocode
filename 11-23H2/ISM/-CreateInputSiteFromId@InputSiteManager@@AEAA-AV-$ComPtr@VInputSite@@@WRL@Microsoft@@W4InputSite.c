/*
 * XREFs of ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18005F0F0
 * Callers:
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18005F7A4 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 * Callees:
 *     ?CreateInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@K@Z @ 0x180002C48 (-CreateInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UI.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

_QWORD *__fastcall InputSiteManager::CreateInputSiteFromId(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v7[2]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7[1] = HIDWORD(a2);
  v6[1] = v7;
  v6[0] = 1LL;
  v7[0] = a3;
  v8 = a4;
  InputSiteManager::CreateInputSiteFromIds(a1, a2, (__int64)v6, 0);
  return a2;
}
