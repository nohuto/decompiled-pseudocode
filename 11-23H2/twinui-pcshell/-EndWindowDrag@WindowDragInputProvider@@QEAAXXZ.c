/*
 * XREFs of ?EndWindowDrag@WindowDragInputProvider@@QEAAXXZ @ 0x18068B044
 * Callers:
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180227620 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008EED8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1802D2A56 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall WindowDragInputProvider::EndWindowDrag(WindowDragInputProvider *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v2,
      (int)&unk_180875475,
      0);
  v3 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (WindowDragInputProvider *)((char *)this + 40),
    (winrt::Windows::Foundation::IUnknown *)&v3);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  v3 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (WindowDragInputProvider *)((char *)this + 56),
    (winrt::Windows::Foundation::IUnknown *)&v3);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
}
