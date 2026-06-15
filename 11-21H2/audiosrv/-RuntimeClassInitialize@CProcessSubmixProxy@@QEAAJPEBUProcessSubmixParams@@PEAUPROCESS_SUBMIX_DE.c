/*
 * XREFs of ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x180018300
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180016FE0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CProcessSubmixProxy::RuntimeClassInitialize(
        CProcessSubmixProxy *this,
        const struct ProcessSubmixParams *a2,
        struct PROCESS_SUBMIX_DESCRIPTOR *a3,
        struct IStreamGroupProxy *a4)
{
  HRESULT Instance; // eax
  int v9; // ebx
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 *v14; // r15
  __int64 v15; // rbx
  void *v16; // rax
  void *v17; // r14
  void *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbx
  IUnknown *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rsi
  int ppv; // [rsp+20h] [rbp-C1h]
  int ppva; // [rsp+20h] [rbp-C1h]
  char v29; // [rsp+40h] [rbp-A1h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-99h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-91h] BYREF
  int v32; // [rsp+54h] [rbp-8Dh] BYREF
  LPVOID Context; // [rsp+58h] [rbp-89h] BYREF
  __int64 v34; // [rsp+60h] [rbp-81h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-79h]
  char *v36; // [rsp+70h] [rbp-71h] BYREF
  _DWORD v37[2]; // [rsp+78h] [rbp-69h] BYREF
  __int64 v38; // [rsp+80h] [rbp-61h]
  union _RTL_RUN_ONCE *v39; // [rsp+88h] [rbp-59h] BYREF
  int v40; // [rsp+90h] [rbp-51h]
  unsigned __int16 *v41; // [rsp+A0h] [rbp-41h] BYREF
  int v42; // [rsp+A8h] [rbp-39h]
  int v43; // [rsp+ACh] [rbp-35h]
  void *v44; // [rsp+B0h] [rbp-31h]
  int v45; // [rsp+B8h] [rbp-29h]
  int v46; // [rsp+BCh] [rbp-25h]
  char **v47; // [rsp+C0h] [rbp-21h]
  __int64 v48; // [rsp+C8h] [rbp-19h]
  int *v49; // [rsp+D0h] [rbp-11h]
  __int64 v50; // [rsp+D8h] [rbp-9h]
  char *v51; // [rsp+E0h] [rbp-1h]
  __int64 v52; // [rsp+E8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]

  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_9db0b5d8_7db4_445f_a896_38636dc7c07a,
               0LL,
               0x17u,
               &GUID_5d857e80_f074_4ad8_a9ce_0ddca68d8212,
               (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x946,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  }
  else
  {
    v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10,
        ppva);
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(IUnknown *, struct PROCESS_SUBMIX_DESCRIPTOR *))pProxy->lpVtbl[3].QueryInterface)(
              pProxy,
              a3);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x94E,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v11,
          ppva);
      }
      else
      {
        *((_BYTE *)this + 124) = *((_BYTE *)a2 + 8);
        v12 = *(_QWORD *)a2;
        v13 = *((_QWORD *)this + 14);
        *((_QWORD *)this + 14) = *(_QWORD *)a2;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v14 = (unsigned __int16 *)*((_QWORD *)a3 + 6);
        v15 = v14[8];
        v16 = CoTaskMemAlloc(v15 + 18);
        v17 = v16;
        if ( v16 )
        {
          memcpy_0(v16, v14, v15 + 18);
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
        }
        v18 = (void *)*((_QWORD *)this + 26);
        *((_QWORD *)this + 26) = v17;
        if ( v18 )
          CoTaskMemFree(v18);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x952,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v9,
            ppva);
        }
        else
        {
          v19 = *(_QWORD *)a4;
          v34 = 0LL;
          v20 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(v19 + 248))(a4, &v34);
          v9 = v20;
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x956,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v20,
              ppva);
          }
          else
          {
            v21 = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[3].AddRef)(pProxy, v34);
            v9 = v21;
            if ( v21 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x957,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (const char *)(unsigned int)v21,
                ppva);
            }
            else
            {
              v22 = *((_QWORD *)this + 6);
              v23 = pProxy;
              *((_QWORD *)this + 6) = pProxy;
              if ( v23 )
                ((void (__fastcall *)(IUnknown *))v23->lpVtbl->AddRef)(v23);
              if ( v22 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
              v24 = *((_QWORD *)this + 25);
              *((_QWORD *)this + 25) = a4;
              (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a4 + 8LL))(a4);
              if ( v24 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
              Context = 0LL;
              if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
                && fPending )
              {
                v39 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
                Context = &qword_1801C2788;
                qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
                qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                v40 = 0;
                wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v39);
              }
              v25 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v25 > 4u )
              {
                v29 = *((_BYTE *)this + 124);
                v32 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
                v36 = (char *)this + 8;
                v51 = &v29;
                v52 = 1LL;
                v49 = &v32;
                v50 = 4LL;
                v47 = &v36;
                v48 = 8LL;
                v37[0] = 184549376;
                v37[1] = 4;
                v38 = 0LL;
                v41 = *(unsigned __int16 **)(v25 + 8);
                v42 = *v41;
                v43 = 2;
                v44 = &unk_1801898AA;
                v45 = 55;
                v46 = 1;
                v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                EtwEventWriteTransfer(*(_QWORD *)(v25 + 32), v37, 0LL, 0LL, 5, &v41);
              }
              *((_QWORD *)this + 27) = _InterlockedIncrement64(&CProcessSubmixProxy::s_processSubmixId);
              v9 = 0;
            }
          }
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
  }
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v9;
}
