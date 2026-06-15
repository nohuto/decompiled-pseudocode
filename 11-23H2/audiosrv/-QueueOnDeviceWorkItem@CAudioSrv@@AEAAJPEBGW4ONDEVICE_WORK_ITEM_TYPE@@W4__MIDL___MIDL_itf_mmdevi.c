/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800089F0
 * Callers:
 *     ?OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800089C0 (-OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x1800365B0 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180065B08 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180067018 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800D7530 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, union _RTL_RUN_ONCE *a2, int a3, int a4, int a5)
{
  int v8; // r9d
  __int64 v9; // r8
  int v10; // r14d
  union _RTL_RUN_ONCE *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // r14
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *i; // rax
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 **v21; // rax
  int v23; // [rsp+20h] [rbp-88h]
  int v24; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+48h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-50h] BYREF
  union _RTL_RUN_ONCE *v28; // [rsp+60h] [rbp-48h] BYREF
  int v29; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char *v31; // [rsp+C0h] [rbp+18h] BYREF

  LODWORD(v31) = a3;
  v27 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v31, (LPVOID *)&v27)
    && (_DWORD)v31 )
  {
    v28 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    v27 = &qword_1801CFD38;
    qword_1801CFD38 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CFD50 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v29 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v28);
  }
  v9 = v27[1];
  if ( *(_DWORD *)v9 > 4u
    && (*(_BYTE *)(v9 + 16) & 0x20) != 0
    && (*(_QWORD *)(v9 + 24) & 0x20LL) == *(_QWORD *)(v9 + 24) )
  {
    v10 = a5;
    v24 = a5;
    LODWORD(v25) = a4;
    LODWORD(lpCriticalSection) = 5;
    v28 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_180191B49,
      v9,
      v8,
      (__int64)&v28,
      (__int64)&lpCriticalSection,
      (__int64)&v25,
      (__int64)&v24);
  }
  else
  {
    v10 = a5;
  }
  v11 = (union _RTL_RUN_ONCE *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v28 = v11;
  if ( v11 )
    v12 = (__int64 *)COnDeviceWorkItem::COnDeviceWorkItem(v11, a2, 5LL);
  else
    v12 = 0LL;
  v27 = v12;
  v28 = (union _RTL_RUN_ONCE *)v12;
  if ( !v12 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL,
      v23);
    return 2147942414LL;
  }
  if ( a2 && !*(_DWORD *)(v12[1] - 16) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DC,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL,
      v23);
    (*(void (__fastcall **)(__int64 *, __int64))*v12)(v12, 1LL);
    return 2147942414LL;
  }
  *((_DWORD *)v12 + 5) = v10;
  *((_DWORD *)v12 + 6) = a4;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  v25 = a1 + 112;
  v13 = *(_QWORD *)(a1 + 160);
  if ( !*(_QWORD *)(a1 + 184) )
  {
    v14 = *(unsigned int *)(a1 + 192);
    if ( *(_DWORD *)(a1 + 192) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 0x18 )
        goto LABEL_32;
      v15 = 24 * v14;
    }
    else
    {
      v15 = 0LL;
    }
    v16 = malloc(v15 + 8);
    if ( v16 )
    {
      *v16 = *(_QWORD *)(a1 + 176);
      *(_QWORD *)(a1 + 176) = v16;
      v17 = (unsigned int)(*(_DWORD *)(a1 + 192) - 1);
      for ( i = &v16[3 * v17 + 1]; (int)v17 >= 0; LODWORD(v17) = v17 - 1 )
      {
        *i = *(_QWORD *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = i;
        i -= 3;
      }
      goto LABEL_18;
    }
LABEL_32:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_18:
  v19 = *(__int64 **)(a1 + 184);
  v20 = *v19;
  v19[2] = (__int64)v12;
  *(_QWORD *)(a1 + 184) = v20;
  v19[1] = v13;
  *v19 = 0LL;
  ++*(_QWORD *)(a1 + 168);
  v21 = *(__int64 ***)(a1 + 160);
  if ( v21 )
    *v21 = v19;
  else
    *(_QWORD *)(a1 + 152) = v19;
  *(_QWORD *)(a1 + 160) = v19;
  v28 = 0LL;
  if ( a1 != -112 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(ThreadPool, *(_QWORD *)(a1 + 200));
  return 0LL;
}
