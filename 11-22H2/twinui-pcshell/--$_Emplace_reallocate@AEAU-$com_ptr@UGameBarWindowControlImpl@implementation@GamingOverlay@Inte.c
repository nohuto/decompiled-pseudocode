/*
 * XREFs of ??$_Emplace_reallocate@AEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAPEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAU23@AEAU23@@Z @ 0x1803F4CAC
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180403968 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAPEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x1803F6678 (--$_Uninitialized_move@PEAU-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Inte.c)
 *     ?_Change_array@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXQEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@_K1@Z @ 0x180409968 (-_Change_array@-$vector@U-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Intern.c)
 */

volatile __int64 **__fastcall std::vector<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>::_Emplace_reallocate<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl> &>(
        __int64 *a1,
        __int64 a2,
        volatile __int64 **a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  volatile __int64 **v13; // rsi
  volatile __int64 **v14; // r14
  volatile __int64 *v15; // r8
  signed __int64 v16; // rdx
  bool v17; // zf
  signed __int64 v18; // rax
  __int64 v19; // rdx
  volatile __int64 **v20; // r8
  __int64 v21; // rcx
  volatile __int64 **result; // rax
  void *v23; // [rsp+20h] [rbp-48h]
  volatile __int64 **v24; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (volatile __int64 **)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v6];
  try
  {
    v15 = *a3;
    *v14 = *a3;
    if ( v15 )
    {
      v16 = *((_QWORD *)v15 + 1);
      while ( v16 >= 0 )
      {
        v18 = _InterlockedCompareExchange64(v15 + 1, v16 + 1, v16);
        v17 = v16 == v18;
        v16 = v18;
        if ( v17 )
          goto LABEL_13;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v16 + 24), 1u);
    }
LABEL_13:
    v24 = v14;
    v19 = a1[1];
    v20 = v13;
    v21 = *a1;
    if ( a2 != v19 )
    {
      std::_Uninitialized_move<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl> *,std::allocator<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>>(
        v21,
        a2,
        v13);
      v24 = v13;
      v20 = v14 + 1;
      v19 = a1[1];
      v21 = a2;
    }
    std::_Uninitialized_move<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl> *,std::allocator<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>>(
      v21,
      v19,
      v20);
    std::vector<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>::_Change_array(
      a1,
      v13,
      v9,
      v8,
      v13);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>>(
      v24,
      v14 + 1);
    std::_Deallocate<16,0>(v23, 8 * v8);
    throw;
  }
  return result;
}
