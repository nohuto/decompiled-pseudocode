/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800ACC90
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180009670 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x1800AC9B8 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18003984C (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180039958 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(struct IWICBitmap *a1, const struct _MARGINS *a2, struct CBitmapSource **a3)
{
  __int64 v5; // rax
  CBitmapSource *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // r9d
  unsigned int v10; // eax

  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v6 = (CBitmapSource *)v5;
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
  if ( v7 >= 0 )
  {
    v8 = CBitmapSource::Update(v6, a1);
    v9 = v8;
    if ( (v8 & 0x80000000) == 0 )
    {
      *a3 = v6;
      return v8;
    }
    v10 = 138;
  }
  else
  {
    v9 = v7;
    v10 = 136;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10);
  CBaseObject::Release(v6);
  return v8;
}
