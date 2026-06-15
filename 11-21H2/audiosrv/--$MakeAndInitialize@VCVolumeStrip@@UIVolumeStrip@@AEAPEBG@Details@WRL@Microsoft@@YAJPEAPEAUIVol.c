/*
 * XREFs of ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x180044844
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18000A140 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_18000AED0.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18004475C (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004493C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
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
  CVolumeStrip *v10; // r9

  *a1 = 0LL;
  v4 = (CVolumeStrip *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = CVolumeStrip::CVolumeStrip(v4);
  v6 = CVolumeStrip::RuntimeClassInitialize(v5, *a2);
  if ( v6 >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_5e874c8d_4066_4f50_6291_1bfd513dd43c, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, &GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7) )
      {
        v9 = v5;
        v10 = v5;
        goto LABEL_6;
      }
      if ( InlineIsEqualGUID(v8, v8) )
      {
LABEL_6:
        v6 = 0;
        *a1 = v10;
        (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v9 + 8LL))(v9);
        goto LABEL_7;
      }
      v6 = -2147467262;
    }
  }
LABEL_7:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release((volatile signed __int32 *)v5);
  return (unsigned int)v6;
}
