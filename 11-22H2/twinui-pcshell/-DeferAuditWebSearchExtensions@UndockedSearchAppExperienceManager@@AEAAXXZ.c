/*
 * XREFs of ?DeferAuditWebSearchExtensions@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EABE8
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@@Z @ 0x1801716F8 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 *     wistd::__function::__func__lambda_965821502783f03cb100012e5845a5d5__void___cdecl(void)_::operator() @ 0x1801E9CF0 (wistd--__function--__func__lambda_965821502783f03cb100012e5845a5d5__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6db94de70d757cfff8084104786dd102___ @ 0x1801E66C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_6db94de70d757cfff8084104786dd102___.c)
 */

void __fastcall UndockedSearchAppExperienceManager::DeferAuditWebSearchExtensions(
        UndockedSearchAppExperienceManager *this,
        __int64 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::ComTaskPool::QueueTask__lambda_6db94de70d757cfff8084104786dd102___(
         (__int64)this,
         a2,
         *((_DWORD *)this + 41));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10CF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
}
