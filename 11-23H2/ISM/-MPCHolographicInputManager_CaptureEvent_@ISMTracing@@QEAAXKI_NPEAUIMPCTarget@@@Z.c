/*
 * XREFs of ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x1800B5868
 * Callers:
 *     ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x1800B2C28 (--$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@34@Z @ 0x1800B38A4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@U2@@-$_tlgWriteTe.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x1800B4BD0 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetProviderType@ISMTracing@@SAPEBGI@Z @ 0x1800B4C38 (-GetProviderType@ISMTracing@@SAPEBGI@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x1800B4CD4 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_CaptureEvent_(
        ISMTracing *this,
        int a2,
        unsigned int a3,
        char a4,
        struct IMPCTarget *a5)
{
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  WINBOOL fPending; // [rsp+50h] [rbp-30h] BYREF
  int PIDOfMPCTarget; // [rsp+54h] [rbp-2Ch] BYREF
  int v13; // [rsp+58h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-20h] BYREF
  __int64 TypeOfTarget; // [rsp+68h] [rbp-18h] BYREF
  __int64 ProviderType; // [rsp+70h] [rbp-10h] BYREF
  int v17; // [rsp+78h] [rbp-8h]
  __int64 v18; // [rsp+A0h] [rbp+20h] BYREF

  v18 = (__int64)this;
  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      ProviderType = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v17 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&ProviderType);
    }
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      TypeOfTarget = (__int64)ISMTracing::GetTypeOfTarget(a5);
      PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a5);
      LOBYTE(v18) = a4;
      ProviderType = (__int64)ISMTracing::GetProviderType(a3);
      v13 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v8,
        (unsigned __int8 *)dword_180221A26,
        v9,
        v10,
        (__int64)&v13,
        (const WCHAR **)&ProviderType,
        (__int64)&v18,
        (__int64)&PIDOfMPCTarget,
        (const WCHAR **)&TypeOfTarget);
    }
  }
}
