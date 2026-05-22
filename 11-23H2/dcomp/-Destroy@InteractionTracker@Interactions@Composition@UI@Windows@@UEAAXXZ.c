/*
 * XREFs of ?Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180138B90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractionTrackerBindingManager@Interactions@234@XZ @ 0x1801280F0 (-GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractio.c)
 *     ??$_Destroy_range@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@YAXPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU123456@AEAV?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@0@@Z @ 0x180135604 (--$_Destroy_range@V-$allocator@UManipulationListEntry@InteractionTracker@Interactions@Compositio.c)
 *     ?RemoveTrackerBindings@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAXPEAVInteractionTracker@2345@@Z @ 0x180187B08 (-RemoveTrackerBindings@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEA.c)
 *     ?RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18019030C (-RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Destroy(
        Windows::UI::Composition::Interactions::InteractionTracker *this)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rsi
  __int64 v3; // rbx
  Windows::UI::Composition::CompositorCommon *v4; // rcx
  Microsoft::WRL2::NestableRuntimeClass *InteractionTrackerBindingManager; // rax
  Windows::UI::Composition::Interactions::InteractionTrackerBindingManager *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 248);
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::RemoveAll(*((Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection **)this
                                                                                              + 31));
    *(_QWORD *)(v3 + 152) = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v1);
  }
  v4 = (Windows::UI::Composition::CompositorCommon *)*((_QWORD *)this + 3);
  if ( *((_QWORD *)v4 + 134) )
  {
    InteractionTrackerBindingManager = Windows::UI::Composition::CompositorCommon::GetInteractionTrackerBindingManager(v4);
    v9 = InteractionTrackerBindingManager;
    v6 = InteractionTrackerBindingManager;
    if ( InteractionTrackerBindingManager )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(InteractionTrackerBindingManager);
    Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::RemoveTrackerBindings(v6, this);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
  }
  std::_Destroy_range<std::allocator<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>>(
    *((Microsoft::WRL2::NestableRuntimeClass ***)this + 25),
    *((Microsoft::WRL2::NestableRuntimeClass ***)this + 26));
  *((_QWORD *)this + 26) = *((_QWORD *)this + 25);
  *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
  v7 = *((_QWORD *)this + 3);
  v8 = *((_QWORD *)this + 42);
  *((_QWORD *)this + 42) = 0LL;
  Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v7, v8);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
