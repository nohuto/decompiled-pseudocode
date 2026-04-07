/*
 * XREFs of ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x180008818
 * Callers:
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180008790 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x1800088D4 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x180008B30 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailVisual::Create(struct CThumbnailVisual **a1)
{
  CThumbnailVisual *v2; // rax
  CThumbnailVisual *v3; // rax
  struct CThumbnailVisual *v4; // rdi
  int v5; // ebx

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1Bu, 0LL);
    return (unsigned int)v5;
  }
  v2 = (CThumbnailVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             576LL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_10;
  }
  v3 = CThumbnailVisual::CThumbnailVisual(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_10:
    v5 = -2147024882;
    goto LABEL_7;
  }
  v5 = CThumbnailVisual::Initialize(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1Bu, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
