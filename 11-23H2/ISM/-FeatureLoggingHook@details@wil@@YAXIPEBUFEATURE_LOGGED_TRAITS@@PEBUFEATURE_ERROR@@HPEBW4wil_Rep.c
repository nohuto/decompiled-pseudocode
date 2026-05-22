/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18004EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18004EB58 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x1800912B0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180091590 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180091668 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        __int64 a8)
{
  int v9; // r14d
  int v11; // r15d
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  _WORD v28[2]; // [rsp+B0h] [rbp-80h] BYREF
  int v29; // [rsp+B4h] [rbp-7Ch] BYREF
  int v30; // [rsp+B8h] [rbp-78h] BYREF
  int v31; // [rsp+BCh] [rbp-74h] BYREF
  int v32; // [rsp+C0h] [rbp-70h] BYREF
  int v33; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v34; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v41; // [rsp+100h] [rbp-30h] BYREF
  __int64 v42; // [rsp+108h] [rbp-28h] BYREF
  __int64 v43; // [rsp+110h] [rbp-20h] BYREF
  __int64 v44; // [rsp+118h] [rbp-18h] BYREF
  __int64 v45; // [rsp+120h] [rbp-10h] BYREF

  v9 = (int)a4;
  v11 = (int)this;
  v12 = *(_DWORD **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                       this,
                       _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                   + 8);
  if ( v12 && *v12 )
  {
    if ( a5 )
    {
      v14 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v13,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v14 > 5u
        && (*(_BYTE *)(v14 + 16) & 2) != 0
        && (*(_QWORD *)(v14 + 24) & 2LL) == *(_QWORD *)(v14 + 24) )
      {
        v17 = *a5;
        v35 = a8;
        LOBYTE(v28[0]) = v9 != 0;
        v30 = v17;
        if ( a2 )
        {
          LOWORD(v31) = *((unsigned __int8 *)a2 + 4);
          v29 = a2[1];
          v18 = *a2;
        }
        else
        {
          v29 = -1;
          LOWORD(v31) = -1;
          v18 = -1;
        }
        v32 = v18;
        v33 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v14,
          (unsigned int)&unk_180220BFA,
          v15,
          v16,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v29,
          (__int64)&v31,
          (__int64)v28,
          (__int64)&v30,
          (__int64)&v35);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v9 )
        {
          v19 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                              v14,
                              _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                          + 8);
          if ( *(_DWORD *)v19 > 5u
            && (*(_BYTE *)(v19 + 16) & 0xA) != 0
            && (*(_QWORD *)(v19 + 24) & 0xALL) == *(_QWORD *)(v19 + 24) )
          {
            v33 = *a5;
            LOWORD(v29) = *((unsigned __int8 *)a2 + 4);
            v32 = a2[1];
            v30 = *a2;
            v35 = a8;
            LOBYTE(v28[0]) = 1;
            v31 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v19,
              (unsigned int)&unk_180220E13,
              v20,
              v21,
              (__int64)&v31,
              (__int64)&v30,
              (__int64)&v32,
              (__int64)&v29,
              (__int64)v28,
              (__int64)&v33,
              (__int64)&v35);
          }
        }
      }
    }
    else if ( a6 )
    {
      v22 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v13,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v22 > 5u
        && (*(_BYTE *)(v22 + 16) & 4) != 0
        && (*(_QWORD *)(v22 + 24) & 4LL) == *(_QWORD *)(v22 + 24) )
      {
        v35 = a8;
        LOBYTE(v31) = v9 != 0;
        LOBYTE(v28[0]) = (_BYTE)a7;
        v33 = *(_DWORD *)a6;
        if ( a2 )
        {
          LOWORD(v29) = *((unsigned __int8 *)a2 + 4);
          v30 = a2[1];
          v25 = *a2;
        }
        else
        {
          v30 = -1;
          LOWORD(v29) = -1;
          v25 = -1;
        }
        v32 = v25;
        LODWORD(v34) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v22,
          (unsigned int)&unk_180220C6B,
          v23,
          v24,
          (__int64)&v34,
          (__int64)&v32,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v31,
          (__int64)&v33,
          (__int64)v28,
          (__int64)&v35);
      }
    }
    else if ( a3 )
    {
      v26 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v13,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v26 > 2u
        && (*(_BYTE *)(v26 + 16) & 1) != 0
        && (*(_QWORD *)(v26 + 24) & 1LL) == *(_QWORD *)(v26 + 24) )
      {
        LODWORD(v34) = *((_DWORD *)a3 + 20);
        v37 = *((_QWORD *)a3 + 11);
        v33 = *((_DWORD *)a3 + 8);
        v38 = *((_QWORD *)a3 + 5);
        v39 = *((_QWORD *)a3 + 6);
        v40 = *((_QWORD *)a3 + 12);
        v41 = *((_QWORD *)a3 + 9);
        LOWORD(v31) = *((_WORD *)a3 + 28);
        v42 = *((_QWORD *)a3 + 8);
        v43 = *((_QWORD *)a3 + 2);
        v44 = *((_QWORD *)a3 + 3);
        v28[0] = *((_WORD *)a3 + 2);
        v45 = *((_QWORD *)a3 + 1);
        v32 = *(_DWORD *)a3;
        if ( a2 )
        {
          LOWORD(v29) = *((unsigned __int8 *)a2 + 4);
          v30 = a2[1];
          v27 = *a2;
        }
        else
        {
          v30 = -1;
          LOWORD(v29) = -1;
          v27 = -1;
        }
        LODWORD(v36) = v27;
        LODWORD(v35) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v26,
          (int)&dword_180220CF3,
          (__int64)&v35,
          (__int64)&v36,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v32,
          (__int64)&v45,
          (__int64)v28,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v42,
          (__int64)&v31,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v33,
          (__int64)&v37,
          (__int64)&v34);
      }
    }
  }
}
