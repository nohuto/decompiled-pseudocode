/*
 * XREFs of ?Release@?$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@X@impl@winrt@@UEAAIXZ @ 0x18019A580
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18027D230 (-final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AUfire_and_forget@.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTracker,void>::Release(
        unsigned __int64 a1)
{
  __int64 v1; // rbx
  signed __int64 v2; // rax
  unsigned int v3; // edi
  signed __int64 v5; // rtt
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  v2 = *(_QWORD *)(v1 + 8);
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    v5 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 8), v2 - 1, v2);
    if ( v5 == v2 )
      goto LABEL_4;
  }
  v3 = winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v2));
LABEL_4:
  if ( !v3 )
  {
    _InterlockedExchange64((volatile __int64 *)(v1 + 8), 1LL);
    v6 = v1;
    winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release(&v6);
  }
  return v3;
}
