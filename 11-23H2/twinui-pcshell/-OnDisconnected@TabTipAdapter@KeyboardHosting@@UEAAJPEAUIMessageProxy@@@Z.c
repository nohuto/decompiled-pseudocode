/*
 * XREFs of ?OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z @ 0x180525980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18051EDAC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180737B84 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDisconnected(
        KeyboardHosting::TabTipAdapter *this,
        struct IMessageProxy *a2)
{
  char v4; // bp
  void (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // r14
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  MessageProxyReconnectAdapter *v7; // rcx
  char v8; // bl
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
  if ( v5 )
  {
    v14 = 0LL;
    v6 = **v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    v6(v5, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v14);
    if ( (struct IMessageProxy *)v14 == a2 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 7);
      v4 = 1;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  v7 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    MessageProxyReconnectAdapter::Dispose(v7);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 8);
  }
  v8 = 0;
  if ( v4 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 50);
    if ( *((_BYTE *)this + 476) )
    {
      *((_BYTE *)this + 476) = 0;
      v8 = 1;
    }
    if ( this != (KeyboardHosting::TabTipAdapter *)-400LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 50);
  }
  v9 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)v7,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v9 > 5u )
  {
    LOBYTE(v14) = v8;
    LOBYTE(v15) = v4;
    v16 = (__int64)"TabTipAdapter::OnDisconnected";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (__int64)v9,
      byte_1808618D2,
      v10,
      v11,
      (const wchar_t **)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  if ( v8 )
  {
    v12 = *((_QWORD *)this + 4);
    if ( v12 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 640LL))(v12, 0LL);
  }
  return 0LL;
}
