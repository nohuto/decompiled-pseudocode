/*
 * XREFs of ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x1800AC9B8
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x1800C2F20 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800C3524 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800C3F20 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800EBE28 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 *     ?RegisterTransitionBitmap@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800FEA50 (-RegisterTransitionBitmap@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAUHWND.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800ACC90 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const void *a5,
        struct CBitmapSource **a6)
{
  unsigned __int64 v6; // r11
  struct IWICBitmap *v11; // rdi
  int v12; // eax
  const struct _MARGINS *v13; // rdx
  unsigned int v14; // ebx
  int v15; // r9d
  struct IWICBitmap *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-40h]
  struct IWICBitmap *v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h] BYREF

  v6 = 4LL * a1;
  v19 = 0LL;
  v20 = 0LL;
  v11 = 0LL;
  if ( v6 > 0xFFFFFFFF )
  {
    v14 = -2147024362;
    v15 = -2147024362;
    v18 = 209;
    goto LABEL_22;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, GUID *, _DWORD, unsigned int, const void *, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 31) + 160LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31),
          a1,
          a2,
          &GUID_WICPixelFormat32bppPBGRA,
          v6,
          4 * a2 * a1,
          a5,
          &v19);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v16 = v19;
    if ( !v19 )
    {
      v14 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xDCu);
      goto LABEL_23;
    }
    if ( a3 != a1 || a4 != a2 )
    {
      v11 = v19;
      v19 = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 31)
                                                         + 88LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31),
              &v20);
      v14 = v12;
      if ( v12 < 0 )
      {
        v18 = 227;
        goto LABEL_4;
      }
      if ( !v20 )
      {
        v14 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xE4u);
        goto LABEL_23;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmap *, _QWORD, _QWORD, int))(*(_QWORD *)v20 + 64LL))(
              v20,
              v11,
              a3,
              a4,
              1);
      v14 = v12;
      if ( v12 < 0 )
      {
        v18 = 230;
        goto LABEL_4;
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                         + 31)
                                                                                      + 144LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31),
              v20,
              2LL,
              &v19);
      v14 = v12;
      if ( v12 < 0 )
      {
        v18 = 232;
        goto LABEL_4;
      }
      v16 = v19;
      if ( !v19 )
      {
        v14 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xE9u);
        goto LABEL_23;
      }
    }
    v12 = CBitmapSource::Create(v16, v13, a6);
    v14 = v12;
    if ( v12 >= 0 )
      goto LABEL_23;
    v18 = 241;
    goto LABEL_4;
  }
  v18 = 219;
LABEL_4:
  v15 = v12;
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v18);
LABEL_23:
  if ( v19 )
    ((void (__fastcall *)(struct IWICBitmap *))v19->lpVtbl->Release)(v19);
  if ( v11 )
    ((void (__fastcall *)(struct IWICBitmap *))v11->lpVtbl->Release)(v11);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v14;
}
