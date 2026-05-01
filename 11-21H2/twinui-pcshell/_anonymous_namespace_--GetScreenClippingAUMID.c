/*
 * XREFs of _anonymous_namespace_::GetScreenClippingAUMID @ 0x180066360
 * Callers:
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800646A8 (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803812DC (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x180065D74 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1800664B8 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x18017EAE4 (--4hstring@winrt@@QEAAAEAU01@QEBG@Z.c)
 *     WINRT_IMPL_HeapFree @ 0x1801892CC (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x180189398 (WINRT_IMPL_GetProcessHeap.c)
 */

// Hidden C++ exception states: #wind=1
winrt::hstring *__fastcall anonymous_namespace_::GetScreenClippingAUMID(winrt::hstring *this)
{
  __int64 v2; // rax
  winrt::hstring *AUMIDFromAppExtensionCatalog; // rax
  __int64 v4; // rsi
  char *v5; // rdi
  __int64 v6; // rcx
  int v7; // r9d
  HANDLE ProcessHeap; // rax
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+68h] [rbp+10h] BYREF
  char v12; // [rsp+70h] [rbp+18h] BYREF

  v10 = (__int64)this;
  *(_QWORD *)this = 0LL;
  if ( IsActiveSessionCountLimited() )
  {
    v2 = winrt::hstring::hstring((winrt::hstring *)&v11, L"com.microsoft.windows.app.screenclip");
    AUMIDFromAppExtensionCatalog = (winrt::hstring *)anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog(&v12, v2);
    if ( this != AUMIDFromAppExtensionCatalog )
    {
      v4 = *(_QWORD *)AUMIDFromAppExtensionCatalog;
      *(_QWORD *)AUMIDFromAppExtensionCatalog = 0LL;
      v5 = *(char **)this;
      if ( *(_QWORD *)this )
      {
        if ( !(unsigned int)winrt::impl::atomic_ref_count::operator--(v5 + 24) )
        {
          ProcessHeap = WINRT_IMPL_GetProcessHeap();
          WINRT_IMPL_HeapFree(ProcessHeap, 0, v5);
        }
        *(_QWORD *)this = 0LL;
      }
      *(_QWORD *)this = v4;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  }
  else
  {
    winrt::hstring::operator=(this);
  }
  if ( **(_DWORD **)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                       v6,
                       _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                   + 8) > 5u )
  {
    v10 = (__int64)winrt::hstring::c_str(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v7,
      (int)&dword_1806AA0F3,
      (__int64)&v10);
  }
  return this;
}
