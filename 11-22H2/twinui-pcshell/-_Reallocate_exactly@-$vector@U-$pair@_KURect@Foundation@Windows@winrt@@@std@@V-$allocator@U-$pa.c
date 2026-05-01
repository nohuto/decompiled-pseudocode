/*
 * XREFs of ?_Reallocate_exactly@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAX_K@Z @ 0x180685CB4
 * Callers:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1806854F0 (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@YAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x180681D98 (--$_Uninitialized_move@PEAU-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Reallocate_exactly(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v13; // [rsp+30h] [rbp+8h]

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  size_of = std::_Get_size_of_n<24>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v6;
  try
  {
    std::_Uninitialized_move<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect> *,std::allocator<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>>(
      *a1,
      a1[1],
      (__int64)v6);
    v7 = a2;
    v8 = v4;
    v10 = v9;
    v11 = (__int64)a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v13, 24 * a2);
    throw;
  }
  return std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Change_array(v11, v10, v8, v7);
}
