/*
 * XREFs of ?Cancel@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ @ 0x1800E0080
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180025D24 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@HV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DE168 (--1-$_Tree@V-$_Tmap_traits@HV-$function@$$A6AXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 *     ??$swap@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@YAXAEAV?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@0@0@Z @ 0x1800DFD74 (--$swap@HV-$function@$$A6AXXZ@std@@U-$less@H@2@V-$allocator@U-$pair@$$CBHV-$function@$$A6AXXZ@st.c)
 *     ??0?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800DFDA0 (--0-$map@HV-$function@$$A6AXXZ@std@@U-$less@H@2@V-$allocator@U-$pair@$$CBHV-$function@$$A6AXXZ@s.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Utils::Internal::SimpleCancellationToken::Cancel(
        Spectre::Utils::Internal::SimpleCancellationToken *this)
{
  char v2; // di
  __int64 v3; // rcx
  void *v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  std::map<int,std::function<void (void)>>::map<int,std::function<void (void)>>(v4);
  std::_Mutex_base::lock((Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8));
  v2 = *((_BYTE *)this + 112);
  *((_BYTE *)this + 112) = 1;
  std::swap<int,std::function<void (void)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (void)>>>>(
    (__int64 *)v4,
    (__int64 *)this + 12);
  _Mtx_unlock((Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8));
  if ( !v2 )
  {
    v3 = *(_QWORD *)v4[0];
    v5 = *(_QWORD *)v4[0];
    while ( !*(_BYTE *)(v3 + 25) )
    {
      std::_Func_class<void,>::operator()(v3 + 40);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v5);
      v3 = v5;
    }
  }
  std::_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>::~_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>(v4);
}
