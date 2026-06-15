/*
 * XREFs of ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x180006CA0
 * Callers:
 *     ?OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180006C50 (-OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAAXXZ @ 0x180006E84 (-RemoveAll@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrE.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x180006EE0 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180006FAC (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180084418 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMonitorManager::ProcessDeviceStateChanged(CMonitorManager *this)
{
  unsigned int v2; // edx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  CMonitorManager::DeviceStateChangedContext *v7; // rcx
  int v9; // eax
  struct _TP_WORK *v10; // rcx
  volatile signed __int32 *v11; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]
  LPCRITICAL_SECTION v14; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+38h] [rbp-20h]

  v14 = (LPCRITICAL_SECTION)((char *)this + 16);
  v15 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v14);
  if ( *((_DWORD *)this + 14) != 1 )
  {
LABEL_22:
    if ( v15 )
      LeaveCriticalSection(v14);
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !*((_BYTE *)this + 248) )
  {
    *((_BYTE *)this + 248) = 1;
    while ( *((_QWORD *)this + 27) )
    {
      v3 = (__int64 *)((char *)this + 200);
      v4 = (__int64 *)*((_QWORD *)this + 25);
      if ( !v4 )
        ATL::AtlThrowImpl(-2147467259);
      v5 = v4[2];
      v4[2] = 0LL;
      v6 = *v4;
      *v3 = *v4;
      if ( v6 )
        *(_QWORD *)(v6 + 8) = 0LL;
      else
        *((_QWORD *)this + 26) = 0LL;
      v7 = (CMonitorManager::DeviceStateChangedContext *)v4[2];
      if ( v7 )
        CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v7, v2);
      v4[2] = 0LL;
      *v4 = *((_QWORD *)this + 29);
      *((_QWORD *)this + 29) = v4;
      if ( (*((_QWORD *)this + 27))-- == 1LL )
        ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveAll(v3);
      LeaveCriticalSection(lpCriticalSection);
      v13 = 0;
      v9 = *(_DWORD *)(v5 + 8);
      if ( (v9 & 0xA) != 0 )
      {
        CMonitorManager::HandleDeviceRemoved(this, *(const unsigned __int16 **)v5);
      }
      else if ( (v9 & 1) != 0 )
      {
        CMonitorManager::HandleDeviceAdded(this, *(const unsigned __int16 **)v5);
      }
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      v10 = *(struct _TP_WORK **)(v5 + 16);
      if ( v10 )
        CloseThreadpoolWork(v10);
      v11 = (volatile signed __int32 *)(*(_QWORD *)v5 - 24LL);
      if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11);
      operator delete((void *)v5, 0x18uLL);
    }
    *((_BYTE *)this + 248) = 0;
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_22;
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v14);
}
