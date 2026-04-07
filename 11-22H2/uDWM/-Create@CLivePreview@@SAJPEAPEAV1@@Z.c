/*
 * XREFs of ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18004A61C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x18004A6D8 (--0CLivePreview@@IEAA@XZ.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x18004A7E0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLivePreview::Create(struct CLivePreview **a1)
{
  CLivePreview *v2; // rax
  CLivePreview *v3; // rax
  struct CLivePreview *v4; // rdi
  int v5; // ebx

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x5Bu, 0LL);
    return (unsigned int)v5;
  }
  v2 = (CLivePreview *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         568LL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_10;
  }
  v3 = CLivePreview::CLivePreview(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_10:
    v5 = -2147024882;
    goto LABEL_7;
  }
  v5 = CLivePreview::Initialize(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5Bu, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
