/*
 * XREFs of ??$check_pointer@X@winrt@@YAPEAXPEAX@Z @ 0x180073348
 * Callers:
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x18021ACC0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 */

__int64 __fastcall winrt::check_pointer<void>(__int64 a1)
{
  if ( !a1 )
    winrt::throw_last_error(0LL);
  return a1;
}
