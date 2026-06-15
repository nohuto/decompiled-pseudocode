/*
 * XREFs of ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18001EAF4
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180021DC0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18001EC04 (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18001ECEC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800420E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallb.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCVolumeStrip@@@WRL@Microsoft@@QEAA@XZ @ 0x18012A554 (--1-$ComPtr@VCVolumeStrip@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVolumeStrip,IVolumeStrip,unsigned short const * &>(
        CVolumeStrip **a1,
        const unsigned __int16 **a2)
{
  CVolumeStrip *v4; // rax
  CVolumeStrip *v5; // rbx
  int v6; // edi
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  CVolumeStrip *v9; // r8
  CVolumeStrip *v10; // rcx
  CVolumeStrip *v12; // [rsp+30h] [rbp+8h] BYREF
  CVolumeStrip *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CVolumeStrip *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
    goto LABEL_12;
  }
  v5 = CVolumeStrip::CVolumeStrip(v4);
  v13 = v5;
  v12 = 0LL;
  v6 = CVolumeStrip::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<CVolumeStrip>::~ComPtr<CVolumeStrip>(&v13);
LABEL_12:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v12);
    return (unsigned int)v6;
  }
  *a1 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_5e874c8d_4066_4f50_6291_1bfd513dd43c,
                       &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v5;
    (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7) )
    {
      v10 = v5;
      v9 = v5;
      goto LABEL_7;
    }
    if ( (unsigned int)InlineIsEqualGUID(v8, v8) )
    {
      v10 = v9;
LABEL_7:
      v6 = 0;
      *a1 = v9;
      (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v10 + 8LL))(v10);
      goto LABEL_8;
    }
    v6 = -2147467262;
  }
LABEL_8:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release(v5);
  return (unsigned int)v6;
}
