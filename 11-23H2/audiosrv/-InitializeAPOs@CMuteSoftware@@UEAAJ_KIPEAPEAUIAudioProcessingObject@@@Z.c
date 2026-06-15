/*
 * XREFs of ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180110B80
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180111964 (WPP_SF_qD.c)
 */

__int64 __fastcall CMuteSoftware::InitializeAPOs(
        CMuteSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      (__int64)&WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids,
      this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v7 = 0;
  if ( a3 )
  {
    do
    {
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 6);
      if ( ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
             *a4,
             &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
             (char *)this + 48) >= 0
        && *((_QWORD *)this + 6) )
      {
        break;
      }
      ++v7;
      ++a4;
    }
    while ( v7 < a3 );
    v9 = *((_QWORD *)this + 6);
    if ( !v9 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids);
      }
      v7 = -2147467262;
LABEL_20:
      AudSrvTraceLoggingErrorHelper("CMuteSoftware::InitializeAPOs", 939, v7);
      goto LABEL_21;
    }
    v10 = *((_DWORD *)this + 6) == 0;
    v13 = 50000LL;
    LOBYTE(v8) = !v10;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
            v9,
            v8,
            0LL,
            1LL,
            &v13);
    v7 = v11;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids, this, v11);
    }
    if ( v7 < 0 )
      goto LABEL_20;
  }
LABEL_21:
  if ( this != (CMuteSoftware *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  return (unsigned int)v7;
}
