/*
 * XREFs of ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18004F050
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18004E688 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800AB57C (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800AB8F0 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AC744 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800ACD7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004F1C0 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x18004F4D0 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateTouchVisual<CDirectTouchVisual>(unsigned __int64 a1, CDirectTouchVisual **a2)
{
  CTouchVisual *v4; // rax
  CDirectTouchVisual *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx

  if ( a2 )
  {
    v4 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           432LL);
    v5 = v4;
    if ( v4 )
    {
      CTouchVisual::CTouchVisual(v4, a1);
      *((_QWORD *)v5 + 52) = 0LL;
      *((_QWORD *)v5 + 53) = 0LL;
      *(_QWORD *)v5 = &CDirectTouchVisual::`vftable';
      v6 = CDirectTouchVisual::Initialize(v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3Fu);
        CBaseObject::Release(v5);
      }
      else
      {
        *a2 = v5;
      }
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v7;
}
