/*
 * XREFs of ??$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@1@QEAU21@AEB_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x180681220
 * Callers:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1806854F0 (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@YAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x180681D98 (--$_Uninitialized_move@PEAU-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_.c)
 *     ?_Change_array@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXQEAU?$pair@_KURect@Foundation@Windows@winrt@@@2@_K1@Z @ 0x180685B3C (-_Change_array@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KU.c)
 */

char *__fastcall std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Emplace_reallocate<unsigned __int64 const &,winrt::Windows::Foundation::Rect const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _OWORD *a4)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  size_t size_of; // rax
  char *v15; // rax
  char *v16; // rsi
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r10
  char *result; // rax
  void *v22; // [rsp+58h] [rbp+10h]

  v8 = (a2 - *a1) / 24;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  v10 = 0xAAAAAAAAAAAAAAALL;
  if ( v9 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v11 = v9 + 1;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v13 = v12 >> 1;
  if ( v12 <= 0xAAAAAAAAAAAAAAALL - (v12 >> 1) )
  {
    v10 = v13 + v12;
    if ( v13 + v12 < v11 )
      v10 = v11;
  }
  size_of = std::_Get_size_of_n<24>(v10);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v22 = v15;
  try
  {
    v16 = &v15[24 * v8];
    *(_QWORD *)v16 = *a3;
    *(_OWORD *)(v16 + 8) = *a4;
    v17 = a1[1];
    v18 = v15;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect> *,std::allocator<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>>(
        v19,
        a2,
        v15);
      v18 = v16 + 24;
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect> *,std::allocator<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>>(
      v19,
      v17,
      v18);
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Change_array(a1, v20, v11, v10);
    result = v16;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, 24 * v10);
    throw;
  }
  return result;
}
