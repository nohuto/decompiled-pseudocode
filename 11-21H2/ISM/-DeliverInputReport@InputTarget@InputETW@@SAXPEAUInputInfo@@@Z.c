/*
 * XREFs of ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800E7518
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800E71A0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800E7B60 (-DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800B25FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800B2BE8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 */

void __fastcall InputETW::InputTarget::DeliverInputReport(struct InputInfo *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbx
  LARGE_INTEGER v7; // rdi
  WINBOOL v8; // [rsp+48h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-21h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-19h] BYREF
  int v11; // [rsp+60h] [rbp-11h]
  WINBOOL fPending; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v13; // [rsp+70h] [rbp-1h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+80h] [rbp+Fh] BYREF
  unsigned __int64 *v16; // [rsp+A0h] [rbp+2Fh]
  int v17; // [rsp+A8h] [rbp+37h]
  int v18; // [rsp+ACh] [rbp+3Bh]

  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Frequency.QuadPart = (LONGLONG)&`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v11 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&Frequency);
    }
    v4 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      v13 = *((_QWORD *)a1 + 2);
      v8 = *((_DWORD *)a1 + 2);
      PerformanceCount.QuadPart = *(int *)a1;
      Frequency.QuadPart = *((unsigned int *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        byte_1802035B6,
        v2,
        v3,
        (__int64)&Frequency,
        (__int64)&PerformanceCount,
        (__int64)&v8,
        (__int64)&v13);
    }
    if ( InputETW::IsVerboseEnabled(2LL) )
    {
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &v8, &Context) && v8 )
      {
        Frequency.QuadPart = (LONGLONG)&`InputETW::Instance'::`2'::wrapper;
        Context = &qword_180242E40;
        qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
        v11 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer((LPINIT_ONCE *)&Frequency);
      }
      v5 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
      {
        v6 = *((_QWORD *)a1 + 2);
        QueryPerformanceFrequency(&Frequency);
        v7 = Frequency;
        QueryPerformanceCounter(&PerformanceCount);
        v18 = 0;
        v17 = 8;
        v13 = (unsigned __int64)(1000000 * (PerformanceCount.QuadPart - v6)) / v7.QuadPart;
        v16 = &v13;
        tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_180203577, 0LL, 0LL, 3u, &v15);
      }
    }
  }
}
