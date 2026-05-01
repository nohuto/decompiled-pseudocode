/*
 * XREFs of ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801AFAF4
 * Callers:
 *     ?SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801AFAD0 (-SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1800A4F14 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b430b1ad5f0505d09d17bcb4f79d3c75___ @ 0x1801E4BE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_b430b1ad5f0505d09d17bcb4f79d3c75___.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToServicesInternal(
        CortanaStoreAppExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v2; // eax
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v2 = CortanaStoreAppExperienceManager::SubscribeToAppEvents(this);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF2,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v2,
        v6);
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_b430b1ad5f0505d09d17bcb4f79d3c75___(retaddr);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFC,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v3,
        v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFF,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v4);
  }
  return result;
}
