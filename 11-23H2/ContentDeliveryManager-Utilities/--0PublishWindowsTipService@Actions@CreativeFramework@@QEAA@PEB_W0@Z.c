/*
 * XREFs of ??0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z @ 0x1800B9ADC
 * Callers:
 *     ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x1800B9A58 (--$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA-AV-$share.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=3
CreativeFramework::Actions::PublishWindowsTipService *__fastcall CreativeFramework::Actions::PublishWindowsTipService::PublishWindowsTipService(
        CreativeFramework::Actions::PublishWindowsTipService *this,
        const wchar_t *a2,
        const wchar_t *a3)
{
  unsigned __int64 v4; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::PublishWindowsTipService::`vftable';
  std::wstring::wstring((__int64)this + 8);
  std::wstring::wstring((__int64)this + 40);
  v4 = *((_QWORD *)this + 3);
  if ( v4 - 1 > 0xFF )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL,
      v7);
  if ( v4 > 0x100 || !*((_QWORD *)this + 7) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL,
      v7);
  return this;
}
