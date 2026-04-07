/*
 * XREFs of ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x180037704
 * Callers:
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x180035748 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x18009A9AC (-SetDpi@CAcrylicSheet@@QEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x1800378B4 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowBorder::CreateAndAttachBorderBrush(
        CWindowBorder *this,
        __int64 (__fastcall ***a2)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))
{
  char *v3; // rsi
  int BorderBrush; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // rdx
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v14; // [rsp+50h] [rbp+8h] BYREF

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
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)BorderBrush);
    return v5;
  }
  v14 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  v7 = v6(
         (struct Windows::UI::Composition::ISpriteVisual *)a2,
         &GUID_117e202d_a859_4c89_873b_c2aa566788e3,
         (__int64 *)&v14);
  v5 = v7;
  if ( v7 < 0 )
  {
    v11 = 60LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v8 = *v14;
  v9 = *(_QWORD *)v3;
  v12[0] = *(_DWORD *)(*(_QWORD *)v3 + 32LL) ^ _xmm;
  v12[1] = *(_DWORD *)(v9 + 36) ^ _xmm;
  v12[2] = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v8 + 168))(v14, v12);
  v5 = v7;
  if ( v7 < 0 )
  {
    v11 = 61LL;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v14 + 288))(
         v14,
         _mm_unpacklo_ps(
           (__m128)*(unsigned int *)(*(_QWORD *)v3 + 40LL),
           (__m128)*(unsigned int *)(*(_QWORD *)v3 + 40LL)).m128_u64[0]);
  v5 = v7;
  if ( v7 < 0 )
  {
    v11 = 62LL;
    goto LABEL_16;
  }
  v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *), _QWORD))(*a2)[7])(
         a2,
         *(_QWORD *)(*(_QWORD *)v3 + 48LL));
  v5 = v7;
  if ( v7 < 0 )
  {
    v11 = 63LL;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 32LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 32LL));
  v5 = v7;
  if ( v7 < 0 )
  {
    v11 = 64LL;
    goto LABEL_16;
  }
  v5 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return v5;
}
