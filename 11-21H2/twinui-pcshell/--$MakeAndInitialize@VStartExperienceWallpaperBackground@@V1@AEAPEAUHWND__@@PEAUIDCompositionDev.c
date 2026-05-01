/*
 * XREFs of ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x18036E328
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18036FF80 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180088810 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x180392574 (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<StartExperienceWallpaperBackground,StartExperienceWallpaperBackground,HWND__ * &,IDCompositionDevice *>(
        StartExperienceWallpaperBackground **a1,
        HWND *a2,
        struct IDCompositionDevice **a3)
{
  StartExperienceWallpaperBackground *v6; // rax
  StartExperienceWallpaperBackground *v7; // rbx
  StartExperienceWallpaperBackground *v8; // rdi
  int v9; // esi
  StartExperienceWallpaperBackground *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (StartExperienceWallpaperBackground *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v6);
    *(_QWORD *)v7 = &StartExperienceWallpaperBackground::`vftable';
    *((_BYTE *)v7 + 16) = 0;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    v11 = v8;
    v12 = 0LL;
    v9 = StartExperienceWallpaperBackground::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(StartExperienceWallpaperBackground *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
