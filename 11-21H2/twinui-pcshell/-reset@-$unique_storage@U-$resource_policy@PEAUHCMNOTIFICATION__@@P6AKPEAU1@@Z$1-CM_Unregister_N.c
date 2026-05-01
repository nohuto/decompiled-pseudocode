/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x1801734FC
 * Callers:
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E2590 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RegisterForXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x18011EB60 (-RegisterForXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@.c)
 *     wistd::__function::__func__lambda_6091c0fdf23ade5747cc93b1c5a66275__void___cdecl(void)_::operator() @ 0x18017EB50 (wistd--__function--__func__lambda_6091c0fdf23ade5747cc93b1c5a66275__void___cdecl(void)_--operato.c)
 *     ?UnregisterFromXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18033AEDC (-UnregisterFromXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wi.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rsi
  DWORD LastError; // ebx

  v4 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    CM_Unregister_Notification(v4);
    SetLastError(LastError);
  }
  *a1 = a2;
}
