/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002BABC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::ContextualSuggestionsManager_ContentManagement::IContextualSuggestionsManager__::_1_::dtor$1 @ 0x1800D4FC5 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--ContextualSuggestion_ea_1800D4FC5.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::IdentityManager_ContentManagement::IIdentityManager__::_1_::dtor$1 @ 0x1800D4FE9 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--IdentityManager_Cont_ea_1800D4FE9.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::ThumbnailCacheHelper_ContentManagement::IThumbnailCacheHelper__::_1_::dtor$1 @ 0x1800D500D (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--ThumbnailCacheHelper_ea_1800D500D.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_bool__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckExecutionEnvironment_::_1_::dtor$0 @ 0x1800D565B (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandler_bool__1_Mi.c)
 *     _ContentManagement::ContentManagementService::EnsureOpenConnection_::_1_::dtor$2 @ 0x1800D67C7 (_ContentManagement--ContentManagementService--EnsureOpenConnection_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$5 @ 0x1800D6AD6 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$2 @ 0x1800D73BF (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_1800D73BF.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$10 @ 0x1800D74E5 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800D74E5.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock_::_1_::dtor$1 @ 0x1800D7587 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RemoveInval_ea_1800D7587.c)
 *     _wil::wait_for_completion_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount______Microsoft::WRL::ComPtr_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount________::_1_::dtor$0 @ 0x1800D785D (_wil--wait_for_completion_Windows--Foundation--Collections--IVectorView_Windows--Security--Crede.c)
 *     _wil::wait_for_completion_Windows::Storage::StorageFolder___Microsoft::WRL::ComPtr_Windows::Storage::IStorageFolder____::_1_::dtor$0 @ 0x1800DA17A (_wil--wait_for_completion_Windows--Storage--StorageFolder___Microsoft--WRL--ComPtr_Windows--Stor.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule_::_1_::dtor$5 @ 0x1800DA1CB (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--AddRule_--_1_--dtor$5.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::dtor$5 @ 0x1800DA264 (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--RemoveRule_--_1_--dtor$5.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_UniqueExtendedExecutionSession_IInspectable__::_1_::dtor$1 @ 0x1800DA3BE (_Microsoft--WRL--Details--MakeAndInitialize_UniqueExtendedExecutionSession_IInspect_ea_1800DA3BE.c)
 *     _UniqueExtendedExecutionSession::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1800DA552 (_UniqueExtendedExecutionSession--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _wil::wait_for_completion_Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult___Microsoft::WRL::ComPtr_Windows::Internal::Security::Authentication::Web::IGetDefaultSignInAccountResult____::_1_::dtor$0 @ 0x1800DA74C (_wil--wait_for_completion_Windows--Internal--Security--Authentication--Web--GetDefaultSignInAcco.c)
 *     _wil::wait_for_completion_Windows::Security::Credentials::WebAccountProvider___Microsoft::WRL::ComPtr_Windows::Security::Credentials::IWebAccountProvider____::_1_::dtor$0 @ 0x1800DA779 (_wil--wait_for_completion_Windows--Security--Credentials--WebAccountProvider___Microsoft--WRL--C.c)
 *     _wil::wait_for_completion_Windows::Foundation::Collections::IVectorView_HSTRING________Microsoft::WRL::ComPtr_Windows::Foundation::Collections::IVectorView_HSTRING__________::_1_::dtor$0 @ 0x1800DCA8C (_wil--wait_for_completion_Windows--Foundation--Collections--IVectorView_HSTRING________Microsoft.c)
 *     _wil::wait_for_completion_Windows::Services::TargetedContent::TargetedContentContainer___Microsoft::WRL::ComPtr_Windows::Services::TargetedContent::ITargetedContentContainer____::_1_::dtor$0 @ 0x1800DCAB9 (_wil--wait_for_completion_Windows--Services--TargetedContent--TargetedContentContainer___Microso.c)
 *     _wil::wait_for_completion_Windows::Services::TargetedContent::TargetedContentSubscription___Microsoft::WRL::ComPtr_Windows::Services::TargetedContent::ITargetedContentSubscription____::_1_::dtor$0 @ 0x1800DCAE6 (_wil--wait_for_completion_Windows--Services--TargetedContent--TargetedContentSubscription___Micr.c)
 *     _StartDocked::GetStartDefaultPins_::_1_::dtor$2 @ 0x1800DCDB3 (_StartDocked--GetStartDefaultPins_--_1_--dtor$2.c)
 *     _StartDocked::GetStartDefaultPins_::_1_::dtor$9 @ 0x1800DCE0D (_StartDocked--GetStartDefaultPins_--_1_--dtor$9.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::WeakRef::~WeakRef(Microsoft::WRL::WeakRef *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
