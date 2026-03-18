/*
 * XREFs of DxgkIddHandleSetDisplayConfig2 @ 0x1C02F5670
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C03A4C34 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002C98 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000A924 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0013C40 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x1C0015754 (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C0017094 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage @ 0x1C0025A64 (Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286__&DxgkSampleDisplayState_ @ 0x1C004A160 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286__-D.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C004A1E8 (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0183734 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C019DEB8 (MonitorReleaseMonitorHandle.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E9830 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B5BA4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     _lambda_b19eb8e30f7421e25a3eba0801a1f707_::operator() @ 0x1C02F3EC0 (_lambda_b19eb8e30f7421e25a3eba0801a1f707_--operator().c)
 *     _lambda_961dd2ddbdb089c6faa321d2112de61f_::operator() @ 0x1C02F4038 (_lambda_961dd2ddbdb089c6faa321d2112de61f_--operator().c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02F47C8 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07.c)
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1C034C528 (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C034C6E8 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C035557C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C0356CF4 (DxgkWaitForPnPTransitionDone.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C039DC8C (DpiFdoWaitConnectionChangeComplete.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03C40A4 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorSetDriverColorimetryOverride @ 0x1C03C4E9C (MonitorSetDriverColorimetryOverride.c)
 *     MonitorSetLastWireformat @ 0x1C03C4F88 (MonitorSetLastWireformat.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C03C505C (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetSDRWhiteLevelOverride @ 0x1C03C51F0 (MonitorSetSDRWhiteLevelOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C03C5308 (MonitorSetScaleFactorOverride.c)
 */

void __fastcall DxgkIddHandleSetDisplayConfig2(__int64 a1, unsigned int a2, unsigned int *a3, int *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  unsigned int CurrentProcessSessionId; // eax
  int v9; // r15d
  __int64 v10; // r12
  const wchar_t *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _LUID *v15; // rdx
  struct DXGADAPTER *v16; // rdx
  struct _LUID v17; // rcx
  const wchar_t *v18; // r9
  int v19; // r9d
  void *v20; // rbx
  int v21; // eax
  __int64 v22; // rbx
  unsigned int *v23; // r8
  unsigned int v24; // ebx
  int v25; // eax
  struct DXGGLOBAL *Global; // rax
  unsigned int v27; // ecx
  unsigned int *v28; // r12
  __int64 v29; // r13
  __int64 v30; // r15
  unsigned int *v31; // rbx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  int MonitorHandle; // eax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  struct _LUID *v43; // rcx
  __int64 v44; // r9
  struct DXGGLOBAL *v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  unsigned __int64 v50; // rbx
  struct DXGGLOBAL *v51; // rax
  int v52; // eax
  const wchar_t *v53; // r9
  const wchar_t *v54; // r9
  __int64 v55; // rcx
  DXGSESSIONMGR *v56; // r15
  unsigned int v57; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  struct _PORT_MESSAGE *v62; // r15
  int v63; // eax
  int v64; // ebx
  int v65; // eax
  ULONG MessageId; // eax
  char v67; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID *v68[2]; // [rsp+58h] [rbp-A8h] BYREF
  char v69; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v70; // [rsp+70h] [rbp-90h] BYREF
  int v71; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v72; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v73; // [rsp+80h] [rbp-80h]
  DXGSESSIONDATA *v74; // [rsp+88h] [rbp-78h] BYREF
  __int64 v75; // [rsp+90h] [rbp-70h] BYREF
  __int64 v76; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  ReferenceCounted *v78; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v79; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v80; // [rsp+B8h] [rbp-48h] BYREF
  char v81[8]; // [rsp+C0h] [rbp-40h] BYREF
  struct _LUID *v82; // [rsp+C8h] [rbp-38h]
  char v83; // [rsp+D0h] [rbp-30h]
  union _LARGE_INTEGER v84; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v85; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v86; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v87; // [rsp+F0h] [rbp-10h]
  __int64 v88; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v89; // [rsp+100h] [rbp+0h]
  int v90; // [rsp+104h] [rbp+4h]
  _QWORD v91[4]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v92; // [rsp+128h] [rbp+28h]
  unsigned int v93; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v94; // [rsp+130h] [rbp+30h]
  unsigned int v95; // [rsp+134h] [rbp+34h]
  int v96; // [rsp+138h] [rbp+38h]
  _QWORD v97[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v98[4]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v99; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 *v100; // [rsp+180h] [rbp+80h]
  DXGSESSIONDATA **v101; // [rsp+188h] [rbp+88h]
  int *v102[4]; // [rsp+190h] [rbp+90h] BYREF
  char v103; // [rsp+1B0h] [rbp+B0h]
  struct _KAPC_STATE ApcState; // [rsp+1B8h] [rbp+B8h] BYREF
  char v105; // [rsp+1E8h] [rbp+E8h]
  struct _PORT_MESSAGE v106[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v107[144]; // [rsp+240h] [rbp+140h] BYREF

  v4 = a2;
  v75 = 0LL;
  v7 = (unsigned int)a1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  v105 = 0;
  v80 = CurrentProcessSessionId;
  *((_QWORD *)&v99 + 1) = &v75;
  v100 = &v80;
  v101 = &v74;
  v74 = 0LL;
  *(_QWORD *)&v99 = a4;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v102, &v99);
  *a4 = -1073741823;
  if ( (unsigned int)v4 < 4 )
  {
    v9 = -1073741789;
    v10 = (unsigned int)v4;
    WdLogSingleEntry2(2LL, (unsigned int)v4, -1073741789LL);
    v11 = L"Input buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION2, returning 0x%I64x.";
    v12 = -1073741789LL;
LABEL_5:
    v14 = 0LL;
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, v12, v14, 0LL, 0LL);
    *a4 = v9;
    goto LABEL_112;
  }
  v70 = a3;
  v13 = *a3;
  if ( (unsigned int)v13 >= 0x10 )
  {
    v12 = -1073741811LL;
    WdLogSingleEntry2(2LL, (unsigned int)v13, -1073741811LL);
    v11 = L"IddSetDisplayConfig has too many paths (0x%I64x), returning 0x%I64x.";
    v9 = -1073741811;
    v10 = *v70;
    goto LABEL_5;
  }
  v10 = v4;
  if ( v4 < 132 * v13 + 4 )
  {
    v9 = -1073741789;
    WdLogSingleEntry3(2LL, v4, *a3, -1073741789LL);
    v11 = L"Input buffer (size = 0x%I64x) was too small for 0x%I64x paths of DXGK_IDD_PATH_CONFIG, returning 0x%I64x.";
    v12 = *v70;
    v14 = -1073741789LL;
    goto LABEL_8;
  }
  v68[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v68, v7);
  if ( v68[0] )
  {
    v75 = *(_QWORD *)&v68[0][50].HighPart;
    v79 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v68[0], v15, 0LL, &v79);
    v80 = v79;
    v82 = v68[0];
    v83 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    v16 = (struct DXGADAPTER *)v68[0];
    if ( v68[0][25].LowPart != 1 || BYTE1(v68[0][354].LowPart) )
      goto LABEL_106;
    v17 = v68[0][365];
    if ( !*(_QWORD *)&v17 || (v68[0][54].HighPart & 0x100) == 0 )
    {
      WdLogSingleEntry2(2LL, v68[0], -1073741811LL);
      v18 = L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.";
      goto LABEL_105;
    }
    if ( *v70 > *(_DWORD *)(*(_QWORD *)&v17 + 96LL) )
    {
      WdLogSingleEntry2(2LL, v68[0], -1073741811LL);
      v18 = L"Caller specified PathCount exceeds the number of VidPn sourrce on adapter (0x%I64x), returning 0x%I64x.";
LABEL_105:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, (__int64)v68[0], -1073741811LL, 0LL, 0LL, 0LL);
      *a4 = -1073741811;
      goto LABEL_108;
    }
    v72 = 0;
    if ( !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v68[0], v68[0], &v72, 0LL) )
    {
      WdLogSingleEntry2((unsigned int)(v19 + 2), v68[0], -1073741811LL);
      v18 = L"Caller specified adapter (0x%I64x) is not a sessionized adapter, returning 0x%I64x.";
      goto LABEL_105;
    }
    v20 = (void *)v68[0][27];
    ObfReferenceObject(v20);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    v21 = DxgkWaitForPnPTransitionDone(0LL, 0LL, v72, 2LL);
    *a4 = v21;
    if ( v21 < 0 )
    {
      ObfDereferenceObject(v20);
      v22 = v72;
      WdLogSingleEntry2(2LL, v72, *a4);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to wait for all pending PnP transition to be done in session 0x%I64x (ntStatus = 0x%I64x).",
        v22,
        *a4,
        0LL,
        0LL,
        0LL);
      goto LABEL_108;
    }
    *a4 = DpiFdoWaitConnectionChangeComplete(v20);
    ObfDereferenceObject(v20);
    if ( *a4 < 0 )
    {
      WdLogSingleEntry3(2LL, v68[0], *a4, -1071775725LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to wait for all pending connection changes to be completed on adapter 0x%I64x with ntStatus 0x%I"
                  "64x, returning 0x%I64x.",
        (__int64)v68[0],
        *a4,
        -1071775725LL,
        0LL,
        0LL);
LABEL_107:
      *a4 = -1071775725;
LABEL_108:
      if ( v83 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
      goto LABEL_111;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    v16 = (struct DXGADAPTER *)v68[0];
    if ( v68[0][25].LowPart != 1 || BYTE1(v68[0][354].LowPart) )
    {
LABEL_106:
      WdLogSingleEntry2(3LL, v16, -1071775725LL);
      goto LABEL_107;
    }
    v23 = v70;
    v98[0] = (__int64 *)v68;
    v24 = 0;
    v71 = 0;
    v98[1] = (__int64 *)&v71;
    v67 = 0;
    v98[2] = (__int64 *)&v67;
    if ( *v70 )
    {
      while ( 1 )
      {
        v25 = lambda_961dd2ddbdb089c6faa321d2112de61f_::operator()(v98, v24, (int *)&v23[33 * v24 + 1]);
        *a4 = v25;
        if ( v25 < 0 )
          goto LABEL_108;
        v23 = v70;
        if ( ++v24 >= *v70 )
        {
          if ( v71 )
          {
            if ( v71 != *v70 )
            {
              *a4 = -1073741811;
              WdLogSingleEntry2(2LL, v68[0], -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Some but not all paths contained a mode in DXGK_IDD_SET_DISPLAY_CONFIGURATION2 on adapter 0x%I6"
                          "4x, returning 0x%I64x.",
                (__int64)v68[0],
                *a4,
                0LL,
                0LL,
                0LL);
              goto LABEL_108;
            }
            if ( !v67 )
            {
              *a4 = -1073741811;
              WdLogSingleEntry2(2LL, v68[0], -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Did not find primary path from DXGK_IDD_SET_DISPLAY_CONFIGURATION2 on adapter 0x%I64x, returning 0x%I64x.",
                (__int64)v68[0],
                *a4,
                0LL,
                0LL,
                0LL);
              goto LABEL_108;
            }
            Global = DXGGLOBAL::GetGlobal();
            REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)Global + 304832), 0LL);
          }
          v16 = (struct DXGADAPTER *)v68[0];
          break;
        }
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v107, v16, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v107, 0LL) < 0 )
    {
      WdLogSingleEntry2(3LL, SHIDWORD(v75), (unsigned int)v75);
      goto LABEL_103;
    }
    v27 = 0;
    LODWORD(v73) = 0;
    if ( *v70 )
    {
      while ( 1 )
      {
        v28 = v70;
        v29 = v27;
        v30 = 33LL * v27;
        v31 = &v70[v30];
        if ( (v70[v30 + 1] & 2) != 0 )
        {
          v32 = MonitorSetScaleFactorOverride(v68[0], v31[4], v70[v30 + 14]);
          *a4 = v32;
          if ( v32 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, v32);
            v54 = L"Failed to set monitor DPI override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
        }
        if ( (v28[v30 + 1] & 4) != 0 )
        {
          v33 = MonitorSetPhysicalSizeOverride(v68[0], v31[4], v28[v30 + 15], v28[v30 + 16]);
          *a4 = v33;
          if ( v33 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, v33);
            v54 = L"Failed to set monitor size override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
        }
        if ( (v28[v30 + 1] & 8) != 0 )
        {
          v34 = v28[v30 + 29];
          v91[0] = *(_QWORD *)&v28[v30 + 17];
          v91[1] = *(_QWORD *)&v28[v30 + 19];
          v91[2] = *(_QWORD *)&v28[v30 + 21];
          v91[3] = *(_QWORD *)&v28[v30 + 23];
          v92 = v28[v30 + 25];
          v93 = v28[v30 + 26];
          v94 = v28[v30 + 27];
          v95 = v28[v30 + 28];
          v35 = (v34 & 1) != 0;
          v96 = v35;
          if ( (v34 & 2) != 0 )
          {
            v35 |= 2u;
            v96 = v35;
          }
          if ( (v34 & 4) != 0 )
            v96 = v35 | 4;
          v36 = MonitorSetDriverColorimetryOverride(v68[0], v31[4], v91);
          *a4 = v36;
          if ( v36 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, v36);
            v54 = L"Failed to set monitor colorimetry override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
          *a4 = MonitorSetLastWireformat(v68[0], v31[4], v28[v30 + 28]);
        }
        if ( (v28[v30 + 1] & 0x10) != 0 )
        {
          v37 = MonitorSetSDRWhiteLevelOverride(v68[0], v31[4], v28[v30 + 30]);
          *a4 = v37;
          if ( v37 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, v37);
            v54 = L"Failed to set monitor SDR white level override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
        }
        if ( (v28[v30 + 1] & 1) != 0 )
        {
          v38 = v31[4];
          v76 = 0LL;
          MonitorHandle = MonitorGetMonitorHandle((__int64)v68[0], v38, 0LL, DxgkIddHandleSetDisplayConfig2, &v76);
          *a4 = MonitorHandle;
          if ( MonitorHandle >= 0 )
          {
            LOBYTE(v40) = v28[v30 + 13] - 2 <= 1;
            v41 = MonitorEnableDisableAdvancedColor(v76, v40);
            v42 = v76;
            v43 = v68[0];
            *a4 = v41;
            if ( (int)MonitorReleaseMonitorHandle((__int64)v43, v42, DxgkIddHandleSetDisplayConfig2, v44) < 0 )
            {
              WdLogSingleEntry1(1LL, 1874LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"NT_SUCCESS(TempStatus)",
                1874LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          if ( *a4 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, *a4);
            v54 = L"Failed to set monitor color mode on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
        }
        if ( v71 == *v70 )
        {
          Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage();
          if ( v28[v30 + 31] || v28[v30 + 32] || v28[v30 + 33] )
          {
            v88 = *(_QWORD *)&v28[v30 + 2];
            v89 = v31[4];
            v90 = v73;
            v86 = *(_QWORD *)&v28[v30 + 31];
            v87 = v28[v30 + 33];
            v45 = DXGGLOBAL::GetGlobal();
            v46 = REMOTEMONITORMAPPING::AddMapping(
                    (struct DXGGLOBAL *)((char *)v45 + 304832),
                    (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v86,
                    (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v88);
            *a4 = v46;
            if ( v46 < 0 )
              break;
          }
        }
        v27 = v73 + 1;
        LODWORD(v73) = v27;
        if ( v27 >= *v70 )
          goto LABEL_61;
      }
      WdLogSingleEntry3(2LL, v31[4], v29, v46);
      v54 = L"Failed to set monitor mapping override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
LABEL_70:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v54, v31[4], v29, *a4, 0LL, 0LL);
      goto LABEL_103;
    }
LABEL_61:
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v107);
    if ( !v71 )
    {
LABEL_103:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v107);
      goto LABEL_108;
    }
    CurrentProcess = PsGetCurrentProcess(v47);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    v50 = v72;
    if ( ProcessSessionId != v72 )
    {
      Object = 0LL;
      v51 = DXGGLOBAL::GetGlobal();
      v52 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)v51 + 118),
              v50,
              (struct _KPROCESS **)&Object);
      *a4 = v52;
      if ( v52 < 0 )
      {
        WdLogSingleEntry2(2LL, (unsigned int)v50, v52);
        v53 = L"Failed to get CSRSS process from session 0x%I64x, (Status = 0x%I64x).";
LABEL_102:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v53, v50, *a4, 0LL, 0LL, 0LL);
        goto LABEL_103;
      }
      CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(Object);
    }
    v56 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v56 )
    {
      v57 = PsGetCurrentProcessSessionId(v55);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v56, v57);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    v74 = SessionDataForSpecifiedSession;
    if ( *((_BYTE *)SessionDataForSpecifiedSession + 18976) && *((_BYTE *)SessionDataForSpecifiedSession + 18496) )
    {
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v68[0][365] + 656LL)) )
      {
        LOBYTE(v59) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v59) )
        {
          DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
          __debugbreak();
        }
        v73 = 0LL;
        DxgkLogCodePointPacketForSession(0x72u, v50, 0, 0, 0, 0LL);
      }
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v68[0][365] + 656LL)) )
      {
        v73 = 0LL;
        DxgkLogCodePointPacketForSession(0x72u, v50, 0, 0, 0, 0LL);
      }
      memset(v106, 0, 0x48uLL);
      v60 = 216LL * *v70;
      v61 = operator new[](v60 + 96, 0x4B677844u, 256LL);
      if ( v61 )
      {
        v78 = (ReferenceCounted *)v61;
        *(_QWORD *)v61 = &ReferenceCounted::`vftable';
        v62 = (struct _PORT_MESSAGE *)(v61 + 16);
        *(_DWORD *)(v61 + 8) = 1;
        *(_QWORD *)v61 = &rc_buffer<DispBroker::AlpcRequest<8>>::`vftable';
        v69 = 0;
        v97[0] = &v70;
        v97[1] = &v69;
        v63 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286___DxgkSampleDisplayState_(
                (_WORD *)(v61 + 16),
                (__int64)v97,
                v60);
        *a4 = v63;
        if ( v63 >= 0 )
        {
          v64 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v74, &v78);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
          v85 = 72LL;
          v84.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
          *a4 = DxgkSendDisplayBrokerMessage(0x120000u, v62, 0LL, v106, &v85, 0LL, &v84);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
          if ( v68[0][25].LowPart != 1 || BYTE1(v68[0][354].LowPart) )
          {
            WdLogSingleEntry2(3LL, v68[0], -1071775725LL);
            *a4 = -1071775725;
          }
          else
          {
            v65 = *a4;
            if ( *a4 == -1073741772 )
            {
              WdLogSingleEntry1(3LL, *(unsigned int *)v74);
              *a4 = 0;
            }
            else if ( v65 == 192 )
            {
              *a4 = -1073741749;
              WdLogSingleEntry2(3LL, *(unsigned int *)v74, -1073741749LL);
            }
            else if ( v65 >= 0 )
            {
              MessageId = v106[1].MessageId;
              if ( (v106[1].MessageId & 0x80000000) == 0 )
              {
                DXGSESSIONDATA::SetDisplayConfigDone(v74, v64);
                MessageId = v106[1].MessageId;
              }
              *a4 = MessageId;
            }
            else
            {
              WdLogSingleEntry2(2LL, *(unsigned int *)v74, *a4);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to send Display broker message in session 0x%I64x, status 0x%I64x",
                *(unsigned int *)v74,
                *a4,
                0LL,
                0LL,
                0LL);
            }
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v63);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to initialize display broker message, (Status = 0x%I64x).",
            *a4,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v78, 0LL);
      }
      else
      {
        WdLogSingleEntry1(6LL, 2049LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Cannot allocate buffer to hold the SetDisplayConfig ALPC message",
          2049LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *a4 = -1073741801;
      }
      goto LABEL_103;
    }
    *a4 = -1071775725;
    WdLogSingleEntry2(2LL, v50, -1071775725LL);
    v53 = L"Sending SetDisplayConfig ALPC message from display broker disabled session 0x%I64x, returning 0x%I64x.";
    goto LABEL_102;
  }
  WdLogSingleEntry2(3LL, v7, -1073741811LL);
  *a4 = -1073741811;
LABEL_111:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v68, 0LL);
LABEL_112:
  if ( v103 )
    lambda_b19eb8e30f7421e25a3eba0801a1f707_::operator()(v102);
  if ( v105 )
    KeUnstackDetachProcess(&ApcState);
}
