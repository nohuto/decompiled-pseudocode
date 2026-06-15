/*
 * XREFs of ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14001F9C0
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x14008ECCC (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x14001FB5C (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x14001FC28 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14006D500 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14007A980 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___::_lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___ @ 0x14008EC8C (wil--details--lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___--_lambda_call__lambda_fd36.c)
 */

__int64 __fastcall CAudioProcessor::BeginGraphChanges(CAudioProcessor *this, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  void *v5; // rax
  int v6; // r8d
  _QWORD *v7; // rdi
  ULONGLONG v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // zf
  _DWORD *v11; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  ULONGLONG TickCount64; // rax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-29h]
  const char *v22; // [rsp+28h] [rbp-21h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-19h] BYREF
  char v24; // [rsp+38h] [rbp-11h]
  CAudioProcessor *v25; // [rsp+40h] [rbp-9h] BYREF
  char v26; // [rsp+48h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+50h] [rbp+7h] BYREF
  CAudioProcessor **v28; // [rsp+70h] [rbp+27h]
  int v29; // [rsp+78h] [rbp+2Fh]
  int v30; // [rsp+7Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !a2 )
  {
    v13 = -2147467261;
    v14 = 1248LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v13,
      v21);
    return v13;
  }
  if ( !*((_BYTE *)this + 776) )
  {
    v13 = -2005139437;
    v14 = 1249LL;
    goto LABEL_17;
  }
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 88);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 96);
  if ( v4 )
  {
    TickCount64 = GetTickCount64();
    v16 = retaddr;
    if ( TickCount64 <= *(_QWORD *)(v4 + 8) )
    {
      v18 = -2005139409;
      v20 = 1254LL;
      v19 = 2289827887LL;
      goto LABEL_24;
    }
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      (void *)0x4E9,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C0033LL,
      (int)"Prior transaction timed out",
      v22);
    v17 = (*(__int64 (__fastcall **)(CAudioProcessor *, _QWORD))(*(_QWORD *)this + 48LL))(
            this,
            *(_QWORD *)(*((_QWORD *)this + 96) + 16LL));
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = (unsigned int)v17;
      v20 = 1258LL;
LABEL_22:
      v16 = retaddr;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        v16,
        (void *)v20,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)v19,
        v21);
LABEL_33:
      ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
      return v18;
    }
  }
  if ( *((_BYTE *)this + 778) )
  {
    v18 = -2005139406;
    v20 = 1265LL;
    v19 = 2289827890LL;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v5 = (void *)AERTGetDLLRTHeap();
    v7 = AERTAllocate(0x18uLL, v5, v6);
    if ( v7 )
    {
      v8 = GetTickCount64();
      v9 = CProcessorTransaction::m_LastTransactionHandle + 1;
      v7[1] = v8 + 10000;
      CProcessorTransaction::m_LastTransactionHandle = v9;
      v7[2] = v9;
    }
    else
    {
      v7 = 0LL;
    }
    v10 = *((_BYTE *)this + 779) == 0;
    *((_QWORD *)this + 96) = v7;
    if ( v10 )
      break;
    if ( !v7 )
      Sleep(1u);
    if ( !*((_BYTE *)this + 779) )
      break;
    if ( *((_QWORD *)this + 96) )
      goto LABEL_9;
  }
  if ( !*((_QWORD *)this + 96) )
  {
    v18 = -2147024882;
    v20 = 1270LL;
    v19 = 2147942414LL;
    goto LABEL_22;
  }
LABEL_9:
  v25 = this;
  v26 = 1;
  **((_QWORD **)this + 96) = CRealTimeSafeStruct<CProcessingData,1>::NonRTGrabSafePointer((char *)this + 384);
  if ( !**((_QWORD **)this + 96) )
  {
    v18 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FB,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x8007000ELL,
      v21);
    wil::details::lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___::_lambda_call__lambda_fd363d759ea9383e34f29f9fac21f9f1___(&v25);
    goto LABEL_33;
  }
  v11 = (_DWORD *)*((_QWORD *)this + 103);
  if ( *v11 > 5u )
  {
    v30 = 0;
    v28 = &v25;
    v25 = this;
    v29 = 8;
    tlgWriteTransfer_EventWriteTransfer((int)v11, (int)&dword_1400B3D8F, 0, 0, 3u, &v27);
  }
  v10 = v24 == 0;
  *a2 = *(_QWORD *)(*((_QWORD *)this + 96) + 16LL);
  if ( !v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
