/*
 * XREFs of ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x18045AE44
 * Callers:
 *     ?PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801BF3B0 (-PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z @ 0x18045AF40 (-ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x18045BDA0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b659f5b0e258593167d98b7926edc38b___ @ 0x1801E4CA0 (Windows--Internal--ComTaskPool--QueueTask__lambda_b659f5b0e258593167d98b7926edc38b___.c)
 *     ??1?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1801E510C (--1-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::ActivateAppAsync(
        CortanaStoreAppExperienceManager *this,
        char a2,
        unsigned __int16 *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  int v8; // [rsp+20h] [rbp-68h]
  _BYTE v9[8]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int128 v11; // [rsp+40h] [rbp-48h]
  _QWORD v12[4]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = std::wstring::wstring(v12, a3);
  v9[0] = a2;
  v10 = *(_OWORD *)v4;
  v11 = *((_OWORD *)v4 + 1);
  v4[2] = 0LL;
  v4[3] = 7LL;
  *(_WORD *)v4 = 0;
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_b659f5b0e258593167d98b7926edc38b___(v5, (__int64)v9);
  std::pair<unsigned long,std::wstring>::~pair<unsigned long,std::wstring>((__int64)v9);
  std::wstring::_Tidy_deallocate((__int64)v12);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x234,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
