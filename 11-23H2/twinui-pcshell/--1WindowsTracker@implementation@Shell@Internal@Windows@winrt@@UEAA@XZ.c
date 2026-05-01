/*
 * XREFs of ??1WindowsTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180725444
 * Callers:
 *     ??_G?$heap_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180725590 (--_G-$heap_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@std@@@?$_List_node@Uguid@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x180035490 (--$_Free_non_head@V-$allocator@U-$_List_node@Uguid@winrt@@PEAX@std@@@std@@@-$_List_node@Uguid@wi.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::~WindowsTracker(
        winrt::Windows::Internal::Shell::implementation::WindowsTracker *this)
{
  unsigned int **v2; // rcx
  __int64 v3; // rcx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  v2 = (unsigned int **)((char *)this + 104);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(v2);
  std::_Deallocate<16,0>(*((void **)this + 8), (*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  std::_List_node<winrt::guid,void *>::_Free_non_head<std::allocator<std::_List_node<winrt::guid,void *>>>(
    v3,
    *((_QWORD *)this + 6));
  std::_Deallocate<16,0>(*((void **)this + 6), 0x20uLL);
  if ( *((_QWORD *)this + 4) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::WindowsTracker *)((char *)this + 32));
  if ( *((_QWORD *)this + 3) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::WindowsTracker *)((char *)this + 24));
  v4 = *((_QWORD *)this + 1);
  while ( v4 >= 0 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v4 - 1, v4);
    if ( v5 == v4 )
      goto LABEL_12;
  }
  winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v4));
LABEL_12:
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
