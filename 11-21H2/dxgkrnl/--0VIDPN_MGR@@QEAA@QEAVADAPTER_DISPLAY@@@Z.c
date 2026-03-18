/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0211BD0
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C0211B10 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001F9C4 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C00283BC (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x1C002840C (--0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00284D4 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z @ 0x1C00285A0 (-reset@-$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00285D4 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     DpiReadPnpRegistryValue @ 0x1C01DCD70 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01DCED0 (DpiOpenPnpRegistryKey.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C020D538 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C0212330 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C02123DC (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0212490 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0212A00 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0212EC0 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0212F94 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rdi
  __int64 v5; // rsi
  __int64 *v6; // r12
  __int64 *v7; // r15
  DMMVIDEOPRESENTSOURCESET *v9; // rax
  DMMVIDEOPRESENTSOURCESET *v10; // rax
  __int64 v11; // r9
  DMMVIDEOPRESENTTARGETSET *v12; // rax
  DMMVIDEOPRESENTTARGETSET *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  NTSTATUS v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  const struct DMMVIDEOPRESENTTARGET *v23; // rdx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r14
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // r14
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rax
  int v40; // eax
  void *v41; // r8
  __int64 v42; // rdx
  _QWORD *v43; // r14
  MONITOR_MGR *v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v48; // rdx
  HANDLE v49; // rcx
  void ***v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // r15
  unsigned int v56; // r12d
  __int64 v57; // rdi
  __int64 v58; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct DMMVIDEOPRESENTTARGET *v62; // r13
  __int64 v63; // rax
  __int64 v64; // r14
  unsigned int *i; // r14
  __int64 v66; // rdx
  unsigned __int64 v67; // r15
  unsigned __int64 v68; // r15
  unsigned int v69; // r12d
  __int64 v70; // rdi
  __int64 v71; // r14
  struct DMMVIDEOPRESENTTARGET *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  struct DMMVIDEOPRESENTTARGET *v75; // r13
  __int64 v76; // rax
  __int64 v77; // rdx
  HANDLE v78; // rcx
  __int64 v79; // r14
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r15
  __int64 v83; // rax
  __int64 v84; // r8
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v86[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v87[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v88[2]; // [rsp+60h] [rbp-A0h] BYREF
  void **v89; // [rsp+70h] [rbp-90h] BYREF
  __int128 v90; // [rsp+78h] [rbp-88h]
  void **v91; // [rsp+88h] [rbp-78h]
  __int64 v92; // [rsp+90h] [rbp-70h]
  unsigned __int64 v93; // [rsp+98h] [rbp-68h]
  __int64 v94; // [rsp+A0h] [rbp-60h]
  void **v95; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v96; // [rsp+B0h] [rbp-50h]
  void **v97; // [rsp+C0h] [rbp-40h]
  __int64 v98; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v99; // [rsp+D0h] [rbp-30h]
  __int64 v100; // [rsp+D8h] [rbp-28h]
  _QWORD InputBuffer[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v102[2]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v103[2]; // [rsp+100h] [rbp+0h] BYREF
  int v104; // [rsp+120h] [rbp+20h]
  wchar_t v105; // [rsp+124h] [rbp+24h]
  _OWORD v106[3]; // [rsp+128h] [rbp+28h] BYREF

  v4 = this;
  *(_QWORD *)v86 = this;
  v5 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v6 = (__int64 *)((char *)this + 112);
  *((_DWORD *)this + 6) = 0;
  v7 = (__int64 *)((char *)this + 120);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 17;
  *((_DWORD *)this + 20) = 28;
  *((_DWORD *)this + 8) = 2;
  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 11) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 18) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 2;
  *((_QWORD *)this + 24) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)this + 25) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 2;
  *((_QWORD *)this + 31) = 30LL;
  *((_QWORD *)this + 32) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 33) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 2;
  *((_QWORD *)this + 39) = 5LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)this + 42) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_QWORD *)this + 45) = (char *)this + 352;
  *((_QWORD *)this + 44) = (char *)this + 352;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 2;
  *((_QWORD *)this + 48) = 40LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_BYTE *)this + 520) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 137) = -1;
  *((_DWORD *)this + 138) = -1;
  *((_QWORD *)this + 70) = 0LL;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *((_DWORD *)v4 + 26) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v4 + 1) )
      WdLogSingleEntry0(1LL);
    *((_QWORD *)v4 + 1) = a2;
  }
  else
  {
    WdLogSingleEntry2(2LL, v4, *((_QWORD *)v4 + 1));
  }
  if ( *((_DWORD *)v4 + 8) != 2 )
  {
    WdLogSingleEntry1(2LL, v4);
    *((_DWORD *)v4 + 24) = *((_DWORD *)v4 + 6);
    return v4;
  }
  v9 = (DMMVIDEOPRESENTSOURCESET *)operator new[](0x70uLL, 0x4E506456u, 256LL, a4);
  if ( v9 )
    v10 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v9, v4);
  else
    v10 = 0LL;
  auto_rc<DMMVIDEOPRESENTSOURCESET>::reset(v6, (__int64)v10);
  if ( !*v6
    || ((v12 = (DMMVIDEOPRESENTTARGETSET *)operator new[](0x80uLL, 0x4E506456u, 256LL, v11)) == 0LL
      ? (v13 = 0LL)
      : (v13 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v12, v4)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(v7, (__int64)v13),
        !*v7) )
  {
    WdLogSingleEntry0(6LL);
    *((_DWORD *)v4 + 24) = -1073741801;
    return v4;
  }
  LODWORD(v14) = VIDPN_MGR::_ReadConfiguration(v4);
  if ( (int)v14 < 0 )
  {
    v42 = *((_QWORD *)v4 + 1);
    if ( v42 )
      goto LABEL_63;
LABEL_62:
    WdLogSingleEntry0(1LL);
    v42 = *((_QWORD *)v4 + 1);
    goto LABEL_63;
  }
  LODWORD(v14) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v4);
  if ( (int)v14 < 0 )
  {
    v42 = *((_QWORD *)v4 + 1);
    if ( v42 )
      goto LABEL_63;
    goto LABEL_62;
  }
  LODWORD(v14) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v4);
  if ( (int)v14 < 0 )
  {
    v42 = *((_QWORD *)v4 + 1);
    if ( v42 )
      goto LABEL_63;
    goto LABEL_62;
  }
  _InterlockedAdd((volatile signed __int32 *)(*v6 + 72), 1u);
  v15 = *v6;
  v16 = -(__int64)(*v6 != -112);
  InputBuffer[1] = *((_QWORD *)v4 + 49);
  InputBuffer[0] = v15 & v16;
  v17 = *((_QWORD *)v4 + 1);
  if ( !v17 )
  {
    WdLogSingleEntry0(1LL);
    v17 = *((_QWORD *)v4 + 1);
  }
  v18 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v17 + 16) + 216LL),
          0x23204Fu,
          InputBuffer,
          0x10u,
          0LL,
          0);
  if ( v18 < 0 )
  {
    v48 = *((_QWORD *)v4 + 1);
    if ( v48 )
    {
LABEL_72:
      WdLogSingleEntry1(2LL, *(_QWORD *)(v48 + 16));
      *((_DWORD *)v4 + 24) = v18;
      goto LABEL_75;
    }
LABEL_71:
    WdLogSingleEntry0(1LL);
    v48 = *((_QWORD *)v4 + 1);
    goto LABEL_72;
  }
  if ( !*(_QWORD *)(v15 + 40) )
  {
    v51 = *((_QWORD *)v4 + 1);
    if ( !v51 )
    {
      WdLogSingleEntry0(1LL);
      v51 = *((_QWORD *)v4 + 1);
    }
    WdLogSingleEntry1(2LL, *(_QWORD *)(v51 + 16));
    *((_DWORD *)v4 + 24) = -1071774936;
    goto LABEL_78;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
  _InterlockedAdd((volatile signed __int32 *)(*v7 + 72), 1u);
  v15 = *v7;
  v19 = -(__int64)(*v7 != -112);
  v102[1] = *((_QWORD *)v4 + 50);
  v102[0] = v15 & v19;
  v20 = *((_QWORD *)v4 + 1);
  if ( !v20 )
  {
    WdLogSingleEntry0(1LL);
    v20 = *((_QWORD *)v4 + 1);
  }
  v18 = DxgkCallDriverIoControl(*(PDEVICE_OBJECT *)(*(_QWORD *)(v20 + 16) + 216LL), 0x232053u, v102, 0x10u, 0LL, 0);
  if ( v18 < 0 )
  {
    v48 = *((_QWORD *)v4 + 1);
    if ( v48 )
      goto LABEL_72;
    goto LABEL_71;
  }
  if ( !*(_QWORD *)(v15 + 40) )
  {
    v52 = *((_QWORD *)v4 + 1);
    if ( !v52 )
    {
      WdLogSingleEntry0(1LL);
      v52 = *((_QWORD *)v4 + 1);
    }
    WdLogSingleEntry1(2LL, *(_QWORD *)(v52 + 16));
    *((_DWORD *)v4 + 24) = -1071774935;
    goto LABEL_78;
  }
  v21 = *(_QWORD *)(v15 + 24);
  if ( v21 == v15 + 24 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v21 - 8)) == 0LL )
  {
LABEL_29:
    v24 = -1;
  }
  else
  {
    while ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
    {
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v15, v23);
      if ( !NextTarget )
        goto LABEL_29;
    }
    v24 = *((_DWORD *)v23 + 6);
  }
  *((_DWORD *)v4 + 138) = v24;
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
  v25 = *v6;
  v26 = *v7;
  v27 = *((_QWORD *)v4 + 1);
  if ( *(_QWORD *)(*v7 + 40) >= *(_QWORD *)(*v6 + 40) )
  {
    Handle = 0LL;
    if ( !v27 )
    {
      WdLogSingleEntry0(1LL);
      v27 = *((_QWORD *)v4 + 1);
    }
    v28 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 216LL), 1u, 0x20019u, &Handle);
    v14 = v28;
    if ( v28 < 0 )
    {
      v53 = *((_QWORD *)v4 + 1);
      if ( !v53 )
      {
        WdLogSingleEntry0(1LL);
        v53 = *((_QWORD *)v4 + 1);
      }
      WdLogSingleEntry2(2LL, *(_QWORD *)(v53 + 16), v14);
      goto LABEL_65;
    }
    _InterlockedAdd((volatile signed __int32 *)(*v7 + 72), 1u);
    v15 = *v7;
    v104 = *(_DWORD *)L"st";
    v105 = aTargetpriority[18];
    v87[1] = v103;
    v89 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `SetElement'};
    v103[0] = *(_OWORD *)L"TargetPriorityList";
    v91 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v87[0] = 2490404LL;
    v103[1] = *(_OWORD *)L"iorityList";
    v92 = 0LL;
    v90 = 0LL;
    v93 = 0LL;
    v94 = 256LL;
    v30 = VIDPN_MGR::_ReadTargetPriorityList(v29, Handle, v87, &v89);
    v31 = v30;
    if ( v30 >= 0 )
    {
      v54 = v93;
      if ( !v93 )
        WdLogSingleEntry0(1LL);
      v55 = v54 >> 2;
      v56 = 0;
      if ( v55 )
      {
        v57 = v92;
        v58 = 0LL;
        do
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v15,
                         *(_DWORD *)(v57 + 4 * v58));
          v62 = TargetById;
          if ( TargetById )
          {
            if ( *((_DWORD *)TargetById + 31) == -1 )
            {
              *((_DWORD *)TargetById + 31) = v56;
              v63 = WdLogNewEntry5_WdTrace(v61, v60);
              *(_QWORD *)(v63 + 24) = v58;
              *(_QWORD *)(v63 + 32) = *((unsigned int *)v62 + 6);
            }
            else
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)TargetById + 6));
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, *(unsigned int *)(v57 + 4 * v58), v58);
          }
          v58 = ++v56;
        }
        while ( v56 < v55 );
        v4 = *(VIDPN_MGR **)v86;
      }
      v64 = *(_QWORD *)(v15 + 24);
      if ( v64 != v15 + 24 )
      {
        for ( i = (unsigned int *)(v64 - 8);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v15,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i) )
        {
          if ( i[31] == -1 )
            WdLogSingleEntry1(3LL, i[6]);
        }
      }
    }
    else if ( v30 != -1073741275 )
    {
      v66 = *((_QWORD *)v4 + 1);
      if ( !v66 )
      {
        WdLogSingleEntry0(1LL);
        v66 = *((_QWORD *)v4 + 1);
      }
      WdLogSingleEntry2(2LL, *(_QWORD *)(v66 + 16), v31);
      v49 = Handle;
      *((_DWORD *)v4 + 24) = v31;
      ZwClose(v49);
      v50 = &v89;
LABEL_74:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(v50);
LABEL_75:
      if ( !v15 )
        return v4;
LABEL_78:
      ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
      return v4;
    }
    DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v89);
    v88[1] = v106;
    v106[0] = *(_OWORD *)L"TargetForcePriorityList";
    v95 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `SetElement'};
    v88[0] = 3145774LL;
    v97 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v106[2] = *(_OWORD *)L"ityList";
    v98 = 0LL;
    v99 = 0LL;
    v96 = 0LL;
    v100 = 256LL;
    v106[1] = *(_OWORD *)L"rcePriorityList";
    v33 = VIDPN_MGR::_ReadTargetPriorityList(v32, Handle, v88, &v95);
    v34 = v33;
    if ( v33 >= 0 )
    {
      v67 = v99;
      if ( !v99 )
        WdLogSingleEntry0(1LL);
      v68 = v67 >> 2;
      v69 = 0;
      if ( v68 )
      {
        v70 = v98;
        v71 = 0LL;
        do
        {
          v72 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, *(_DWORD *)(v70 + 4 * v71));
          v75 = v72;
          if ( v72 )
          {
            if ( *((_DWORD *)v72 + 32) == -1 )
            {
              *((_DWORD *)v72 + 32) = v69;
              v76 = WdLogNewEntry5_WdTrace(v74, v73);
              *(_QWORD *)(v76 + 24) = v71;
              *(_QWORD *)(v76 + 32) = *((unsigned int *)v75 + 6);
            }
            else
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)v72 + 6));
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, *(unsigned int *)(v70 + 4 * v71), v71);
          }
          v71 = ++v69;
        }
        while ( v69 < v68 );
        v4 = *(VIDPN_MGR **)v86;
      }
LABEL_38:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v95);
      ZwClose(Handle);
      v35 = *((_QWORD *)v4 + 1);
      v86[0] = -1;
      if ( !v35 )
      {
        WdLogSingleEntry0(1LL);
        v35 = *((_QWORD *)v4 + 1);
      }
      if ( (int)DpiReadPnpRegistryValue(
                  *(_QWORD *)(*(_QWORD *)(v35 + 16) + 216LL),
                  L"DefaultSimulatedTarget",
                  (char *)v86,
                  4u,
                  1u) < 0
        || (v79 = v86[0], v86[0] == -1) )
      {
        v38 = WdLogNewEntry5_WdTrace(v37, v36);
        v39 = *((_QWORD *)v4 + 1);
        if ( !v39 )
        {
          WdLogSingleEntry0(1LL);
          v39 = *((_QWORD *)v4 + 1);
        }
        *(_QWORD *)(v38 + 24) = *(_QWORD *)(v39 + 16);
      }
      else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v86[0]) )
      {
        v82 = WdLogNewEntry5_WdTrace(v81, v80);
        *(_QWORD *)(v82 + 24) = v79;
        v83 = *((_QWORD *)v4 + 1);
        if ( !v83 )
        {
          WdLogSingleEntry0(1LL);
          v83 = *((_QWORD *)v4 + 1);
        }
        *(_QWORD *)(v82 + 32) = *(_QWORD *)(v83 + 16);
        *((_DWORD *)v4 + 137) = v79;
      }
      else
      {
        v84 = *((_QWORD *)v4 + 1);
        if ( !v84 )
        {
          WdLogSingleEntry0(1LL);
          v84 = *((_QWORD *)v4 + 1);
        }
        WdLogSingleEntry2(2LL, v79, *(_QWORD *)(v84 + 16));
      }
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
      v40 = VIDPN_MGR::_InitializeDmmClientInterfaces(v4);
      v42 = *((_QWORD *)v4 + 1);
      LODWORD(v14) = v40;
      if ( v40 < 0 )
      {
        if ( !v42 )
          goto LABEL_138;
        goto LABEL_63;
      }
      if ( v42 || (WdLogSingleEntry0(1LL), (v42 = *((_QWORD *)v4 + 1)) != 0) )
      {
        v43 = (_QWORD *)((char *)v4 + 528);
        if ( v4 != (VIDPN_MGR *)-528LL )
        {
          *v43 = 0LL;
          v44 = *(MONITOR_MGR **)(v42 + 112);
          if ( v44 )
          {
            LODWORD(v14) = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                             v44,
                             (int (__high *)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))v42,
                             v41,
                             (struct HDXGMONITOREVENT__ **)v4 + 66);
            if ( (int)v14 >= 0 )
            {
              if ( !*v43 )
                WdLogSingleEntry0(1LL);
              v46 = operator new[](0x70uLL, 0x4E506456u, 256LL, v45);
              if ( v46 )
                v5 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v46, 0x8000u, 1, 256LL, 0x12Cu);
              *((_QWORD *)v4 + 70) = v5;
              *((_DWORD *)v4 + 26) = 2;
              return v4;
            }
LABEL_137:
            v42 = *((_QWORD *)v4 + 1);
            if ( !v42 )
            {
LABEL_138:
              WdLogSingleEntry0(1LL);
              v42 = *((_QWORD *)v4 + 1);
            }
LABEL_63:
            WdLogSingleEntry1(2LL, *(_QWORD *)(v42 + 16));
LABEL_65:
            *((_DWORD *)v4 + 24) = v14;
            return v4;
          }
          WdLogSingleEntry1(2LL, *(_QWORD *)(v42 + 16));
        }
      }
      LODWORD(v14) = -1073741811;
      goto LABEL_137;
    }
    if ( v33 == -1073741275 )
      goto LABEL_38;
    v77 = *((_QWORD *)v4 + 1);
    if ( !v77 )
    {
      WdLogSingleEntry0(1LL);
      v77 = *((_QWORD *)v4 + 1);
    }
    WdLogSingleEntry2(2LL, *(_QWORD *)(v77 + 16), v34);
    v78 = Handle;
    *((_DWORD *)v4 + 24) = v34;
    ZwClose(v78);
    v50 = &v95;
    goto LABEL_74;
  }
  if ( !v27 )
  {
    WdLogSingleEntry0(1LL);
    v27 = *((_QWORD *)v4 + 1);
    v25 = *((_QWORD *)v4 + 14);
    v26 = *((_QWORD *)v4 + 15);
  }
  WdLogSingleEntry3(2LL, *(_QWORD *)(v26 + 40), *(_QWORD *)(v25 + 40), *(_QWORD *)(v27 + 16));
  *((_DWORD *)v4 + 24) = -1071774938;
  return v4;
}
