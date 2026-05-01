/*
 * XREFs of ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x18016B780
 * Callers:
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x18016B688 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18016B84C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(
        ApplicationViewManagement::ApplicationViewTelemetry *this,
        int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // ebx
  LONG v5; // edi
  int v7; // r8d
  int v8; // r9d
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LONG cy; // [rsp+50h] [rbp-30h] BYREF
  LONG v13; // [rsp+54h] [rbp-2Ch] BYREF
  LONG v14; // [rsp+58h] [rbp-28h] BYREF
  LONG v15; // [rsp+5Ch] [rbp-24h] BYREF
  int v16; // [rsp+60h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-18h] BYREF
  union _RTL_RUN_ONCE *v18; // [rsp+70h] [rbp-10h] BYREF
  int v19; // [rsp+78h] [rbp-8h]
  ApplicationViewManagement::ApplicationViewTelemetry *fPending; // [rsp+B0h] [rbp+30h] BYREF
  struct tagSIZE v21; // [rsp+C0h] [rbp+40h]
  struct tagSIZE v22; // [rsp+C8h] [rbp+48h]

  v22 = a4;
  v21 = a3;
  fPending = this;
  Context = 0LL;
  cx = a4.cx;
  v5 = a3.cx;
  if ( __std_init_once_begin_initialize(
         &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&fPending,
         &Context)
    && (_DWORD)fPending )
  {
    v18 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DDC8;
    qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    v19 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v18, v10, v11);
  }
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u )
  {
    cy = v22.cy;
    v14 = v21.cy;
    v13 = cx;
    v15 = v5;
    v16 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v9,
      (unsigned int)&unk_180847024,
      v7,
      v8,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&cy);
  }
}
