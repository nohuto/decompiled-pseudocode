/*
 * XREFs of ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x18038682C
 * Callers:
 *     ?PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801818E0 (-PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z @ 0x180386930 (-ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x180387BF0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1RegistryDataHelper@@QEAA@XZ @ 0x180196490 (--1RegistryDataHelper@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_84f420e9fd48b9ac970d52d3a20d74fc___ @ 0x180197A7C (Windows--Internal--ComTaskPool--QueueTask__lambda_84f420e9fd48b9ac970d52d3a20d74fc___.c)
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
  void *v9; // [rsp+28h] [rbp-60h] BYREF
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int128 v11; // [rsp+40h] [rbp-48h]
  _QWORD v12[4]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = std::wstring::wstring(v12, a3);
  LOBYTE(v9) = a2;
  v10 = *(_OWORD *)v4;
  v11 = *((_OWORD *)v4 + 1);
  v4[2] = 0LL;
  v4[3] = 7LL;
  *(_WORD *)v4 = 0;
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_84f420e9fd48b9ac970d52d3a20d74fc___(v5, (__int64)&v9);
  RegistryDataHelper::~RegistryDataHelper(&v9);
  std::wstring::_Tidy_deallocate((__int64)v12);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x298,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
