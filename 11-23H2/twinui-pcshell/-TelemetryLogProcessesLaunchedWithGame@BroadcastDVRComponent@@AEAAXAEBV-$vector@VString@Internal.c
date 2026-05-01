/*
 * XREFs of ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x1803DC2A4
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x180090534 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::TelemetryLogProcessesLaunchedWithGame(__int64 a1, HSTRING **a2)
{
  HSTRING *v2; // rbx
  HSTRING *v3; // rdi
  WCHAR *StringRawBuffer; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  unsigned __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-78h] BYREF
  _QWORD Src[2]; // [rsp+38h] [rbp-70h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  _QWORD v14[4]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v15[4]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  Src[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v2 = *a2;
  v3 = a2[1];
  try
  {
    while ( v2 != v3 )
    {
      StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(*v2, 0LL);
      v5 = std::wstring::wstring(v15, StringRawBuffer);
      v6 = std::operator+<unsigned short>(v14, v5, (__int64)L";");
      v7 = v6[2];
      if ( v6[3] >= 8uLL )
        v6 = (_QWORD *)*v6;
      std::wstring::append(Src, v6, v7);
      std::wstring::_Tidy_deallocate((__int64)v14);
      std::wstring::_Tidy_deallocate((__int64)v15);
      ++v2;
    }
    if ( (unsigned int)dword_180986E98 > 5 && tlgKeywordOn((__int64)&dword_180986E98, 0x400000000000LL) )
    {
      v10 = Src;
      if ( si128.m128i_i64[1] >= 8uLL )
        v10 = (_QWORD *)Src[0];
      v11 = (__int64)v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v8,
        (int)&dword_1808473C8,
        0,
        v9,
        (const WCHAR **)&v11);
    }
    std::wstring::_Tidy_deallocate((__int64)Src);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D4,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x8007000ELL);
  }
}
