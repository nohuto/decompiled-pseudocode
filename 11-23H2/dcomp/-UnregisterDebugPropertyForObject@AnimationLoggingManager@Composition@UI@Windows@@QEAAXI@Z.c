/*
 * XREFs of ?UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029F08
 * Callers:
 *     ?Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ @ 0x180029E50 (-Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?UnDebugProperties2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVDebugPropertyRegistration@234@@Z @ 0x18016EF30 (-UnDebugProperties2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEA.c)
 *     ?ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z @ 0x18019D6D4 (-ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x18002AFD0 (-clear@-$_Tree@V-$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002B9CC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedObject@AnimationLoggingManag.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18002BD10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedO.c)
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 */

void __fastcall Windows::UI::Composition::AnimationLoggingManager::UnregisterDebugPropertyForObject(
        Windows::UI::Composition::AnimationLoggingManager *this,
        unsigned int a2)
{
  _QWORD *v2; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // r11
  _QWORD *v7; // r10
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v20; // [rsp+70h] [rbp+20h] BYREF

  v2 = (_QWORD *)((char *)this + 136);
  v5 = (_QWORD *)**((_QWORD **)this + 17);
LABEL_2:
  v20 = v5;
  while ( v5 != (_QWORD *)*v2 )
  {
    v12 = *((unsigned int *)v5 + 7);
    if ( (_DWORD)v12 == a2 )
    {
      v13 = *((unsigned int *)v5 + 8);
      v19 = 0uLL;
      ((void (__fastcall *)(Windows::UI::Composition::AnimationLoggingManager *, __int64, __int64, __int64, _DWORD, __int128 *, _QWORD, _QWORD))Windows::UI::Composition::AnimationLoggingManager::AnimationEnded)(
        this,
        v12,
        v13,
        2LL,
        0,
        &v19,
        0LL,
        0LL);
      v20 = v5;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(&v20);
      v14 = std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract(v2, v5);
      std::_Deallocate<16,0>(v14, 40LL);
      v5 = v20;
      goto LABEL_2;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(&v20);
    v5 = v20;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 19);
  v7 = v6;
  v8 = v6;
  v9 = (__int64 *)v6[1];
  v10 = v9;
  while ( !*((_BYTE *)v10 + 25) )
  {
    if ( *((_DWORD *)v10 + 8) >= a2 )
    {
      if ( *((_BYTE *)v8 + 25) && a2 < *((_DWORD *)v10 + 8) )
        v8 = v10;
      v7 = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  if ( !*((_BYTE *)v8 + 25) )
    v9 = (__int64 *)*v8;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( a2 < *((_DWORD *)v9 + 8) )
    {
      v8 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  v11 = v7;
  v20 = v7;
  while ( v11 != v8 )
  {
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>,std::_Iterator_base0>::operator++(&v20);
    v11 = v20;
  }
  v20 = v7;
  if ( v7 == (_QWORD *)*v6 && *((_BYTE *)v8 + 25) )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>,0>>::clear((char *)this + 152);
  }
  else
  {
    while ( v7 != v8 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>,std::_Iterator_base0>::operator++(&v20);
      v16 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Extract(
              (char *)this + 152,
              v15);
      v17 = v16;
      v18 = *(_QWORD *)(v16 + 48);
      if ( v18 )
      {
        *(_QWORD *)(v16 + 48) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      }
      std::_Deallocate<16,0>(v17, 56LL);
      v7 = v20;
    }
  }
}
