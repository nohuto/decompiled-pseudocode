/*
 * XREFs of ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z @ 0x18011F000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180025C8C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddMonitor@CMonitorManager@@AEAAJV?$ComPtr@VCaptureMonitor@CMonitorManager@@@WRL@Microsoft@@@Z @ 0x180119BA0 (-AddMonitor@CMonitorManager@@AEAAJV-$ComPtr@VCaptureMonitor@CMonitorManager@@@WRL@Microsoft@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011E8A0 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011EA0C (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CStreamConnectionImpl::SetStreamingState(
        CMonitorManager::CStreamConnectionImpl *this,
        char a2,
        unsigned __int8 a3)
{
  int v3; // r15d
  RTL_SRWLOCK *v6; // rbx
  unsigned int v7; // ebx
  int restarted; // esi
  __int64 v9; // r14
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v6 = (RTL_SRWLOCK *)((char *)this + 8);
  AcquireSRWLockExclusive((PSRWLOCK)this + 1);
  v12 = v6;
  v7 = 0;
  if ( a2 != *((_BYTE *)this + 16) )
  {
    restarted = 0;
    v9 = *((_QWORD *)this + 3);
    if ( a2 )
    {
      v11 = *((_QWORD *)this + 4);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v11);
      CMonitorManager::AddMonitor(v9, &v11);
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 200LL) + 72LL) = v3;
      restarted = CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(*((CMonitorManager::CaptureMonitor **)this
                                                                               + 4));
      if ( restarted < 0 )
        CMonitorManager::RemoveMonitor(
          *((CMonitorManager **)this + 3),
          *((CMonitorManager::CaptureMonitor **)this + 4),
          0);
      else
        *((_BYTE *)this + 16) = 1;
    }
    else
    {
      CMonitorManager::RemoveMonitor(
        *((CMonitorManager **)this + 3),
        *((CMonitorManager::CaptureMonitor **)this + 4),
        1);
      *((_BYTE *)this + 16) = 0;
    }
    v7 = restarted;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  return v7;
}
