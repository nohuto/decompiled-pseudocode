/*
 * XREFs of ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180102830
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x1801035A0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800B1B54 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 */

__int64 __fastcall CVirtualDesktopThumbnail::Create(struct CVirtualDesktopThumbnail **a1)
{
  int v2; // ebx
  CDesktopThumbnailBase *v3; // rax
  CDesktopThumbnailBase *v4; // rdi

  if ( a1 )
  {
    v3 = (CDesktopThumbnailBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                                    WPF::g_pProcessHeap,
                                    296LL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x128uLL);
      CDesktopThumbnailBase::CDesktopThumbnailBase(v4);
      *(_QWORD *)v4 = &CVirtualDesktopThumbnail::`vftable';
      v2 = ((__int64 (__fastcall *)(CDesktopThumbnailBase *))*(&CVirtualDesktopThumbnail::`vftable' + 1))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x101u);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x101u);
  }
  return (unsigned int)v2;
}
