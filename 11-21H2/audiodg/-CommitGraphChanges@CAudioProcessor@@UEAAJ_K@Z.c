/*
 * XREFs of ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000EF90
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140022288 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000C3DC (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000EDC8 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000F460 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?CommitConnections@CAPONode@@QEAAJXZ @ 0x14000F730 (-CommitConnections@CAPONode@@QEAAJXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011930 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioProcessor::CommitGraphChanges(CAudioProcessor *this, __int64 a2)
{
  __int64 v5; // rax
  _QWORD *v6; // rbx
  CAPONode *v7; // r14
  int v8; // esi
  void *v9; // rbx
  void *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  CAudioProcessor *v19; // r13
  _QWORD **v20; // rbx
  __int64 v21; // rax
  CAPONode *v22; // r15
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  bool v25; // zf
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  struct ATL::CAtlPlex *v31; // r8
  int v32; // edx
  _QWORD *v33; // rcx
  int i; // edx
  int v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rdx
  ULONG UserDataCount; // [rsp+20h] [rbp-C8h]
  ULONG UserDataCountb; // [rsp+20h] [rbp-C8h]
  ULONG UserDataCounta; // [rsp+20h] [rbp-C8h]
  LPCRITICAL_SECTION v41; // [rsp+30h] [rbp-B8h] BYREF
  char v42; // [rsp+38h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-A8h] BYREF
  CAudioProcessor *v44; // [rsp+48h] [rbp-A0h]
  CAudioProcessor *v45; // [rsp+50h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v47[4]; // [rsp+68h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-60h] BYREF
  void *v49; // [rsp+98h] [rbp-50h]
  int v50; // [rsp+A0h] [rbp-48h]
  int v51; // [rsp+A4h] [rbp-44h]
  CAudioProcessor **v52; // [rsp+A8h] [rbp-40h]
  __int64 v53; // [rsp+B0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v44 = this;
  *(_QWORD *)&EventDescriptor.Id = this;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x528,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      UserDataCount);
    return 2147942406LL;
  }
  if ( !*((_BYTE *)this + 776) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x529,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C0013LL,
      UserDataCount);
    return 2289827859LL;
  }
  v41 = (LPCRITICAL_SECTION)((char *)this + 88);
  v42 = 0;
  ATL::CCritSecLock::Lock(&v41);
  if ( *((_BYTE *)this + 778) )
  {
    if ( !*((_QWORD *)this + 96) )
      goto LABEL_17;
    v5 = *((_QWORD *)this + 96);
  }
  else
  {
    v5 = *((_QWORD *)this + 96);
    if ( !v5 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x534,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x80070006LL,
        UserDataCount);
      if ( !v42 )
        return 2147942406LL;
      goto LABEL_62;
    }
  }
  if ( a2 != *(_QWORD *)(v5 + 16) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x535,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      UserDataCount);
    if ( !v42 )
      return 2147942406LL;
LABEL_62:
    LeaveCriticalSection(v41);
    return 2147942406LL;
  }
  if ( *((_BYTE *)this + 777) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x539,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C0031LL,
      UserDataCount);
    if ( v42 )
      LeaveCriticalSection(v41);
    return 2289827889LL;
  }
  *((_BYTE *)this + 778) = 1;
  v6 = **(_QWORD ***)v5;
LABEL_8:
  while ( v6 )
  {
    v7 = (CAPONode *)v6[2];
    v6 = (_QWORD *)*v6;
    do
    {
      v8 = CAPONode::CommitConnections(v7);
      if ( !*((_BYTE *)this + 779) )
        break;
      if ( v8 >= 0 )
        goto LABEL_8;
      Sleep(1u);
    }
    while ( *((_BYTE *)this + 779) );
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x549,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)(unsigned int)v8,
        UserDataCount);
LABEL_69:
      if ( v42 )
        LeaveCriticalSection(v41);
      return (unsigned int)v8;
    }
  }
  v8 = CRealTimeSafeStruct<CProcessingData,1>::SwapRTPointer((__int64)this + 384);
  LeaveCriticalSection((LPCRITICAL_SECTION)this + 18);
  if ( v8 >= 0 )
  {
    v9 = (void *)*((_QWORD *)this + 96);
    if ( v9 )
    {
      v10 = AERTGetDLLRTHeap();
      AERTFree(v9, v10);
    }
    *((_QWORD *)this + 96) = 0LL;
LABEL_17:
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD *, _QWORD))(**((_QWORD **)this + 99) + 24LL))(
      *((_QWORD *)this + 99),
      &lpCriticalSection,
      v47,
      0LL);
    v11 = (_QWORD *)*((_QWORD *)this + 22);
    while ( v11 )
    {
      v12 = v11[2];
      v11 = (_QWORD *)*v11;
      v47[1] = v11;
      v47[2] = v12;
      v13 = v47[0];
      v14 = *(_QWORD *)v47[0];
      if ( !*(_QWORD *)(v47[0] + 32LL) )
      {
        v31 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(v47[0] + 24LL), *(unsigned int *)(v47[0] + 40LL), 0x18uLL);
        if ( !v31 )
          ATL::AtlThrowImpl(-2147024882);
        v32 = *(_DWORD *)(v13 + 40);
        v33 = (_QWORD *)((char *)v31 + 16 * (v32 - 1) + 8 * (unsigned int)(v32 - 1) + 8);
        for ( i = v32 - 1; i >= 0; --i )
        {
          *v33 = *(_QWORD *)(v13 + 32);
          *(_QWORD *)(v13 + 32) = v33;
          v33 -= 3;
        }
      }
      v15 = *(__int64 **)(v13 + 32);
      v16 = *v15;
      v15[2] = v12;
      *(_QWORD *)(v13 + 32) = v16;
      v15[1] = 0LL;
      *v15 = v14;
      ++*(_QWORD *)(v13 + 16);
      if ( *(_QWORD *)v13 )
        *(_QWORD *)(*(_QWORD *)v13 + 8LL) = v15;
      else
        *(_QWORD *)(v13 + 8) = v15;
      *(_QWORD *)v13 = v15;
      if ( *(_BYTE *)(v12 + 56) )
      {
        v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 48) + 48LL))(
                *(_QWORD *)(v12 + 48),
                *(_QWORD *)(v12 + 40));
        v36 = v35;
        if ( v35 >= 0 )
        {
          *(_BYTE *)(v12 + 56) = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E7,
            (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
            (const char *)(unsigned int)v35,
            UserDataCount);
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1FA,
            (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
            (const char *)v36,
            UserDataCountb);
        }
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 24) + 32LL))(*(_QWORD *)(v12 + 24));
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FB,
          (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
          (const char *)(unsigned int)v17,
          UserDataCount);
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x56F,
          (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
          (const char *)v18,
          UserDataCounta);
      }
    }
    v19 = v44;
    while ( *((_QWORD *)this + 24) )
    {
      v20 = (_QWORD **)((char *)this + 176);
      v21 = *((_QWORD *)this + 22);
      if ( !v21 )
        goto LABEL_84;
      v22 = *(CAPONode **)(v21 + 16);
      do
      {
        v8 = CAPONode::CommitConnections(v22);
        if ( !*((_BYTE *)this + 779) )
          break;
        if ( v8 >= 0 )
          goto LABEL_31;
        Sleep(1u);
      }
      while ( *((_BYTE *)v19 + 779) );
      if ( v8 < 0 )
      {
        v37 = 1402LL;
LABEL_82:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v37,
          (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
          (const char *)(unsigned int)v8,
          UserDataCount);
        if ( lpCriticalSection )
        {
          LeaveCriticalSection(lpCriticalSection);
          lpCriticalSection = 0LL;
        }
        goto LABEL_69;
      }
LABEL_31:
      v23 = *v20;
      if ( !*v20 )
LABEL_84:
        ATL::AtlThrowImpl(-2147467259);
      v24 = (_QWORD *)*v23;
      *v20 = (_QWORD *)*v23;
      if ( v24 )
        v24[1] = 0LL;
      else
        *((_QWORD *)this + 23) = 0LL;
      *v23 = *((_QWORD *)this + 26);
      *((_QWORD *)this + 26) = v23;
      v25 = (*((_QWORD *)this + 24))-- == 1LL;
      if ( v25 )
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)this + 176);
    }
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)this + 128);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    v26 = (_QWORD *)*((_QWORD *)this + 6 * (*((unsigned __int16 *)this + 168) ^ 1LL) + 28);
    while ( v26 )
    {
      v27 = v26[2];
      v26 = (_QWORD *)*v26;
      v28 = *(_DWORD *)(v27 + 12);
      v25 = v28 + *(_DWORD *)(v27 + 8) == 0;
      *(_DWORD *)(v27 + 8) += v28;
      *(_DWORD *)(v27 + 12) = 0;
      if ( v25 )
        *(_QWORD *)(v27 + 152) = 0LL;
      v8 = CAudioProcessor::EvaluateConnectionOwnership(this, (struct CConnectionNode *)v27);
      if ( v8 < 0 )
      {
        v37 = 1418LL;
        goto LABEL_82;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    *((_BYTE *)this + 778) = 0;
    v29 = *((_QWORD *)this + 103);
    if ( *(_DWORD *)v29 > 5u )
    {
      v45 = this;
      v52 = &v45;
      v53 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v29 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v49 = &unk_1400A705B;
      v50 = 28;
      v51 = 1;
      LODWORD(v44) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v29 + 32), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
    }
    if ( v42 )
      LeaveCriticalSection(v41);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x551,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)(unsigned int)v8,
    UserDataCount);
  if ( !v42 )
    return (unsigned int)v8;
  LeaveCriticalSection(v41);
  return (unsigned int)v8;
}
