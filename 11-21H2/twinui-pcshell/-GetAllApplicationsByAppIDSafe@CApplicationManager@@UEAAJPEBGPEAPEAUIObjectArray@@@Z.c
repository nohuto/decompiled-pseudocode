/*
 * XREFs of ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1802E2F70
 * Callers:
 *     ?GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1802E2EE0 (-GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z @ 0x1802E47D0 (-HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1801240B0 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
