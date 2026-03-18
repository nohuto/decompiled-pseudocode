/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C032F774
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018FB80 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01E1158 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01E11B4 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // r14
  struct DXGADAPTER *v7; // rsi
  int IsRemoteSessionUsingXddmMonitors; // eax
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rdi
  int v11; // r15d
  int OutputDuplManager; // eax
  unsigned int v13; // ebx
  struct OUTPUTDUPL_MGR *v14; // rbx
  char v15; // al
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v18; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v19; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v21; // [rsp+70h] [rbp-90h]
  char v22; // [rsp+78h] [rbp-88h]
  unsigned __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v25[144]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  v7 = a1;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)a1);
  v19 = 0LL;
  v10 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v11 = IsRemoteSessionUsingXddmMonitors;
  v18 = 0LL;
  if ( !v7 || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v9) )
    {
      WdLogSingleEntry1(1LL, 80LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgIsRemoteSessionUsingXddmMonitors()",
        80LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v14 = RemoteOutputDuplMgr;
    if ( !RemoteOutputDuplMgr )
    {
      WdLogSingleEntry1(2LL, 86LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find remote output duplication manager",
        86LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221226021LL;
    }
    goto LABEL_11;
  }
  OutputDuplManager = FindOutputDuplManager(v7, v6, &v19, &v24, &v18, &v23, &RemoteOutputDuplMgr);
  v13 = OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v10 = v18;
    v14 = RemoteOutputDuplMgr;
    if ( v18 )
    {
      v15 = 1;
      goto LABEL_12;
    }
LABEL_11:
    v15 = 0;
LABEL_12:
    v21 = v10;
    v22 = 0;
    if ( v15 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v10, 0LL);
    if ( v7 )
    {
      v7 = 0LL;
      if ( !v11 )
      {
        DXGADAPTER::ReleaseReference(v19);
        DXGADAPTER::ReleaseReference(v10);
        if ( *((_DWORD *)v10 + 50) != 1 )
        {
          v13 = -1073741130;
LABEL_22:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
          if ( v22 != (_BYTE)v7 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
          return v13;
        }
        v14 = RemoteOutputDuplMgr;
      }
    }
    if ( (unsigned int)v6 < *((_DWORD *)v14 + 19) )
    {
      v13 = a5(v14, a4);
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid source ID 0x%I64x",
        v6,
        (__int64)v7,
        (__int64)v7,
        (__int64)v7,
        (__int64)v7);
      v13 = -1071774972;
    }
    goto LABEL_22;
  }
  WdLogSingleEntry2(3LL, v7, OutputDuplManager);
  return v13;
}
