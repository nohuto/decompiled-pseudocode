/*
 * XREFs of ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400104C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAUIAudioProcessingObject@@AEAPEAU__POSITION@@@Z @ 0x14000FDBC (-FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ValidateConnection@CAudioProcessor@@IEAAJPEAVCConnectionNode@@PEAUIAudioProcessingObject@@PEAUAPO_REG_PROPERTIES@@PEAV?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@_N@Z @ 0x1400102A8 (-ValidateConnection@CAudioProcessor@@IEAAJPEAVCConnectionNode@@PEAUIAudioProcessingObject@@PEAUA.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140010354 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?FindConnectionIndex@CAudioProcessor@@AEAAJAEBV?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@PEBVCConnectionNode@@AEA_K@Z @ 0x14001039C (-FindConnectionIndex@CAudioProcessor@@AEAAJAEBV-$CAtlArray@PEAVCConnectionNode@@VCConnectionNode.c)
 *     ?FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z @ 0x1400103E0 (-FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x140011BFC (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?Add@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAA_KAEBQEAVCConnectionNode@@@Z @ 0x140012EE4 (-Add@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAA_KAEBQEAVCConnectionNode.c)
 *     ?Add@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAA_KAEBQEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@Z @ 0x140012F3C (-Add@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_PR.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioProcessor::AddAPOInputConnection(
        CAudioProcessor *this,
        __int64 a2,
        struct IAudioProcessingObject *a3,
        __int64 a4)
{
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  unsigned int v9; // edi
  void *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 APOInList; // r8
  struct CConnectionNode *ConnectionInObjectCache; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // r14d
  int v22; // eax
  void *v23; // rcx
  __int64 v25; // rdx
  void *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  void *v29; // rcx
  bool v30; // zf
  void *v31; // rcx
  int v32; // [rsp+20h] [rbp-C8h]
  int v33; // [rsp+20h] [rbp-C8h]
  LPVOID pv; // [rsp+30h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION v36; // [rsp+40h] [rbp-A8h] BYREF
  char v37; // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+50h] [rbp-98h] BYREF
  __int128 v39; // [rsp+58h] [rbp-90h] BYREF
  char v40; // [rsp+68h] [rbp-80h]
  struct CConnectionNode *v41; // [rsp+70h] [rbp-78h] BYREF
  __int64 v42; // [rsp+78h] [rbp-70h] BYREF
  __int64 v43; // [rsp+80h] [rbp-68h] BYREF
  _QWORD **v44; // [rsp+88h] [rbp-60h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-48h]
  char v46; // [rsp+B0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v48; // [rsp+100h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95A,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070057LL,
      v32);
    return v9;
  }
  if ( ((a4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v25 = 2395LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      v32);
    return 2147942406LL;
  }
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v25 = 2396LL;
    goto LABEL_26;
  }
  pv = 0LL;
  lpVtbl = a3->lpVtbl;
  *(_QWORD *)&v39 = &pv;
  *((_QWORD *)&v39 + 1) = 0LL;
  v40 = 1;
  v9 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, char *))lpVtbl->GetRegistrationProperties)(
         a3,
         (char *)&v39 + 8);
  if ( v40 )
  {
    v10 = *(void **)v39;
    *(_QWORD *)v39 = *((_QWORD *)&v39 + 1);
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( (v9 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95F,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v32);
LABEL_28:
    v26 = pv;
    pv = 0LL;
    if ( v26 )
      CoTaskMemFree(v26);
    return v9;
  }
  v36 = (LPCRITICAL_SECTION)((char *)this + 88);
  v37 = 0;
  ATL::CCritSecLock::Lock(&v36);
  v11 = CAudioProcessor::ValidateTransactionState(this, a2);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x964,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v11,
      v32);
LABEL_31:
    if ( v37 )
      LeaveCriticalSection(v36);
    goto LABEL_28;
  }
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD ***, _QWORD))(**((_QWORD **)this + 99) + 24LL))(
    *((_QWORD *)this + 99),
    &lpCriticalSection,
    &v44,
    0LL);
  APOInList = CAudioProcessor::FindAPOInList(v12, v44, (__int64)a3, &v48);
  v38 = APOInList;
  if ( !APOInList )
  {
    APOInList = CAudioProcessor::FindAPOInList(v13, (_QWORD **)this + 22, (__int64)a3, &v48);
    v38 = APOInList;
    if ( !APOInList )
    {
      v27 = 2417LL;
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x887C001ALL,
        v32);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      if ( v37 )
        LeaveCriticalSection(v36);
      v29 = pv;
      v30 = pv == 0LL;
      pv = 0LL;
      if ( !v30 )
        CoTaskMemFree(v29);
      return 2289827866LL;
    }
  }
  if ( *(_QWORD *)(APOInList + 136) == *((_DWORD *)pv + 264) )
  {
    v9 = -2005139429;
    v28 = 2421LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v32);
LABEL_39:
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    goto LABEL_31;
  }
  ConnectionInObjectCache = CAudioProcessor::FindConnectionInObjectCache(this, a4);
  v17 = (__int64)ConnectionInObjectCache;
  v41 = ConnectionInObjectCache;
  if ( !ConnectionInObjectCache )
  {
    v27 = 2425LL;
    goto LABEL_42;
  }
  if ( (int)CAudioProcessor::FindConnectionIndex(v16, (_QWORD *)(v38 + 128), (__int64)ConnectionInObjectCache, &v48) >= 0 )
  {
    v9 = -2147024809;
    v28 = 2429LL;
    goto LABEL_37;
  }
  v20 = CAudioProcessor::ValidateConnection(v18, v17, v19, (__int64)pv, (__int64 **)(v38 + 160));
  v21 = v20;
  if ( v20 >= 0 )
  {
    v42 = ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Add(v38 + 128, &v41);
    *(_QWORD *)&v39 = &v38;
    *((_QWORD *)&v39 + 1) = &v42;
    v45 = v39;
    v46 = 1;
    v43 = ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Add(
            v38 + 256,
            v17 + 104);
    *(_QWORD *)&v39 = &v38;
    *((_QWORD *)&v39 + 1) = &v43;
    v40 = 1;
    ++*(_DWORD *)(v17 + 12);
    *(_QWORD *)(v17 + 152) = this;
    v22 = CAudioProcessor::EvaluateConnectionOwnership(this, (struct CConnectionNode *)v17);
    v9 = v22;
    if ( v22 >= 0 )
    {
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      if ( v37 )
        LeaveCriticalSection(v36);
      v23 = pv;
      pv = 0LL;
      if ( v23 )
        CoTaskMemFree(v23);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x991,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v22,
      v33);
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v38 + 256, v43);
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v38 + 128, v42);
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x981,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)(unsigned int)v20,
    v33);
  if ( lpCriticalSection )
  {
    LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = 0LL;
  }
  if ( v37 )
    LeaveCriticalSection(v36);
  v31 = pv;
  pv = 0LL;
  if ( v31 )
    CoTaskMemFree(v31);
  return v21;
}
