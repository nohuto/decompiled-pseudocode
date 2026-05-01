/*
 * XREFs of ?StopActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180149FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x1800BC960 (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180394CB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180394CB0.c)
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180431D04 (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::StopActivity(
        CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *this)
{
  int *v1; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rbx
  int *v5; // rbx
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  REGHANDLE v9; // rcx
  char *v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  int v15; // ecx
  __int64 v16; // r8
  RTL_SRWLOCK *v17; // rbx
  __int64 v18; // rdx
  void (*v19)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int UserDataCount; // [rsp+20h] [rbp-100h]
  WINBOOL fPending; // [rsp+A0h] [rbp-80h] BYREF
  int v22; // [rsp+A4h] [rbp-7Ch] BYREF
  DWORD v23; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-40h] BYREF
  int v30; // [rsp+E8h] [rbp-38h]
  __int64 v31; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v33; // [rsp+100h] [rbp-20h] BYREF
  __int64 v34; // [rsp+108h] [rbp-18h] BYREF
  __int64 v35; // [rsp+110h] [rbp-10h] BYREF
  __int64 v36; // [rsp+118h] [rbp-8h] BYREF
  __int64 v37; // [rsp+120h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+10h] BYREF
  void *v39; // [rsp+140h] [rbp+20h]
  int v40; // [rsp+148h] [rbp+28h]
  int v41; // [rsp+14Ch] [rbp+2Ch]
  PSRWLOCK *p_SRWLock; // [rsp+150h] [rbp+30h]
  __int64 v43; // [rsp+158h] [rbp+38h]
  int *v44; // [rsp+160h] [rbp+40h]
  __int64 v45; // [rsp+168h] [rbp+48h]
  DWORD *v46; // [rsp+170h] [rbp+50h]
  __int64 v47; // [rsp+178h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+88h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v5 = v1 + 20, v1 == (int *)-80LL) )
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 39);
    if ( v4 )
    {
      v17 = v4 + 32;
      AcquireSRWLockExclusive(v17);
      SRWLock = 0LL;
      **((_DWORD **)this + 6) = 2;
      if ( v17 )
        ReleaseSRWLockExclusive(v17);
    }
    else
    {
      *(_QWORD *)&EventDescriptor.Id = 0LL;
      **((_DWORD **)this + 6) = 2;
    }
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v29 = (__int64)&`CortanaProactiveLogging::Instance'::`2'::wrapper;
      Context = &qword_18098E198;
      qword_18098E198 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098E1B0 = (__int64)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      v30 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v29, v18, v19);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u
      && (*(_QWORD *)(v6 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v6 + 24) & 0x400000000000LL) == *(_QWORD *)(v6 + 24) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 6);
      v23 = CurrentThreadId;
      v47 = 4LL;
      v45 = 4LL;
      v22 = *(_DWORD *)(v8 + 76);
      v46 = &v23;
      v44 = &v22;
      p_SRWLock = &SRWLock;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      SRWLock = (PSRWLOCK)0x1000000;
      v43 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v39 = &unk_1808552AD;
      UserData.Reserved = 2;
      v9 = *(_QWORD *)(v6 + 32);
      v40 = 85;
      v41 = 1;
      LODWORD(v25) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v9, &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v14 = (_DWORD *)wil::details::static_lazy<CortanaProactiveLogging>::get(
                      v13,
                      _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)[1];
    if ( *v14 > 5u && tlgKeywordOn((__int64)v14, 0x400000000000LL) )
    {
      v16 = *((_QWORD *)this + 6);
      v31 = *((_QWORD *)v5 + 15);
      v32 = *((_QWORD *)v5 + 14);
      LODWORD(v27) = v5[26];
      v33 = *((_QWORD *)v5 + 12);
      v34 = *((_QWORD *)v5 + 11);
      LODWORD(Context) = v5[20];
      v35 = *((_QWORD *)v5 + 9);
      LODWORD(v25) = v5[8];
      v36 = *((_QWORD *)v5 + 3);
      v22 = *v5;
      v37 = *((_QWORD *)v5 + 16);
      v23 = v5[16];
      v29 = *((_QWORD *)v5 + 7);
      fPending = v5[2];
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      SRWLock = (PSRWLOCK)0x1000000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v15,
        (int)&dword_180855303,
        v16 + 8,
        (__int64)&SRWLock,
        (__int64)&EventDescriptor,
        (__int64)&fPending,
        (__int64)&v29,
        (__int64)&v23,
        (__int64)&v37,
        (__int64)&v22,
        (__int64)&v36,
        (__int64)&v25,
        (__int64)&v35,
        (__int64)&Context,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v27,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v10 = (char *)this + 8;
    if ( *((_DWORD *)v10 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        UserDataCount);
    v11 = *(__int64 **)v10;
    *((_DWORD *)v10 + 6) = 0;
    v12 = *v11;
    if ( *v11 )
    {
      while ( (char *)v12 != v10 )
      {
        v11 = (__int64 *)(v12 + 16);
        *(_QWORD *)v10 = v12 + 16;
        v12 = *(_QWORD *)(v12 + 16);
        if ( !v12 )
          goto LABEL_21;
      }
      *v11 = *((_QWORD *)v10 + 2);
    }
LABEL_21:
    *(_QWORD *)v10 = 0LL;
  }
}
