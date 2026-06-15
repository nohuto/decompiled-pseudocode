/*
 * XREFs of ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z @ 0x18012F210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddMonitor@CMonitorManager@@AEAAJV?$ComPtr@VCaptureMonitor@CMonitorManager@@@WRL@Microsoft@@@Z @ 0x18012C288 (-AddMonitor@CMonitorManager@@AEAAJV-$ComPtr@VCaptureMonitor@CMonitorManager@@@WRL@Microsoft@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18012EA90 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012EBFC (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CStreamConnectionImpl::SetStreamingState(
        CMonitorManager::CStreamConnectionImpl *this,
        char a2,
        unsigned __int8 a3)
{
  int v3; // r15d
  RTL_SRWLOCK *v6; // rdi
  int restarted; // ebp
  __int64 v9; // r14
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+68h] [rbp+20h]

  v3 = a3;
  v6 = (RTL_SRWLOCK *)((char *)this + 8);
  AcquireSRWLockExclusive((PSRWLOCK)this + 1);
  v11 = v6;
  if ( a2 == *((_BYTE *)this + 16) )
  {
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    return 0LL;
  }
  else
  {
    restarted = 0;
    v9 = *((_QWORD *)this + 3);
    if ( a2 )
    {
      v10 = *((_QWORD *)this + 4);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
      CMonitorManager::AddMonitor(v9, &v10);
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
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    return (unsigned int)restarted;
  }
}
