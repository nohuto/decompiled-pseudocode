/*
 * XREFs of ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800C31A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x1800C4F3C (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800C50C0 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x1800C61CC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::BeginTermination(CAudioSrv *this)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rsi
  std::_Ref_count_base *v6; // rcx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 27) )
  {
    (*(void (__fastcall **)(LPVOID, char *))(*(_QWORD *)g_DeviceEnumerator + 56LL))(
      g_DeviceEnumerator,
      (char *)this + 72);
    *((_DWORD *)this + 27) = 0;
  }
  CSerialWorkQueue::Shutdown((CAudioSrv *)((char *)this + 376));
  CSerialWorkQueue::Shutdown((CAudioSrv *)((char *)this + 208));
  if ( ThreadPool )
  {
    v2 = *((_QWORD *)this + 25);
    if ( v2 )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(
        ThreadPool,
        v2,
        0LL);
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 64LL))(
        ThreadPool,
        *((_QWORD *)this + 25));
      *((_QWORD *)this + 25) = 0LL;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  v3 = 1;
  while ( *((_QWORD *)this + 21) )
  {
    v4 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)this + 152);
    v5 = (void (__fastcall ***)(_QWORD, __int64))v4;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids,
        *(_QWORD *)(v4 + 8));
    }
    if ( v5 )
      (**v5)(v5, 1LL);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  g_streamMonitorManager = 0LL;
  v6 = qword_1801C2E80;
  qword_1801C2E80 = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( *((_DWORD *)this + 16) )
  {
    v7 = RpcServerUnregisterIfEx(&unk_180167120, 0LL, 1);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids, v7);
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
    v9 = RpcServerUnregisterIfEx(&unk_1801670C0, 0LL, 1);
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids, v9);
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
    v11 = RpcServerUnregisterIfEx(&unk_180167060, 0LL, 1);
    if ( v11 )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids, v11);
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
    v13 = RpcServerUnregisterIfEx(&unk_180167000, 0LL, 1);
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids, v13);
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
