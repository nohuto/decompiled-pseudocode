/*
 * XREFs of ??0VirtualDesktopCollection@@QEAA@XZ @ 0x18013E238
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopCollection@@V1@AEAPEAUIThumbnailDeviceSource@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopCollection@@AEAPEAUIThumbnailDeviceSource@@@Z @ 0x18013DDF8 (--$MakeAndInitialize@VVirtualDesktopCollection@@V1@AEAPEAUIThumbnailDeviceSource@@@Details@WRL@M.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180092148 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18013E66C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopCollection@Multitaskin.c)
 */

// Hidden C++ exception states: #wind=8
VirtualDesktopCollection *__fastcall VirtualDesktopCollection::VirtualDesktopCollection(VirtualDesktopCollection *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &VirtualDesktopCollection::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection'};
  *((_QWORD *)this + 1) = &VirtualDesktopCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &VirtualDesktopCollection::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2'};
  *((_QWORD *)this + 3) = &VirtualDesktopCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &VirtualDesktopCollection::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
  *((_QWORD *)this + 5) = &VirtualDesktopCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 11) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 12);
  InitializeSRWLock((PSRWLOCK)this + 13);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 34) = v2;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 7LL;
  *((_QWORD *)this + 40) = 8LL;
  *((_DWORD *)this + 66) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 36,
    0x10uLL,
    *((_QWORD *)this + 34));
  InitializeSRWLock((PSRWLOCK)this + 41);
  return this;
}
