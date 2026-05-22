/*
 * XREFs of ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800CF444
 * Callers:
 *     ??$LogMPCRawInputReport@PEAULegacyInputInfo@@@ISMTracing@@SAX$$QEAPEAULegacyInputInfo@@@Z @ 0x1800CE188 (--$LogMPCRawInputReport@PEAULegacyInputInfo@@@ISMTracing@@SAX$$QEAPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800C5960 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x1800CE31C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 */

void __fastcall ISMTracing::LogMPCRawInputReport_(ISMTracing *this, struct LegacyInputInfo *a2)
{
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // [rsp+50h] [rbp-30h] BYREF
  int v11; // [rsp+54h] [rbp-2Ch] BYREF
  int v12; // [rsp+58h] [rbp-28h] BYREF
  int v13; // [rsp+5Ch] [rbp-24h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+68h] [rbp-18h] BYREF
  int v16; // [rsp+70h] [rbp-10h]
  ISMTracing *fPending; // [rsp+A0h] [rbp+20h] BYREF
  int v18; // [rsp+B0h] [rbp+30h] BYREF
  int v19; // [rsp+B8h] [rbp+38h] BYREF

  fPending = this;
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    v3 = *((_DWORD *)a2 + 16);
    Context = 0LL;
    if ( ((v3 - 6) & 0xFFFFFFFD) != 0 )
    {
      if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
        && (_DWORD)fPending )
      {
        v15 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v16 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v15);
      }
      v6 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v18 = *((_DWORD *)a2 + 17);
        v19 = *((_DWORD *)a2 + 16);
        v10 = *((_DWORD *)a2 + 18);
        v11 = *((_DWORD *)a2 + 2);
        v12 = *((_DWORD *)a2 + 1);
        v13 = *(_DWORD *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v6,
          byte_1802231D3,
          v4,
          v5,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v19,
          (__int64)&v18);
      }
    }
    else
    {
      if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
        && (_DWORD)fPending )
      {
        v15 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v16 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v15);
      }
      v9 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v9 > 5u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
      {
        v18 = *((_DWORD *)a2 + 17);
        v19 = *((_DWORD *)a2 + 16);
        v13 = *((_DWORD *)a2 + 18);
        v12 = *((_DWORD *)a2 + 2);
        v11 = *((_DWORD *)a2 + 1);
        v10 = *(_DWORD *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          byte_180223251,
          v7,
          v8,
          (__int64)&v10,
          (__int64)&v11,
          (__int64)&v12,
          (__int64)&v13,
          (__int64)&v19,
          (__int64)&v18);
      }
    }
  }
}
