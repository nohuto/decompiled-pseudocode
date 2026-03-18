/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C0160F74
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0160D94 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00026F8 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     CreateTokenManagerSessionGlobal @ 0x1C0002D64 (CreateTokenManagerSessionGlobal.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001EE84 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C0160F04 (--0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C01618D8 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r12
  CTokenManager **v3; // r15
  char *v4; // r13
  DispBrokerClientHandle **v6; // rcx
  __int64 v7; // r9
  OUTPUTDUPL_SESSION_MGR *v8; // rax
  OUTPUTDUPL_SESSION_MGR *v9; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(_DWORD *); // rax
  int v14; // eax
  __int64 (*v15)(void); // rax
  __int64 (*v16)(void); // rax
  struct DXGPROCESS *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *CurrentProcess; // rax
  __int64 ProcessServerSilo; // rax
  bool v24; // al
  struct _KEVENT *v25; // rax
  OUTPUTDUPL_SESSION_MGR *v27; // rcx
  __int64 v28; // rbx
  __int64 HostSilo; // rax
  __int64 v30; // rdi
  int v31; // ebx
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh] BYREF
  void *EventHandle; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  char *v36; // [rsp+68h] [rbp-98h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+88h] [rbp-78h]
  const wchar_t *v40; // [rsp+90h] [rbp-70h]
  int *v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+C0h] [rbp-40h]
  __int128 v47; // [rsp+C8h] [rbp-38h]
  __int128 v48; // [rsp+D8h] [rbp-28h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 v50; // [rsp+F0h] [rbp-10h] BYREF
  int v51; // [rsp+F8h] [rbp-8h]
  const wchar_t *v52; // [rsp+100h] [rbp+0h]
  int *v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+130h] [rbp+30h]
  __int128 v59; // [rsp+138h] [rbp+38h]
  __int128 v60; // [rsp+148h] [rbp+48h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  __int64 v62; // [rsp+160h] [rbp+60h] BYREF
  int v63; // [rsp+168h] [rbp+68h]
  const wchar_t *v64; // [rsp+170h] [rbp+70h]
  int *v65; // [rsp+178h] [rbp+78h]
  int v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  int v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  int v70; // [rsp+1A0h] [rbp+A0h]
  __int128 v71; // [rsp+1A8h] [rbp+A8h]
  __int128 v72; // [rsp+1B8h] [rbp+B8h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  int v74; // [rsp+220h] [rbp+120h] BYREF
  char v75; // [rsp+228h] [rbp+128h] BYREF
  _NT_PRODUCT_TYPE ProductType; // [rsp+230h] [rbp+130h] BYREF
  int v77; // [rsp+238h] [rbp+138h] BYREF

  v2 = a2;
  *(_DWORD *)this = a2;
  v3 = (CTokenManager **)((char *)this + 18744);
  *((_QWORD *)this + 3) = 0LL;
  v4 = (char *)this + 18776;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 14) = 64;
  *((_DWORD *)this + 4624) = 0;
  *((_WORD *)this + 9250) = 0;
  *((_BYTE *)this + 18503) = 0;
  *((_DWORD *)this + 4630) = 0;
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  *((_QWORD *)this + 2318) = 0LL;
  *((_QWORD *)this + 2319) = 0LL;
  *((_DWORD *)this + 4640) = 0;
  *((_DWORD *)this + 4641) = 47;
  *((_DWORD *)this + 4642) = 61;
  *((_DWORD *)this + 4658) = 0;
  *((_QWORD *)this + 2330) = 0LL;
  *((_QWORD *)this + 2334) = 0LL;
  *((_QWORD *)this + 2335) = 0LL;
  *((_QWORD *)this + 2336) = 0LL;
  *((_DWORD *)this + 4674) = 0;
  *((_DWORD *)this + 4675) = 81;
  *((_DWORD *)this + 4676) = 1;
  *((_QWORD *)this + 2339) = 0LL;
  *((_QWORD *)this + 2340) = 0LL;
  *((_QWORD *)this + 2344) = 0LL;
  *((_DWORD *)this + 4690) = 4;
  *((_QWORD *)this + 2346) = (char *)this + 18776;
  *((_QWORD *)this + 2343) = 0LL;
  *((_QWORD *)this + 2364) = 0LL;
  *((_QWORD *)this + 2365) = 0LL;
  *((_QWORD *)this + 2366) = 0LL;
  *((_DWORD *)this + 4734) = 0;
  *((_DWORD *)this + 4735) = -1;
  *((_DWORD *)this + 4736) = 58;
  *((_DWORD *)this + 4738) = 0;
  *((_QWORD *)this + 2370) = 0LL;
  *((_QWORD *)this + 2371) = 0LL;
  *((_WORD *)this + 9488) = 0;
  *((_QWORD *)this + 2373) = 0LL;
  *((_QWORD *)this + 2374) = 0LL;
  *((_DWORD *)this + 4750) = 0;
  *((_DWORD *)this + 4751) = 1;
  *((_DWORD *)this + 4752) = -1;
  v6 = (DispBrokerClientHandle **)((char *)this + 19016);
  *v6 = 0LL;
  DispBrokerClientReference::Assign(v6, 0LL);
  *((_QWORD *)this + 2379) = 0LL;
  *((_QWORD *)this + 2380) = 0LL;
  *((_QWORD *)this + 2381) = 0LL;
  *((_DWORD *)this + 4764) = 0;
  *((_DWORD *)this + 4765) = -1;
  *((_DWORD *)this + 4766) = 1;
  *((_QWORD *)this + 2385) = 0LL;
  *((_QWORD *)this + 2384) = 0LL;
  *((_QWORD *)this + 2387) = 0LL;
  *((_QWORD *)this + 2388) = 0LL;
  *((_QWORD *)this + 2389) = 0LL;
  *((_DWORD *)this + 4780) = 0;
  *((_DWORD *)this + 4781) = -1;
  *((_DWORD *)this + 4782) = 1;
  *((_QWORD *)this + 2392) = 0LL;
  *((_DWORD *)this + 4786) = 0;
  *((_DWORD *)this + 4787) = 1;
  *((_QWORD *)this + 2394) = 0LL;
  *((_QWORD *)this + 2396) = 0LL;
  *((_QWORD *)this + 2397) = 0LL;
  *((_QWORD *)this + 2398) = 0LL;
  *((_DWORD *)this + 4798) = 0;
  *((_DWORD *)this + 4799) = -1;
  *((_DWORD *)this + 4800) = 1;
  ProductType = 0;
  v8 = (OUTPUTDUPL_SESSION_MGR *)operator new[](0x208uLL, 0x674D444Fu, 256LL, v7);
  if ( v8 )
    v9 = OUTPUTDUPL_SESSION_MGR::OUTPUTDUPL_SESSION_MGR(v8);
  else
    v9 = 0LL;
  *((_QWORD *)this + 1) = v9;
  if ( v9 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v9) < 0 )
  {
    v27 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v27 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v27);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2323) = (char *)this + 18576;
  *((_QWORD *)this + 2322) = (char *)this + 18576;
  *((_QWORD *)this + 2325) = (char *)this + 18592;
  *((_QWORD *)this + 2324) = (char *)this + 18592;
  *((_QWORD *)this + 2327) = (char *)this + 18608;
  *((_QWORD *)this + 2326) = (char *)this + 18608;
  RtlGetNtProductType(&ProductType);
  RtlGetSuiteMask();
  *((_BYTE *)this + 18505) = ProductType != NtProductServer
                          || !g_bSkuSupportMultipleUsers
                          || (v77 = 0,
                              v32 = 0,
                              v33 = 0,
                              DestinationString = 0LL,
                              RtlInitUnicodeString(
                                &DestinationString,
                                L"TerminalServices-RemoteConnectionManager-WVD-Enabled"),
                              (int)ZwQueryLicenseValue(&DestinationString, &v32, &v33, 4LL, &v77) >= 0)
                          && v77 == 4
                          && v32 == 4
                          && v33;
  v74 = 0;
  v38 = 0LL;
  v40 = L"bEnumerateHWBeforeSW";
  v39 = 292;
  v41 = &v74;
  v43 = 0LL;
  v49 = 0LL;
  v42 = 0x4000000;
  v44 = 0;
  v45 = 0LL;
  v46 = 0;
  v47 = 0LL;
  v48 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v38,
              0LL,
              0LL) >= 0 )
    goto LABEL_34;
  v50 = 0LL;
  v51 = 292;
  v52 = L"fUseHardwareGPU";
  v54 = 0x4000000;
  v53 = &v74;
  v55 = 0LL;
  v61 = 0LL;
  v56 = 0;
  v57 = 0LL;
  v58 = 0;
  v59 = 0LL;
  v60 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v50,
              0LL,
              0LL) >= 0 )
LABEL_34:
    *((_BYTE *)this + 18505) = v74 != 0;
  v75 = 0;
  *(_QWORD *)((char *)this + 18508) = 0LL;
  v36 = &v75;
  *((_DWORD *)this + 4629) = 0;
  v35[0] = 3;
  v35[1] = 1;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v11 = *((_QWORD *)Current + 11);
    v12 = v11;
    if ( v11 && (v13 = *(__int64 (__fastcall **)(_DWORD *))(v11 + 352)) != 0LL && (v14 = v13(v35), v14 < 0) )
    {
      v28 = v14;
      WdLogSingleEntry2(2LL, v2, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get session TTM support in session 0x%I64x (Status = 0x%I64x).",
        v2,
        v28,
        0LL,
        0LL,
        0LL);
      v75 = 0;
      v12 = v11;
      *((_BYTE *)this + 18497) = 0;
    }
    else
    {
      *((_BYTE *)this + 18497) = v75;
      if ( !v11 )
        goto LABEL_18;
    }
    v15 = *(__int64 (**)(void))(v12 + 336);
    if ( v15 )
      *((_QWORD *)this + 2316) = v15();
    v16 = *(__int64 (**)(void))(v12 + 384);
    if ( v16 )
      *((_QWORD *)this + 2317) = v16();
  }
  else
  {
    *((_BYTE *)this + 18497) = v75;
  }
LABEL_18:
  v17 = DXGPROCESS::GetCurrent();
  *((_QWORD *)this + 2332) = v17;
  *((_DWORD *)v17 + 106) |= 1u;
  CurrentProcess = (void *)PsGetCurrentProcess(v19, v18, v20, v21);
  *((_QWORD *)this + 2331) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( *((_QWORD *)DXGGLOBAL_GetGlobal() + 38073) )
    CreateTokenManagerSessionGlobal(v3);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2331));
  v24 = (unsigned __int8)PsIsHostSilo(ProcessServerSilo) == 0;
  *((_BYTE *)this + 18502) = v24;
  if ( v24 )
  {
    v77 = 0;
    v62 = 0LL;
    v64 = L"DisableContainerSessionVersionCheck";
    v65 = &v77;
    v73 = 0LL;
    v63 = 292;
    v66 = 67108868;
    v67 = 0LL;
    v68 = 0;
    v69 = 0LL;
    v70 = 0;
    v71 = 0LL;
    v72 = 0LL;
    HostSilo = PsGetHostSilo();
    v30 = PsAttachSiloToCurrentThread(HostSilo);
    v31 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v62, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v30);
    if ( v31 < 0 || !v77 )
      *((_BYTE *)this + 18503) = 1;
  }
  *((_DWORD *)this + 4682) = 0;
  *((_QWORD *)this + 2342) = 0LL;
  *((_BYTE *)this + 18504) = 1;
  *((_QWORD *)this + 2371) = this;
  EventHandle = 0LL;
  v25 = IoCreateNotificationEvent(0LL, &EventHandle);
  *((_QWORD *)this + 2344) = v25;
  if ( v25 )
  {
    KeSetEvent(v25, 0, 0);
    ObfReferenceObject(*((PVOID *)this + 2344));
    ZwClose(EventHandle);
  }
  else
  {
    WdLogSingleEntry1(6LL, v2);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create PnP event object for session 0x%I64x.",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v4, 0, 0x80uLL);
  *((_DWORD *)this + 4806) = 0;
  RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 19208), (PULONG)this + 4806, 2u);
  return this;
}
