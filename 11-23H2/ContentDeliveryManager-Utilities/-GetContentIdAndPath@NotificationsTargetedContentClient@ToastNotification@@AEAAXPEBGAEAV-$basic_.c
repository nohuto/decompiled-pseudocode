/*
 * XREFs of ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18006F980
 * Callers:
 *     ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x18006EEC4 (-ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x1800518D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K1@Z @ 0x1800644B4 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K1@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006492C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x1800652EC (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006E834 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180071000 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ToastNotification::NotificationsTargetedContentClient::GetContentIdAndPath(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  size_t v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  const char *v10; // r8
  size_t v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdi
  const char *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  char *v18[3]; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-1h]
  _QWORD v20[4]; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  std::wstring::wstring((__int64)v18);
  v6 = std::char_traits<wchar_t>::length(L"cId=");
  v8 = std::wstring::find(v18, L"cId=", v7, v6);
  v9 = v8;
  v10 = (const char *)v18;
  if ( v19 >= 8 )
    v10 = v18[0];
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    (void *)0x57,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)0x80070057LL,
    v8 == -1,
    (bool)"'cId=' was not found in '%ls'",
    v10);
  v11 = std::char_traits<wchar_t>::length(L"path=");
  v13 = std::wstring::find(v18, L"path=", v12, v11);
  v14 = v13;
  v15 = (const char *)v18;
  if ( v19 >= 8 )
    v15 = v18[0];
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    (void *)0x59,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)0x80070057LL,
    v13 == -1,
    (bool)"'path=' was not found in '%ls'",
    v15);
  v16 = std::wstring::substr(v18, v20, v9 + 4, v14 - (v9 + 4) - 1);
  std::wstring::operator=(a3, v16);
  std::wstring::_Tidy(v20, 1, 0LL);
  v17 = std::wstring::substr(v18, v20, v14 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  std::wstring::operator=(a4, v17);
  std::wstring::_Tidy(v20, 1, 0LL);
  std::wstring::_Tidy(v18, 1, 0LL);
}
