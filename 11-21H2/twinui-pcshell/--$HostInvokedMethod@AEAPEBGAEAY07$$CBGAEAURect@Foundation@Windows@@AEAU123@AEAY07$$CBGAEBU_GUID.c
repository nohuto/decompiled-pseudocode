/*
 * XREFs of ??$HostInvokedMethod@AEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_NAEA_NAEA_NAEA_NPEBG_NAEA_NHAEA_N@TouchKeyboardTelemetry@@SAXAEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N5AEA_N66$$QEAPEBG46$$QEAH6@Z @ 0x18047F5F0
 * Callers:
 *     ?FireHostInvokedTelemetry@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEBG@Z @ 0x1804806B0 (-FireHostInvokedTelemetry@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEBG@Z.c)
 * Callees:
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ @ 0x1804803D8 (--1Completer@-$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG0AEAURect@Foundation@Windows@@10U_GUID@@_N33333333033H3@Z @ 0x180481FAC (-HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG0AEAURect@Foundation@Windows@@10U_GUID@@_N3.c)
 *     ?IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z @ 0x1804823D8 (-IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z.c)
 */

void __fastcall TouchKeyboardTelemetry::HostInvokedMethod<unsigned short const * &,unsigned short const (&)[8],Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned short const (&)[8],_GUID const &,bool,bool,bool,bool,bool const &,bool const &,bool &,bool &,bool &,unsigned short const *,bool,bool &,int,bool &>(
        const unsigned __int16 **a1,
        unsigned __int64 a2,
        struct Windows::Foundation::Rect *a3,
        struct Windows::Foundation::Rect *a4,
        LPVOID Context,
        __int64 a6,
        bool *a7,
        bool *a8,
        bool *a9,
        bool *a10,
        bool *a11,
        bool *a12,
        bool *a13,
        bool *a14,
        bool *a15,
        const unsigned __int16 **a16,
        bool *a17,
        bool *a18,
        int *a19,
        char *a20)
{
  const unsigned __int16 *v23; // rdx
  unsigned __int16 *v24; // rcx
  char v25; // [rsp+A8h] [rbp-19h]
  struct _GUID v26; // [rsp+B8h] [rbp-9h] BYREF
  unsigned __int64 fPending; // [rsp+F0h] [rbp+2Fh] BYREF

  fPending = a2;
  if ( TouchKeyboardTelemetry::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`TouchKeyboardTelemetry::Instance'::`2'::wrapper,
           0,
           (PBOOL)&fPending,
           &Context) )
    {
      if ( (_DWORD)fPending )
      {
        *(_QWORD *)&v26.Data1 = &`TouchKeyboardTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B54C0;
        qword_1807B54C0 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_1bb754991d9aec61d6443053699089ac_::_lambda_invoker_cdecl_);
        *(_DWORD *)v26.Data4 = 0;
        wil::details::static_lazy<TouchKeyboardTelemetry>::Completer::~Completer(&v26);
      }
    }
    v23 = *a1;
    v25 = *a20;
    v26 = GUID_NULL;
    v24 = (unsigned __int16 *)*a16;
    LOBYTE(v24) = *a7;
    TouchKeyboardTelemetry::HostInvokedMethod_(
      (TouchKeyboardTelemetry *)v24,
      v23,
      L"UNKNOWN",
      a3,
      a4,
      L"Unknown",
      &v26,
      *a7,
      *a8,
      *a9,
      *a10,
      *a11,
      *a12,
      *a13,
      *a14,
      *a15,
      *a16,
      *a17,
      *a18,
      *a19,
      v25);
  }
}
