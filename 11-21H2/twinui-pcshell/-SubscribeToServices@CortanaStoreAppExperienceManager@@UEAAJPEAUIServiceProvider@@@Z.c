/*
 * XREFs of ?SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x18014DCF4 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToServices(
        CortanaStoreAppExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CortanaStoreAppExperienceManager::SubscribeToServicesInternal(
         (CortanaStoreAppExperienceManager *)((char *)this - 48),
         a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}
