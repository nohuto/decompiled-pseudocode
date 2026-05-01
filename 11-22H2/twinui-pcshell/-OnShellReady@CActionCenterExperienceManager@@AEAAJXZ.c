/*
 * XREFs of ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x180183EE0
 * Callers:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180183EB0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x180183F88 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnShellReady(CActionCenterExperienceManager *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_DWORD **)(wil::details::static_lazy<NotificationCenterLogging>::get(
                      this,
                      _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    v12 = 0;
    v10 = &v8;
    v8 = 0x1000000LL;
    v11 = 8;
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18084A5D0, 0LL, 0LL, 3u, &v9);
  }
  *((_BYTE *)this + 484) = 1;
  ppv = (__int64 *)((char *)this + 496);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(ppv);
  Instance = CoCreateInstance(
               &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
               0LL,
               0x17u,
               &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
               (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x271,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)Instance);
  return v6;
}
