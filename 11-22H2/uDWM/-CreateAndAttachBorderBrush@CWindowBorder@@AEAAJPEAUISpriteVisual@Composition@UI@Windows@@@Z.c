/*
 * XREFs of ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x18001A254
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180019650 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001B75C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x1800A381C (-SetDpi@CAcrylicSheet@@QEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18001A414 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowBorder::CreateAndAttachBorderBrush(
        CWindowBorder *this,
        struct Windows::UI::Composition::ISpriteVisual *a2)
{
  char *v3; // rsi
  int BorderBrush; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-20h]
  _DWORD v13[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 *v15; // [rsp+50h] [rbp+10h] BYREF

  v3 = (char *)this + 288;
  BorderBrush = CWindowBorder::CCachedBorderBrush::GetBorderBrush(
                  (_DWORD)this,
                  *((_DWORD *)this + 81),
                  (int)this + 332,
                  *((_DWORD *)this + 87),
                  *((_DWORD *)this + 82),
                  (__int64)this + 288);
  v5 = BorderBrush;
  if ( BorderBrush < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)BorderBrush,
      v12);
    return v5;
  }
  v15 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))a2)(
         a2,
         &GUID_117e202d_a859_4c89_873b_c2aa566788e3,
         (__int64 *)&v15);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 60LL;
    goto LABEL_12;
  }
  v7 = *v15;
  v8 = *(_QWORD *)v3;
  v13[0] = *(_DWORD *)(*(_QWORD *)v3 + 32LL) ^ _xmm;
  v13[1] = *(_DWORD *)(v8 + 36) ^ _xmm;
  v13[2] = 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v7 + 168))(v15, v13);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 61LL;
    goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v15 + 288))(
         v15,
         _mm_unpacklo_ps(
           (__m128)*(unsigned int *)(*(_QWORD *)v3 + 40LL),
           (__m128)*(unsigned int *)(*(_QWORD *)v3 + 40LL)).m128_u64[0]);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 62LL;
    goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *, _QWORD))(*(_QWORD *)a2 + 56LL))(
         a2,
         *(_QWORD *)(*(_QWORD *)v3 + 48LL));
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 63LL;
    goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                       + 32LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 32LL));
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 64LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v6,
      v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    return v5;
  }
  v9 = (__int64)v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
