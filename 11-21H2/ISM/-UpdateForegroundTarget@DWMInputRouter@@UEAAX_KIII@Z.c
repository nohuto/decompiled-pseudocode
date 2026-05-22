/*
 * XREFs of ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180015E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180019AF0 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180029FAC (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BB84 (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18004E0F0 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008B160 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18009C748 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800FB500 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetTimeElapsedSec@WinKeyScenarioTelemetry@@CA_KXZ @ 0x1800FB59C (-GetTimeElapsedSec@WinKeyScenarioTelemetry@@CA_KXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x180144B98 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 */

// Hidden C++ exception states: #wind=26
void __fastcall DWMInputRouter::UpdateForegroundTarget(
        DWMInputRouter *this,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5)
{
  DWMInputRouter *v8; // rsi
  __int64 v9; // r14
  struct InputSystemServerConnection *v10; // rbx
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  bool v19; // bl
  __int64 v20; // rcx
  __int64 **v21; // rcx
  __int64 *i; // rax
  char *v23; // rax
  char *v24; // rbx
  __int64 *v25; // rdi
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v27; // rax
  char *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct InputSystemServerConnection *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // r12
  _QWORD *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // r15
  int (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v41)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v42; // rbx
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r15
  __int64 v50; // rsi
  const char *v51; // r9
  int v52; // eax
  int v53; // ebx
  int v54; // eax
  char *v55; // rcx
  int v56; // eax
  char *v57; // rax
  char *v58; // rdi
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  unsigned int v64; // ebx
  int v65; // ebx
  int v66; // eax
  struct InputSystemServerConnection **v67; // rax
  struct InputSystemServerConnection *v68; // rcx
  unsigned __int64 TimeElapsedSec; // rax
  int v70; // r9d
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 InputSiteFromId; // rax
  __int64 v75; // rcx
  struct InputSiteManager *v76; // rax
  _QWORD *v77; // rbx
  _QWORD *v78; // r12
  int v79; // [rsp+20h] [rbp-E0h]
  DWORD LowPart; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+48h] [rbp-B8h] BYREF
  char *v82; // [rsp+50h] [rbp-B0h]
  __int64 v83; // [rsp+58h] [rbp-A8h] BYREF
  int v84; // [rsp+60h] [rbp-A0h] BYREF
  int v85; // [rsp+64h] [rbp-9Ch] BYREF
  int v86; // [rsp+68h] [rbp-98h] BYREF
  __int64 v87; // [rsp+70h] [rbp-90h] BYREF
  __int64 v88; // [rsp+78h] [rbp-88h] BYREF
  __int64 v89; // [rsp+80h] [rbp-80h] BYREF
  __int64 v90; // [rsp+88h] [rbp-78h]
  __int64 v91; // [rsp+90h] [rbp-70h]
  char *v92; // [rsp+98h] [rbp-68h]
  __int64 v93; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v94; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v96; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v97; // [rsp+C0h] [rbp-40h] BYREF
  char *v98; // [rsp+C8h] [rbp-38h]
  int v99; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v100; // [rsp+D8h] [rbp-28h]
  __int64 v101; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v102; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD *v103; // [rsp+F0h] [rbp-10h]
  char *v104; // [rsp+F8h] [rbp-8h]
  char v105; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v8 = this;
  v9 = 0LL;
  v10 = ISMStatics::s_inputSystemBamoConnection;
  if ( ISMStatics::s_inputSystemBamoConnection )
    goto LABEL_2;
  v87 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v87);
  v66 = CoreUICreate(&v87);
  if ( v66 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
      (const char *)(unsigned int)v66,
      v79);
  v67 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((int)&v99);
  v68 = *v67;
  *v67 = 0LL;
  ISMStatics::s_inputSystemBamoConnection = v68;
  Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v99);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v87);
  v10 = ISMStatics::s_inputSystemBamoConnection;
  if ( ISMStatics::s_inputSystemBamoConnection )
  {
LABEL_2:
    v11 = (_QWORD *)*((_QWORD *)v10 + 29);
    v100 = v11;
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD *))*v11)(v11);
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(v11[1] + 184LL))(v11 + 1);
      if ( v12 )
        *(_DWORD *)(v12 + 192) = a4;
    }
    if ( v11 )
    {
      v100 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
    }
  }
  if ( WinKeyScenarioTelemetry::s_winKeyScenarioStarted )
  {
    TimeElapsedSec = WinKeyScenarioTelemetry::GetTimeElapsedSec();
    if ( TimeElapsedSec < 5 )
    {
      if ( !WinKeyScenarioTelemetry::s_winKeyScenarioStarted )
        goto LABEL_8;
      if ( (unsigned int)dword_180240448 > 5
        && (qword_180240458 & 0x400000000000LL) != 0
        && (qword_180240460 & 0x400000000000LL) == qword_180240460 )
      {
        LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
        v88 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_180240448,
          (unsigned int)&unk_180203DA0,
          0,
          v70,
          (__int64)&v88,
          (__int64)&LowPart);
      }
    }
    else if ( (unsigned int)dword_180240448 > 5
           && (qword_180240458 & 0x400000000000LL) != 0
           && (qword_180240460 & 0x400000000000LL) == qword_180240460 )
    {
      v101 = 5LL;
      v102 = TimeElapsedSec;
      LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
      v88 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        0,
        (unsigned int)&unk_180203EF2,
        0,
        v70,
        (__int64)&v88,
        (__int64)&LowPart,
        (__int64)&v102,
        (__int64)&v101);
    }
    WinKeyScenarioTelemetry::s_winKeyScenarioStarted = 0;
  }
LABEL_8:
  v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v8 + 32);
  if ( a4 )
  {
    if ( !v13 )
      goto LABEL_20;
    v84 = 0;
    v85 = 0;
    v86 = 0;
    v93 = 0LL;
    v81 = 0LL;
    v14 = (**v13)(v13, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v81);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x72E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v14,
        v79);
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v81 + 32LL))(v81, &v84);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x730,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v15,
        v79);
    v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v81 + 40LL))(v81, &v85);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x731,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v16,
        v79);
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v81 + 48LL))(v81, &v86);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x732,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v17,
        v79);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v81 + 64LL))(v81, &v93);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x733,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v18,
        v79);
    v19 = a4 == v84 && a5 == v85 && a3 == v86 && a2 == v93;
    v20 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( !v19 )
    {
LABEL_20:
      v82 = 0LL;
      v21 = (__int64 **)*((_QWORD *)v8 + 10);
      for ( i = *v21; i != (__int64 *)v21; i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i + 4) == a4 )
        {
          v9 = i[7];
          break;
        }
      }
      v97 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v82 = 0LL;
      if ( v9 )
      {
        v57 = (char *)malloc(0x58uLL);
        v58 = v57;
        if ( v57 )
          memset_0(v57, 0, 0x58uLL);
        v98 = v58;
        if ( v58 )
        {
          *((_DWORD *)v58 + 12) = 1;
          *(_QWORD *)v58 = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
          *((_QWORD *)v58 + 1) = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
          *((_QWORD *)v58 + 2) = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
          *((_QWORD *)v58 + 3) = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
          *((_QWORD *)v58 + 4) = &DWMFocusedInputTarget::`vftable'{for `IInputSiteTarget'};
          *((_QWORD *)v58 + 5) = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
          *((_QWORD *)v58 + 7) = v9;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          *((_DWORD *)v58 + 16) = a5;
          *((_DWORD *)v58 + 17) = a3;
          *((_QWORD *)v58 + 9) = a2;
          *((_QWORD *)v58 + 10) = 0LL;
          v89 = 0LL;
          (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
            v9,
            &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea,
            &v89);
          v59 = v89;
          if ( v89 )
          {
            v60 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v89 + 24LL))(v89, &v94);
            v61 = 0LL;
            if ( &v88 != v60 )
            {
              v61 = *v60;
              *v60 = 0LL;
            }
            v62 = *((_QWORD *)v58 + 10);
            *((_QWORD *)v58 + 10) = v61;
            if ( v62 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
            v63 = v94;
            if ( v94 )
            {
              v94 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
            }
            v59 = v89;
          }
          if ( v59 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          if ( !*((_QWORD *)v58 + 10) )
          {
            v64 = *((_DWORD *)v58 + 17);
            if ( v64 )
            {
              ViewHierarchy = ISMStatics::GetViewHierarchy();
              WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v64);
              InputSiteManager = ISMStatics::GetInputSiteManager();
              InputSiteFromId = InputSiteManager::GetInputSiteFromId(InputSiteManager, &v95, 1LL, WindowIdFromViewId);
              Microsoft::WRL::ComPtr<InputSite>::operator=(v58 + 80, InputSiteFromId);
              v75 = v95;
              if ( v95 )
              {
                v95 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
              }
              if ( !*((_QWORD *)v58 + 10) )
              {
                v76 = ISMStatics::GetInputSiteManager();
                v77 = (_QWORD *)*((_QWORD *)v76 + 7);
                v78 = (_QWORD *)*((_QWORD *)v76 + 8);
                if ( v77 != v78 )
                {
                  while ( !*(_BYTE *)(*v77 + 480LL)
                       || *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v77 + 48LL)) != *((_DWORD *)v58 + 17) )
                  {
                    if ( ++v77 == v78 )
                      goto LABEL_96;
                  }
                  Microsoft::WRL::ComPtr<InputSite>::operator=(v58 + 80, *v77);
                }
              }
            }
          }
        }
        else
        {
          v58 = 0LL;
        }
LABEL_96:
        if ( v58 )
        {
          v82 = v58;
          v65 = 0;
        }
        else
        {
          v65 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmfocusedinputtarget.cpp",
            (const char *)0x8007000ELL,
            v79);
        }
        if ( v65 >= 0 )
          goto LABEL_70;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3A5,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v65,
          v79);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v97);
      }
      else
      {
        v23 = (char *)malloc(0x50uLL);
        v24 = v23;
        v92 = v23;
        if ( v23 )
          memset_0(v23, 0, 0x50uLL);
        v104 = v24;
        if ( !v24 )
        {
          v24 = 0LL;
          goto LABEL_67;
        }
        *((_DWORD *)v24 + 10) = 1;
        *(_QWORD *)v24 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
        *((_QWORD *)v24 + 1) = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
        *((_QWORD *)v24 + 2) = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
        *((_QWORD *)v24 + 3) = &DWMLegacyInputTarget::`vftable'{for `IInputSiteTarget'};
        *((_QWORD *)v24 + 4) = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
        *((_DWORD *)v24 + 12) = a4;
        *((_DWORD *)v24 + 13) = a5;
        *((_DWORD *)v24 + 14) = a3;
        *((_QWORD *)v24 + 8) = a2;
        v25 = (__int64 *)(v24 + 72);
        v98 = v24 + 72;
        *((_QWORD *)v24 + 9) = 0LL;
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 152LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
        v28 = (char *)InputSiteManager::GetInputSiteFromId(v27, &v96, 1LL, *((_QWORD *)v24 + 8));
        v29 = 0LL;
        if ( &v105 != v28 )
        {
          v29 = *(_QWORD *)v28;
          *(_QWORD *)v28 = 0LL;
        }
        v30 = *v25;
        *v25 = v29;
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        v31 = v96;
        if ( v96 )
        {
          v96 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
        if ( !*v25 )
        {
          v32 = ISMStatics::GetBamoServerConnection();
          v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v32 + 29) + 8LL) + 152LL))(*((_QWORD *)v32 + 29) + 8LL);
          v34 = *(_QWORD **)(v33 + 56);
          v35 = *(_QWORD **)(v33 + 64);
          v103 = v35;
          if ( v34 != v35 )
          {
            while ( 1 )
            {
              v36 = *v34;
              v37 = 0LL;
              v83 = 0LL;
              v38 = *(_QWORD *)(v36 + 488);
              v39 = *(_QWORD *)(v36 + 496);
              if ( v38 != v39 )
              {
                while ( 1 )
                {
                  v40 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v38 + 8);
                  v41 = **v40;
                  if ( v37 )
                  {
                    v83 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
                  }
                  if ( v41(v40, &GUID_d3573f80_52a7_d2c9_ece4_38e96aede26c, &v83) >= 0 )
                    break;
                  v38 += 16LL;
                  if ( v38 == v39 )
                    break;
                  v37 = v83;
                }
                v37 = v83;
              }
              v42 = v37 - 8;
              if ( !v37 )
                v42 = 0LL;
              v91 = v42;
              if ( v42 )
              {
                (**(void (__fastcall ***)(__int64))(v42 + 16))(v42 + 16);
                v37 = v83;
              }
              if ( v37 )
              {
                v83 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
              }
              if ( v42 )
              {
                v43 = v42 + 8;
                v44 = *(_QWORD *)(*(_QWORD *)(v42 + 32) + 24LL);
                v45 = 0LL;
                v90 = 0LL;
                v46 = *(_QWORD *)(v44 + 32);
                if ( *(_DWORD *)(v46 + 184) == GetCurrentThreadId() )
                {
                  v44 = 0LL;
                }
                else
                {
                  v90 = v44;
                  _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v46 + 16) + 24LL))(*(_QWORD *)(v46 + 16));
                  *(_DWORD *)(v46 + 184) = GetCurrentThreadId();
                  v42 = v91;
                  v45 = v90;
                }
                v49 = *(_QWORD *)(v43 + 40);
                if ( v44 )
                {
                  v50 = *(_QWORD *)(v45 + 32);
                  if ( *(_DWORD *)(v50 + 184) != GetCurrentThreadId() )
                    wil::details::in1diag3::_FailFast_Unexpected(
                      retaddr,
                      (void *)0x8CF,
                      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
                      v51);
                  *(_DWORD *)(v50 + 184) = 0;
                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v50 + 16) + 32LL))(*(_QWORD *)(v50 + 16));
                }
                if ( v45 )
                {
                  v52 = _InterlockedDecrement((volatile signed __int32 *)(v45 + 8));
                  if ( v52 < 0 )
                    wil::details::in1diag3::_FailFast_Unexpected(
                      retaddr,
                      (void *)0x33,
                      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
                      (const char *)retaddr);
                  if ( !v52 )
                    (*(void (__fastcall **)(__int64, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v90 + 24LL))(
                      v90,
                      v47,
                      v48,
                      retaddr);
                  v42 = v91;
                }
                if ( v49 == *((_QWORD *)v92 + 8) )
                {
                  Microsoft::WRL::ComPtr<InputSite>::operator=(v98, *v34);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v42 + 16) + 8LL))(v42 + 16);
LABEL_66:
                  v24 = v92;
                  v8 = this;
                  break;
                }
                v35 = v103;
              }
              if ( v42 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)(v42 + 16) + 8LL))(v42 + 16);
              if ( ++v34 == v35 )
                goto LABEL_66;
            }
          }
        }
LABEL_67:
        if ( v24 )
        {
          v82 = v24;
          v53 = 0;
        }
        else
        {
          v53 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
            (const char *)0x8007000ELL,
            v79);
        }
        if ( v53 >= 0 )
        {
LABEL_70:
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          goto LABEL_72;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3AE,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v53,
          v79);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v97);
      }
LABEL_72:
      v54 = (*(__int64 (__fastcall **)(__int64, char *))(*((_QWORD *)v8 - 2) + 80LL))((__int64)v8 - 16, v82);
      if ( v54 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x748,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v54,
          v79);
      v55 = v82;
      if ( v82 )
      {
        v82 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
  }
  else if ( v13 )
  {
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v8 - 2) + 80LL))((__int64)v8 - 16, 0LL);
    if ( v56 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x71C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v56,
        v79);
  }
}
