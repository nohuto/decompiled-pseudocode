/*
 * XREFs of ?Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ @ 0x180028180
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029030 (-UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x18002AFD0 (-clear@-$_Tree@V-$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002B9CC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedObject@AnimationLoggingManag.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18002BD10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedO.c)
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 *     ??0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180072B5C (--0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionPropertySet::Destroy(
        Windows::UI::Composition::CompositionPropertySet *this)
{
  char *v1; // rbx
  unsigned int i; // esi
  __int64 v4; // rbx
  struct _RTL_GENERIC_TABLE *v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // r14d
  _QWORD *v8; // rbx
  __int64 v9; // r15
  _QWORD *v10; // r11
  _QWORD *v11; // r10
  _QWORD *v12; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r10
  __int64 v17; // rax
  void *v18; // rsi
  __int64 v19; // rcx
  Windows::UI::Composition::AnimationBindingManager *v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int128 v25; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v26; // [rsp+80h] [rbp+30h] BYREF

  v1 = (char *)this + 176;
  for ( i = 0; i < *((_DWORD *)this + 50); ++i )
    WindowsDeleteString(*(HSTRING *)(*(_QWORD *)v1 + 8LL * i));
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v1, 8LL);
  v4 = *((_QWORD *)this + 3);
  v5 = *(struct _RTL_GENERIC_TABLE **)(v4 + 832);
  if ( !v5 )
  {
    v20 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
    if ( v20 )
    {
      v5 = (struct _RTL_GENERIC_TABLE *)Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v20);
      *(_QWORD *)(v4 + 832) = v5;
      if ( v5 )
        goto LABEL_4;
    }
    else
    {
      *(_QWORD *)(v4 + 832) = 0LL;
    }
    Microsoft::WRL2::FailFast::OutOfMemory(v21);
  }
LABEL_4:
  Windows::UI::Composition::AnimationBindingManager::UnregisterAllAnimationTargets(v5, *((_DWORD *)this + 32));
  v6 = *(_QWORD *)(v4 + 840);
  if ( v6 )
  {
    v7 = *((_DWORD *)this + 32);
    v8 = **(_QWORD ***)(v6 + 136);
LABEL_6:
    v26 = v8;
    while ( v8 != *(_QWORD **)(v6 + 136) )
    {
      v22 = *((unsigned int *)v8 + 7);
      if ( (_DWORD)v22 == v7 )
      {
        v23 = *((unsigned int *)v8 + 8);
        v25 = 0u;
        ((void (__fastcall *)(__int64, __int64, __int64, __int64, _DWORD, __int128 *, _QWORD, _QWORD))Windows::UI::Composition::AnimationLoggingManager::AnimationEnded)(
          v6,
          v22,
          v23,
          2LL,
          0,
          &v25,
          0LL,
          0LL);
        v26 = v8;
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(&v26);
        v24 = std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract(v6 + 136, v8);
        std::_Deallocate<16,0>(v24, 40LL);
        v8 = v26;
        goto LABEL_6;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(&v26);
      v8 = v26;
    }
    v9 = v6 + 152;
    v10 = *(_QWORD **)(v6 + 152);
    v11 = v10;
    v12 = v10;
    v13 = (__int64 *)v10[1];
    v14 = v13;
    while ( !*((_BYTE *)v14 + 25) )
    {
      if ( *((_DWORD *)v14 + 8) >= v7 )
      {
        if ( *((_BYTE *)v12 + 25) && v7 < *((_DWORD *)v14 + 8) )
          v12 = v14;
        v11 = v14;
        v14 = (__int64 *)*v14;
      }
      else
      {
        v14 = (__int64 *)v14[2];
      }
    }
    if ( !*((_BYTE *)v12 + 25) )
      v13 = (__int64 *)*v12;
    while ( !*((_BYTE *)v13 + 25) )
    {
      if ( v7 < *((_DWORD *)v13 + 8) )
      {
        v12 = v13;
        v13 = (__int64 *)*v13;
      }
      else
      {
        v13 = (__int64 *)v13[2];
      }
    }
    v15 = v11;
    v26 = v11;
    while ( v15 != v12 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>,std::_Iterator_base0>::operator++(&v26);
      v15 = v26;
    }
    v26 = v11;
    if ( v11 == (_QWORD *)*v10 && *((_BYTE *)v12 + 25) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>,0>>::clear(v6 + 152);
    }
    else
    {
      while ( v11 != v12 )
      {
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>,std::_Iterator_base0>::operator++(&v26);
        v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Extract(
                v9,
                v16);
        v18 = (void *)v17;
        v19 = *(_QWORD *)(v17 + 48);
        if ( v19 )
        {
          *(_QWORD *)(v17 + 48) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        }
        operator delete(v18, 0x38uLL);
        v11 = v26;
      }
    }
  }
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
