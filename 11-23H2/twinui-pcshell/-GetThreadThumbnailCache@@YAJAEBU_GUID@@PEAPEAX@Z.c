/*
 * XREFs of ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1807441A8
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1807421B4 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z @ 0x180741BB0 (-CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z @ 0x180741C58 (-CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z.c)
 *     ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x18074252C (-DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z.c)
 */

__int64 __fastcall GetThreadThumbnailCache(const struct _GUID *a1, void **a2, struct _GUID *a3)
{
  int Interface; // ebx
  const struct _GUID *v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  struct IUnknown *ppv; // [rsp+58h] [rbp+20h] BYREF

  v6 = a1;
  if ( g_tlsThumbnailCache == -1 )
    DelayAllocateTLS_AllocateInternal(&a1->Data1, (const unsigned __int16 *)a2);
  Interface = CachedSTAObject_QueryInterface((__int64)a1, (int *)&v6, a3, a2);
  if ( Interface == 1 )
  {
    Interface = GetThreadFlags(1LL, &v7);
    if ( Interface >= 0 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppv);
      Interface = CoCreateInstance(
                    &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
                    0LL,
                    1u,
                    &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                    (LPVOID *)&ppv);
      if ( Interface >= 0 )
      {
        if ( (_DWORD)v6 && v7 != 1 )
          CachedSTAObject_SetObject(g_tlsThumbnailCache, ppv);
        Interface = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, void **))ppv->lpVtbl->QueryInterface)(
                      ppv,
                      &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                      a2);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppv);
    }
  }
  return (unsigned int)Interface;
}
