/*
 * XREFs of ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1803997A0
 * Callers:
 *     ?GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180399710 (-GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z @ 0x18039C610 (-HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180170D10 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetAllApplicationsByAppIDSafe(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  int ImmersiveApplicationArraySafe; // ebx
  struct IImmersiveApplicationArray *v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  ImmersiveApplicationArraySafe = CApplicationManager::GetImmersiveApplicationArraySafe(this, &v8);
  if ( ImmersiveApplicationArraySafe >= 0 )
    ImmersiveApplicationArraySafe = (*(__int64 (__fastcall **)(struct IImmersiveApplicationArray *, const unsigned __int16 *, struct IObjectArray **))(*(_QWORD *)v8 + 48LL))(
                                      v8,
                                      a2,
                                      a3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return (unsigned int)ImmersiveApplicationArraySafe;
}
