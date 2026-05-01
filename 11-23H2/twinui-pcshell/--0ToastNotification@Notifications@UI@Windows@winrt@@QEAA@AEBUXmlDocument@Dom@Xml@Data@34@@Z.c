/*
 * XREFs of ??0ToastNotification@Notifications@UI@Windows@winrt@@QEAA@AEBUXmlDocument@Dom@Xml@Data@34@@Z @ 0x180642544
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@?$factory_cache_entry@UToastNotification@Notifications@UI@Windows@winrt@@UIToastNotificationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@Z @ 0x180641AA4 (--$call@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@-$factory_cache_entry@UToastNotification.c)
 *     ?CreateToastNotification@?$consume_Windows_UI_Notifications_IToastNotificationFactory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUXmlDocument@Dom@Xml@Data@Windows@3@@Z @ 0x180643E94 (-CreateToastNotification@-$consume_Windows_UI_Notifications_IToastNotificationFactory@UIToastNot.c)
 */

winrt::Windows::UI::Notifications::ToastNotification *__fastcall winrt::Windows::UI::Notifications::ToastNotification::ToastNotification(
        winrt::Windows::UI::Notifications::ToastNotification *this,
        const struct winrt::Windows::Data::Xml::Dom::XmlDocument *a2)
{
  const struct winrt::Windows::Data::Xml::Dom::XmlDocument *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v4 = a2;
  v5 = &qword_180991DA8;
  _InterlockedIncrement64(&qword_180991DA8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory> )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationFactory<winrt::Windows::UI::Notifications::IToastNotificationFactory>::CreateToastNotification(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory>,
      this,
      a2);
    _InterlockedDecrement64(&qword_180991DA8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991DA8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory>::call<_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      &v4);
  }
  return this;
}
