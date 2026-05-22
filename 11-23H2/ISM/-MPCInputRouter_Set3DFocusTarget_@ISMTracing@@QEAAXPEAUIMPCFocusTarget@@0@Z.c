/*
 * XREFs of ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x18010A670
 * Callers:
 *     ??$MPCInputRouter_Set3DFocusTarget@PEAUIMPCFocusTarget@@PEAU1@@ISMTracing@@SAX$$QEAPEAUIMPCFocusTarget@@0@Z @ 0x180107B60 (--$MPCInputRouter_Set3DFocusTarget@PEAUIMPCFocusTarget@@PEAU1@@ISMTracing@@SAX$$QEAPEAUIMPCFocus.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x1800B4BD0 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x1800B4CD4 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@345@Z @ 0x1801080F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U2@U3@@-$_tlgWrit.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Set3DFocusTarget_(
        ISMTracing *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+58h] [rbp+7h] BYREF
  LPVOID Context; // [rsp+60h] [rbp+Fh] BYREF
  __int64 TypeOfTarget; // [rsp+68h] [rbp+17h] BYREF
  __int64 v11; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+78h] [rbp+27h] BYREF
  __int64 v13; // [rsp+80h] [rbp+2Fh] BYREF
  int v14; // [rsp+88h] [rbp+37h]
  ISMTracing *fPending; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v16; // [rsp+D0h] [rbp+7Fh] BYREF

  fPending = this;
  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      v13 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v14 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v13);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
    {
      TypeOfTarget = (__int64)ISMTracing::GetTypeOfTarget(a3);
      LODWORD(v16) = ISMTracing::GetPIDOfMPCTarget(a3);
      v11 = (__int64)a3;
      v12 = (__int64)ISMTracing::GetTypeOfTarget(a2);
      LODWORD(v8) = ISMTracing::GetPIDOfMPCTarget(a2);
      v13 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v5,
        (unsigned __int8 *)dword_1802252D0,
        v6,
        v7,
        (__int64)&v13,
        (__int64)&v8,
        (const WCHAR **)&v12,
        (__int64)&v11,
        (__int64)&v16,
        (const WCHAR **)&TypeOfTarget);
    }
  }
}
