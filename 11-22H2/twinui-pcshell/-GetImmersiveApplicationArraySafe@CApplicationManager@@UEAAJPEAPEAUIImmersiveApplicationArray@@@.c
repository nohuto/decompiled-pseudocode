/*
 * XREFs of ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180170D10
 * Callers:
 *     ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x1800462F0 (-GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180170B70 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1803997A0 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18016F274 (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_2b311223614f654dd5c02d621b456739___ @ 0x180170DE0 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEach__lam.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  const struct _GUID *v4; // rcx
  int v5; // ebx
  int *v7; // [rsp+20h] [rbp-10h] BYREF
  void *v8; // [rsp+28h] [rbp-8h] BYREF
  int v9; // [rsp+58h] [rbp+28h] BYREF
  void *v10; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  v5 = CImmersiveAppArray::s_CreateInstance(v4, &v10);
  v9 = v5;
  if ( v5 >= 0 )
  {
    v7 = &v9;
    v8 = v10;
    if ( v10 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_2b311223614f654dd5c02d621b456739___(
      (char *)this + 376,
      &v7);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v10)(
             v10,
             &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
             a2);
      v9 = v5;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return (unsigned int)v5;
}
