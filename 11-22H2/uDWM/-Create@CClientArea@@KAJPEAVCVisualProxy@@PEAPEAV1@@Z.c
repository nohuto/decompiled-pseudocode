/*
 * XREFs of ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x18001F0A0
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180012260 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180023DD4 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x1800255E0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800221E0 (--0CVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::Create(struct CVisualProxy *a1, struct CClientArea **a2)
{
  unsigned int v4; // edi
  CVisual *v5; // rcx
  struct CClientArea *v6; // rcx

  v4 = 0;
  v5 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    256LL);
  if ( v5 && (CVisual::CVisual(v5), *(_QWORD *)v6 = &CClientArea::`vftable', v6) )
  {
    *((_QWORD *)v6 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Au, 0LL);
  }
  return v4;
}
