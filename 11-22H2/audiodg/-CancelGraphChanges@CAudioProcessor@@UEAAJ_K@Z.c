/*
 * XREFs of ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EEB0
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x14008ECCC (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000EBD0 (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000EC34 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x140011BFC (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x1400123D8 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x1400126B8 (-RemoveHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x14001FC28 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetNext@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@@@Z @ 0x14001FFFC (-GetNext@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x1400201C4 (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140022E00 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x140025358 (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?CancelConnections@CAPONode@@QEAAJXZ @ 0x14008E944 (-CancelConnections@CAPONode@@QEAAJXZ.c)
 *     ??_GCProcessorTransaction@@QEAAPEAXI@Z @ 0x14008EE84 (--_GCProcessorTransaction@@QEAAPEAXI@Z.c)
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x14008F470 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioProcessor::CancelGraphChanges(CAudioProcessor *this, __int64 a2)
{
  CAudioProcessor *v3; // r14
  int v4; // esi
  CProcessorTransaction **v5; // r15
  __int64 v6; // r12
  struct ATL::CAtlPlex **v7; // r12
  _QWORD *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  _BYTE *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  CAPONode *v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // r13
  __int64 **v17; // rbx
  CAPONode **Head; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  ATL::CAtlException *v24; // rbx
  ATL::CAtlException *v25; // rbx
  int v26; // [rsp+30h] [rbp-E8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-D8h] BYREF
  CAPONode *v29; // [rsp+48h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION v30; // [rsp+50h] [rbp-C8h] BYREF
  struct ATL::CAtlPlex **v31; // [rsp+58h] [rbp-C0h]
  CAudioProcessor *v32; // [rsp+60h] [rbp-B8h]
  CProcessorTransaction **v33; // [rsp+68h] [rbp-B0h]
  struct ATL::CAtlPlex **v34; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE *v35; // [rsp+78h] [rbp-A0h]
  _QWORD *v36; // [rsp+80h] [rbp-98h]
  _BYTE *v37; // [rsp+90h] [rbp-88h]
  ATL::CAtlException *v38; // [rsp+98h] [rbp-80h] BYREF
  ATL::CAtlException *v39; // [rsp+A0h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+B0h] [rbp-68h] BYREF
  int *v41; // [rsp+D0h] [rbp-48h]
  int v42; // [rsp+D8h] [rbp-40h]
  int v43; // [rsp+DCh] [rbp-3Ch]
  LPCRITICAL_SECTION *v44; // [rsp+E0h] [rbp-38h]
  int v45; // [rsp+E8h] [rbp-30h]
  int v46; // [rsp+ECh] [rbp-2Ch]

  v3 = this;
  v32 = this;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = -2147024890;
  }
  else if ( *((_BYTE *)this + 776) )
  {
    v30 = (LPCRITICAL_SECTION)((char *)this + 88);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    if ( *((_BYTE *)v3 + 778) )
    {
      v4 = -2005139406;
    }
    else
    {
      v5 = (CProcessorTransaction **)((char *)v3 + 768);
      v33 = (CProcessorTransaction **)((char *)v3 + 768);
      v6 = *((_QWORD *)v3 + 96);
      if ( v6 && a2 == *(_QWORD *)(v6 + 16) )
      {
        v7 = *(struct ATL::CAtlPlex ***)v6;
        v31 = v7;
        do
        {
          v4 = 0;
          v8 = (_QWORD *)((char *)v3 + 176);
          v28 = (_QWORD *)((char *)v3 + 176);
          if ( v3 == (CAudioProcessor *)-176LL )
            ATL::AtlThrowImpl(-2147467259);
          v9 = *((_QWORD *)v3 + 23);
          while ( v9 )
          {
            try
            {
              v10 = v9;
              v9 = *(_QWORD *)(v9 + 8);
              ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v7, (_QWORD *)(v10 + 16));
            }
            catch ( ATL::CAtlException *v38 )
            {
              v24 = v38;
              if ( *(_DWORD *)v38 == -1073741571 )
                _o__resetstkoflw();
              v26 = *(_DWORD *)v24;
              v4 = v26;
              v7 = v31;
              v3 = v32;
              v8 = v28;
              v5 = v33;
              break;
            }
          }
          v11 = (char *)v3 + 779;
          v35 = (char *)v3 + 779;
          if ( !*((_BYTE *)v3 + 779) )
            break;
          if ( v4 < 0 )
            Sleep(1u);
        }
        while ( *v11 && v4 < 0 );
        if ( v4 >= 0 )
        {
          v37 = (char *)v3 + 777;
          *((_BYTE *)v3 + 777) = 1;
          ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)v8);
          (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, struct ATL::CAtlPlex ***, _QWORD))(**((_QWORD **)v3 + 99)
                                                                                                 + 24LL))(
            *((_QWORD *)v3 + 99),
            &lpCriticalSection,
            &v34,
            0LL);
          v36 = (_QWORD *)((char *)v3 + 128);
          v13 = (_QWORD *)*((_QWORD *)v3 + 16);
          v28 = v13;
          while ( v13 )
          {
            v14 = (CAPONode *)*ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetNext(v12, &v28);
            v29 = v14;
            do
            {
              try
              {
                v4 = 0;
                ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v34, &v29);
              }
              catch ( ATL::CAtlException *v39 )
              {
                v25 = v39;
                if ( *(_DWORD *)v39 == -1073741571 )
                  _o__resetstkoflw();
                v26 = *(_DWORD *)v25;
                v4 = v26;
                v7 = v31;
                v14 = v29;
                v3 = v32;
                v5 = v33;
                v11 = v35;
              }
              if ( !*v11 )
                break;
              if ( v4 < 0 )
                Sleep(1u);
            }
            while ( *v11 && v4 < 0 );
            if ( v4 < 0 )
              goto LABEL_30;
            v15 = ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(v7, (__int64)&v29);
            if ( !v15 )
            {
              v4 = -2147418113;
LABEL_30:
              if ( lpCriticalSection )
                LeaveCriticalSection(lpCriticalSection);
              goto LABEL_50;
            }
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v7, v15);
            CAPONode::UnlockForProcess(v14);
            v13 = v28;
          }
          if ( *v5 )
            CProcessorTransaction::`scalar deleting destructor'(*v5);
          *v5 = 0LL;
          CRealTimeSafeStruct<CProcessingData,1>::NonRTCancelSafePointer((char *)v3 + 384);
          v16 = v36;
          v17 = (__int64 **)v36;
          while ( *((_QWORD *)v3 + 18) )
          {
            Head = (CAPONode **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(v16);
            v4 = CAPONode::CancelConnections(*Head);
            if ( v4 < 0 )
              goto LABEL_30;
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveHead(v17);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 344));
          v19 = (_QWORD *)*((_QWORD *)v3 + 6 * (*((unsigned __int16 *)v3 + 168) ^ 1LL) + 28);
          v20 = v19;
          while ( v19 )
          {
            v19 = (_QWORD *)*v20;
            v21 = v20[2];
            *(_DWORD *)(v21 + 12) = 0;
            if ( !*(_DWORD *)(v21 + 8) )
              *(_QWORD *)(v21 + 152) = 0LL;
            v4 = CAudioProcessor::EvaluateConnectionOwnership(v3, (struct CConnectionNode *)v21);
            v20 = v19;
            if ( v4 < 0 )
              goto LABEL_30;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 344));
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          *v37 = 0;
        }
      }
      else
      {
        v4 = -2147024890;
      }
    }
LABEL_50:
    LeaveCriticalSection(v30);
  }
  else
  {
    v4 = -2005139437;
  }
  v22 = (_DWORD *)*((_QWORD *)v3 + 103);
  if ( *v22 > 5u )
  {
    v30 = (LPCRITICAL_SECTION)v3;
    v26 = v4;
    v44 = &v30;
    v45 = 8;
    v46 = 0;
    v41 = &v26;
    v42 = 4;
    v43 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v22, (unsigned __int8 *)dword_1400B3D5D, 0LL, 0LL, 4u, &v40);
  }
  return (unsigned int)v4;
}
