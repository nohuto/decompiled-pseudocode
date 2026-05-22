/*
 * XREFs of ?MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x1800C7778
 * Callers:
 *     ??$MPCInputProviderBase_Destroy@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z @ 0x1800C44F8 (--$MPCInputProviderBase_Destroy@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BDE48 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall ISMTracing::MPCInputProviderBase_Destroy_(ISMTracing *this, const struct DeviceInfo *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  LPVOID Context; // [rsp+30h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v7; // [rsp+38h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp-10h]
  ISMTracing *fPending; // [rsp+70h] [rbp+20h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF
  int v11; // [rsp+88h] [rbp+38h] BYREF

  fPending = this;
  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      v7 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v8 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v7);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
    {
      v10 = *((_DWORD *)a2 + 1);
      v11 = *(_DWORD *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        byte_180222EA1,
        v3,
        v4,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
