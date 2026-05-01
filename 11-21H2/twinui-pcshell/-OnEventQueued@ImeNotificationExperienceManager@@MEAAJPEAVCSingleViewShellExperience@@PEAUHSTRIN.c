/*
 * XREFs of ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803604E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x1800944A8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1805F1334 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::OnEventQueued(
        ImeNotificationExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v5; // rax
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  unsigned int v11; // ebx
  HSTRING v13; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13 = a3;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)&v14,
         (const WCHAR **)&off_1806693F8,
         (unsigned int)a3);
  if ( Microsoft::WRL::Wrappers::operator==(&v13, v5) )
  {
    if ( (unsigned int)dword_1807ABFF8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1807ABFF8, 0x400000000000LL) )
        tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1806A51E9, 0LL, 0LL, 2u, &v14);
    }
    try
    {
      v9 = CSingleViewShellExperience::DestroyView((ImeNotificationExperienceManager *)((char *)this + 8));
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xAD,
                             (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
                             v10);
    }
    v11 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return v11;
    }
  }
  return 0LL;
}
