/*
 * XREFs of ?Attach@?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x180178724
 * Callers:
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x18017A4CC (-OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z.c)
 *     ?OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z @ 0x18017AED0 (-OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017C290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHom_ea_18017C290.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Input::MPCManager::HomeGestureEventArgs>::Attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
