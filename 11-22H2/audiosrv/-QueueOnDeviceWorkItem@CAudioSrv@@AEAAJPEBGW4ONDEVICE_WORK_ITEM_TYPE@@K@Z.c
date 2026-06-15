/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x180008460
 * Callers:
 *     ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x180005B10 (-OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x180005E00 (-OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x180008440 (-OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x1800365B0 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180065AF8 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180067008 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18008151C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, union _RTL_RUN_ONCE *a2, unsigned int a3, int a4)
{
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  union _RTL_RUN_ONCE *v11; // rax
  union _RTL_RUN_ONCE *v12; // rdi
  __int64 v13; // r14
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *i; // rax
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 **v21; // rax
  union _RTL_RUN_ONCE *v22; // rax
  int v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+40h] [rbp-58h] BYREF
  __int64 v26; // [rsp+48h] [rbp-50h] BYREF
  __int64 *v27; // [rsp+50h] [rbp-48h] BYREF
  union _RTL_RUN_ONCE *v28; // [rsp+58h] [rbp-40h] BYREF
  int v29; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  WINBOOL v31; // [rsp+B0h] [rbp+18h] BYREF

  v27 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v31, (LPVOID *)&v27) && v31 )
  {
    v28 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    v27 = &qword_1801CFD38;
    qword_1801CFD38 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CFD50 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v29 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v28);
  }
  v10 = v27[1];
  if ( *(_DWORD *)v10 > 4u
    && (*(_BYTE *)(v10 + 16) & 0x20) != 0
    && (*(_QWORD *)(v10 + 24) & 0x20LL) == *(_QWORD *)(v10 + 24) )
  {
    LODWORD(v25) = a4;
    LODWORD(v26) = a3;
    v28 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (unsigned int)&unk_180191BA5,
      v8,
      v9,
      (__int64)&v28,
      (__int64)&v26,
      (__int64)&v25);
  }
  if ( a3 == 1 )
  {
    v11 = (union _RTL_RUN_ONCE *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    v28 = v11;
    if ( v11 )
    {
      COnDeviceWorkItem::COnDeviceWorkItem(v11, a2, 1LL);
      v12->Ptr = &COnDeviceStateChangedWorkItem::`vftable';
      LODWORD(v12[4].Ptr) = a4;
    }
    else
    {
      v12 = 0LL;
    }
  }
  else
  {
    v22 = (union _RTL_RUN_ONCE *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v28 = v22;
    if ( v22 )
      v12 = (union _RTL_RUN_ONCE *)COnDeviceWorkItem::COnDeviceWorkItem(v22, a2, a3);
    else
      v12 = 0LL;
  }
  v27 = (__int64 *)v12;
  v28 = v12;
  if ( !v12 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x699,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL,
      v24);
    return 2147942414LL;
  }
  if ( !*((_DWORD *)v12[1].Ptr - 4) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL,
      v24);
    (*(void (__fastcall **)(union _RTL_RUN_ONCE *, __int64))v12->Ptr)(v12, 1LL);
    return 2147942414LL;
  }
  v26 = a1 + 112;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  v25 = a1 + 112;
  v13 = *(_QWORD *)(a1 + 160);
  if ( !*(_QWORD *)(a1 + 184) )
  {
    v14 = *(unsigned int *)(a1 + 192);
    if ( *(_DWORD *)(a1 + 192) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 0x18 )
        goto LABEL_33;
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
LABEL_33:
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
