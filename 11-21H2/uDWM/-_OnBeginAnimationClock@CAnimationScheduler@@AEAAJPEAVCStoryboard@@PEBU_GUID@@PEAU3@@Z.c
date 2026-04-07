/*
 * XREFs of ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800A7650
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800A6F48 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800A4A80 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800A4AE4 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x1800A64DC (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z @ 0x1800A7590 (-_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_OnBeginAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        struct _GUID *a4)
{
  unsigned int v4; // esi
  int v7; // eax
  __int64 v8; // rdx
  CDesktopManager *v9; // rax
  CAnimationClockCoordinator *v10; // r14
  unsigned int v11; // eax
  int AnimationDuration; // eax
  unsigned int v13; // r8d
  struct _GUID *v14; // rax
  int v16; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v17[3]; // [rsp+34h] [rbp-3Ch] BYREF
  struct _GUID v18; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-20h] BYREF

  v4 = *(_DWORD *)a2[4].Data4;
  v19 = GUID_NULL;
  v16 = 0;
  v7 = CAnimationScheduler::_LookupAnimationClockIdFromStoryboard(this, v4, a3, &v19, &v16);
  v8 = (unsigned int)v7;
  if ( v7 >= 0 )
  {
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    a2[3] = v19;
    v10 = (CAnimationClockCoordinator *)*((_QWORD *)v9 + 20);
    v11 = (*(__int64 (__fastcall **)(struct _GUID *, __int64))(*(_QWORD *)&a2->Data1 + 32LL))(a2, v8);
    v18 = v19;
    LODWORD(v8) = CAnimationClockCoordinator::OnCreateAnimationClock(v10, &v18, v11);
    if ( (int)(v8 + 0x80000000) < 0 || (_DWORD)v8 == -2147019886 )
    {
      v17[0] = 0;
      AnimationDuration = GetAnimationDuration(v4, v16, v17);
      v13 = v17[0];
      v18 = v19;
      if ( AnimationDuration < 0 )
        v13 = 0;
      LODWORD(v8) = CAnimationClockCoordinator::OnBeginAnimationClock(v10, &v18, v13);
      if ( (_DWORD)v8 == -2147019873 )
        LODWORD(v8) = 0;
    }
  }
  if ( a4 )
  {
    v14 = &v19;
    if ( (int)v8 < 0 )
      v14 = &GUID_NULL;
    *a4 = *v14;
  }
  return (unsigned int)v8;
}
