/*
 * XREFs of ?MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z @ 0x1800CA30C
 * Callers:
 *     ??$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z @ 0x1800CA168 (--$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?GetProviderType@ISMTracing@@SAPEBGI@Z @ 0x1800B4C38 (-GetProviderType@ISMTracing@@SAPEBGI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800CA23C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall ISMTracing::MPCPerfCounter_ReportPerf_(ISMTracing *this, int a2, unsigned int a3, float a4)
{
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  float v9; // [rsp+40h] [rbp-20h] BYREF
  int v10; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 *v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 ProviderType; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+58h] [rbp-8h]
  ISMTracing *fPending; // [rsp+80h] [rbp+20h] BYREF
  float v15; // [rsp+98h] [rbp+38h]

  v15 = a4;
  fPending = this;
  if ( ISMTracing::IsEnabled((char)this) )
  {
    v11 = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, (LPVOID *)&v11)
      && (_DWORD)fPending )
    {
      ProviderType = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
      v11 = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v13 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&ProviderType);
    }
    v6 = v11[1];
    if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      v9 = v15;
      ProviderType = (__int64)ISMTracing::GetProviderType(a3);
      v10 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v7,
        (unsigned __int8 *)dword_180222EE5,
        v7,
        v8,
        (__int64)&v10,
        (const WCHAR **)&ProviderType,
        (__int64)&v9);
    }
  }
}
