/*
 * XREFs of ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800EF600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     WPP_SF_D @ 0x1800E9C50 (WPP_SF_D.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x1800F03EC (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800F0438 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::BeginTermination(CAudioSrv *this)
{
  __int64 v2; // rdx
  int v3; // edi
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // r14
  std::_Ref_count_base *v6; // rcx
  RPC_STATUS v7; // eax
  int v8; // eax
  RPC_STATUS v9; // eax
  int v10; // eax
  RPC_STATUS v11; // eax
  int v12; // eax
  RPC_STATUS v13; // eax

  if ( *((_DWORD *)this + 27) )
  {
    ((void (__fastcall *)(struct IMMDeviceEnumerator *, unsigned __int64))g_DeviceEnumerator->lpVtbl->UnregisterEndpointNotificationCallback)(
      g_DeviceEnumerator,
      ((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
    *((_DWORD *)this + 27) = 0;
  }
  CSerialWorkQueue::Shutdown((CAudioSrv *)((char *)this + 384));
  CSerialWorkQueue::Shutdown((CAudioSrv *)((char *)this + 208));
  if ( ThreadPool )
  {
    v2 = *((_QWORD *)this + 25);
    if ( v2 )
    {
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(ThreadPool, v2, 0LL);
      (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 64LL))(
        ThreadPool,
        *((_QWORD *)this + 25));
      *((_QWORD *)this + 25) = 0LL;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v3 = 1;
  while ( *((_QWORD *)this + 21) )
  {
    v4 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)this + 152);
    v5 = (void (__fastcall ***)(_QWORD, __int64))v4;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids,
        *(const wchar_t **)(v4 + 8));
    }
    if ( v5 )
      (**v5)(v5, 1LL);
  }
  if ( this != (CAudioSrv *)-112LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  g_streamMonitorManager = 0LL;
  v6 = qword_1801D01E8;
  qword_1801D01E8 = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( *((_DWORD *)this + 16) )
  {
    v7 = RpcServerUnregisterIfEx(&unk_18016EC60, 0LL, 1);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Bu,
          (__int64)&WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids,
          v7);
      }
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
    *((_DWORD *)this + 16) = v8;
  }
  if ( *((_DWORD *)this + 14) )
  {
    v9 = RpcServerUnregisterIfEx(&unk_18016ED20, 0LL, 1);
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Cu,
          (__int64)&WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids,
          v9);
      }
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    *((_DWORD *)this + 14) = v10;
  }
  if ( *((_DWORD *)this + 15) )
  {
    v11 = RpcServerUnregisterIfEx(&unk_18016ECC0, 0LL, 1);
    if ( v11 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Du,
          (__int64)&WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids,
          v11);
      }
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    *((_DWORD *)this + 15) = v12;
  }
  if ( *((_DWORD *)this + 17) )
  {
    v13 = RpcServerUnregisterIfEx(&unk_18016EC00, 0LL, 1);
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids,
          v13);
      }
    }
    else
    {
      v3 = 0;
    }
    *((_DWORD *)this + 17) = v3;
  }
  return 0LL;
}
