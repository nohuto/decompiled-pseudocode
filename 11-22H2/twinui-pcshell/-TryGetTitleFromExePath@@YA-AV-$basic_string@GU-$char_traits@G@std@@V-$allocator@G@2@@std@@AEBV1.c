/*
 * XREFs of ?TryGetTitleFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1803DC448
 * Callers:
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D52DC (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall TryGetTitleFromExePath(_QWORD *a1, const WCHAR *a2)
{
  HRESULT v4; // eax
  void *v5; // rcx
  void *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF
  void *ppv; // [rsp+60h] [rbp+30h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(const WCHAR **)a2;
  v4 = SHCreateItemFromParsingName(a2, 0LL, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &ppv);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFED,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v4);
LABEL_9:
    *a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    goto LABEL_10;
  }
  pv = 0LL;
  if ( (*(int (__fastcall **)(void *, const PROPERTYKEY *, LPVOID *))(*(_QWORD *)ppv + 136LL))(
         ppv,
         &PKEY_Software_ProductName,
         &pv) < 0
    && (*(int (__fastcall **)(void *, const PROPERTYKEY *, LPVOID *))(*(_QWORD *)ppv + 136LL))(
         ppv,
         &PKEY_FileDescription,
         &pv) < 0 )
  {
    v6 = pv;
    pv = 0LL;
    CoTaskMemFree(v6);
    goto LABEL_9;
  }
  std::wstring::wstring(a1, pv);
  v5 = pv;
  pv = 0LL;
  CoTaskMemFree(v5);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return a1;
}
