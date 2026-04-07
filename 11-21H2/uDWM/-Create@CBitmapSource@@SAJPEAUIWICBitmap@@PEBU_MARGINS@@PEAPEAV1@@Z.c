/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18001A870
 * Callers:
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180003F50 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001C938 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180028070 (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18001A93C (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18001AA4C (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(struct IWICBitmap *a1, const struct _MARGINS *a2, struct CBitmapSource **a3)
{
  __int64 v5; // rax
  CBaseObject *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // r9d
  unsigned int v11; // eax

  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v6 = (CBaseObject *)v5;
  if ( !v5 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x86u);
    return v8;
  }
  *(_DWORD *)(v5 + 8) = 1;
  *(_QWORD *)v5 = &CBitmapSource::`vftable';
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_DWORD *)(v5 + 80) = 0x80000000;
  *(_DWORD *)(v5 + 88) = 0x80000000;
  *(_DWORD *)(v5 + 84) = 0x80000000;
  *(_DWORD *)(v5 + 92) = 0x80000000;
  *(_QWORD *)(v5 + 96) = 0LL;
  v7 = CBitmapSource::Initialize((CBitmapSource *)v5);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = v7;
    v11 = 136;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v11);
    CBaseObject::Release(v6);
    return v8;
  }
  v8 = CBitmapSource::Update(v6, a1);
  v9 = v8;
  if ( (v8 & 0x80000000) != 0 )
  {
    v11 = 138;
    goto LABEL_8;
  }
  *a3 = v6;
  return v8;
}
