/*
 * XREFs of ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18001CB60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x18012C21C (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 *     WPP_SF_S_guid_D @ 0x18012FBC4 (WPP_SF_S_guid_D.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::OnPropertyValueChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // r8
  unsigned int v10; // edx
  _QWORD *v11; // rsi
  PropertyChangedContext *v12; // rbx
  unsigned int v13; // r14d
  __int64 v14; // rax
  DWORD pid; // eax
  struct _TP_WORK *ThreadpoolWork; // rax
  CAudioSessionManager *v17; // rcx
  signed int LastError; // eax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_D(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, (_DWORD)a3, (_DWORD)a2, (__int64)a3, a3->pid);
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + v6);
    if ( a3->pid == *(_DWORD *)(v7 + 16) )
    {
      v9 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v7 )
        v9 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
      if ( !v9 )
        break;
    }
    v6 += 16LL;
    if ( v6 >= 0x50 )
      return 0LL;
  }
  v11 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    *v11 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    v11[4] = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    v11[5] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (PropertyChangedContext *)v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v17 = WPP_GLOBAL_Control;
    goto LABEL_29;
  }
  v13 = 0;
  if ( a2 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a2[v14] );
  }
  else
  {
    LODWORD(v14) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString(v11, a2, (unsigned int)v14);
  pid = a3->pid;
  *(GUID *)(v11 + 1) = a3->fmtid;
  *((_DWORD *)v11 + 6) = pid;
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandlePropertyValueChanged, v11, 0LL);
  v11[5] = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v12 = 0LL;
LABEL_20:
    v17 = WPP_GLOBAL_Control;
    goto LABEL_21;
  }
  LastError = GetLastError();
  v13 = LastError;
  if ( LastError > 0 )
    v13 = (unsigned __int16)LastError | 0x80070000;
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v13);
    goto LABEL_20;
  }
LABEL_21:
  if ( (v13 & 0x80000000) != 0 )
  {
LABEL_29:
    if ( v17 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v17 + 7) & 0x800000) != 0
      && *((_BYTE *)v17 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v17 + 2), 38LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v13);
    }
  }
  if ( v12 )
    PropertyChangedContext::`scalar deleting destructor'(v12, v10);
  return v13;
}
