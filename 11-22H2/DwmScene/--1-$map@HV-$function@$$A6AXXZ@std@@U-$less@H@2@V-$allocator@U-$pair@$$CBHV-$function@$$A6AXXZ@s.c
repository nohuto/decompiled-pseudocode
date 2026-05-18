/*
 * XREFs of ??1?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800DFECC
 * Callers:
 *     _Spectre::Utils::Internal::SimpleCancellationToken::Cancel_::_1_::dtor$0 @ 0x1800F20E8 (_Spectre--Utils--Internal--SimpleCancellationToken--Cancel_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<int,std::function<void (void)>>::~map<int,std::function<void (void)>>(void **a1)
{
  std::_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>::~_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>(a1);
}
