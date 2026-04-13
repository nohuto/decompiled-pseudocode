/*
 * XREFs of ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800C0B48
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800B6CC8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180071000 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x180096D2C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x18009AE28 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHPEB_W@Z @ 0x1800B02D8 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHPEB_W@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B1D20 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x1800BF7B4 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     ?IsPresentInMap@ToastHelpers@NotificationManager@CreativeFramework@@AEAA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800C0D54 (-IsPresentInMap@ToastHelpers@NotificationManager@CreativeFramework@@AEAA_NAEBV-$basic_string@_WU.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::InitializeNotificationTemplate(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  void **v2; // rax
  wchar_t **i; // rbx
  int v4; // eax
  void **v5; // rax
  const char *v6; // rdx
  int v7; // [rsp+28h] [rbp-39h]
  char *v8[4]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v9[4]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v10[4]; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  std::wstring::wstring((__int64)v9);
  if ( !(unsigned __int8)CreativeFramework::NotificationManager::ToastHelpers::IsPresentInMap(this, v9) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL,
      v7);
  std::wstring::_Tidy(v9, 1, 0LL);
  std::wstring::wstring((__int64)v9);
  v2 = (void **)std::map<std::wstring,std::wstring>::operator[]((__int64 *)this + 4, v9);
  std::wstring::wstring((__int64)v8, v2);
  std::wstring::_Tidy(v9, 1, 0LL);
  for ( i = (wchar_t **)&unk_1800FE440; i != off_1800FE4D0; i += 3 )
  {
    if ( !std::wstring::compare((__int64)v8, i[1]) )
    {
      v4 = *(_DWORD *)i;
      *((_DWORD *)this + 12) = *(_DWORD *)i;
      if ( v4 == 6 )
      {
        std::wstring::wstring((__int64)v10);
        if ( !(unsigned __int8)CreativeFramework::NotificationManager::ToastHelpers::IsPresentInMap(this, v10) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB8,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
            (const char *)0x80070057LL,
            v7);
        std::wstring::_Tidy(v10, 1, 0LL);
        std::wstring::wstring((__int64)v10);
        v5 = (void **)std::map<std::wstring,std::wstring>::operator[]((__int64 *)this + 4, v10);
        std::wstring::operator=((void **)this, v5);
        std::wstring::_Tidy(v10, 1, 0LL);
      }
      else
      {
        std::wstring::assign((__int64)this, i[2]);
      }
      goto LABEL_15;
    }
  }
  v6 = (const char *)v8;
  if ( v8[3] >= (char *)8 )
    v6 = v8[0];
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    (void *)0xC3,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
    (const char *)0x80070057LL,
    *((_QWORD *)this + 2) == 0LL,
    (__int64)"%ls",
    v6);
LABEL_15:
  std::wstring::_Tidy(v8, 1, 0LL);
}
