/*
 * XREFs of ?ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x18045C0DC
 * Callers:
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x18045BFD0 (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18045B39C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaStoreAppExperienceManager::ReportActiveExperienceAboveLock(
        CortanaStoreAppExperienceManager *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  int LockAppHost; // eax
  unsigned int v5; // ebx
  struct ILockAppHost *v6; // rbx
  __int64 (__fastcall *v7)(struct ILockAppHost *, GUID *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, GUID *, GUID *, CortanaStoreAppExperienceManager **); // rdi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CortanaStoreAppExperienceManager *v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  struct ILockAppHost *v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = this;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  LockAppHost = GetLockAppHost(&v16, v1, v2, v3);
  v5 = LockAppHost;
  if ( LockAppHost >= 0 )
  {
    v15 = 0LL;
    v6 = v16;
    v7 = **(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v16;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    v8 = v7(v6, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v15);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v14 = 0LL;
      v9 = v15;
      v10 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, CortanaStoreAppExperienceManager **))(*(_QWORD *)v15 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
      v11 = v10(v9, &IID_IAboveLockActivationManager, &GUID_f50a27f7_82b6_4711_be12_9becff694462, &v14);
      v5 = v11;
      if ( v11 >= 0 )
      {
        (*(void (__fastcall **)(CortanaStoreAppExperienceManager *, __int64))(*(_QWORD *)v14 + 128LL))(v14, 16LL);
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x197,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)LockAppHost);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return v5;
}
