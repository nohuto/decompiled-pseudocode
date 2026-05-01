/*
 * XREFs of ??B?$require_one@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@UIRandomAccessStream@2345@@impl@winrt@@QEBA?AUIRandomAccessStream@Streams@Storage@Windows@2@XZ @ 0x1805D6900
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1 @ 0x1801D6870 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_Resum.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::require_one<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType,winrt::Windows::Storage::Streams::IRandomAccessStream>::operator winrt::Windows::Storage::Streams::IRandomAccessStream(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::Storage::Streams::IRandomAccessStream>, &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
