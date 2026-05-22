/*
 * XREFs of ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340
 * Callers:
 *     ?Destroy@ShapeVisual@Composition@UI@Windows@@UEAAXXZ @ 0x1800093D0 (-Destroy@ShapeVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@InteropCursorVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180024650 (-Destroy@InteropCursorVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@SpriteVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180027F60 (-Destroy@SpriteVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@LayerVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180086530 (-Destroy@LayerVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@RedirectVisual@Composition@UI@Windows@@UEAAXXZ @ 0x18016F280 (-Destroy@RedirectVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x180184B50 (-Destroy@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ @ 0x18002885C (-CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029030 (-UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x18002AFD0 (-clear@-$_Tree@V-$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002B9CC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedObject@AnimationLoggingManag.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18002BD10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedO.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ReleaseAllReferences@AllocatedStorage@CSparseStorage@@QEAAXXZ @ 0x18003CE98 (-ReleaseAllReferences@AllocatedStorage@CSparseStorage@@QEAAXXZ.c)
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18005B3B4 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18006A86C (-RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I_N@Z @ 0x180072020 (-RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProx.c)
 *     ??0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180072B5C (--0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z @ 0x18008C0BC (-ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     ?GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ @ 0x1800A1B68 (-GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV-$DynArray@PEAVCompositionL.c)
 *     ?GetSparse_LightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ @ 0x1800A1B98 (-GetSparse_LightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV-$DynArray@PEAVCompositionLight@Com.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::Visual::Destroy(Windows::UI::Composition::Visual *this)
{
  Microsoft::WRL2::ContextRuntimeClass *v2; // rcx
  int *v3; // rbx
  unsigned int v4; // esi
  _QWORD **v5; // rax
  unsigned int v6; // r11d
  Windows::UI::Composition::Visual *v7; // rcx
  CSparseStorage::AllocatedStorage *v8; // rcx
  struct CSparseStorage::DataInfo *Slot; // rax
  __int128 v10; // xmm0
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  void *v12; // rcx
  __int64 v13; // r15
  struct _RTL_GENERIC_TABLE *v14; // rax
  __int64 v15; // r15
  unsigned int v16; // r14d
  __int64 v17; // rbx
  _QWORD *v18; // r11
  _QWORD *v19; // r10
  _QWORD *v20; // rbx
  __int64 *v21; // rcx
  __int64 *v22; // rax
  unsigned int v23; // edx
  _QWORD *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  int *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int *v30; // rcx
  volatile signed __int32 *v31; // rcx
  struct CSparseStorage::DataInfo *SlotForData; // rax
  unsigned __int64 v33; // xmm0_8
  __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rcx
  struct CSparseStorage::DataInfo *v38; // rax
  unsigned __int64 v39; // xmm0_8
  Windows::UI::Composition::AnimationBindingManager *v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  _QWORD *v45; // [rsp+30h] [rbp-49h] BYREF
  _QWORD *v46; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v47[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v48; // [rsp+70h] [rbp-9h]
  __int128 v49; // [rsp+80h] [rbp+7h]
  __int64 v50; // [rsp+E0h] [rbp+67h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v51; // [rsp+E8h] [rbp+6Fh] BYREF
  int v52; // [rsp+F0h] [rbp+77h] BYREF
  int v53; // [rsp+F4h] [rbp+7Bh]
  __int64 v54; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 35);
  if ( v2 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v2);
    if ( *((_QWORD *)this + 35) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  v3 = &v52;
  v52 = 0;
  v4 = 0;
  v53 = 1;
  do
  {
    while ( 1 )
    {
      v5 = (_QWORD **)(*v3 == 1
                     ? Windows::UI::Composition::Visual::GetSparse_ExcludedLightsWeak(this)
                     : Windows::UI::Composition::Visual::GetSparse_LightsWeak(this));
      if ( !v5 )
        break;
      (*(void (__fastcall **)(_QWORD, Windows::UI::Composition::Visual *, _QWORD))(*(_QWORD *)**v5 + 304LL))(
        **v5,
        this,
        v6);
    }
    ++v4;
    ++v3;
  }
  while ( v4 < 2 );
  Windows::UI::Composition::Visual::CleanUpAllChildren(this);
  v7 = (Windows::UI::Composition::Visual *)*((_QWORD *)this + 17);
  if ( v7 )
    Windows::UI::Composition::Visual::RemoveChild(v7, this);
  v8 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 14);
  if ( (*((_DWORD *)v8 + 1) & 0x1000000) != 0 )
  {
    Slot = CSparseStorage::AllocatedStorage::FindSlot(v8, 8u);
    v10 = *(_OWORD *)((char *)Slot + 4);
    v11 = *(Microsoft::WRL2::NestableRuntimeClass **)((char *)Slot + 4);
    v51 = v11;
    v47[1] = v10;
    if ( v11 )
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v11);
      Microsoft::WRL2::ContextRuntimeClass::Dispose(v11);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(&v51);
      CSparseStorage::SetReference(
        (Windows::UI::Composition::Visual *)((char *)this + 112),
        8u,
        0LL,
        (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
      DirectComposition::CDevice::ResourceSetReferenceProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        3u,
        0);
    }
  }
  else
  {
    v51 = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 14) + 4LL) & 0x4000000) != 0 )
  {
    SlotForData = CSparseStorage::FindSlotForData((Windows::UI::Composition::Visual *)((char *)this + 112), 6u, 0x10u);
    v33 = _mm_srli_si128(*(__m128i *)((char *)SlotForData + 4), 8).m128i_u64[0];
    v48 = *(_OWORD *)((char *)SlotForData + 4);
    (*(void (__fastcall **)(_QWORD))(v33 + 8))(v48);
    *(_DWORD *)(*((_QWORD *)this + 14) + 4LL) &= ~0x4000000u;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 14) + 4LL) & 0x40000) != 0 )
  {
    v38 = CSparseStorage::FindSlotForData((Windows::UI::Composition::Visual *)((char *)this + 112), 0xEu, 0x10u);
    v39 = _mm_srli_si128(*(__m128i *)((char *)v38 + 4), 8).m128i_u64[0];
    v49 = *(_OWORD *)((char *)v38 + 4);
    (*(void (__fastcall **)(_QWORD))(v39 + 8))(v49);
    *(_DWORD *)(*((_QWORD *)this + 14) + 4LL) &= ~0x40000u;
  }
  if ( (*((_DWORD *)this + 65) & 0x8000) != 0 )
  {
    Windows::UI::Composition::CompositorCommon::RemoveDeferredPropertyChangeNotification(
      *((Windows::UI::Composition::CompositorCommon **)this + 3),
      this,
      0,
      1);
    *((_DWORD *)this + 65) &= ~0x8000u;
  }
  v12 = (void *)*((_QWORD *)this + 36);
  if ( v12 )
  {
    SetEvent(v12);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 288,
      0LL);
  }
  v13 = *((_QWORD *)this + 3);
  v14 = *(struct _RTL_GENERIC_TABLE **)(v13 + 832);
  if ( !v14 )
  {
    v40 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
    if ( v40 )
    {
      v14 = (struct _RTL_GENERIC_TABLE *)Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v40);
      *(_QWORD *)(v13 + 832) = v14;
      if ( v14 )
        goto LABEL_22;
    }
    else
    {
      *(_QWORD *)(v13 + 832) = 0LL;
    }
    Microsoft::WRL2::FailFast::OutOfMemory(v41);
  }
LABEL_22:
  Windows::UI::Composition::AnimationBindingManager::UnregisterAllAnimationTargets(v14, *((_DWORD *)this + 32));
  v15 = *(_QWORD *)(v13 + 840);
  if ( v15 )
  {
    v16 = *((_DWORD *)this + 32);
    v17 = **(_QWORD **)(v15 + 136);
LABEL_24:
    v50 = v17;
    while ( v17 != *(_QWORD *)(v15 + 136) )
    {
      v42 = *(unsigned int *)(v17 + 28);
      if ( (_DWORD)v42 == v16 )
      {
        v43 = *(unsigned int *)(v17 + 32);
        v47[0] = 0uLL;
        Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(
          v15,
          v42,
          v43,
          2LL,
          0,
          v47,
          v45,
          v46,
          0LL,
          0LL);
        v54 = v17;
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(&v54);
        v44 = std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract(v15 + 136, v17);
        std::_Deallocate<16,0>(v44, 40LL);
        v17 = v54;
        goto LABEL_24;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(&v50);
      v17 = v50;
    }
    v18 = *(_QWORD **)(v15 + 152);
    v19 = v18;
    v20 = v18;
    v21 = (__int64 *)v18[1];
    v22 = v21;
    while ( !*((_BYTE *)v22 + 25) )
    {
      v23 = *((_DWORD *)v22 + 8);
      if ( v23 < v16 )
      {
        v22 = (__int64 *)v22[2];
      }
      else
      {
        if ( *((_BYTE *)v20 + 25) && v16 < v23 )
          v20 = v22;
        v19 = v22;
        v22 = (__int64 *)*v22;
      }
    }
    if ( !*((_BYTE *)v20 + 25) )
      v21 = (__int64 *)*v20;
    while ( !*((_BYTE *)v21 + 25) )
    {
      if ( v16 < *((_DWORD *)v21 + 8) )
      {
        v20 = v21;
        v21 = (__int64 *)*v21;
      }
      else
      {
        v21 = (__int64 *)v21[2];
      }
    }
    v24 = v19;
    v45 = v19;
    while ( v24 != v20 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>,std::_Iterator_base0>::operator++(&v45);
      v24 = v45;
    }
    v46 = v19;
    if ( v19 == (_QWORD *)*v18 && *((_BYTE *)v20 + 25) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>,0>>::clear(v15 + 152);
    }
    else
    {
      while ( v19 != v20 )
      {
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>,std::_Iterator_base0>::operator++(&v46);
        v35 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Extract(
                v15 + 152,
                v34);
        v36 = v35;
        v37 = *(_QWORD *)(v35 + 48);
        if ( v37 )
        {
          *(_QWORD *)(v35 + 48) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
        }
        std::_Deallocate<16,0>(v36, 56LL);
        v19 = v46;
      }
    }
  }
  v25 = *((_QWORD *)this + 14);
  if ( (*(_DWORD *)(v25 + 4) & 0x10000000) != 0 )
  {
    v26 = *(_DWORD *)(v25 + 12);
    v27 = (int *)(v25 + 12);
    if ( (v26 & 0x7F000000) != 0x4000000 )
    {
      do
      {
        v27 = (int *)((char *)v27 + (v26 & 0xFFFFFF) + 4);
        v26 = *v27;
      }
      while ( (*v27 & 0x7F000000) != 0x4000000 );
    }
    Microsoft::WRL2::ContextRuntimeClass::Dispose(*(Microsoft::WRL2::ContextRuntimeClass **)(v27 + 1));
    v29 = *((_QWORD *)this + 14);
    if ( (*(_DWORD *)(v29 + 4) & 0x10000000) != 0 )
    {
      v28 = *(unsigned int *)(v29 + 12);
      v30 = (unsigned int *)(v29 + 12);
      if ( (v28 & 0x7F000000) != 0x4000000 )
      {
        do
        {
          v30 = (unsigned int *)((char *)v30 + (v28 & 0xFFFFFF) + 4);
          v28 = *v30;
        }
        while ( (*v30 & 0x7F000000) != 0x4000000 );
      }
      v31 = *(volatile signed __int32 **)(v30 + 1);
    }
    else
    {
      v31 = 0LL;
    }
    if ( _InterlockedExchangeAdd(v31 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(v28) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v31 + 64LL))(v31, v28);
    }
    v50 = 0LL;
    if ( `Windows::UI::Composition::CompositionObject::SetSparse_CompositionPropertySet'::`2'::sc_defaultValue )
      CSparseStorage::SetData((Windows::UI::Composition::Visual *)((char *)this + 112), 4u, 8u, &v50);
    else
      *(_DWORD *)(*((_QWORD *)this + 14) + 4LL) &= ~0x10000000u;
  }
  CSparseStorage::AllocatedStorage::ReleaseAllReferences(*((CSparseStorage::AllocatedStorage **)this + 14));
  if ( (*((_BYTE *)this + 124) & 2) != 0 )
  {
    Windows::UI::Composition::CompositorCommon::ClearWeakReference(
      *((Windows::UI::Composition::CompositorCommon **)this + 3),
      this);
    *((_DWORD *)this + 31) &= ~2u;
  }
  *((_DWORD *)this + 8) &= ~2u;
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Destroy preconditions");
  if ( v51 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v51);
}
