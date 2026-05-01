/*
 * XREFs of ??_EIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x18042A450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180066768 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoa.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x180187750 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *__fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vector deleting destructor'(
        Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *this,
        char a2)
{
  wistd::function<bool (long)>::~function<bool (long)>((__int64)this + 40);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
