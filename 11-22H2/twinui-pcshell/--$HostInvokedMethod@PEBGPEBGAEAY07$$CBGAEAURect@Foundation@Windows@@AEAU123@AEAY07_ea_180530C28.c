/*
 * XREFs of ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54444000000004AEA_NAEAU?$atomic@_N@std@@$$QEAH6@Z @ 0x180530C28
 * Callers:
 *     ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180533C60 (-LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ @ 0x180531CDC (--1Completer@-$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG00AEAURect@Foundation@Windows@@10U_GUID@@_N33333333300000000333H3@Z @ 0x180533494 (-HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG00AEAURect@Foundation@Windows@@10U_GUID@@_N.c)
 *     ?IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z @ 0x180533A8C (-IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z.c)
 */

void __fastcall TouchKeyboardTelemetry::HostInvokedMethod<unsigned short const *,unsigned short const *,unsigned short const (&)[8],Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned short const (&)[8],_GUID const &,bool,bool,bool,bool,bool const &,bool const &,bool,bool,bool,bool,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool &,std::atomic<bool> &,int,bool &>(
        const unsigned __int16 **a1,
        const unsigned __int16 **a2,
        __int64 a3,
        struct Windows::Foundation::Rect *a4,
        struct Windows::Foundation::Rect *a5,
        LPVOID Context,
        __int64 a7,
        bool *a8,
        bool *a9,
        bool *a10,
        bool *a11,
        bool *a12,
        bool *a13,
        bool *a14,
        bool *a15,
        bool *a16,
        bool *a17,
        const unsigned __int16 **a18,
        const unsigned __int16 **a19,
        const unsigned __int16 **a20,
        const unsigned __int16 **a21,
        const unsigned __int16 **a22,
        const unsigned __int16 **a23,
        const unsigned __int16 **a24,
        const unsigned __int16 **a25,
        bool *a26,
        char *a27,
        char *a28,
        int *a29,
        char *a30)
{
  const unsigned __int16 *v33; // r8
  unsigned __int16 *v34; // rcx
  char v35; // [rsp+E0h] [rbp-A8h]
  char v36; // [rsp+E8h] [rbp-A0h]
  int v37; // [rsp+F0h] [rbp-98h]
  char v38; // [rsp+F8h] [rbp-90h]
  struct _GUID v39; // [rsp+108h] [rbp-80h] BYREF
  __int64 fPending; // [rsp+148h] [rbp-40h] BYREF

  fPending = a3;
  if ( TouchKeyboardTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
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
        *(_QWORD *)&v39.Data1 = &`TouchKeyboardTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098FCD8;
        qword_18098FCD8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_1bb754991d9aec61d6443053699089ac_::_lambda_invoker_cdecl_);
        *(_DWORD *)v39.Data4 = 0;
        wil::details::static_lazy<TouchKeyboardTelemetry>::Completer::~Completer(&v39);
      }
    }
    v38 = *a30;
    v37 = *a29;
    v36 = *a28;
    v33 = *a2;
    v35 = *a27;
    v39 = GUID_NULL;
    v34 = (unsigned __int16 *)*a18;
    LOBYTE(v34) = *a8;
    TouchKeyboardTelemetry::HostInvokedMethod_(
      (TouchKeyboardTelemetry *)v34,
      *a1,
      v33,
      L"UNKNOWN",
      a4,
      a5,
      L"Unknown",
      &v39,
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
      *a20,
      *a21,
      *a22,
      *a23,
      *a24,
      *a25,
      *a26,
      v35,
      v36,
      v37,
      v38);
  }
}
