/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18019A540
 * Callers:
 *     ?release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18019A524 (-release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAA.c)
 *     ??1?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1807253F4 (--1-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18027D230 (-final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AUfire_and_forget@.c)
 */

signed __int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rbx
  signed __int64 result; // rax
  int v3; // ecx
  signed __int64 v4; // rtt
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  result = *(_QWORD *)(v1 + 8);
  while ( result >= 0 )
  {
    v3 = result - 1;
    v4 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 8), result - 1, result);
    if ( v4 == result )
      goto LABEL_4;
  }
  result = winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * result));
  v3 = result;
LABEL_4:
  if ( !v3 )
  {
    _InterlockedExchange64((volatile __int64 *)(v1 + 8), 1LL);
    v5 = v1;
    return winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release(&v5);
  }
  return result;
}
