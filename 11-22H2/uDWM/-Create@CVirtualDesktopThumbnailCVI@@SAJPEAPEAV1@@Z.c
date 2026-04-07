/*
 * XREFs of ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x180003218
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180003020 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopThumbnailCVI::Create(struct CVirtualDesktopThumbnailCVI **a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  if ( a1 )
  {
    v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    if ( v2 )
    {
      *(_QWORD *)(v2 + 24) = 0LL;
      *(_QWORD *)v2 = &CVirtualDesktopThumbnailCVI::`vftable';
      *(_DWORD *)(v2 + 8) = 1;
      *(_OWORD *)(v2 + 56) = 0LL;
      *a1 = (struct CVirtualDesktopThumbnailCVI *)v2;
      return 0;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Au, 0LL);
      *a1 = 0LL;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8Au, 0LL);
  }
  return v3;
}
