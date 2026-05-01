/*
 * XREFs of ?GetFlyoutRect@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1806BDA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::GetFlyoutRect(
        __int64 a1,
        __m128i *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __m128i v6; // xmm6

  v4 = a1 + 104;
  if ( !a1 )
    v4 = 112LL;
  AcquireSRWLockShared((PSRWLOCK)v4);
  v5 = a1 + 204;
  if ( !a1 )
    v5 = 212LL;
  v6 = _mm_loadu_si128((const __m128i *)v5);
  if ( v4 )
    ReleaseSRWLockShared((PSRWLOCK)v4);
  *a2 = v6;
  return 0LL;
}
