/*
 * XREFs of ?FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z @ 0x180164E14
 * Callers:
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180164F78 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1801086E0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@44444444AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180164480 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$.c)
 */

void __fastcall InputETW::InputGesture::FeedAnimationData(
        const unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINTF a5,
        struct tagPOINTF a6,
        struct tagPOINTF a7,
        bool a8)
{
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+88h] [rbp-29h] BYREF
  __int64 v17; // [rsp+90h] [rbp-21h] BYREF
  __int64 v18; // [rsp+98h] [rbp-19h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+D8h] [rbp+27h] BYREF

  if ( InputETW::IsEnabled((__int64)a1) )
  {
    v13 = wil::details::static_lazy<InputETW>::get(
            v12,
            _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v13 > 5u
      && (*(_BYTE *)(v13 + 16) & 1) != 0
      && (*(_QWORD *)(v13 + 24) & 1LL) == *(_QWORD *)(v13 + 24) )
    {
      LODWORD(v16) = a8;
      v23 = a4;
      v24 = a3;
      v25 = a2;
      v26 = (__int64)a1;
      *(double *)&v17 = a7.y;
      *(double *)&v18 = a7.x;
      *(double *)&v19 = a6.y;
      *(double *)&v20 = a6.x;
      *(double *)&v21 = a5.y;
      *(double *)&v22 = a5.x;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v13,
        (unsigned __int8 *)dword_180235295,
        v14,
        v15,
        (const WCHAR **)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16);
    }
  }
}
