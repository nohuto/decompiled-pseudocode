/*
 * XREFs of ?RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ @ 0x18012F4C4
 * Callers:
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x18012F384 (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall NotificationDispatcher::RuntimeClassInitialize(NotificationDispatcher *this)
{
  HRESULT ApartmentType; // eax
  __int64 v3; // rax
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  APTTYPE pAptType; // [rsp+48h] [rbp+10h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+50h] [rbp+18h] BYREF

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType >= 0 )
  {
    if ( pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
      ApartmentType = 0;
    else
      ApartmentType = -2147467259;
  }
  if ( ApartmentType < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)0x8000FFFFLL,
      v6);
    return 2147549183LL;
  }
  else
  {
    v3 = SHCreateWorkerWindowW(NotificationDispatcher::WndProc, -3LL, 0LL);
    *((_QWORD *)this + 5) = v3;
    if ( v3 )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x47,
               (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
               v4);
  }
}
