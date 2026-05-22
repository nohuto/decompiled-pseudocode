/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A0E8
 * Callers:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006A010 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIDispatcherQueue@System@Windo.c)
 *     ?OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ @ 0x180160F4C (-OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@SAPEAU?$_Tree_node@PEAUIUnknown@@PEAX@2@PEAU32@@Z @ 0x1800992B4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@PEAUIUnknown@@@std@@@std@@SAPEAU-$_Tree_node@PEAUIUnknow.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>>,std::_Iterator_base0>::operator++(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // r8
  __int64 v5; // rcx
  __int64 i; // rax

  v4 = a1;
  v5 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v5 + 8); !*(_BYTE *)(i + 25) && v5 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v4 = i;
      v5 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<IUnknown *>>::_Min(*(_QWORD *)(v5 + 16), 0LL, v4, a4);
  }
  *v4 = i;
  return v4;
}
