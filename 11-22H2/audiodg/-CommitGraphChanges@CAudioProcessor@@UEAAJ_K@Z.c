/*
 * XREFs of ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x14008ECCC (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000A8CC (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000EBD0 (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x140011BFC (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?CommitConnections@CAPONode@@QEAAJXZ @ 0x140011CD4 (-CommitConnections@CAPONode@@QEAAJXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x1400123D8 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x1400126B8 (-RemoveHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x14001FC28 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetNext@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@@@Z @ 0x14001FFFC (-GetNext@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140022E00 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x140025358 (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioProcessor::CommitGraphChanges(CAudioProcessor *this, __int64 a2)
{
  _BYTE *v4; // r15
  __int64 v5; // rax
  _QWORD *v6; // r14
  CAPONode *v7; // r12
  int v8; // ebx
  int v9; // r14d
  void *v10; // rbx
  void *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r14
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  bool v17; // zf
  _DWORD *v18; // rcx
  CAPONode *v20; // r14
  int v21; // eax
  CAPONode *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  ULONG v26; // [rsp+20h] [rbp-D8h]
  LPCRITICAL_SECTION v27; // [rsp+30h] [rbp-C8h] BYREF
  char v28; // [rsp+38h] [rbp-C0h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-B8h] BYREF
  CAudioProcessor *v30; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A0h] BYREF
  CAPONode *v32; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v33[5]; // [rsp+68h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp-68h] BYREF
  CAudioProcessor **v35; // [rsp+B0h] [rbp-48h]
  __int64 v36; // [rsp+B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v33[2] = this;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x528,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      v26);
    return 2147942406LL;
  }
  if ( !*((_BYTE *)this + 776) )
  {
    v8 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x529,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C0013LL,
      v26);
    return (unsigned int)v8;
  }
  v27 = (LPCRITICAL_SECTION)((char *)this + 88);
  v28 = 0;
  ATL::CCritSecLock::Lock(&v27);
  v4 = (char *)this + 778;
  v30 = (CAudioProcessor *)((char *)this + 778);
  if ( *((_BYTE *)this + 778) && !*((_QWORD *)this + 96) )
    goto LABEL_17;
  v5 = *((_QWORD *)this + 96);
  if ( !v5 )
  {
    v23 = 1332LL;
    goto LABEL_45;
  }
  if ( a2 != *(_QWORD *)(v5 + 16) )
  {
    v23 = 1333LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      v26);
    if ( v28 )
      LeaveCriticalSection(v27);
    return 2147942406LL;
  }
  if ( *((_BYTE *)this + 777) )
  {
    v8 = -2005139407;
    v24 = 1337LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v8,
      v26);
    goto LABEL_49;
  }
  *v4 = 1;
  v6 = **(_QWORD ***)v5;
  while ( v6 )
  {
    v7 = (CAPONode *)v6[2];
    v6 = (_QWORD *)*v6;
    do
    {
      v8 = CAPONode::CommitConnections(v7);
      if ( !*((_BYTE *)this + 779) )
        break;
      if ( v8 < 0 )
        Sleep(1u);
    }
    while ( *((_BYTE *)this + 779) && v8 < 0 );
    if ( v8 < 0 )
    {
      v24 = 1353LL;
      goto LABEL_48;
    }
  }
  v9 = CRealTimeSafeStruct<CProcessingData,1>::SwapRTPointer((__int64)this + 384);
  LeaveCriticalSection((LPCRITICAL_SECTION)this + 18);
  if ( v9 >= 0 )
  {
    v10 = (void *)*((_QWORD *)this + 96);
    if ( v10 )
    {
      v11 = AERTGetDLLRTHeap();
      AERTFree(v10, v11);
    }
    *((_QWORD *)this + 96) = 0LL;
LABEL_17:
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD *, _QWORD))(**((_QWORD **)this + 99) + 24LL))(
      *((_QWORD *)this + 99),
      lpCriticalSection,
      v33,
      0LL);
    v33[1] = (char *)this + 176;
    v31 = *((_QWORD *)this + 22);
    while ( v31 )
    {
      v20 = *(CAPONode **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetNext(v12, &v31);
      v32 = v20;
      ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v33[0], &v32);
      v21 = CAPONode::UnlockForProcess(v20);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x56F,
          (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
          (const char *)(unsigned int)v21,
          v26);
    }
    while ( 1 )
    {
      if ( !*((_QWORD *)this + 24) )
      {
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)this + 128);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
        v13 = (_QWORD *)*((_QWORD *)this + 6 * (*((unsigned __int16 *)this + 168) ^ 1LL) + 28);
        v14 = v13;
        while ( v13 )
        {
          v13 = (_QWORD *)*v14;
          v15 = v14[2];
          v16 = *(_DWORD *)(v15 + 12);
          v17 = v16 + *(_DWORD *)(v15 + 8) == 0;
          *(_DWORD *)(v15 + 8) += v16;
          *(_DWORD *)(v15 + 12) = 0;
          if ( v17 )
            *(_QWORD *)(v15 + 152) = 0LL;
          v8 = CAudioProcessor::EvaluateConnectionOwnership(this, (struct CConnectionNode *)v15);
          v14 = v13;
          if ( v8 < 0 )
          {
            v25 = 1418LL;
            goto LABEL_59;
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        *v4 = 0;
        v18 = (_DWORD *)*((_QWORD *)this + 103);
        if ( *v18 > 5u )
        {
          v30 = this;
          v35 = &v30;
          v36 = 8LL;
          tlgWriteTransfer_EventWriteTransfer((int)v18, (int)&dword_1400B3D35, 0, 0, 3u, &v34);
        }
        if ( v28 )
          LeaveCriticalSection(v27);
        return 0LL;
      }
      v22 = *(CAPONode **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((char *)this + 176);
      do
      {
        v8 = CAPONode::CommitConnections(v22);
        if ( !*((_BYTE *)this + 779) )
          break;
        if ( v8 < 0 )
          Sleep(1u);
      }
      while ( *((_BYTE *)this + 779) && v8 < 0 );
      if ( v8 < 0 )
        break;
      ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveHead((char *)this + 176);
    }
    v25 = 1402LL;
LABEL_59:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v8,
      v26);
    if ( lpCriticalSection[0] )
    {
      LeaveCriticalSection(lpCriticalSection[0]);
      lpCriticalSection[0] = 0LL;
    }
LABEL_49:
    if ( v28 )
      LeaveCriticalSection(v27);
    return (unsigned int)v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x551,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)(unsigned int)v9,
    v26);
  if ( v28 )
    LeaveCriticalSection(v27);
  return (unsigned int)v9;
}
