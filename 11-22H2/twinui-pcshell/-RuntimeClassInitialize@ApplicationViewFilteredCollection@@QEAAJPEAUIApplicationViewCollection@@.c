/*
 * XREFs of ?RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@@Z @ 0x180689A20
 * Callers:
 *     ??$MakeAndInitialize@VApplicationViewFilteredCollection@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewFilteredCollection@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Z @ 0x180688B5C (--$MakeAndInitialize@VApplicationViewFilteredCollection@@V1@AEAPEAUIApplicationViewCollection@@A.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800EE794 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAJPEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x1806897E8 (-Register@-$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplication.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationViewFilteredCollection::RuntimeClassInitialize(
        ApplicationViewFilteredCollection *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewVisibilityDebouncedNotificationService *a3,
        struct IObjectCollection *a4)
{
  __int64 v7; // rbx
  void *v8; // r8
  __int64 v9; // rax
  int v10; // esi
  __int64 *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-38h]
  unsigned int v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-20h]
  unsigned int v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v22; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v24; // [rsp+80h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((__int64 *)this + 9, (__int64)a2);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v15,
    (__int64)a4);
  v17 = 0;
  v18 = 0LL;
  v19 = &v15;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v17);
  v20 = v16;
  v21 = 0LL;
  v22 = &v15;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
  while ( v17 != v20 || v19 != v22 )
  {
    v7 = v18;
    v24 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
    v9 = *((_QWORD *)this + 11);
    if ( v9 == *((_QWORD *)this + 13) )
    {
      v10 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
              (__int64)this + 80,
              v9 + 1,
              v8);
      v9 = *((_QWORD *)this + 11);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x69,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
        return (unsigned int)v10;
      }
    }
    *((_QWORD *)this + 11) = v9 + 1;
    v11 = (__int64 *)(*((_QWORD *)this + 10) + 8 * v9);
    if ( v11 )
    {
      *v11 = v7;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
    ++v17;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v17);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  v12 = EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Register(
          (_QWORD *)this + 14,
          (__int64)a3);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6B,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
