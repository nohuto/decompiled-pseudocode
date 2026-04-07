/*
 * XREFs of ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x1800195B8
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180019650 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A0BF4 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800CEBB4 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x18001A750 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800221E0 (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CreateFromSharedHandle(void *a1, struct CVisual **a2)
{
  CVisual *v4; // rax
  CVisual *v5; // rax
  CBaseObject *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  if ( a2 )
  {
    *a2 = 0LL;
    v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                      WPF::g_pProcessHeap,
                      248LL);
    if ( v4 && (v5 = CVisual::CVisual(v4), (v6 = v5) != 0LL) )
    {
      v7 = CVisual::InitializeFromSharedHandle(v5, a1);
      v8 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3Fu, 0LL);
        CBaseObject::Release(v6);
      }
      else
      {
        *a2 = v6;
      }
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Du, 0LL);
    }
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x37u, 0LL);
  }
  return v8;
}
