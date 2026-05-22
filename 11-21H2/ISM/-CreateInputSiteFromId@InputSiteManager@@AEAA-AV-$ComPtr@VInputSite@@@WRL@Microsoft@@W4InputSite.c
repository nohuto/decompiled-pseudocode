/*
 * XREFs of ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18004DAC0
 * Callers:
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18004DF20 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?CreateInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@K@Z @ 0x18004DB30 (-CreateInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UI.c)
 */

__int64 __fastcall InputSiteManager::CreateInputSiteFromId(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]

  v7[1] = HIDWORD(a2);
  v6[1] = v7;
  v6[0] = 1LL;
  v7[0] = a3;
  v8 = a4;
  ((void (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))InputSiteManager::CreateInputSiteFromIds)(a1, a2, v6, 0LL);
  return a2;
}
