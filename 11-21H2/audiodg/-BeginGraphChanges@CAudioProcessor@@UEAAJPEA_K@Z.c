/*
 * XREFs of ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14000BF30
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140022288 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x14000C168 (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000EDC8 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCProcessorTransaction@@QEAAPEAXI@Z @ 0x140081A0C (--_GCProcessorTransaction@@QEAAPEAXI@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14008231C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CAudioProcessor::BeginGraphChanges(CAudioProcessor *this, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  void *v5; // rax
  _QWORD *v6; // rdi
  ULONGLONG v7; // rax
  unsigned __int64 v8; // rcx
  char v9; // cl
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned __int16 *v13; // rax
  REGHANDLE v14; // rcx
  unsigned int v15; // edi
  unsigned int v17; // ebx
  __int64 v18; // rdx
  ULONGLONG TickCount64; // rax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned int v24; // edx
  CProcessorTransaction *v25; // rcx
  int UserDataCount; // [rsp+20h] [rbp-39h]
  const char *UserData; // [rsp+28h] [rbp-31h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-29h] BYREF
  char v29; // [rsp+38h] [rbp-21h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-9h]
  CAudioProcessor *v32; // [rsp+58h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+60h] [rbp+7h] BYREF
  void *v34; // [rsp+70h] [rbp+17h]
  int v35; // [rsp+78h] [rbp+1Fh]
  int v36; // [rsp+7Ch] [rbp+23h]
  CAudioProcessor **v37; // [rsp+80h] [rbp+27h]
  int v38; // [rsp+88h] [rbp+2Fh]
  int v39; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( !a2 )
  {
    v17 = -2147467261;
    v18 = 1248LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v17,
      UserDataCount);
    return v17;
  }
  if ( !*((_BYTE *)this + 776) )
  {
    v17 = -2005139437;
    v18 = 1249LL;
    goto LABEL_23;
  }
  v29 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 88);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *((_QWORD *)this + 96);
  if ( !v4 )
    goto LABEL_4;
  TickCount64 = GetTickCount64();
  v20 = retaddr;
  if ( TickCount64 > *(_QWORD *)(v4 + 8) )
  {
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      (void *)0x4E9,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C0033LL,
      (int)"Prior transaction timed out",
      UserData);
    v21 = (*(__int64 (__fastcall **)(CAudioProcessor *, _QWORD))(*(_QWORD *)this + 48LL))(
            this,
            *(_QWORD *)(*((_QWORD *)this + 96) + 16LL));
    v15 = v21;
    if ( v21 < 0 )
    {
      v22 = (unsigned int)v21;
      v23 = 1258LL;
LABEL_32:
      v20 = retaddr;
      goto LABEL_33;
    }
LABEL_4:
    if ( *((_BYTE *)this + 778) )
    {
      v15 = -2005139406;
      v23 = 1265LL;
    }
    else
    {
      do
      {
        v5 = AERTGetDLLRTHeap();
        v6 = AERTAllocate(0x18uLL, v5);
        if ( v6 )
        {
          v7 = GetTickCount64();
          v8 = CProcessorTransaction::m_LastTransactionHandle + 1;
          v6[1] = v7 + 10000;
          CProcessorTransaction::m_LastTransactionHandle = v8;
          v6[2] = v8;
        }
        else
        {
          v6 = 0LL;
        }
        v9 = *((_BYTE *)this + 779);
        v10 = v6;
        *((_QWORD *)this + 96) = v6;
        if ( !v9 )
          break;
        if ( !v6 )
        {
          Sleep(1u);
          v10 = (_QWORD *)*((_QWORD *)this + 96);
          if ( !*((_BYTE *)this + 779) )
            break;
        }
      }
      while ( !v10 );
      if ( v10 )
      {
        *(_QWORD *)&EventDescriptor.Id = this;
        **((_QWORD **)this + 96) = CRealTimeSafeStruct<CProcessingData,1>::NonRTGrabSafePointer((char *)this + 384);
        v11 = (_QWORD *)*((_QWORD *)this + 96);
        if ( *v11 )
        {
          v12 = *((_QWORD *)this + 103);
          if ( *(_DWORD *)v12 > 5u )
          {
            v39 = 0;
            EventDescriptor.Keyword = 0LL;
            v37 = &v32;
            *(_DWORD *)&EventDescriptor.Level = 5;
            v13 = *(unsigned __int16 **)(v12 + 8);
            v14 = *(_QWORD *)(v12 + 32);
            v33.Ptr = (ULONGLONG)v13;
            v32 = this;
            v38 = 8;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            v33.Size = *v13;
            v34 = &unk_1400A70B5;
            v33.Reserved = 2;
            v35 = 27;
            v36 = 1;
            v31 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EventWriteTransfer(v14, &EventDescriptor, 0LL, 0LL, 3u, &v33);
            v11 = (_QWORD *)*((_QWORD *)this + 96);
          }
          v15 = 0;
          *a2 = v11[2];
        }
        else
        {
          v15 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4FB,
            (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
            (const char *)0x8007000ELL,
            UserDataCount);
          v25 = (CProcessorTransaction *)*((_QWORD *)this + 96);
          if ( v25 )
            CProcessorTransaction::`scalar deleting destructor'(v25, v24);
          *((_QWORD *)this + 96) = 0LL;
        }
        goto LABEL_13;
      }
      v15 = -2147024882;
      v23 = 1270LL;
    }
    v22 = v15;
    goto LABEL_32;
  }
  v15 = -2005139409;
  v23 = 1254LL;
  v22 = 2289827887LL;
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    v20,
    (void *)v23,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)v22,
    UserDataCount);
LABEL_13:
  if ( v29 )
    LeaveCriticalSection(lpCriticalSection);
  return v15;
}
