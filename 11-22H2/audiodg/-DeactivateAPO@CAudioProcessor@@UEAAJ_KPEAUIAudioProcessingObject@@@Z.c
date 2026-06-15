/*
 * XREFs of ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x140020030
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x14008ECCC (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000EC34 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAUIAudioProcessingObject@@AEAPEAU__POSITION@@@Z @ 0x14000FDBC (-FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140010354 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x1400123D8 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x1400201C4 (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140022E00 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioProcessor::DeactivateAPO(
        struct ATL::CAtlPlex **this,
        __int64 a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rcx
  CAPONode *APOInList; // r12
  struct ATL::CAtlPlex **v10; // r15
  _QWORD *v11; // rax
  _QWORD *v12; // r9
  unsigned int v14; // ebx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-88h]
  CAPONode *v17; // [rsp+30h] [rbp-78h] BYREF
  struct ATL::CAtlPlex **v18[3]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD **v19; // [rsp+50h] [rbp-58h]
  LPCRITICAL_SECTION v20; // [rsp+68h] [rbp-40h] BYREF
  char v21; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v23; // [rsp+C0h] [rbp+18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C8h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v14 = -2147467261;
    v15 = 2170LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v14,
      v16);
    return v14;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v14 = -2147024890;
    v15 = 2171LL;
    goto LABEL_23;
  }
  v20 = (LPCRITICAL_SECTION)(this + 11);
  v21 = 0;
  ATL::CCritSecLock::Lock(&v20);
  v6 = CAudioProcessor::ValidateTransactionState((CAudioProcessor *)this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x881,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v6,
      v16);
    if ( v21 )
      LeaveCriticalSection(v20);
    return v7;
  }
  else
  {
    (*(void (__fastcall **)(struct ATL::CAtlPlex *, LPCRITICAL_SECTION *, struct ATL::CAtlPlex ***, _QWORD))(*(_QWORD *)this[99] + 24LL))(
      this[99],
      &lpCriticalSection,
      v18,
      0LL);
    v19 = (_QWORD **)(this + 96);
    APOInList = (CAPONode *)CAudioProcessor::FindAPOInList(v8, *(_QWORD ***)this[96], (__int64)a3, &v23);
    v17 = APOInList;
    if ( APOInList )
    {
      v18[2] = this + 16;
      v10 = (struct ATL::CAtlPlex **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(this + 16, &v17);
      v18[1] = v10;
      if ( v10 )
      {
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v18[0], &v17);
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(this + 16, v10);
        CAPONode::UnlockForProcess(APOInList);
      }
      else
      {
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(this + 22, &v17);
      }
      v11 = (_QWORD *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(**v19, &v17);
      ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v12, v11);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      if ( v21 )
        LeaveCriticalSection(v20);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x889,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x887C001ALL,
        v16);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      if ( v21 )
        LeaveCriticalSection(v20);
      return 2289827866LL;
    }
  }
}
