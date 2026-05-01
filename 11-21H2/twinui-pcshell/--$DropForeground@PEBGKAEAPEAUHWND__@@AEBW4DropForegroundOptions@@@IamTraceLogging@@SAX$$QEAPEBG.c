/*
 * XREFs of ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x18002DFC0
 * Callers:
 *     _lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator() @ 0x18002DF08 (_lambda_6bdb0a767824ae94d9b9ef25c3406932_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18002E090 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTempl.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

LPVOID __fastcall IamTraceLogging::DropForeground<unsigned short const *,unsigned long,HWND__ * &,enum DropForegroundOptions const &>(
        __int64 *a1,
        int *a2,
        __int64 *a3,
        int *a4)
{
  LPVOID result; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+44h] [rbp-2Ch] BYREF
  int v14; // [rsp+48h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  int v18; // [rsp+68h] [rbp-8h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v17 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v18 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v17, v10, v11);
  }
  result = Context;
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u )
  {
    v13 = *a4;
    v16 = *a3;
    v14 = *a2;
    v17 = *a1;
    return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     (int)v9,
                     (int)&dword_1806A09EA,
                     (__int64)&v17,
                     (__int64)&v14,
                     (__int64)&v16,
                     (__int64)&v13);
  }
  return result;
}
