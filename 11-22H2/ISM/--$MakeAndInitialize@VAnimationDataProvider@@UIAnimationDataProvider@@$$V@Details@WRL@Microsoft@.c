/*
 * XREFs of ??$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAnimationDataProvider@@@Z @ 0x18003BB4C
 * Callers:
 *     ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x18003E4F8 (-Create@AnimationDataProvider@@SA-AV-$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??0AnimationDataProvider@@QEAA@XZ @ 0x18003BC14 (--0AnimationDataProvider@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AnimationDataProvider,IAnimationDataProvider,>(
        _QWORD *a1)
{
  AnimationDataProvider *v2; // rax
  AnimationDataProvider *v3; // rdi
  int v4; // ebx
  AnimationDataProvider *v6; // [rsp+30h] [rbp+8h] BYREF
  AnimationDataProvider *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (AnimationDataProvider *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v6);
    return (unsigned int)v4;
  }
  v3 = AnimationDataProvider::AnimationDataProvider(v2);
  v7 = v3;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(AnimationDataProvider *))(*(_QWORD *)v3 + 80LL))(v3);
  if ( v4 < 0 )
  {
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v7);
    goto LABEL_7;
  }
  v4 = (**(__int64 (__fastcall ***)(AnimationDataProvider *, GUID *, _QWORD *))v3)(
         v3,
         &GUID_c2b8d4a1_8c81_48a7_b9ab_171b2a64dd6e,
         a1);
  (*(void (__fastcall **)(AnimationDataProvider *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
