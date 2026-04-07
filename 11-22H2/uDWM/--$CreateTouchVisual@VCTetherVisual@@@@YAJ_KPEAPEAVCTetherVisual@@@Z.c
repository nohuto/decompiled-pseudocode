/*
 * XREFs of ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800AF0FC
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800B1630 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800E37D8 (--0CTetherVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800E3D60 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CTetherVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  unsigned int v4; // ebx
  CTetherVisual *v5; // rax
  CTetherVisual *v6; // rax
  CBaseObject *v7; // rdi
  int v8; // eax

  if ( a2 )
  {
    v5 = (CTetherVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            432LL);
    if ( v5 && (v6 = CTetherVisual::CTetherVisual(v5, a1), (v7 = v6) != 0LL) )
    {
      v8 = CTetherVisual::Initialize(v6);
      v4 = v8;
      if ( v8 >= 0 )
      {
        *a2 = v7;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3Fu);
        CBaseObject::Release(v7);
      }
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v4;
}
