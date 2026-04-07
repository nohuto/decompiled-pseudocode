/*
 * XREFs of ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180038C24
 * Callers:
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024870 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180038780 (-CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18009A1C4 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180026FFC (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowBorder::Create(struct CWindowBorder **a1)
{
  CVisual *v2; // rax
  CVisual *v3; // rbx
  int v4; // edi

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x16u);
    return (unsigned int)v4;
  }
  v2 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    352LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x160uLL);
    CVisual::CVisual(v3);
    *(_QWORD *)v3 = &CWindowBorder::`vftable';
    *((_QWORD *)v3 + 31) = 0LL;
    *((_QWORD *)v3 + 32) = 0LL;
    *((_QWORD *)v3 + 33) = 0LL;
    *((_QWORD *)v3 + 34) = 0LL;
    *((_QWORD *)v3 + 35) = 0LL;
    *((_QWORD *)v3 + 36) = 0LL;
    *((_QWORD *)v3 + 37) = 0LL;
    v4 = CVisual::Initialize(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x16u);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
