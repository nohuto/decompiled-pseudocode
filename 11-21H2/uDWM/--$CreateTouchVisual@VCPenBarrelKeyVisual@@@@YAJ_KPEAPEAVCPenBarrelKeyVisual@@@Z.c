/*
 * XREFs of ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x1800A9D50
 * Callers:
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800ADB84 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004F1C0 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800C8C60 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CPenBarrelKeyVisual>(__int64 a1, CTouchVisual **a2)
{
  unsigned int v3; // edi
  CTouchVisual *v4; // rax
  CTouchVisual *v5; // rbx
  int v6; // eax

  if ( a2 )
  {
    v4 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           352LL);
    v5 = v4;
    if ( v4 )
    {
      CTouchVisual::CTouchVisual(v4);
      *((_DWORD *)v5 + 79) = 0;
      *((_QWORD *)v5 + 40) = 0LL;
      *((_QWORD *)v5 + 41) = 0LL;
      *(_QWORD *)v5 = &CPenBarrelKeyVisual::`vftable';
      *((_WORD *)v5 + 174) = 1;
      *((_BYTE *)v5 + 350) = 0;
      v6 = CPenBarrelKeyVisual::Initialize(v5);
      v3 = v6;
      if ( v6 >= 0 )
      {
        *a2 = v5;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3Fu);
        CBaseObject::Release(v5);
      }
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v3;
}
