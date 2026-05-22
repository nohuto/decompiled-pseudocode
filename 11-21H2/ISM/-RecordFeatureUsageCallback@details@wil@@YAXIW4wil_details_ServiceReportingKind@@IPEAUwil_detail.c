/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800065F0
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18004C5E4 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18004A7EE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18007BAF4 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18007EB28 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall wil::details::RecordFeatureUsageCallback(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        _FILETIME pftDueTime)
{
  _DWORD *v7; // r14
  char *v8; // r9
  unsigned __int64 v9; // rcx
  char *v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  SIZE_T v13; // rbx
  HANDLE ProcessHeap; // rax
  char *v15; // rdi
  void (__fastcall *v16)(HANDLE, char *); // rsi
  HANDLE v17; // rax
  void *v18; // rbp
  unsigned __int64 v19; // rsi
  void *v20; // rbp
  HANDLE v21; // rax
  size_t v22; // r8
  struct _TP_TIMER *ThreadpoolTimer; // rdi
  struct _TP_TIMER *v24; // rsi
  DWORD LastError; // ebx
  unsigned int v26; // r8d
  char *v27[2]; // [rsp+20h] [rbp-28h]

  if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1u);
  v7 = (_DWORD *)pftDueTime;
  if ( *(_DWORD *)pftDueTime.dwLowDateTime
    && wil::details::g_enabledStateManager
    && !wil::details::g_processShutdownInProgress
    && (!wil::details::g_pfnDllShutdownInProgress || !(unsigned __int8)wil::details::g_pfnDllShutdownInProgress()) )
  {
    AcquireSRWLockExclusive(&SRWLock);
    LODWORD(v27[0]) = a1;
    v27[1] = a4;
    v8 = (char *)*(&Src + 1);
    v9 = (_BYTE *)*(&Src + 1) - (_BYTE *)Src + 16;
    v10 = (char *)xmmword_180242880;
    v11 = xmmword_180242880 - (_QWORD)Src;
    if ( v9 < (_QWORD)xmmword_180242880 - (_QWORD)Src )
      goto LABEL_29;
    v12 = 16LL;
    if ( 2 * v11 > 0x10 )
      v12 = 2 * v11;
    if ( v11 >= v12 )
    {
LABEL_29:
      v22 = 0LL;
      if ( v8 < v10 )
        v22 = v10 - v8;
      if ( v8 )
      {
        if ( v22 >= 0x10 )
        {
          *(_OWORD *)v8 = *(_OWORD *)v27;
LABEL_37:
          *(&Src + 1) = (char *)*(&Src + 1) + 16;
LABEL_38:
          if ( !byte_180242858 )
          {
            ThreadpoolTimer = pti;
            if ( pti )
              goto LABEL_43;
            ThreadpoolTimer = CreateThreadpoolTimer(
                                _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                &wil::details::g_enabledStateManager,
                                0LL);
            v24 = pti;
            if ( pti )
            {
              LastError = GetLastError();
              wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v24);
              SetLastError(LastError);
            }
            pti = ThreadpoolTimer;
            if ( ThreadpoolTimer )
            {
LABEL_43:
              pftDueTime = (_FILETIME)-3000000000LL;
              SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x124F8u);
              byte_180242858 = 1;
            }
          }
          ReleaseSRWLockExclusive(&SRWLock);
          goto LABEL_45;
        }
        memset_0(v8, 0, v22);
        *(_DWORD *)((__int64 (*)(void))_o__errno)() = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(v9, v10, v22) = 22;
      }
      invalid_parameter_noinfo();
      goto LABEL_37;
    }
    v13 = (v12 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v15 = (char *)HeapAlloc(ProcessHeap, 0, v13);
    v16 = (void (__fastcall *)(HANDLE, char *))wil::details::g_pfnRtlDisownModuleHeapAllocation;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v17 = GetProcessHeap();
      v16(v17, v15);
    }
    if ( !v15 )
      goto LABEL_38;
    v18 = Src;
    v19 = (_BYTE *)*(&Src + 1) - (_BYTE *)Src;
    if ( *(&Src + 1) != Src )
    {
      if ( !Src || v13 < v19 )
      {
        memset_0(v15, 0, v13);
        if ( v18 )
        {
          if ( v13 >= v19 )
            goto LABEL_26;
          *(_DWORD *)((__int64 (*)(void))_o__errno)() = 34;
        }
        else
        {
          *(_DWORD *)((__int64 (*)(void))_o__errno)() = 22;
        }
        invalid_parameter_noinfo();
        goto LABEL_26;
      }
      memcpy_0(v15, Src, (_BYTE *)*(&Src + 1) - (_BYTE *)Src);
    }
LABEL_26:
    v20 = (void *)*((_QWORD *)&xmmword_180242880 + 1);
    *((_QWORD *)&xmmword_180242880 + 1) = v15;
    if ( v20 )
    {
      v21 = GetProcessHeap();
      HeapFree(v21, 0, v20);
    }
    Src = v15;
    v8 = &v15[v19];
    *(&Src + 1) = &v15[v19];
    v10 = &v15[v13];
    *(_QWORD *)&xmmword_180242880 = &v15[v13];
    goto LABEL_29;
  }
LABEL_45:
  v26 = v7[1];
  if ( v26 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a1, v7[2], v26, 0, v27[0]);
  if ( !v7[4] && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_180242868 )
    {
      qword_180242868 = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification )
      {
        g_wil_details_internalSubscribeFeatureStateChangeNotification(
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&qword_180242868,
          (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
          (void *)0xFFFFFFFFFFFFFFFFLL);
      }
      else if ( g_wil_details_apiSubscribeFeatureStateChangeNotification )
      {
        g_wil_details_apiSubscribeFeatureStateChangeNotification(
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&qword_180242868,
          (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
          (void *)0xFFFFFFFFFFFFFFFFLL);
      }
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
}
