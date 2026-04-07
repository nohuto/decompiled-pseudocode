/*
 * XREFs of ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000EA04
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000E820 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?UseDComposition@CStoryboard@@QEAA_NXZ @ 0x18000F914 (-UseDComposition@CStoryboard@@QEAA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800402D4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x1800AA7A4 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800AA808 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x1800AE374 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ?SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z @ 0x1800DC4F8 (-SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationScheduler::_SetStoryboardTriggerForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int SynchronizationCommitHandle; // edi
  struct CAnimationTriggerProxy *v5; // rbx
  __int64 i; // r14
  _DWORD *v7; // rsi
  char *v8; // rax
  CAnimationClockCoordinator *v10; // rdi
  DWORD CurrentProcessId; // eax
  HANDLE v12; // [rsp+20h] [rbp-40h] BYREF
  struct CAnimationTriggerProxy *v13; // [rsp+28h] [rbp-38h] BYREF
  struct _GUID v14; // [rsp+30h] [rbp-30h] BYREF
  HANDLE hObject[2]; // [rsp+40h] [rbp-20h] BYREF

  SynchronizationCommitHandle = 0;
  v12 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    if ( SynchronizationCommitHandle < 0 )
      break;
    v7 = *(_DWORD **)(*((_QWORD *)this + 2) + 8 * i);
    *(_OWORD *)hObject = *((_OWORD *)v7 + 3);
    v8 = (char *)hObject[0] - *(_QWORD *)&a2->Data1;
    if ( hObject[0] == *(HANDLE *)&a2->Data1 )
      v8 = (char *)hObject[1] - *(_QWORD *)a2->Data4;
    if ( !v8
      && v7[6] != 4
      && (CStoryboard::UseDComposition((CStoryboard *)v7)
       || (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 48LL))(v7)) )
    {
      if ( (((unsigned __int64)v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
        && (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 48LL))(v7) )
      {
        v10 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &v12,
          0LL);
        CurrentProcessId = GetCurrentProcessId();
        SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                                        v10,
                                        a2,
                                        CurrentProcessId,
                                        &v12);
      }
      if ( v5
        || CStoryboard::UseDComposition((CStoryboard *)v7)
        && (hObject[0] = 0LL,
            v14 = *a2,
            SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetAnimationClockToken(
                                            *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance
                                            + 21),
                                            &v14,
                                            hObject),
            SynchronizationCommitHandle >= 0)
        && (v13 = 0LL,
            SynchronizationCommitHandle = CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(
                                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                            hObject[0],
                                            &v13),
            CloseHandle(hObject[0]),
            (v5 = v13) != 0LL) )
      {
        if ( CStoryboard::UseDComposition((CStoryboard *)v7) )
          CStoryboard::SetStartTrigger((CStoryboard *)v7, v5);
      }
      if ( (char *)v12 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
        && (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 48LL))(v7) )
      {
        (*(void (__fastcall **)(_DWORD *, HANDLE))(*(_QWORD *)v7 + 56LL))(v7, v12);
      }
    }
  }
  if ( v5 )
    CBaseObject::Release(v5);
  if ( (char *)v12 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(v12);
  return (unsigned int)SynchronizationCommitHandle;
}
