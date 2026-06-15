/*
 * XREFs of ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x140081B40
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140022288 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000CF38 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000F460 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x140068A98 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x140068B94 (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@@@Z @ 0x140068C78 (-GetNext@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@.c)
 *     ?CancelConnections@CAPONode@@QEAAJXZ @ 0x1400816E4 (-CancelConnections@CAPONode@@QEAAJXZ.c)
 *     ??_GCProcessorTransaction@@QEAAPEAXI@Z @ 0x140081A0C (--_GCProcessorTransaction@@QEAAPEAXI@Z.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x14008202C (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x140082358 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x140082564 (-RemoveHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140082754 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x14008288C (_tlgWriteTransfer_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioProcessor::CancelGraphChanges(CAudioProcessor *this, __int64 a2)
{
  CAudioProcessor *v3; // rbx
  CAudioProcessor *v4; // r14
  int v5; // esi
  __int64 v6; // r15
  __int64 *v7; // r15
  _QWORD *v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  CAPONode *v13; // r12
  __int64 *v14; // rax
  CProcessorTransaction *v15; // rcx
  CAPONode **Head; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  ATL::CAtlException *v24; // rbx
  ATL::CAtlException *v25; // rbx
  int v26; // [rsp+30h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-B8h] BYREF
  CAPONode *v29; // [rsp+48h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION v30; // [rsp+50h] [rbp-A8h] BYREF
  __int64 *v31; // [rsp+58h] [rbp-A0h]
  CAudioProcessor *v32; // [rsp+60h] [rbp-98h]
  __int64 *v33; // [rsp+70h] [rbp-88h] BYREF
  ATL::CAtlException *v34; // [rsp+78h] [rbp-80h] BYREF
  ATL::CAtlException *v35; // [rsp+80h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+90h] [rbp-68h] BYREF
  int *v37; // [rsp+B0h] [rbp-48h]
  int v38; // [rsp+B8h] [rbp-40h]
  int v39; // [rsp+BCh] [rbp-3Ch]
  LPCRITICAL_SECTION *v40; // [rsp+C0h] [rbp-38h]
  int v41; // [rsp+C8h] [rbp-30h]
  int v42; // [rsp+CCh] [rbp-2Ch]

  v3 = this;
  v4 = this;
  v32 = this;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v5 = -2147024890;
  }
  else if ( *((_BYTE *)this + 776) )
  {
    v30 = (LPCRITICAL_SECTION)((char *)this + 88);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    if ( *((_BYTE *)v3 + 778) )
    {
      v5 = -2005139406;
    }
    else
    {
      v6 = *((_QWORD *)v3 + 96);
      if ( v6 && a2 == *(_QWORD *)(v6 + 16) )
      {
        v7 = *(__int64 **)v6;
        v31 = v7;
        do
        {
          v5 = 0;
          v8 = (_QWORD *)((char *)v4 + 176);
          v28 = (_QWORD *)((char *)v4 + 176);
          if ( v4 == (CAudioProcessor *)-176LL )
            ATL::AtlThrowImpl(-2147467259);
          v9 = *((_QWORD *)v4 + 23);
          while ( v9 )
          {
            try
            {
              v10 = v9;
              v9 = *(_QWORD *)(v9 + 8);
              ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v7, v10 + 16);
            }
            catch ( ATL::CAtlException *v34 )
            {
              v24 = v34;
              if ( *(_DWORD *)v34 == -1073741571 )
                _o__resetstkoflw();
              v26 = *(_DWORD *)v24;
              v5 = v26;
              v7 = v31;
              v4 = v32;
              v8 = v28;
              v3 = v32;
              break;
            }
          }
          if ( !*((_BYTE *)v4 + 779) )
            break;
          if ( v5 >= 0 )
            goto LABEL_19;
          Sleep(1u);
        }
        while ( *((_BYTE *)v3 + 779) );
        if ( v5 < 0 )
          goto LABEL_46;
LABEL_19:
        *((_BYTE *)v4 + 777) = 1;
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)v8);
        (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, __int64 **, _QWORD))(**((_QWORD **)v4 + 99) + 24LL))(
          *((_QWORD *)v4 + 99),
          &lpCriticalSection,
          &v33,
          0LL);
        v12 = (_QWORD *)*((_QWORD *)v4 + 16);
        v28 = v12;
        while ( v12 )
        {
          v13 = (CAPONode *)*ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetNext(v11, &v28);
          v29 = v13;
          do
          {
            try
            {
              v5 = 0;
              ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v33, (__int64)&v29);
            }
            catch ( ATL::CAtlException *v35 )
            {
              v25 = v35;
              if ( *(_DWORD *)v35 == -1073741571 )
                _o__resetstkoflw();
              v26 = *(_DWORD *)v25;
              v5 = v26;
              v7 = v31;
              v13 = v29;
              v4 = v32;
              v3 = v32;
            }
            if ( !*((_BYTE *)v4 + 779) )
              break;
            if ( v5 >= 0 )
              goto LABEL_28;
            Sleep(1u);
          }
          while ( *((_BYTE *)v3 + 779) );
          if ( v5 < 0 )
            goto LABEL_26;
LABEL_28:
          v14 = (__int64 *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(v7, &v29);
          if ( !v14 )
          {
            v5 = -2147418113;
LABEL_26:
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            goto LABEL_46;
          }
          ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt((__int64 **)v7, v14);
          CAPONode::UnlockForProcess(v13);
          v12 = v28;
        }
        v15 = (CProcessorTransaction *)*((_QWORD *)v4 + 96);
        if ( v15 )
          CProcessorTransaction::`scalar deleting destructor'(v15);
        *((_QWORD *)v4 + 96) = 0LL;
        CRealTimeSafeStruct<CProcessingData,1>::NonRTCancelSafePointer((char *)v4 + 384);
        while ( *((_QWORD *)v4 + 18) )
        {
          Head = (CAPONode **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)v4 + 16);
          v5 = CAPONode::CancelConnections(*Head, v17, v18);
          if ( v5 < 0 )
            goto LABEL_26;
          ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveHead((char *)v4 + 128);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 344));
        v19 = (_QWORD *)*((_QWORD *)v4 + 6 * (*((unsigned __int16 *)v4 + 168) ^ 1LL) + 28);
        while ( v19 )
        {
          v20 = (_QWORD *)*v19;
          v21 = v19[2];
          *(_DWORD *)(v21 + 12) = 0;
          if ( !*(_DWORD *)(v21 + 8) )
            *(_QWORD *)(v21 + 152) = 0LL;
          v5 = CAudioProcessor::EvaluateConnectionOwnership(v4, (struct CConnectionNode *)v21);
          v19 = v20;
          if ( v5 < 0 )
            goto LABEL_26;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 344));
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        *((_BYTE *)v4 + 777) = 0;
      }
      else
      {
        v5 = -2147024890;
      }
    }
LABEL_46:
    LeaveCriticalSection(v30);
  }
  else
  {
    v5 = -2005139437;
  }
  v22 = (_DWORD *)*((_QWORD *)v4 + 103);
  if ( *v22 > 5u )
  {
    v30 = (LPCRITICAL_SECTION)v4;
    v26 = v5;
    v40 = &v30;
    v41 = 8;
    v42 = 0;
    v37 = &v26;
    v38 = 4;
    v39 = 0;
    tlgWriteTransfer_EventWriteTransfer((int)v22, (int)&dword_1400A7078, 0, 0, 4u, &v36);
  }
  return (unsigned int)v5;
}
