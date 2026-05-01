/*
 * XREFs of ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180024ABC
 * Callers:
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x180024200 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x180024750 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180024BE0 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     WINRT_IMPL_HeapFree @ 0x1801892CC (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x180189398 (WINRT_IMPL_GetProcessHeap.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x180197640 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        const struct winrt::hstring *a2)
{
  const unsigned __int16 *v3; // rax
  char *v4; // r11
  winrt::impl *v5; // rax
  unsigned int v6; // r8d
  int v7; // ebx
  __int64 v8; // rcx
  struct winrt::impl::hstring_header **v9; // rsi
  struct winrt::impl::hstring_header *hstring_on_heap; // r14
  struct winrt::impl::hstring_header *v11; // rdi
  __int64 v12; // r8
  char *v13; // r8
  signed __int64 v14; // rax
  HANDLE ProcessHeap; // rax
  struct winrt::impl::hstring_header *v16; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v17[2]; // [rsp+28h] [rbp-21h] BYREF
  __int64 v18; // [rsp+38h] [rbp-11h]
  unsigned __int64 v19; // [rsp+40h] [rbp-9h]
  _BYTE v20[32]; // [rsp+48h] [rbp-1h] BYREF
  _BYTE v21[32]; // [rsp+68h] [rbp+1Fh] BYREF

  LODWORD(v16) = 0;
  v3 = winrt::hstring::c_str(a2);
  std::wstring::wstring(v17, v3);
  v4 = (char *)v17;
  if ( v19 >= 8 )
    v4 = (char *)v17[0];
  if ( !v18 )
    goto LABEL_4;
  v13 = &v4[2 * v18 - 2];
  v14 = v13 - (char *)L":";
  while ( *(_WORD *)v13 != 58 )
  {
    if ( v13 == v4 )
      goto LABEL_4;
    v13 -= 2;
    v14 -= 2LL;
  }
  v12 = (v13 - v4) >> 1;
  if ( v12 == -1 )
  {
LABEL_4:
    v5 = (winrt::impl *)std::wstring::wstring(v21, v17);
    v7 = 1;
  }
  else
  {
    v5 = (winrt::impl *)std::wstring::substr(v17, v20, v12 + 1, -1LL, (_DWORD)v16);
    v7 = 2;
  }
  LODWORD(v16) = v7;
  v8 = *((_QWORD *)v5 + 2);
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(winrt::impl **)v5;
  v9 = (struct winrt::impl::hstring_header **)((char *)this + 64);
  hstring_on_heap = winrt::impl::create_hstring_on_heap(v5, (winrt::impl *)(unsigned int)v8, v6);
  v16 = hstring_on_heap;
  if ( v9 != &v16 )
  {
    v16 = 0LL;
    v11 = *v9;
    if ( *v9 && !(unsigned int)winrt::impl::atomic_ref_count::operator--((char *)v11 + 24) )
    {
      ProcessHeap = WINRT_IMPL_GetProcessHeap();
      WINRT_IMPL_HeapFree(ProcessHeap, 0, v11);
    }
    *v9 = hstring_on_heap;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
  if ( (v7 & 2) != 0 )
  {
    LOBYTE(v7) = v7 & 0xFD;
    std::wstring::_Tidy_deallocate(v20);
  }
  if ( (v7 & 1) != 0 )
    std::wstring::_Tidy_deallocate(v21);
  std::wstring::_Tidy_deallocate(v17);
}
