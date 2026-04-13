/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x1800293C8
 * Callers:
 *     _Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded_::_1_::dtor$0 @ 0x1800EE8F6 (_Mobility--Pinning--CreateYourPhoneTaskbarIconIfNeeded_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::PinWebsiteToTaskbarService::Invoke_::_1_::dtor$0 @ 0x1800F5540 (_CreativeFramework--Actions--PinWebsiteToTaskbarService--Invoke_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor$5 @ 0x1800F557F (_CreativeFramework--Actions--MakePinWebsiteToTaskbarService_--_1_--dtor$5.c)
 *     _wil::details::functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__&_::Run_::_1_::dtor$7 @ 0x1800F5616 (_wil--details--functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__-_--Run_--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
