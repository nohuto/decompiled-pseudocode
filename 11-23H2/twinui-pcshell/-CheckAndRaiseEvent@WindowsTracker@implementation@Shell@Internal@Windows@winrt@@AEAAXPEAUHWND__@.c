/*
 * XREFs of ?CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1807255CC
 * Callers:
 *     ?WinEventProc@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180725A70 (-WinEventProc@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAUHWINEVENTHOOK__.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$?RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@?$event@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowsTracker@implementation@Shell@Internal@Windows@1@AEBUWindowId@UI@61@@Z @ 0x180724EFC (--$-RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@-$event@U-$Ev.c)
 *     ??$_Find_last@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@_K@Z @ 0x180724FD0 (--$_Find_last@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V-$_Uhash_co.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAUHWND__@@@Z @ 0x180725B88 (-erase@-$_Hash@V-$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V-$_Uhash_compare@PEAUHWND__@@U-.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::CheckAndRaiseEvent(
        RTL_SRWLOCK *this,
        HWND a2)
{
  unsigned int v2; // esi
  __int64 appended; // rax
  HWINEVENTHOOK *Ptr; // rdx
  HWINEVENTHOOK v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  HWND v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (unsigned int)a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v9, 8uLL);
  Ptr = (HWINEVENTHOOK *)std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::_Find_last<HWND__ *>(
                           &this[5].Ptr,
                           v7,
                           &v9,
                           appended)[1];
  if ( !Ptr )
    Ptr = (HWINEVENTHOOK *)this[6].Ptr;
  if ( Ptr != this[6].Ptr )
  {
    v6 = Ptr[3];
    if ( v6 )
      UnhookWinEvent(v6);
    std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::erase(
      &this[5],
      &v9);
    v8 = v2;
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::UI::WindowId>(
      this + 13,
      (__int64)this,
      (__int64)&v8);
  }
}
