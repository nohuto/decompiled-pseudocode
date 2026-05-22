/*
 * XREFs of ??R_lambda_705dd68f1b823bc41096a82e28a04b4b_@@QEBA@PEBG0PEBDPEAIG@Z @ 0x18009AA68
 * Callers:
 *     ??R?$__func@V_lambda_705dd68f1b823bc41096a82e28a04b4b_@@$$A6AXPEBG0PEBDPEAIG@Z@__function@wistd@@UEAAX$$QEAPEBG0$$QEAPEBD$$QEAPEAI$$QEAG@Z @ 0x18009ABD0 (--R-$__func@V_lambda_705dd68f1b823bc41096a82e28a04b4b_@@$$A6AXPEBG0PEBDPEAIG@Z@__function@wistd@.c)
 * Callees:
 *     ?IsDebuggerPresent@details@wil@@YA_NXZ @ 0x18000BCB0 (-IsDebuggerPresent@details@wil@@YA_NXZ.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800848A0 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$00@@.c)
 */

char __fastcall _lambda_705dd68f1b823bc41096a82e28a04b4b_::operator()(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6)
{
  __int64 v9; // rcx
  __int64 *v10; // rax
  _DWORD *v11; // rcx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // r9
  const int *v15; // rdx
  __int64 *v16; // rax
  _DWORD *v17; // rcx
  __int64 *v19; // [rsp+30h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h] BYREF
  __int16 v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+90h] [rbp+10h] BYREF

  v25 = (__int64)a1;
  if ( wil::details::IsDebuggerPresent(a1) )
  {
    v10 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
            v9,
            (void (__cdecl *)())_lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    v11 = (_DWORD *)v10[1];
    if ( *v11 > 5u )
    {
      LOBYTE(v10) = tlgKeywordOn((__int64)v11, 0x800000000000LL);
      if ( (_BYTE)v10 )
      {
        v15 = (const int *)&unk_1801F200E;
        v23 = a5;
        v24 = a6;
        v19 = &v20;
        v16 = &v22;
        v20 = a4;
        v22 = a2;
LABEL_8:
        LOBYTE(v25) = 1;
        v21 = a3;
        LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperArray<4>,_tlgWrapperByVal<1>>(
                        v12,
                        (int)v15,
                        v13,
                        v14,
                        (wchar_t **)v16,
                        (wchar_t **)&v21,
                        (const unsigned __int16 **)v19,
                        &v23,
                        (__int64)&v25);
      }
    }
  }
  else
  {
    v10 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
            v9,
            (void (__cdecl *)())_lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    v17 = (_DWORD *)v10[1];
    if ( *v17 > 5u )
    {
      LOBYTE(v10) = tlgKeywordOn((__int64)v17, 0x400000000000LL);
      if ( (_BYTE)v10 )
      {
        v15 = &dword_1801F2089;
        v23 = a5;
        v24 = a6;
        v19 = &v22;
        v16 = &v20;
        v22 = a4;
        v20 = a2;
        goto LABEL_8;
      }
    }
  }
  return (char)v10;
}
