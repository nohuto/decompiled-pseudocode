/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x1800086E0
 * Callers:
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x180004D10 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x1800054B0 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x1800083E0 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001D510 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800679A2 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180084418 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(struct _RTL_CRITICAL_SECTION *pv, int a2, char *a3)
{
  unsigned int v6; // edx
  struct _LIST_ENTRY *v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rbx
  unsigned __int64 Flink_low; // r13
  unsigned __int64 v11; // r12
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v13; // r15
  struct _TP_WORK *ThreadpoolWork; // rbx
  struct _RTL_CRITICAL_SECTION *v15; // rsi
  unsigned __int64 DebugInfo_low; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // r8d
  ULONG_PTR *i; // rcx
  struct _RTL_CRITICAL_SECTION_DEBUG *SpinCount; // rcx
  ULONG_PTR v22; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG **v23; // rax
  char *v25; // rdx
  signed int LastError; // eax
  CMonitorManager::DeviceStateChangedContext *v27; // [rsp+28h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v29; // [rsp+48h] [rbp-30h]

  v7 = (struct _LIST_ENTRY *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v7->Flink = (struct _LIST_ENTRY *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
    LODWORD(v7->Blink) = a2;
    v8 = 0;
    v7[1].Flink = 0LL;
  }
  else
  {
    v8 = 0;
    v7 = 0LL;
  }
  v27 = (CMonitorManager::DeviceStateChangedContext *)v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    goto LABEL_29;
  }
  if ( !a3 )
    goto LABEL_41;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&a3[2 * v9] );
  if ( !(_DWORD)v9 )
  {
LABEL_41:
    ATL::CSimpleStringT<unsigned short,0>::Empty(v7);
    goto LABEL_17;
  }
  Flink_low = LODWORD(v7->Flink[-1].Flink);
  v11 = (a3 - (char *)v7->Flink) >> 1;
  if ( ((1 - LODWORD(v7->Flink[-1].Blink)) | (HIDWORD(v7->Flink[-1].Flink) - (int)v9)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v7, (unsigned int)v9);
  Flink = v7->Flink;
  v13 = 2LL * (int)v9;
  if ( v11 <= Flink_low )
  {
    v25 = (char *)Flink + 2 * v11;
    if ( !v13 )
      goto LABEL_14;
    if ( Flink && v25 )
    {
      memmove_0(Flink, v25, 2LL * (int)v9);
      goto LABEL_14;
    }
  }
  else
  {
    if ( !v13 )
      goto LABEL_14;
    if ( Flink )
    {
      memcpy_0(Flink, a3, 2LL * (int)v9);
      goto LABEL_14;
    }
  }
  *(_DWORD *)_o__errno(Flink) = 22;
  invalid_parameter_noinfo();
LABEL_14:
  if ( (int)v9 < 0 || (int)v9 > SHIDWORD(v7->Flink[-1].Flink) )
    ATL::AtlThrowImpl(-2147024809);
  LODWORD(v7->Flink[-1].Flink) = v9;
  *(_WORD *)((char *)&v7->Flink->Flink + v13) = 0;
  v8 = 0;
LABEL_17:
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::OnHandleDeviceStateChanged, pv, 0LL);
  v7[1].Flink = (struct _LIST_ENTRY *)ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    lpCriticalSection = pv + 4;
    v29 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v15 = *(struct _RTL_CRITICAL_SECTION **)&pv[5].LockCount;
    if ( pv[5].SpinCount )
    {
LABEL_25:
      SpinCount = (struct _RTL_CRITICAL_SECTION_DEBUG *)pv[5].SpinCount;
      v22 = *(_QWORD *)&SpinCount->Type;
      v27 = 0LL;
      SpinCount->ProcessLocksList.Flink = v7;
      pv[5].SpinCount = v22;
      SpinCount->CriticalSection = v15;
      *(_QWORD *)&SpinCount->Type = 0LL;
      ++pv[5].OwningThread;
      v23 = *(struct _RTL_CRITICAL_SECTION_DEBUG ***)&pv[5].LockCount;
      if ( v23 )
        *v23 = SpinCount;
      else
        pv[5].DebugInfo = SpinCount;
      *(_QWORD *)&pv[5].LockCount = SpinCount;
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))pv->DebugInfo->CriticalSection)(pv);
      SubmitThreadpoolWork(ThreadpoolWork);
      if ( v29 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_29;
    }
    DebugInfo_low = LODWORD(pv[6].DebugInfo);
    if ( LODWORD(pv[6].DebugInfo) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / DebugInfo_low < 0x18 )
        goto LABEL_49;
      v17 = 24 * DebugInfo_low;
    }
    else
    {
      v17 = 0LL;
    }
    v18 = malloc(v17 + 8);
    if ( v18 )
    {
      *v18 = pv[5].LockSemaphore;
      pv[5].LockSemaphore = v18;
      v19 = LODWORD(pv[6].DebugInfo) - 1;
      for ( i = &v18[2 * v19 + 1 + (unsigned int)v19]; v19 >= 0; --v19 )
      {
        *i = pv[5].SpinCount;
        pv[5].SpinCount = (ULONG_PTR)i;
        i -= 3;
      }
      goto LABEL_25;
    }
LABEL_49:
    ATL::AtlThrowImpl(-2147024882);
  }
  LastError = GetLastError();
  v8 = LastError;
  if ( LastError > 0 )
    v8 = (unsigned __int16)LastError | 0x80070000;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v8);
  }
LABEL_29:
  if ( v27 )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v27, v6);
  return v8;
}
