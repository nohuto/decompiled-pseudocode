/*
 * XREFs of ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180036C10
 * Callers:
 *     ??R_lambda_c9532b930f253e78667049fecbd894a6_@@QEBA@AEAVCNoResult@Internal@Windows@@@Z @ 0x18002E308 (--R_lambda_c9532b930f253e78667049fecbd894a6_@@QEBA@AEAVCNoResult@Internal@Windows@@@Z.c)
 * Callees:
 *     ?CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC64 (-CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x180030EF4 (-DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CCachedSTAObject@@UEAAKXZ @ 0x18003DDE0 (-Release@CCachedSTAObject@@UEAAKXZ.c)
 *     ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x180042D44 (-_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetThreadThumbnailCache(struct _GUID *a1, void **a2, struct _GUID *a3)
{
  int Interface; // ebx
  IUnknown *v5; // rdi
  CCachedSTAObject *v6; // rbx
  CCachedSTAObject *v8; // [rsp+50h] [rbp+20h] BYREF
  int v9; // [rsp+60h] [rbp+30h] BYREF
  IUnknown *punk; // [rsp+68h] [rbp+38h] BYREF

  v8 = (CCachedSTAObject *)a1;
  if ( g_tlsThumbnailCache == -1 )
    DelayAllocateTLS_AllocateInternal(&a1->Data1, (const unsigned __int16 *)a2);
  Interface = CachedSTAObject_QueryInterface((__int64)a1, (int *)&v8, a3, a2);
  if ( Interface == 1 )
  {
    Interface = GetThreadFlags(1LL, &v9);
    if ( Interface >= 0 )
    {
      punk = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
      Interface = CoCreateInstance(
                    &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
                    0LL,
                    1u,
                    &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                    (LPVOID *)&punk);
      if ( Interface < 0 )
      {
LABEL_13:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        return (unsigned int)Interface;
      }
      if ( (_DWORD)v8 && v9 != 1 )
      {
        v5 = punk;
        if ( g_tlsThumbnailCache == -1 )
        {
LABEL_12:
          Interface = ((__int64 (__fastcall *)(IUnknown *, GUID *, void **))v5->lpVtbl->QueryInterface)(
                        v5,
                        &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                        a2);
          goto LABEL_13;
        }
        if ( (int)_GetCachedSTAObject(g_tlsThumbnailCache, 0LL, &v8) >= 0 )
        {
          v6 = v8;
          IUnknown_Set((IUnknown **)v8 + 4, v5);
          CCachedSTAObject::Release(v6);
        }
      }
      v5 = punk;
      goto LABEL_12;
    }
  }
  return (unsigned int)Interface;
}
