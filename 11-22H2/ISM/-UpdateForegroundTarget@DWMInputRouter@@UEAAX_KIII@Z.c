/*
 * XREFs of ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180021F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x18001EA80 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180024A90 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x180027AE0 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180033B3C (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x1800356A4 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C53D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x180171B50 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall DWMInputRouter::UpdateForegroundTarget(
        DWMInputRouter *this,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  struct InputSystemServerConnection *v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  bool v20; // r12
  __int64 v21; // rcx
  char *v22; // r13
  __int64 **v23; // rcx
  __int64 *i; // rax
  struct IInputTarget *v25; // rsi
  char *v26; // rax
  char *v27; // r12
  __int64 *v28; // rbx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v30; // rax
  char *InputSiteFromId; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  struct InputSystemServerConnection *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // r12
  _QWORD *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // r14
  int (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v44)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rsi
  int v48; // ebx
  int v49; // eax
  struct IInputTarget *v50; // rcx
  __int64 v51; // r13
  __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // r14
  const char *v59; // r9
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  struct InputSystemServerConnection **v64; // rax
  struct InputSystemServerConnection *v65; // rcx
  int v66; // [rsp+20h] [rbp-91h]
  __int64 v67; // [rsp+30h] [rbp-81h] BYREF
  __int64 v68; // [rsp+38h] [rbp-79h] BYREF
  struct IInputTarget *v69; // [rsp+40h] [rbp-71h] BYREF
  int v70; // [rsp+48h] [rbp-69h] BYREF
  int v71; // [rsp+4Ch] [rbp-65h] BYREF
  int v72; // [rsp+50h] [rbp-61h] BYREF
  DWORD LowPart; // [rsp+54h] [rbp-5Dh] BYREF
  __int64 v74; // [rsp+58h] [rbp-59h] BYREF
  char *v75; // [rsp+60h] [rbp-51h]
  __int64 v76; // [rsp+68h] [rbp-49h]
  __int64 v77; // [rsp+70h] [rbp-41h]
  struct IInputTarget *v78; // [rsp+78h] [rbp-39h]
  __int64 v79; // [rsp+80h] [rbp-31h] BYREF
  __int64 v80; // [rsp+88h] [rbp-29h] BYREF
  char *v81; // [rsp+90h] [rbp-21h]
  struct IInputTarget *v82; // [rsp+98h] [rbp-19h] BYREF
  int v83; // [rsp+A0h] [rbp-11h] BYREF
  _QWORD *v84; // [rsp+A8h] [rbp-9h]
  __int64 v85; // [rsp+B0h] [rbp-1h] BYREF
  _QWORD *v86; // [rsp+B8h] [rbp+7h]
  char *v87; // [rsp+C0h] [rbp+Fh]
  char *v88; // [rsp+C8h] [rbp+17h]
  char v89; // [rsp+D0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v9 = ISMStatics::s_inputSystemBamoConnection;
  if ( ISMStatics::s_inputSystemBamoConnection )
    goto LABEL_2;
  v74 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v74);
  v63 = CoreUICreate(&v74);
  if ( v63 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
      (const char *)(unsigned int)v63,
      v66);
  v64 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((int)&v83);
  v65 = *v64;
  *v64 = 0LL;
  ISMStatics::s_inputSystemBamoConnection = v65;
  Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v83);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v74);
  v9 = ISMStatics::s_inputSystemBamoConnection;
  if ( ISMStatics::s_inputSystemBamoConnection )
  {
LABEL_2:
    v10 = (_QWORD *)*((_QWORD *)v9 + 31);
    v84 = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD *))*v10)(v10);
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(v10[1] + 184LL))(v10 + 1);
      if ( v11 )
        *(_DWORD *)(v11 + 192) = a4;
    }
    if ( v10 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
    }
  }
  if ( WinKeyScenarioTelemetry::UpdateWinKeyScenarioStatusAndLogLatency() )
  {
    if ( (unsigned int)dword_1802754D0 > 5
      && (qword_1802754E0 & 0x400000000000LL) != 0
      && (qword_1802754E8 & 0x400000000000LL) == qword_1802754E8 )
    {
      LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
      v85 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1802754D0,
        (unsigned int)&unk_18023471E,
        v12,
        v13,
        (__int64)&v85,
        (__int64)&LowPart);
    }
    WinKeyScenarioTelemetry::s_winKeyScenarioStarted = 0;
  }
  v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 32);
  if ( a4 )
  {
    if ( !v14 )
      goto LABEL_20;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v79 = 0LL;
    v67 = 0LL;
    v15 = (**v14)(v14, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v67);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x755,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v15,
        v66);
    v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v67 + 32LL))(v67, &v70);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x757,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v16,
        v66);
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v67 + 40LL))(v67, &v71);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x758,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v17,
        v66);
    v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v67 + 48LL))(v67, &v72);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x759,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v18,
        v66);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v67 + 64LL))(v67, &v79);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x75A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v19,
        v66);
    v20 = a4 == v70 && a5 == v71 && a3 == v72 && a2 == v79;
    v21 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( !v20 )
    {
LABEL_20:
      v69 = 0LL;
      v22 = (char *)this - 16;
      v81 = (char *)this - 16;
      v23 = (__int64 **)*((_QWORD *)this + 10);
      for ( i = *v23; ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)v23 )
        {
          v25 = 0LL;
          goto LABEL_25;
        }
        if ( *((_DWORD *)i + 4) == a4 )
          break;
      }
      v25 = (struct IInputTarget *)i[7];
LABEL_25:
      v78 = v25;
      v82 = v25;
      if ( v25 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 8LL))(v25);
        v62 = DWMFocusedInputTarget::Create(v25, a5, a3, a2, &v69);
        if ( v62 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3CB,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v62,
            v66);
          Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v82);
LABEL_61:
          v49 = (*(__int64 (__fastcall **)(char *, struct IInputTarget *))(*(_QWORD *)v22 + 80LL))(v22, v69);
          if ( v49 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x76F,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v49,
              v66);
          v50 = v69;
          if ( v69 )
          {
            v69 = 0LL;
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v50 + 16LL))(v50);
          }
          return;
        }
      }
      else
      {
        v69 = 0LL;
        v26 = (char *)malloc(0x50uLL);
        v27 = v26;
        v75 = v26;
        if ( v26 )
          memset_0(v26, 0, 0x50uLL);
        v88 = v27;
        if ( !v27 )
        {
          v27 = 0LL;
          goto LABEL_56;
        }
        *((_DWORD *)v27 + 10) = 1;
        *(_QWORD *)v27 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
        *((_QWORD *)v27 + 1) = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
        *((_QWORD *)v27 + 2) = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
        *((_QWORD *)v27 + 3) = &DWMLegacyInputTarget::`vftable'{for `IInputSiteTarget'};
        *((_QWORD *)v27 + 4) = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
        *((_DWORD *)v27 + 12) = a4;
        *((_DWORD *)v27 + 13) = a5;
        *((_DWORD *)v27 + 14) = a3;
        *((_QWORD *)v27 + 8) = a2;
        v28 = (__int64 *)(v27 + 72);
        v87 = v27 + 72;
        *((_QWORD *)v27 + 9) = 0LL;
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 152LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
        InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId(v30, &v80, 1LL, *((_QWORD *)v27 + 8));
        v32 = 0LL;
        if ( &v89 != InputSiteFromId )
        {
          v32 = *(_QWORD *)InputSiteFromId;
          *(_QWORD *)InputSiteFromId = 0LL;
        }
        v33 = *v28;
        *v28 = v32;
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        v34 = v80;
        if ( v80 )
        {
          v80 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        if ( !*v28 )
        {
          v35 = ISMStatics::GetBamoServerConnection();
          v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v35 + 31) + 8LL) + 152LL))(*((_QWORD *)v35 + 31) + 8LL);
          v37 = *(_QWORD **)(v36 + 56);
          v38 = *(_QWORD **)(v36 + 64);
          v86 = v38;
          if ( v37 == v38 )
            goto LABEL_55;
          while ( 1 )
          {
            v39 = *v37;
            v40 = 0LL;
            v68 = 0LL;
            v41 = *(_QWORD *)(v39 + 488);
            v42 = *(_QWORD *)(v39 + 496);
            if ( v41 != v42 )
            {
              while ( 1 )
              {
                v43 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v41 + 8);
                v44 = **v43;
                if ( v40 )
                {
                  v68 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                }
                if ( v44(v43, &GUID_d3573f80_52a7_d2c9_ece4_38e96aede26c, &v68) >= 0 )
                  break;
                v41 += 16LL;
                if ( v41 == v42 )
                  break;
                v40 = v68;
              }
              v40 = v68;
            }
            v45 = v40 - 8;
            v46 = 0LL;
            if ( !v40 )
              v45 = 0LL;
            v77 = v45;
            v47 = v45 + 16;
            if ( v45 )
            {
              (**(void (__fastcall ***)(__int64))v47)(v45 + 16);
              v40 = v68;
            }
            if ( v40 )
            {
              v68 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
            }
            if ( v45 )
            {
              v51 = v45 + 8;
              v52 = *(_QWORD *)(*(_QWORD *)(v45 + 32) + 24LL);
              v76 = 0LL;
              v53 = *(_QWORD *)(v52 + 32);
              if ( *(_DWORD *)(v53 + 184) == GetCurrentThreadId() )
              {
                v56 = 0LL;
                v52 = 0LL;
              }
              else
              {
                v76 = v52;
                _InterlockedIncrement((volatile signed __int32 *)(v52 + 8));
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v53 + 16) + 24LL))(*(_QWORD *)(v53 + 16));
                *(_DWORD *)(v53 + 184) = GetCurrentThreadId();
                v56 = v52;
                v45 = v77;
                v46 = v76;
              }
              v57 = *(_QWORD *)(v51 + 40);
              if ( v52 )
              {
                v58 = *(_QWORD *)(v56 + 32);
                if ( *(_DWORD *)(v58 + 184) != GetCurrentThreadId() )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0x93F,
                    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
                    v59);
                *(_DWORD *)(v58 + 184) = 0;
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v58 + 16) + 32LL))(*(_QWORD *)(v58 + 16));
              }
              if ( v46 )
              {
                v60 = _InterlockedDecrement((volatile signed __int32 *)(v46 + 8));
                if ( v60 < 0 )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0x33,
                    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
                    (const char *)retaddr);
                if ( !v60 )
                  (*(void (__fastcall **)(__int64, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v76 + 24LL))(
                    v76,
                    v54,
                    v55,
                    retaddr);
                v45 = v77;
              }
              if ( v57 == *((_QWORD *)v75 + 8) )
              {
                Microsoft::WRL::ComPtr<InputSite>::operator=(v87, *v37);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
LABEL_54:
                v22 = v81;
                v25 = v78;
LABEL_55:
                v27 = v75;
                break;
              }
              v38 = v86;
            }
            if ( v45 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
            if ( ++v37 == v38 )
              goto LABEL_54;
          }
        }
LABEL_56:
        if ( v27 )
        {
          v69 = (struct IInputTarget *)v27;
          v48 = 0;
        }
        else
        {
          v48 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
            (const char *)0x8007000ELL,
            v66);
        }
        if ( v48 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D4,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v48,
            v66);
          Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v82);
          goto LABEL_61;
        }
      }
      if ( v25 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
      goto LABEL_61;
    }
  }
  else if ( v14 )
  {
    v61 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 80LL))((char *)this - 16, 0LL);
    if ( v61 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x743,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v61,
        v66);
  }
}
