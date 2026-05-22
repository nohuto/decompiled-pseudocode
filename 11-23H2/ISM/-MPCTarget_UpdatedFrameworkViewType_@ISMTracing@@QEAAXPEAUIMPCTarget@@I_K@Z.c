/*
 * XREFs of ?MPCTarget_UpdatedFrameworkViewType_@ISMTracing@@QEAAXPEAUIMPCTarget@@I_K@Z @ 0x18010D838
 * Callers:
 *     ??$MPCTarget_UpdatedFrameworkViewType@PEAVMPCTarget@@IAEA_K@ISMTracing@@SAX$$QEAPEAVMPCTarget@@$$QEAIAEA_K@Z @ 0x18010C674 (--$MPCTarget_UpdatedFrameworkViewType@PEAVMPCTarget@@IAEA_K@ISMTracing@@SAX$$QEAPEAVMPCTarget@@$.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x1800B4BD0 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetFrameworkViewType@ISMTracing@@SAPEBGI@Z @ 0x180108F48 (-GetFrameworkViewType@ISMTracing@@SAPEBGI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x18010C818 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 */

void __fastcall ISMTracing::MPCTarget_UpdatedFrameworkViewType_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        int a3,
        __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 FrameworkViewType; // [rsp+58h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+68h] [rbp-8h]
  ISMTracing *fPending; // [rsp+90h] [rbp+20h] BYREF

  fPending = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v14 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v15 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v14);
  }
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    v12 = a4;
    FrameworkViewType = (__int64)ISMTracing::GetFrameworkViewType(a3);
    LODWORD(v10) = ISMTracing::GetPIDOfMPCTarget(a2);
    v14 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v7,
      (unsigned __int8 *)dword_1802256ED,
      v8,
      v9,
      (__int64)&v14,
      (__int64)&v10,
      (const WCHAR **)&FrameworkViewType,
      (__int64)&v12);
  }
}
