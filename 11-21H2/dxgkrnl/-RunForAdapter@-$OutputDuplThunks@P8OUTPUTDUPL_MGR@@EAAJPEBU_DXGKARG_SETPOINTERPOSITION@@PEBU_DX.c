/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C01A1FB8
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01A5388 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01A5434 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 (__fastcall *a9)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *this, const struct _DXGKARG_SETPOINTERPOSITION *a2, const struct _DXGKARG_SETPOINTERSHAPE *a3, UINT a4, UINT a5), __int64, __int64, int, int))
{
  __int64 v10; // r14
  int IsRemoteSessionUsingXddmMonitors; // eax
  struct DXGADAPTER *v12; // rbx
  int v13; // esi
  int OutputDuplManager; // eax
  int v15; // ebx
  char v16; // al
  struct DXGADAPTER *v18; // [rsp+50h] [rbp-B0h] BYREF
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v20; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[8]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v22; // [rsp+78h] [rbp-88h]
  char v23; // [rsp+80h] [rbp-80h]
  unsigned __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v26[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTER *v28; // [rsp+B8h] [rbp-48h]
  char v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 v31; // [rsp+F0h] [rbp-10h]
  struct DXGADAPTER *v32; // [rsp+F8h] [rbp-8h]
  char v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]

  v10 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v20 = 0LL;
  v12 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v13 = IsRemoteSessionUsingXddmMonitors;
  v18 = 0LL;
  if ( a1 && !IsRemoteSessionUsingXddmMonitors )
  {
    OutputDuplManager = FindOutputDuplManager(a1, v10, &v20, &v25, &v18, &v24, &RemoteOutputDuplMgr);
    v15 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      WdLogSingleEntry2(3LL, a1, OutputDuplManager);
      return (unsigned int)v15;
    }
    v12 = v18;
    if ( v18 )
    {
      v16 = 1;
LABEL_6:
      v22 = v12;
      v23 = 0;
      if ( v16 )
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
      v30 = 0LL;
      v26[1] = 0;
      v28 = v12;
      v29 = 0;
      if ( v12 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v12 + 3);
        v12 = v18;
        v27 = -1LL;
      }
      v34 = 0LL;
      v32 = v12;
      v33 = 0;
      if ( v12 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v12 + 3);
        v31 = -1LL;
      }
      if ( !a1 || v13 )
        goto LABEL_19;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v20 + 2), v20);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v18 + 2), v18);
      v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
      if ( v15 >= 0 )
      {
LABEL_19:
        if ( (unsigned int)v10 >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
        {
          WdLogSingleEntry1(2LL, v10);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source ID 0x%I64x", v10, 0LL, 0LL, 0LL, 0LL);
          v15 = -1071774972;
        }
        else
        {
          v15 = a9(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, a5, a6, a7, a8);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      if ( v23 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
      return (unsigned int)v15;
    }
LABEL_29:
    v16 = 0;
    goto LABEL_6;
  }
  if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
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
  if ( RemoteOutputDuplMgr )
    goto LABEL_29;
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
