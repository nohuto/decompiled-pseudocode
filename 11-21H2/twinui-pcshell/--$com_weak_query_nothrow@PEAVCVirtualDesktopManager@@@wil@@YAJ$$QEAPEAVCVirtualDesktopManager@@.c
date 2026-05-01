/*
 * XREFs of ??$com_weak_query_nothrow@PEAVCVirtualDesktopManager@@@wil@@YAJ$$QEAPEAVCVirtualDesktopManager@@PEAPEAUIWeakReference@@@Z @ 0x1800B4B50
 * Callers:
 *     ?OnMessage@CVirtualDesktopManager@@UEAAJI_K_J@Z @ 0x180044340 (-OnMessage@CVirtualDesktopManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800B525C (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEAUIWeakReference@@@Z @ 0x1800B4B78 (--$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEA.c)
 */

__int64 __fastcall wil::com_weak_query_nothrow<CVirtualDesktopManager *>(_QWORD *a1)
{
  int Weak; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Weak = wil::details::GetWeakReference<CVirtualDesktopManager>(*a1);
  v2 = Weak;
  if ( Weak < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70B,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)Weak);
  return v2;
}
