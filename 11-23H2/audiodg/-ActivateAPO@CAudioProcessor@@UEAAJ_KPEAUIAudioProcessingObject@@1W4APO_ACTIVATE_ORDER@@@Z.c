/*
 * XREFs of ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000F760
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000EC34 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?RegisterAPONotifications@CAPONode@@QEAAJXZ @ 0x14000F6F4 (-RegisterAPONotifications@CAPONode@@QEAAJXZ.c)
 *     ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x14000FB7C (-InsertAt@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ??1?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAA@XZ @ 0x14000FD98 (--1-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_PROP.c)
 *     ?FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAUIAudioProcessingObject@@AEAPEAU__POSITION@@@Z @ 0x14000FDBC (-FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@.c)
 *     ?AddTail@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x14000FDF0 (-AddTail@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140010354 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x1400123D8 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x1400201C4 (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140022E00 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005CDEC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14007AA90 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?InsertAfter@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x14008F370 (-InsertAfter@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCA.c)
 *     ?InsertBefore@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x14008F3C8 (-InsertBefore@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVC.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioProcessor::ActivateAPO(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        CAPONode **a4,
        unsigned int a5)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  CAPONode *v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  char *v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // r14
  int v20; // eax
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  char *v23; // rdx
  __int64 **v24; // r10
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 *v28; // rsi
  __int64 v29; // rcx
  unsigned __int16 *v30; // rdi
  int v31; // edx
  int v32; // edx
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-568h]
  int v35; // [rsp+20h] [rbp-568h]
  int v36[2]; // [rsp+20h] [rbp-568h]
  char *v37; // [rsp+28h] [rbp-560h]
  __int64 v38; // [rsp+30h] [rbp-558h]
  char *v39; // [rsp+40h] [rbp-548h] BYREF
  CAPONode *APOInList; // [rsp+48h] [rbp-540h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-538h] BYREF
  __int64 v42; // [rsp+58h] [rbp-530h] BYREF
  LPCRITICAL_SECTION v43; // [rsp+60h] [rbp-528h] BYREF
  char v44; // [rsp+68h] [rbp-520h]
  __int64 v45; // [rsp+70h] [rbp-518h] BYREF
  __int64 v46; // [rsp+78h] [rbp-510h] BYREF
  __int64 v47; // [rsp+80h] [rbp-508h]
  __int64 v48; // [rsp+88h] [rbp-500h]
  int v49; // [rsp+90h] [rbp-4F8h]
  __int128 v50; // [rsp+98h] [rbp-4F0h] BYREF
  int v51[2]; // [rsp+A8h] [rbp-4E0h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-4D8h]
  __int64 v53; // [rsp+B8h] [rbp-4D0h]
  int v54; // [rsp+C0h] [rbp-4C8h]
  CAPONode **v55; // [rsp+C8h] [rbp-4C0h]
  __int64 v56; // [rsp+D0h] [rbp-4B8h]
  _QWORD *v57; // [rsp+D8h] [rbp-4B0h] BYREF
  CAPONode **p_APOInList; // [rsp+E8h] [rbp-4A0h]
  char v59; // [rsp+F0h] [rbp-498h]
  _QWORD *v60; // [rsp+F8h] [rbp-490h] BYREF
  __int128 v61; // [rsp+128h] [rbp-460h]
  char v62; // [rsp+138h] [rbp-450h]
  unsigned __int16 v63[256]; // [rsp+140h] [rbp-448h] BYREF
  char v64[2]; // [rsp+340h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+588h] [rbp+0h]

  v55 = a4;
  v56 = a1;
  *(_QWORD *)&v50 = a1;
  p_APOInList = a4;
  if ( !a3 )
  {
    v26 = 1982LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070057LL,
      v34);
    return 2147942487LL;
  }
  if ( a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BF,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      v34);
    return 2147942406LL;
  }
  if ( a5 > 1 )
  {
    v26 = 1984LL;
    goto LABEL_31;
  }
  v43 = (LPCRITICAL_SECTION)(a1 + 88);
  v44 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v43);
  v8 = CAudioProcessor::ValidateTransactionState((CAudioProcessor *)a1, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C6,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v8,
      v34);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD **, _QWORD))(**(_QWORD **)(a1 + 792) + 24LL))(
      *(_QWORD *)(a1 + 792),
      &lpCriticalSection,
      &v57,
      0LL);
    APOInList = (CAPONode *)CAudioProcessor::FindAPOInList(v10, v57, a3, &v60);
    if ( !APOInList )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D1,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x887C001ALL,
        v34);
LABEL_64:
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      if ( v44 )
        LeaveCriticalSection(v43);
      return 2289827866LL;
    }
    v11 = 0LL;
    v46 = 0LL;
    v12 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0;
    *(_QWORD *)v51 = 0LL;
    v13 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0;
    v14 = APOInList;
    v15 = *((_QWORD *)APOInList + 17);
    v45 = v15;
    v16 = 0LL;
    while ( v16 < v15 )
    {
      if ( v16 >= *((_QWORD *)v14 + 17) )
        ATL::AtlThrowImpl(-2147024809);
      v39 = (char *)(*(_QWORD *)(*((_QWORD *)v14 + 16) + 8 * v16) + 64LL);
      ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::InsertAt(
        &v46,
        v16++,
        &v39);
      v14 = APOInList;
      v12 = v47;
      v11 = v46;
      v15 = v45;
    }
    v17 = (char *)*((_QWORD *)v14 + 21);
    v39 = v17;
    v18 = 0LL;
    while ( v18 < (unsigned __int64)v17 )
    {
      if ( v18 >= *((_QWORD *)v14 + 21) )
        ATL::AtlThrowImpl(-2147024809);
      v45 = *(_QWORD *)(*((_QWORD *)v14 + 20) + 8 * v18) + 64LL;
      ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::InsertAt(
        v51,
        v18++,
        &v45);
      v14 = APOInList;
      v13 = v52;
      v17 = v39;
    }
    if ( !v12 || !v13 )
    {
      MicrosoftTelemetryAssertTriggeredArgs("Audioeng.dll", 0LL, 0LL);
      v14 = APOInList;
    }
    v19 = *(_QWORD *)v51;
    v35 = v51[0];
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)v14 + 3) + 24LL))(
            *((_QWORD *)v14 + 3),
            *((unsigned int *)v14 + 34),
            v11,
            *((unsigned int *)v14 + 42));
    LODWORD(v39) = v20;
    if ( v20 >= 0 )
    {
      v21 = CAPONode::RegisterAPONotifications(v14);
      v22 = retaddr;
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E4,
          (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
          (const char *)(unsigned int)v21,
          v35);
      p_APOInList = &APOInList;
      v59 = 1;
      v23 = 0LL;
      v39 = 0LL;
      if ( !v55 )
      {
        v24 = (__int64 **)(v50 + 768);
LABEL_21:
        v42 = **v24;
        if ( v23 )
        {
          v33 = ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(v42, &v39);
          if ( a5 )
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::InsertBefore(v42, v33, &APOInList);
          else
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::InsertAfter(v42, v33, &APOInList);
        }
        else if ( a5 )
        {
          ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddTail(v42, &APOInList);
        }
        else
        {
          ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v42, &APOInList);
        }
        *(_QWORD *)&v50 = &v42;
        *((_QWORD *)&v50 + 1) = &APOInList;
        v61 = v50;
        v62 = 1;
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddTail(a1 + 128, &APOInList);
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v57, v60);
        ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(v51);
        ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(&v46);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        if ( v44 )
          LeaveCriticalSection(v43);
        return 0LL;
      }
      v23 = (char *)CAudioProcessor::FindAPOInList(v22, **(_QWORD **)(a1 + 768), v55, &v50);
      v39 = v23;
      if ( v23 )
        goto LABEL_21;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81C,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x887C001ALL,
        v35);
      CAPONode::UnlockForProcess(APOInList);
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(v51);
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(&v46);
      goto LABEL_64;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
      (const char *)(unsigned int)v20,
      v35);
    if ( v12 && (v27 = *(_QWORD *)(*(_QWORD *)v11 + 24LL)) != 0 )
      v28 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
    else
      v28 = 0LL;
    if ( v13 && (v29 = *(_QWORD *)(*(_QWORD *)v19 + 24LL)) != 0 )
      v30 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
    else
      v30 = 0LL;
    memset_0(v64, 0, 0x200uLL);
    memset_0(v63, 0, sizeof(v63));
    if ( v28 )
    {
      if ( *v28 == 0xFFFE )
        v31 = *((_DWORD *)v28 + 6);
      else
        v31 = *v28;
      v36[0] = v28[1];
      StringCchPrintfW(
        (unsigned __int16 *)v64,
        0x100uLL,
        L"Input #0 {%dHz/%dch/%dbits/Format:%d}",
        *((unsigned int *)v28 + 1),
        *(_QWORD *)v36,
        v28[7],
        v31);
    }
    else
    {
      StringCchPrintfW((unsigned __int16 *)v64, 0x100uLL, L"Input #0 {null}");
    }
    if ( v30 )
    {
      if ( *v30 == 0xFFFE )
        v32 = *((_DWORD *)v30 + 6);
      else
        v32 = *v30;
      LODWORD(v38) = v32;
      LODWORD(v37) = v30[7];
      v36[0] = v30[1];
      StringCchPrintfW(
        v63,
        0x100uLL,
        L"Output #0 {%dHz/%dch/%dbits/Format:%d}",
        *((unsigned int *)v30 + 1),
        *(_QWORD *)v36,
        v37,
        v38);
    }
    else
    {
      StringCchPrintfW(v63, 0x100uLL, L"Output #0 {null}");
    }
    v9 = (unsigned int)v39;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x811,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v39,
      (int)"LockForProcess failed:%ls, %ls",
      v64,
      v63);
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(v51);
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(&v46);
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
  }
  if ( v44 )
    LeaveCriticalSection(v43);
  return v9;
}
