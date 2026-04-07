/*
 * XREFs of ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800B208C
 * Callers:
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B2884 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800B1B54 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 */

__int64 __fastcall CDesktopThumbnail::Create(struct CDesktopThumbnail **a1)
{
  CDesktopThumbnailBase *v1; // rax
  CDesktopThumbnailBase *v2; // rbx
  int v3; // edi

  v1 = (CDesktopThumbnailBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                                  WPF::g_pProcessHeap,
                                  328LL);
  v2 = v1;
  if ( v1 )
  {
    memset_0(v1, 0, 0x148uLL);
    CDesktopThumbnailBase::CDesktopThumbnailBase(v2);
    *(_QWORD *)v2 = &CDesktopThumbnail::`vftable';
    *((_QWORD *)v2 + 36) = 0LL;
    *((_QWORD *)v2 + 37) = 0LL;
    *((_DWORD *)v2 + 76) = 0;
    *((_DWORD *)v2 + 77) = 0;
    *((_DWORD *)v2 + 78) = 0;
    v3 = ((__int64 (__fastcall *)(CDesktopThumbnailBase *))*(&CDesktopThumbnail::`vftable' + 1))(v2);
    if ( v3 >= 0 )
    {
      CDesktopThumbnail::s_pThumbnailNoRef = v2;
      return 0;
    }
  }
  else
  {
    v2 = 0LL;
    v3 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x40u);
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  if ( v2 )
    CBaseObject::Release(v2);
  return (unsigned int)v3;
}
