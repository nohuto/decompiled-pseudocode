/*
 * XREFs of ??1?$MakeAllocator@VScreenClippingBrokerImpl@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803B2D68
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_PenWorkspace::Discover::RecentAppsCache_PenWorkspace::Discover::RecentAppsCache__::_1_::dtor$0 @ 0x18021BD84 (_Microsoft--WRL--Details--MakeAndInitialize_PenWorkspace--Discover--RecentAppsCache_PenWorkspace.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_PenWorkspaceDiscoverBrokerFactory_IUnknown__::_1_::dtor$0 @ 0x18021BFE4 (_Microsoft--WRL--Details--MakeAndInitialize_PenWorkspaceDiscoverBrokerFactory_IUnknown__--_1_--d.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_PenWorkspace::Discover::ObjectArray_PenWorkspace::Discover::ObjectArray_std::vector_Microsoft::WRL::ComPtr_IDiscoverRecentItem__std::allocator_Microsoft::WRL::ComPtr_IDiscoverRecentItem______&__::_1_::dtor$0 @ 0x1803B2744 (_Microsoft--WRL--Details--MakeAndInitialize_PenWorkspace--Discover--ObjectArray_PenWorkspace--Di.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_PenWorkspaceScreenCaptureBroker_IUnknown__::_1_::dtor$0 @ 0x1803B44DE (_Microsoft--WRL--Details--MakeAndInitialize_PenWorkspaceScreenCaptureBroker_IUnknown__--_1_--dto.c)
 *     ?CreateScreenClippingBroker@@YAJAEAV?$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z @ 0x18053D1AC (-CreateScreenClippingBroker@@YAJAEAV-$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<ScreenClippingBrokerImpl>::~MakeAllocator<ScreenClippingBrokerImpl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
