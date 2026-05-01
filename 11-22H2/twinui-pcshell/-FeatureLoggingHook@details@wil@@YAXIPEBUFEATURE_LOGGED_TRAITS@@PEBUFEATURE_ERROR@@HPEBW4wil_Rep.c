/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180152EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x18038C298 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18038C578 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18038C650 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180390210 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
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
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v15; // rcx
  int v16; // r8d
  int v17; // r9d
  WINBOOL v18; // eax
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  _DWORD *v24; // rcx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // ecx
  int v31; // eax
  _WORD v32[2]; // [rsp+B0h] [rbp-80h] BYREF
  WINBOOL v33; // [rsp+B4h] [rbp-7Ch] BYREF
  int v34; // [rsp+B8h] [rbp-78h] BYREF
  WINBOOL v35; // [rsp+BCh] [rbp-74h] BYREF
  int v36; // [rsp+C0h] [rbp-70h] BYREF
  WINBOOL v37; // [rsp+C4h] [rbp-6Ch] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-68h] BYREF
  WINBOOL v39; // [rsp+D0h] [rbp-60h] BYREF
  int v40; // [rsp+D4h] [rbp-5Ch] BYREF
  __int64 v41; // [rsp+D8h] [rbp-58h] BYREF
  int v42; // [rsp+E0h] [rbp-50h]
  __int64 v43; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v46; // [rsp+100h] [rbp-30h] BYREF
  __int64 v47; // [rsp+108h] [rbp-28h] BYREF
  __int64 v48; // [rsp+110h] [rbp-20h] BYREF
  __int64 v49; // [rsp+118h] [rbp-18h] BYREF
  __int64 v50; // [rsp+120h] [rbp-10h] BYREF

  Context = 0LL;
  v8 = (int)a4;
  v11 = (int)this;
  if ( __std_init_once_begin_initialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v33, &Context)
    && v33 )
  {
    v41 = (__int64)&`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    Context = &qword_18098D940;
    qword_18098D940 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098D958 = (__int64)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
    v42 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v41, v13, v14);
  }
  v12 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v12 && *v12 )
  {
    if ( a5 )
    {
      v15 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                           v12,
                           _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v15 > 5u && tlgKeywordOn((__int64)v15, 2LL) )
      {
        v18 = *a5;
        Context = a8;
        LOBYTE(v32[0]) = v8 != 0;
        v33 = v18;
        if ( a2 )
        {
          LOWORD(v35) = *((unsigned __int8 *)a2 + 4);
          v34 = a2[1];
          v19 = *a2;
        }
        else
        {
          v34 = -1;
          LOWORD(v35) = -1;
          v19 = -1;
        }
        v36 = v19;
        v37 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (_DWORD)v15,
          (unsigned int)&unk_180841D62,
          v16,
          v17,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v34,
          (__int64)&v35,
          (__int64)v32,
          (__int64)&v33,
          (__int64)&Context);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v8 )
        {
          v20 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                               v15,
                               _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                           + 8);
          if ( *v20 > 5u )
          {
            if ( tlgKeywordOn((__int64)v20, 10LL) )
            {
              v37 = *a5;
              LOWORD(v34) = *((unsigned __int8 *)a2 + 4);
              v36 = a2[1];
              v33 = *a2;
              Context = a8;
              LOBYTE(v32[0]) = 1;
              v35 = v11;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                v21,
                (unsigned int)&unk_180841FC7,
                v22,
                v23,
                (__int64)&v35,
                (__int64)&v33,
                (__int64)&v36,
                (__int64)&v34,
                (__int64)v32,
                (__int64)&v37,
                (__int64)&Context);
            }
          }
        }
      }
    }
    else if ( a6 )
    {
      v24 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                           v12,
                           _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v24 > 5u && tlgKeywordOn((__int64)v24, 4LL) )
      {
        Context = a8;
        LOBYTE(v35) = v8 != 0;
        LOBYTE(v32[0]) = (_BYTE)a7;
        v37 = *a6;
        if ( a2 )
        {
          LOWORD(v34) = *((unsigned __int8 *)a2 + 4);
          v33 = a2[1];
          v28 = *a2;
        }
        else
        {
          v33 = -1;
          LOWORD(v34) = -1;
          v28 = -1;
        }
        v36 = v28;
        v39 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v25,
          (unsigned int)&unk_180841DD3,
          v26,
          v27,
          (__int64)&v39,
          (__int64)&v36,
          (__int64)&v33,
          (__int64)&v34,
          (__int64)&v35,
          (__int64)&v37,
          (__int64)v32,
          (__int64)&Context);
      }
    }
    else if ( a3 )
    {
      v29 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                           v12,
                           _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v29 > 2u )
      {
        if ( tlgKeywordOn((__int64)v29, 1LL) )
        {
          v39 = *((_DWORD *)a3 + 20);
          v43 = *((_QWORD *)a3 + 11);
          v37 = *((_DWORD *)a3 + 8);
          v44 = *((_QWORD *)a3 + 5);
          v45 = *((_QWORD *)a3 + 6);
          v46 = *((_QWORD *)a3 + 12);
          v47 = *((_QWORD *)a3 + 9);
          LOWORD(v35) = *((_WORD *)a3 + 28);
          v48 = *((_QWORD *)a3 + 8);
          v49 = *((_QWORD *)a3 + 2);
          v50 = *((_QWORD *)a3 + 3);
          v32[0] = *((_WORD *)a3 + 2);
          v41 = *((_QWORD *)a3 + 1);
          v36 = *(_DWORD *)a3;
          if ( a2 )
          {
            LOWORD(v34) = *((unsigned __int8 *)a2 + 4);
            v33 = a2[1];
            v31 = *a2;
          }
          else
          {
            v33 = -1;
            LOWORD(v34) = -1;
            v31 = -1;
          }
          v40 = v31;
          LODWORD(Context) = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            v30,
            (int)&dword_180841E5B,
            (__int64)&Context,
            (__int64)&v40,
            (__int64)&v33,
            (__int64)&v34,
            (__int64)&v36,
            (__int64)&v41,
            (__int64)v32,
            (__int64)&v50,
            (__int64)&v49,
            (__int64)&v48,
            (__int64)&v35,
            (__int64)&v47,
            (__int64)&v46,
            (__int64)&v45,
            (__int64)&v44,
            (__int64)&v37,
            (__int64)&v43,
            (__int64)&v39);
        }
      }
    }
  }
}
