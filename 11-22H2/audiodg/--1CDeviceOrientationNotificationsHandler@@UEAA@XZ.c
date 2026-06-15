/*
 * XREFs of ??1CDeviceOrientationNotificationsHandler@@UEAA@XZ @ 0x14006BD88
 * Callers:
 *     ??_GCDeviceOrientationNotificationsHandler@@UEAAPEAXI@Z @ 0x14006BF80 (--_GCDeviceOrientationNotificationsHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x14006E4EC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall CDeviceOrientationNotificationsHandler::~CDeviceOrientationNotificationsHandler(
        CDeviceOrientationNotificationsHandler *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  wil::details *v5; // rcx
  volatile int *v6; // rdx

  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 12);
  v3 = (_QWORD *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v3 + 1);
      std::_Deallocate<16,0>(v3, 0x10uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  v5 = (wil::details *)*((_QWORD *)this + 10);
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>(
    (__int64)this,
    v6);
}
