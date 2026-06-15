/*
 * XREFs of ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E270
 * Callers:
 *     <none>
 * Callees:
 *     memmove_s @ 0x14000A578 (memmove_s.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000EDC8 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000F460 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?ValidateConnection@CAudioProcessor@@IEAAJPEAVCConnectionNode@@PEAUIAudioProcessingObject@@PEAUAPO_REG_PROPERTIES@@PEAV?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@_N@Z @ 0x140010FE0 (-ValidateConnection@CAudioProcessor@@IEAAJPEAVCConnectionNode@@PEAUIAudioProcessingObject@@PEAUA.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x14001108C (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140068F80 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     ?FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAUIAudioProcessingObject@@AEAPEAU__POSITION@@@Z @ 0x14008205C (-FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioProcessor::AddAPOInputConnection(
        CAudioProcessor *this,
        unsigned __int64 a2,
        struct IAudioProcessingObject *a3,
        __int64 a4)
{
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v9; // r14d
  void *v10; // rcx
  int v11; // eax
  unsigned int v12; // esi
  _QWORD *v13; // rcx
  __int64 APOInList; // rdx
  struct _RTL_CRITICAL_SECTION *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *p_Type; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rbx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rcx
  size_t v27; // rax
  size_t v28; // rdi
  void *v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rcx
  size_t v33; // rax
  size_t v34; // rdi
  void *v35; // rax
  int v36; // eax
  void *v37; // rcx
  void *v39; // r12
  errno_t v40; // eax
  void *v41; // r12
  errno_t v42; // eax
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  void *v48; // rcx
  void *v49; // rcx
  __int64 v50; // rdx
  int v51; // [rsp+20h] [rbp-D8h]
  int v52; // [rsp+20h] [rbp-D8h]
  LPVOID pv; // [rsp+30h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION v54; // [rsp+38h] [rbp-C0h] BYREF
  LPCRITICAL_SECTION v55; // [rsp+40h] [rbp-B8h] BYREF
  char v56; // [rsp+48h] [rbp-B0h]
  __int64 v57; // [rsp+50h] [rbp-A8h] BYREF
  __int128 p_pv; // [rsp+58h] [rbp-A0h] BYREF
  char v59; // [rsp+68h] [rbp-90h]
  __int64 v60; // [rsp+70h] [rbp-88h]
  unsigned __int64 v61; // [rsp+78h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v62; // [rsp+80h] [rbp-78h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 v64; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v65; // [rsp+98h] [rbp-60h] BYREF
  __int128 v66; // [rsp+B0h] [rbp-48h]
  char v67; // [rsp+C0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  char *v69; // [rsp+110h] [rbp+18h] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95A,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070057LL,
      v51);
    return 2147942487LL;
  }
  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v50 = 2395LL;
    goto LABEL_134;
  }
  if ( a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v50 = 2396LL;
LABEL_134:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      v51);
    return 2147942406LL;
  }
  pv = 0LL;
  lpVtbl = a3->lpVtbl;
  p_pv = (unsigned __int64)&pv;
  v59 = 1;
  v9 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, char *))lpVtbl->GetRegistrationProperties)(
         a3,
         (char *)&p_pv + 8);
  if ( v59 )
  {
    v10 = *(void **)p_pv;
    *(_QWORD *)p_pv = *((_QWORD *)&p_pv + 1);
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95F,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v9,
      v51);
    v43 = pv;
    pv = 0LL;
    if ( v43 )
      CoTaskMemFree(v43);
    return (unsigned int)v9;
  }
  v55 = (LPCRITICAL_SECTION)((char *)this + 88);
  v56 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v55);
  v11 = CAudioProcessor::ValidateTransactionState(this, a2);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x964,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v11,
      v51);
    if ( v56 )
      LeaveCriticalSection(v55);
    v44 = pv;
    pv = 0LL;
    if ( v44 )
      CoTaskMemFree(v44);
    return v12;
  }
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD **, _QWORD))(**((_QWORD **)this + 99) + 24LL))(
    *((_QWORD *)this + 99),
    &v54,
    &v65,
    0LL);
  v13 = (_QWORD *)*v65;
  if ( !*v65 )
    goto LABEL_75;
  while ( 1 )
  {
    APOInList = v13[2];
    v13 = (_QWORD *)*v13;
    if ( *(struct IAudioProcessingObject **)(APOInList + 8) == a3 )
      break;
    if ( !v13 )
      goto LABEL_75;
  }
  v57 = APOInList;
  if ( !APOInList )
  {
LABEL_75:
    APOInList = CAudioProcessor::FindAPOInList(v13, (char *)this + 176, a3, &v69);
    v57 = APOInList;
    if ( !APOInList )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x971,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x887C001ALL,
        v51);
      if ( v54 )
      {
        LeaveCriticalSection(v54);
        v54 = 0LL;
      }
      if ( v56 )
        LeaveCriticalSection(v55);
      v45 = pv;
      pv = 0LL;
      if ( !v45 )
        return 2289827866LL;
      goto LABEL_94;
    }
  }
  if ( *(_QWORD *)(APOInList + 136) == *((_DWORD *)pv + 264) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x975,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C001BLL,
      v51);
    if ( v54 )
    {
      LeaveCriticalSection(v54);
      v54 = 0LL;
    }
    if ( v56 )
      LeaveCriticalSection(v55);
    v46 = pv;
    pv = 0LL;
    if ( v46 )
      CoTaskMemFree(v46);
    return 2289827867LL;
  }
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)this + 99)
                                                                                                + 24LL))(
    *((_QWORD *)this + 99),
    &lpCriticalSection,
    0LL,
    &v62);
  v15 = v62;
  EnterCriticalSection(v62 + 3);
  v16 = 6 * (LOWORD(v15[2].SpinCount) ^ 1LL);
  v17 = 0LL;
  v60 = 0LL;
  p_Type = &(&v15->DebugInfo)[v16]->Type;
  if ( p_Type )
  {
    while ( 1 )
    {
      v19 = p_Type[2];
      p_Type = (_QWORD *)*p_Type;
      if ( *(_QWORD *)(v19 + 16) == a4 )
        break;
      if ( !p_Type )
        goto LABEL_20;
    }
    v17 = v19;
    v60 = v19;
  }
LABEL_20:
  LeaveCriticalSection(v62 + 3);
  if ( lpCriticalSection )
  {
    LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = 0LL;
  }
  if ( !v17 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x979,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C001ALL,
      v51);
    if ( v54 )
    {
      LeaveCriticalSection(v54);
      v54 = 0LL;
    }
    if ( v56 )
      LeaveCriticalSection(v55);
    v45 = pv;
    pv = 0LL;
    if ( !v45 )
      return 2289827866LL;
LABEL_94:
    CoTaskMemFree(v45);
    return 2289827866LL;
  }
  v20 = *(_QWORD *)(v57 + 136);
  v21 = 0LL;
  if ( !v20 )
  {
LABEL_24:
    v22 = CAudioProcessor::ValidateConnection(v57, v17, v21, (_DWORD)pv, v57 + 160);
    v23 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x981,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)(unsigned int)v22,
        v52);
      if ( v54 )
      {
        LeaveCriticalSection(v54);
        v54 = 0LL;
      }
      if ( v56 )
        LeaveCriticalSection(v55);
      v48 = pv;
      pv = 0LL;
      if ( v48 )
        CoTaskMemFree(v48);
      return v23;
    }
    v24 = v57;
    v25 = *(_QWORD *)(v57 + 136);
    v26 = *(_QWORD *)(v57 + 144);
    if ( v25 < v26 || (v27 = v25 + 1, v25 + 1 <= v26) )
    {
LABEL_32:
      *(_QWORD *)(*(_QWORD *)(v24 + 128) + 8 * v25) = v17;
      ++*(_QWORD *)(v24 + 136);
      v61 = v25;
      *(_QWORD *)&p_pv = &v57;
      *((_QWORD *)&p_pv + 1) = &v61;
      v66 = p_pv;
      v67 = 1;
      v30 = v57;
      v31 = *(_QWORD *)(v57 + 264);
      v32 = *(_QWORD *)(v57 + 272);
      if ( v31 < v32 )
        goto LABEL_39;
      v33 = v31 + 1;
      if ( v31 + 1 <= v32 )
        goto LABEL_39;
      v34 = *(int *)(v57 + 280);
      if ( *(_QWORD *)(v57 + 256) )
      {
        if ( !*(_DWORD *)(v57 + 280) )
        {
          v34 = v32 >> 1;
          if ( v33 - v32 > v32 >> 1 )
            v34 = v33 - v32;
        }
        v34 += v32;
        if ( v33 >= v34 )
          v34 = v31 + 1;
        v41 = calloc(v34, 8uLL);
        if ( v41 )
        {
          v42 = memmove_s(
                  v41,
                  8LL * *(_QWORD *)(v30 + 264),
                  *(const void *const *)(v30 + 256),
                  8LL * *(_QWORD *)(v30 + 264));
          if ( v42 )
          {
            if ( v42 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v42 == 22 || v42 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v42 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
          free(*(void **)(v30 + 256));
          *(_QWORD *)(v30 + 256) = v41;
          goto LABEL_38;
        }
      }
      else
      {
        if ( v34 <= v33 )
          v34 = v31 + 1;
        v35 = calloc(v34, 8uLL);
        *(_QWORD *)(v30 + 256) = v35;
        if ( v35 )
        {
LABEL_38:
          *(_QWORD *)(v30 + 272) = v34;
LABEL_39:
          *(_QWORD *)(*(_QWORD *)(v30 + 256) + 8 * v31) = *(_QWORD *)(v17 + 104);
          ++*(_QWORD *)(v30 + 264);
          v64 = v31;
          *(_QWORD *)&p_pv = &v57;
          *((_QWORD *)&p_pv + 1) = &v64;
          v59 = 1;
          ++*(_DWORD *)(v17 + 12);
          *(_QWORD *)(v17 + 152) = this;
          v36 = CAudioProcessor::EvaluateConnectionOwnership(this, (struct CConnectionNode *)v17);
          v23 = v36;
          if ( v36 >= 0 )
          {
            if ( v54 )
              LeaveCriticalSection(v54);
            if ( v56 )
              LeaveCriticalSection(v55);
            v37 = pv;
            pv = 0LL;
            if ( v37 )
              CoTaskMemFree(v37);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x991,
            (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
            (const char *)(unsigned int)v36,
            v52);
          ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v57 + 256, v64);
          ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v57 + 128, v61);
          if ( v54 )
          {
            LeaveCriticalSection(v54);
            v54 = 0LL;
          }
          if ( v56 )
            LeaveCriticalSection(v55);
          v49 = pv;
          pv = 0LL;
          if ( v49 )
          {
            CoTaskMemFree(v49);
            return v23;
          }
          return v23;
        }
      }
      ATL::AtlThrowImpl(-2147024882);
    }
    v28 = *(int *)(v57 + 152);
    if ( *(_QWORD *)(v57 + 128) )
    {
      if ( !*(_DWORD *)(v57 + 152) )
      {
        v28 = v26 >> 1;
        if ( v27 - v26 > v26 >> 1 )
          v28 = v27 - v26;
      }
      v28 += v26;
      if ( v27 >= v28 )
        v28 = v25 + 1;
      v39 = calloc(v28, 8uLL);
      if ( v39 )
      {
        v40 = memmove_s(
                v39,
                8LL * *(_QWORD *)(v24 + 136),
                *(const void *const *)(v24 + 128),
                8LL * *(_QWORD *)(v24 + 136));
        if ( v40 )
        {
          if ( v40 == 12 )
            ATL::AtlThrowImpl(-2147024882);
          if ( v40 == 22 || v40 == 34 )
            ATL::AtlThrowImpl(-2147024809);
          if ( v40 != 80 )
            ATL::AtlThrowImpl(-2147467259);
        }
        free(*(void **)(v24 + 128));
        *(_QWORD *)(v24 + 128) = v39;
        goto LABEL_31;
      }
    }
    else
    {
      if ( v28 <= v27 )
        v28 = v25 + 1;
      v29 = calloc(v28, 8uLL);
      *(_QWORD *)(v24 + 128) = v29;
      if ( v29 )
      {
LABEL_31:
        *(_QWORD *)(v24 + 144) = v28;
        goto LABEL_32;
      }
    }
    ATL::AtlThrowImpl(-2147024882);
  }
  while ( *(_QWORD *)(*(_QWORD *)(v57 + 128) + 8 * v21) != v17 )
  {
    if ( ++v21 >= v20 )
      goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x97D,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)0x80070057LL,
    v51);
  if ( v54 )
  {
    LeaveCriticalSection(v54);
    v54 = 0LL;
  }
  if ( v56 )
    LeaveCriticalSection(v55);
  v47 = pv;
  pv = 0LL;
  if ( v47 )
    CoTaskMemFree(v47);
  return 2147942487LL;
}
