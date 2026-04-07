/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800E5AA4
 * Callers:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E49A8 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E6350 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x1800065A8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180093318 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800A1500 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 */

__int64 __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 *v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+A0h] [rbp-19h] BYREF
  int v19; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-11h] BYREF
  wchar_t *v21; // [rsp+B0h] [rbp-9h] BYREF
  const unsigned __int16 *v22; // [rsp+B8h] [rbp-1h] BYREF
  wchar_t *v23; // [rsp+C0h] [rbp+7h] BYREF
  const unsigned __int16 *v24; // [rsp+C8h] [rbp+Fh] BYREF
  const unsigned __int16 *v25; // [rsp+D0h] [rbp+17h] BYREF
  wchar_t *v26; // [rsp+D8h] [rbp+1Fh] BYREF
  const unsigned __int16 *v27; // [rsp+E0h] [rbp+27h] BYREF
  const unsigned __int16 *v28; // [rsp+E8h] [rbp+2Fh] BYREF
  int v29; // [rsp+120h] [rbp+67h] BYREF
  DWORD v30; // [rsp+128h] [rbp+6Fh] BYREF
  wchar_t *v31; // [rsp+130h] [rbp+77h] BYREF
  const unsigned __int16 *v32; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = a1[6];
    v5 = *(unsigned int *)(v4 + 76);
    if ( (int)v5 >= 0 || (_DWORD)v5 != *(_DWORD *)(v4 + 88) || (v6 = v4 + 80, v4 == -80) )
    {
      v11 = wil::details::static_lazy<WindowFrameLogging>::get(
              v5,
              _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
      v12 = (_DWORD *)v11[1];
      if ( *v12 > 2u && tlgKeywordOn(v11[1], 0x200000000000LL) )
      {
        v13 = a1[6];
        v31 = *(wchar_t **)(v13 + 56);
        v32 = *(const unsigned __int16 **)(v13 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v15 = a1[6];
        v30 = CurrentThreadId;
        v29 = a2;
        v20 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          (__int64)v12,
          byte_180120C16,
          v15 + 8,
          v16,
          (__int64)&v20,
          (__int64)&v29,
          (__int64)&v30,
          &v32,
          &v31);
      }
    }
    else
    {
      v7 = (_DWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                       v5,
                       _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
      if ( *v7 > 2u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
      {
        v10 = a1[6];
        v21 = *(wchar_t **)(v6 + 120);
        v22 = *(const unsigned __int16 **)(v6 + 112);
        v30 = *(_DWORD *)(v6 + 104);
        v23 = *(wchar_t **)(v6 + 96);
        v24 = *(const unsigned __int16 **)(v6 + 88);
        v29 = *(_DWORD *)(v6 + 80);
        v25 = *(const unsigned __int16 **)(v6 + 72);
        LODWORD(v31) = *(_DWORD *)(v6 + 32);
        v26 = *(wchar_t **)(v6 + 24);
        LODWORD(v32) = *(_DWORD *)v6;
        v27 = *(const unsigned __int16 **)(v6 + 128);
        v18 = *(_DWORD *)(v6 + 64);
        v28 = *(const unsigned __int16 **)(v6 + 56);
        v19 = *(_DWORD *)(v6 + 8);
        v20 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v8,
          (int)&unk_180120AFF,
          v10 + 8,
          v9,
          (__int64)&v20,
          (__int64)&v19,
          &v28,
          (__int64)&v18,
          &v27,
          (__int64)&v32,
          &v26,
          (__int64)&v31,
          &v25,
          (__int64)&v29,
          &v24,
          &v23,
          (__int64)&v30,
          &v22,
          &v21);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
