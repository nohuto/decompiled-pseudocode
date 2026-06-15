/*
 * XREFs of ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000CF38 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x14000D590 (-InsertAt@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000EDC8 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x14001108C (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011930 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014AC8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005A208 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14006E28C (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?AddTail@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x140081A38 (-AddTail@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x14008202C (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 *     ?FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAUIAudioProcessingObject@@AEAPEAU__POSITION@@@Z @ 0x14008205C (-FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@.c)
 *     ?InsertAfter@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x14008226C (-InsertAfter@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCA.c)
 *     ?InsertBefore@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x1400822C4 (-InsertBefore@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVC.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140082754 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioProcessor::ActivateAPO(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int v8; // eax
  unsigned int v9; // esi
  __int64 *v10; // rcx
  __int64 *v11; // r8
  CAPONode *v12; // rdx
  void *v13; // r15
  void *v14; // r12
  CAPONode *v15; // rsi
  CAPONode **v16; // rax
  unsigned __int64 v17; // r14
  char *v18; // rax
  unsigned __int64 v19; // r14
  struct ATL::CAtlPlex *v20; // r8
  int v21; // edx
  _QWORD *v22; // rcx
  int j; // edx
  int v24; // eax
  unsigned int v25; // r14d
  int v26; // r14d
  wil::details::in1diag3 *v27; // rcx
  char *APOInList; // rdx
  struct ATL::CAtlPlex **v29; // rsi
  struct ATL::CAtlPlex *v30; // r14
  __int64 *v31; // rdx
  struct ATL::CAtlPlex *v32; // rcx
  __int64 v33; // rsi
  __int64 *v34; // rdx
  __int64 v35; // rcx
  __int64 **v36; // rax
  struct ATL::CAtlPlex *v38; // r8
  int v39; // edx
  struct ATL::CAtlPlex *v40; // rcx
  int i; // edx
  int v42; // eax
  __int64 v43; // rcx
  unsigned __int16 *v44; // rsi
  __int64 v45; // rcx
  unsigned __int16 *v46; // rbx
  int v47; // edx
  int v48; // edx
  __int64 v49; // rax
  int v50; // [rsp+20h] [rbp-568h]
  int v51; // [rsp+20h] [rbp-568h]
  int v52[2]; // [rsp+20h] [rbp-568h]
  char *v53; // [rsp+28h] [rbp-560h]
  __int64 v54; // [rsp+30h] [rbp-558h]
  char *v55; // [rsp+40h] [rbp-548h] BYREF
  CAPONode *v56; // [rsp+48h] [rbp-540h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-538h] BYREF
  LPCRITICAL_SECTION v58; // [rsp+58h] [rbp-530h] BYREF
  char v59; // [rsp+60h] [rbp-528h]
  struct ATL::CAtlPlex **v60; // [rsp+68h] [rbp-520h] BYREF
  __int128 v61; // [rsp+70h] [rbp-518h] BYREF
  void *v62; // [rsp+80h] [rbp-508h] BYREF
  __int64 v63; // [rsp+88h] [rbp-500h]
  __int64 v64; // [rsp+90h] [rbp-4F8h]
  int v65; // [rsp+98h] [rbp-4F0h]
  void *Block; // [rsp+A0h] [rbp-4E8h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-4E0h]
  __int64 v68; // [rsp+B0h] [rbp-4D8h]
  int v69; // [rsp+B8h] [rbp-4D0h]
  __int64 v70; // [rsp+C0h] [rbp-4C8h]
  __int64 v71; // [rsp+C8h] [rbp-4C0h]
  __int64 **v72; // [rsp+D0h] [rbp-4B8h] BYREF
  CAPONode **v73; // [rsp+D8h] [rbp-4B0h] BYREF
  char v74; // [rsp+E0h] [rbp-4A8h]
  __int64 *v75; // [rsp+F0h] [rbp-498h]
  __int128 v76; // [rsp+120h] [rbp-468h]
  char v77; // [rsp+130h] [rbp-458h]
  unsigned __int16 v78[256]; // [rsp+140h] [rbp-448h] BYREF
  char v79[2]; // [rsp+340h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+588h] [rbp+0h]

  v70 = a4;
  v71 = a1;
  *(_QWORD *)&v61 = a4;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BE,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070057LL,
      v50);
    return 2147942487LL;
  }
  if ( a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BF,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      v50);
    return 2147942406LL;
  }
  if ( a5 > 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C0,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070057LL,
      v50);
    return 2147942487LL;
  }
  v58 = (LPCRITICAL_SECTION)(a1 + 88);
  v59 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v58);
  v8 = CAudioProcessor::ValidateTransactionState((CAudioProcessor *)a1, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C6,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v8,
      v50);
    if ( v59 )
      LeaveCriticalSection(v58);
    return v9;
  }
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, __int64 ***, _QWORD))(**(_QWORD **)(a1 + 792) + 24LL))(
    *(_QWORD *)(a1 + 792),
    &lpCriticalSection,
    &v72,
    0LL);
  v10 = *v72;
  if ( !*v72 )
  {
LABEL_112:
    v56 = 0LL;
    goto LABEL_113;
  }
  while ( 1 )
  {
    v11 = v10;
    v12 = (CAPONode *)v10[2];
    v10 = (__int64 *)*v10;
    if ( *((_QWORD *)v12 + 1) == a3 )
      break;
    if ( !v10 )
      goto LABEL_112;
  }
  v56 = v12;
  if ( !v12 )
  {
LABEL_113:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D1,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C001ALL,
      v50);
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    if ( !v59 )
      return 2289827866LL;
    goto LABEL_116;
  }
  v13 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0;
  v14 = 0LL;
  Block = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0;
  v15 = v56;
  v16 = (CAPONode **)*((_QWORD *)v56 + 17);
  v73 = v16;
  v17 = 0LL;
  v75 = v11;
  while ( v17 < (unsigned __int64)v16 )
  {
    if ( v17 >= *((_QWORD *)v15 + 17) )
      ATL::AtlThrowImpl(-2147024809);
    v55 = (char *)(*(_QWORD *)(*((_QWORD *)v15 + 16) + 8 * v17) + 64LL);
    ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::InsertAt(
      &v62,
      v17++,
      &v55);
    v15 = v56;
    v13 = v62;
    v16 = v73;
  }
  v18 = (char *)*((_QWORD *)v15 + 21);
  v55 = v18;
  v19 = 0LL;
  while ( v19 < (unsigned __int64)v18 )
  {
    if ( v19 >= *((_QWORD *)v15 + 21) )
      ATL::AtlThrowImpl(-2147024809);
    v73 = (CAPONode **)(*(_QWORD *)(*((_QWORD *)v15 + 20) + 8 * v19) + 64LL);
    ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::InsertAt(
      &Block,
      v19++,
      &v73);
    v15 = v56;
    v14 = Block;
    v18 = v55;
  }
  if ( !v63 || !v67 )
  {
    MicrosoftTelemetryAssertTriggeredArgs("Audioeng.dll", 0LL, 0LL);
    v15 = v56;
  }
  v51 = (int)v14;
  v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, _QWORD))(**((_QWORD **)v15 + 3) + 24LL))(
          *((_QWORD *)v15 + 3),
          *((unsigned int *)v15 + 34),
          v13,
          *((unsigned int *)v15 + 42));
  v25 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
      (const char *)(unsigned int)v24,
      (int)v14);
    if ( v63 && (v43 = *(_QWORD *)(*(_QWORD *)v13 + 24LL)) != 0 )
      v44 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 40LL))(v43);
    else
      v44 = 0LL;
    if ( v67 && (v45 = *(_QWORD *)(*(_QWORD *)v14 + 24LL)) != 0 )
      v46 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 40LL))(v45);
    else
      v46 = 0LL;
    memset_0(v79, 0, 0x200uLL);
    memset_0(v78, 0, sizeof(v78));
    if ( v44 )
    {
      if ( *v44 == 0xFFFE )
        v47 = *((_DWORD *)v44 + 6);
      else
        v47 = *v44;
      v52[0] = v44[1];
      StringCchPrintfW(
        (unsigned __int16 *)v79,
        0x100uLL,
        L"Input #0 {%dHz/%dch/%dbits/Format:%d}",
        *((unsigned int *)v44 + 1),
        *(_QWORD *)v52,
        v44[7],
        v47);
    }
    else
    {
      StringCchPrintfW((unsigned __int16 *)v79, 0x100uLL, L"Input #0 {null}");
    }
    if ( v46 )
    {
      if ( *v46 == 0xFFFE )
        v48 = *((_DWORD *)v46 + 6);
      else
        v48 = *v46;
      LODWORD(v54) = v48;
      LODWORD(v53) = v46[7];
      v52[0] = v46[1];
      StringCchPrintfW(
        v78,
        0x100uLL,
        L"Output #0 {%dHz/%dch/%dbits/Format:%d}",
        *((unsigned int *)v46 + 1),
        *(_QWORD *)v52,
        v53,
        v54);
    }
    else
    {
      StringCchPrintfW(v78, 0x100uLL, L"Output #0 {null}");
    }
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x811,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v25,
      (int)"LockForProcess failed:%ls, %ls",
      v79,
      v78);
    if ( v14 )
      free(v14);
    if ( v13 )
      free(v13);
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    if ( v59 )
      LeaveCriticalSection(v58);
    return v25;
  }
  if ( *((_QWORD *)v15 + 4) && *((_QWORD *)v15 + 5) && !*((_BYTE *)v15 + 56) )
  {
    v42 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v15 + 6) + 40LL))(*((_QWORD *)v15 + 6));
    v26 = v42;
    if ( v42 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DC,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
        (const char *)(unsigned int)v42,
        (int)v14);
      goto LABEL_28;
    }
    *((_BYTE *)v15 + 56) = 1;
  }
  v26 = 0;
LABEL_28:
  v27 = retaddr;
  if ( v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F4,
      (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
      (const char *)(unsigned int)v26,
      v51);
  v73 = &v56;
  v74 = 1;
  APOInList = 0LL;
  v55 = 0LL;
  if ( v70 )
  {
    APOInList = (char *)CAudioProcessor::FindAPOInList(v27, **(_QWORD **)(a1 + 768), v70, &v61);
    v55 = APOInList;
    if ( !APOInList )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81C,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x887C001ALL,
        v51);
      CAPONode::UnlockForProcess(v56);
      if ( v14 )
        free(v14);
      if ( v13 )
        free(v13);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      if ( !v59 )
        return 2289827866LL;
LABEL_116:
      LeaveCriticalSection(v58);
      return 2289827866LL;
    }
  }
  v60 = **(struct ATL::CAtlPlex ****)(a1 + 768);
  if ( APOInList )
  {
    v49 = ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(v60, &v55);
    if ( a5 )
      ATL::CAtlList<CAPONode *,CAPONodeTraits>::InsertBefore(v60, v49, &v56);
    else
      ATL::CAtlList<CAPONode *,CAPONodeTraits>::InsertAfter(v60, v49, &v56);
  }
  else if ( a5 )
  {
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddTail(v60, &v56);
  }
  else
  {
    v29 = v60;
    v30 = *v60;
    if ( !v60[4] )
    {
      v38 = ATL::CAtlPlex::Create(v60 + 3, *((unsigned int *)v60 + 10), 0x18uLL);
      if ( !v38 )
        ATL::AtlThrowImpl(-2147024882);
      v39 = *((_DWORD *)v29 + 10);
      v40 = (struct ATL::CAtlPlex *)((char *)v38 + 16 * (v39 - 1) + 8 * (unsigned int)(v39 - 1) + 8);
      for ( i = v39 - 1; i >= 0; --i )
      {
        *(_QWORD *)v40 = v29[4];
        v29[4] = v40;
        v40 = (struct ATL::CAtlPlex *)((char *)v40 - 24);
      }
    }
    v31 = (__int64 *)v29[4];
    v32 = (struct ATL::CAtlPlex *)*v31;
    v31[2] = (__int64)v56;
    v29[4] = v32;
    v31[1] = 0LL;
    *v31 = (__int64)v30;
    v29[2] = (struct ATL::CAtlPlex *)((char *)v29[2] + 1);
    if ( *v29 )
      *((_QWORD *)*v29 + 1) = v31;
    else
      v29[1] = (struct ATL::CAtlPlex *)v31;
    *v29 = (struct ATL::CAtlPlex *)v31;
  }
  *(_QWORD *)&v61 = &v60;
  *((_QWORD *)&v61 + 1) = &v56;
  v76 = v61;
  v77 = 1;
  v33 = *(_QWORD *)(a1 + 136);
  if ( !*(_QWORD *)(a1 + 160) )
  {
    v20 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 152), *(unsigned int *)(a1 + 168), 0x18uLL);
    if ( !v20 )
      ATL::AtlThrowImpl(-2147024882);
    v21 = *(_DWORD *)(a1 + 168);
    v22 = (_QWORD *)((char *)v20 + 16 * (v21 - 1) + 8 * (unsigned int)(v21 - 1) + 8);
    for ( j = v21 - 1; j >= 0; --j )
    {
      *v22 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 160) = v22;
      v22 -= 3;
    }
  }
  v34 = *(__int64 **)(a1 + 160);
  v35 = *v34;
  v34[2] = (__int64)v56;
  *(_QWORD *)(a1 + 160) = v35;
  v34[1] = v33;
  *v34 = 0LL;
  ++*(_QWORD *)(a1 + 144);
  v36 = *(__int64 ***)(a1 + 136);
  if ( v36 )
    *v36 = v34;
  else
    *(_QWORD *)(a1 + 128) = v34;
  *(_QWORD *)(a1 + 136) = v34;
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v72, v75);
  if ( v14 )
    free(v14);
  if ( v13 )
    free(v13);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v59 )
    LeaveCriticalSection(v58);
  return 0LL;
}
