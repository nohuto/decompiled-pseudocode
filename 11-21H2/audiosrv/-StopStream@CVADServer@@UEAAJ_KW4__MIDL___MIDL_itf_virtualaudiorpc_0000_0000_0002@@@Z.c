/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x1800093A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800E30C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::StopStream(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rdi
  int v19; // edi
  int v20; // r8d
  int v21; // r9d
  int v22; // [rsp+20h] [rbp-88h]
  int v23; // [rsp+20h] [rbp-88h]
  int v24; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+48h] [rbp-60h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-58h] BYREF
  __int64 v27; // [rsp+58h] [rbp-50h] BYREF
  __int64 v28; // [rsp+60h] [rbp-48h] BYREF
  union _RTL_RUN_ONCE *v29; // [rsp+68h] [rbp-40h] BYREF
  int v30; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  WINBOOL fPending; // [rsp+B0h] [rbp+8h] BYREF
  int v33; // [rsp+C8h] [rbp+20h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v19 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x764,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v22);
LABEL_43:
    v11 = v19;
    goto LABEL_22;
  }
  v8 = *(_QWORD *)(a1 + 168);
  if ( !v8 )
  {
    v19 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x765,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v22);
    goto LABEL_43;
  }
  v9 = *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(v9 + 496) )
  {
    v19 = -2005139336;
    goto LABEL_43;
  }
  if ( a2 != *(_QWORD *)(v9 + 48) )
  {
    v19 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12A5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v22);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x766,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v23);
    goto LABEL_43;
  }
  if ( a3 == 1 )
    LOBYTE(v7) = 1;
  else
    v7 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 264LL))(v8, v9, v7);
  v11 = v10;
  if ( v10 < 0 )
  {
    v19 = -2004287484;
    if ( v10 != -2004287484 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x769,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v10,
        v22);
      goto LABEL_22;
    }
    goto LABEL_43;
  }
  if ( !*(_BYTE *)(a1 + 188) )
  {
LABEL_21:
    v11 = 0;
    goto LABEL_22;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 232LL))(
          *(_QWORD *)(a1 + 168),
          *(_QWORD *)(a1 + 192));
  v11 = v12;
  if ( v12 >= 0 )
  {
    *(_BYTE *)(a1 + 188) = 0;
    v13 = 0LL;
    v25 = 0LL;
    v14 = *(_QWORD *)(a1 + 192);
    if ( v14 && *(_QWORD *)(a1 + 168) )
    {
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v14 + 8) + 24LL))(v14 + 8, &v25) >= 0 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          v29 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          Context = &qword_1801C2788;
          qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
          qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v30 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v29);
        }
        v15 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v15 > 4u
          && (*(_DWORD *)(v15 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v15 + 24) & 0x200LL) == *(_QWORD *)(v15 + 24) )
        {
          v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 40LL))(v25);
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL) + 64LL))(*(_QWORD *)(a1 + 168) + 8LL);
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
          v24 = a3;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v15,
            (unsigned int)&unk_1801895C2,
            v20,
            v21,
            (__int64)&v24,
            (__int64)&v28,
            (__int64)&v27,
            (__int64)&v33);
        }
      }
      v13 = v25;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v12,
    v22);
LABEL_22:
  v16 = *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a1 + 536) = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 456));
  v17 = *(volatile signed __int32 **)(a1 + 504);
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  if ( a1 != -456 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 456));
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v11;
}
