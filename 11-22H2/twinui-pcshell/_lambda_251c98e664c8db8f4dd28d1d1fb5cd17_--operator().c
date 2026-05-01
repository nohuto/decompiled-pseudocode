/*
 * XREFs of _lambda_251c98e664c8db8f4dd28d1d1fb5cd17_::operator() @ 0x180206FD0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_251c98e664c8db8f4dd28d1d1fb5cd17___::Run @ 0x18020B8C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_251c98e664c8db8f4dd28d1d1fb5cd17___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18050D570 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_251c98e664c8db8f4dd28d1d1fb5cd17_::operator()(Microsoft::WRL::WeakRef *a1)
{
  int v2; // eax
  int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v6; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v6);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA05,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( v6 )
  {
    if ( !*(_BYTE *)(*((_QWORD *)a1 + 1) + 1013LL) )
    {
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(*((_QWORD *)a1 + 1) + 576LL), &v7);
      v3 = *(_DWORD *)(*((_QWORD *)a1 + 1) + 564LL);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
      if ( (unsigned int)(v3 - 1) > 2 )
        TouchKeyboardExperienceManager::ActivateInputApp((TouchKeyboardExperienceManager *)(*((_QWORD *)a1 + 1) + 200LL));
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v6);
  return 0LL;
}
