/*
 * XREFs of ??1SimpleCancellationToken@Internal@Utils@Spectre@@UEAA@XZ @ 0x1800DFEEC
 * Callers:
 *     ??_ESimpleCancellationToken@Internal@Utils@Spectre@@UEAAPEAXI@Z @ 0x1800DFFB0 (--_ESimpleCancellationToken@Internal@Utils@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@HV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DE168 (--1-$_Tree@V-$_Tmap_traits@HV-$function@$$A6AXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 */

void __fastcall Spectre::Utils::Internal::SimpleCancellationToken::~SimpleCancellationToken(void **this)
{
  std::_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>::~_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>(this + 12);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 1));
  *this = &Spectre::Utils::ICancellationToken::`vftable';
}
