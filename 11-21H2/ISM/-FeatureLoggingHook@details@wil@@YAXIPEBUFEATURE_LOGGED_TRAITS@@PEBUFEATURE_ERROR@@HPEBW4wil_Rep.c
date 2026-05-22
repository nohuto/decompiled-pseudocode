/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180037CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x18007A474 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007A754 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007A82C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18007EFD0 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        WINBOOL *a5,
        WINBOOL *a6,
        const enum wil_VariantReportingKind *a7,
        void *a8)
{
  int v8; // r14d
  WINBOOL v11; // r15d
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  WINBOOL v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _WORD v27[2]; // [rsp+B0h] [rbp-80h] BYREF
  WINBOOL v28; // [rsp+B4h] [rbp-7Ch] BYREF
  int v29; // [rsp+B8h] [rbp-78h] BYREF
  WINBOOL v30; // [rsp+BCh] [rbp-74h] BYREF
  int v31; // [rsp+C0h] [rbp-70h] BYREF
  WINBOOL v32; // [rsp+C4h] [rbp-6Ch] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-68h] BYREF
  WINBOOL v34; // [rsp+D0h] [rbp-60h] BYREF
  int v35; // [rsp+D4h] [rbp-5Ch] BYREF
  __int64 v36; // [rsp+D8h] [rbp-58h] BYREF
  int v37; // [rsp+E0h] [rbp-50h]
  __int64 v38; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v41; // [rsp+100h] [rbp-30h] BYREF
  __int64 v42; // [rsp+108h] [rbp-28h] BYREF
  __int64 v43; // [rsp+110h] [rbp-20h] BYREF
  __int64 v44; // [rsp+118h] [rbp-18h] BYREF
  __int64 v45; // [rsp+120h] [rbp-10h] BYREF

  Context = 0LL;
  v8 = (int)a4;
  v11 = (int)this;
  if ( __std_init_once_begin_initialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v28, &Context)
    && v28 )
  {
    v36 = (__int64)&`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    Context = &qword_1802429D0;
    qword_1802429D0 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_1802429E8 = (__int64)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
    v37 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v36);
  }
  v12 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v12 && *v12 )
  {
    if ( a5 )
    {
      v13 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v12,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v13 > 5u
        && (*(_BYTE *)(v13 + 16) & 2) != 0
        && (*(_QWORD *)(v13 + 24) & 2LL) == *(_QWORD *)(v13 + 24) )
      {
        v16 = *a5;
        Context = a8;
        LOBYTE(v27[0]) = v8 != 0;
        v28 = v16;
        if ( a2 )
        {
          LOWORD(v30) = *((unsigned __int8 *)a2 + 4);
          v29 = a2[1];
          v17 = *a2;
        }
        else
        {
          v29 = -1;
          LOWORD(v30) = -1;
          v17 = -1;
        }
        v31 = v17;
        v32 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v13,
          (unsigned int)&unk_1801FF252,
          v14,
          v15,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v29,
          (__int64)&v30,
          (__int64)v27,
          (__int64)&v28,
          (__int64)&Context);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v8 )
        {
          v18 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                              v13,
                              _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                          + 8);
          if ( *(_DWORD *)v18 > 5u
            && (*(_BYTE *)(v18 + 16) & 0xA) != 0
            && (*(_QWORD *)(v18 + 24) & 0xALL) == *(_QWORD *)(v18 + 24) )
          {
            v32 = *a5;
            LOWORD(v29) = *((unsigned __int8 *)a2 + 4);
            v31 = a2[1];
            v28 = *a2;
            Context = a8;
            LOBYTE(v27[0]) = 1;
            v30 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v18,
              (unsigned int)&unk_1801FF46B,
              v19,
              v20,
              (__int64)&v30,
              (__int64)&v28,
              (__int64)&v31,
              (__int64)&v29,
              (__int64)v27,
              (__int64)&v32,
              (__int64)&Context);
          }
        }
      }
    }
    else if ( a6 )
    {
      v21 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v12,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v21 > 5u
        && (*(_BYTE *)(v21 + 16) & 4) != 0
        && (*(_QWORD *)(v21 + 24) & 4LL) == *(_QWORD *)(v21 + 24) )
      {
        Context = a8;
        LOBYTE(v30) = v8 != 0;
        LOBYTE(v27[0]) = (_BYTE)a7;
        v32 = *a6;
        if ( a2 )
        {
          LOWORD(v29) = *((unsigned __int8 *)a2 + 4);
          v28 = a2[1];
          v24 = *a2;
        }
        else
        {
          v28 = -1;
          LOWORD(v29) = -1;
          v24 = -1;
        }
        v31 = v24;
        v34 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v21,
          (unsigned int)&unk_1801FF2C3,
          v22,
          v23,
          (__int64)&v34,
          (__int64)&v31,
          (__int64)&v28,
          (__int64)&v29,
          (__int64)&v30,
          (__int64)&v32,
          (__int64)v27,
          (__int64)&Context);
      }
    }
    else if ( a3 )
    {
      v25 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v12,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v25 > 2u
        && (*(_BYTE *)(v25 + 16) & 1) != 0
        && (*(_QWORD *)(v25 + 24) & 1LL) == *(_QWORD *)(v25 + 24) )
      {
        v34 = *((_DWORD *)a3 + 20);
        v38 = *((_QWORD *)a3 + 11);
        v32 = *((_DWORD *)a3 + 8);
        v39 = *((_QWORD *)a3 + 5);
        v40 = *((_QWORD *)a3 + 6);
        v41 = *((_QWORD *)a3 + 12);
        v42 = *((_QWORD *)a3 + 9);
        LOWORD(v30) = *((_WORD *)a3 + 28);
        v43 = *((_QWORD *)a3 + 8);
        v44 = *((_QWORD *)a3 + 2);
        v45 = *((_QWORD *)a3 + 3);
        v27[0] = *((_WORD *)a3 + 2);
        v36 = *((_QWORD *)a3 + 1);
        v31 = *(_DWORD *)a3;
        if ( a2 )
        {
          LOWORD(v29) = *((unsigned __int8 *)a2 + 4);
          v28 = a2[1];
          v26 = *a2;
        }
        else
        {
          v28 = -1;
          LOWORD(v29) = -1;
          v26 = -1;
        }
        v35 = v26;
        LODWORD(Context) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v25,
          (int)&dword_1801FF34B,
          (__int64)&Context,
          (__int64)&v35,
          (__int64)&v28,
          (__int64)&v29,
          (__int64)&v31,
          (__int64)&v36,
          (__int64)v27,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v30,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v32,
          (__int64)&v38,
          (__int64)&v34);
      }
    }
  }
}
