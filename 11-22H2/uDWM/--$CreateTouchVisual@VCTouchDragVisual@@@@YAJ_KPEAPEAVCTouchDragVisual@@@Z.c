/*
 * XREFs of ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800AF1E4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800B1AB4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x1800E7B00 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800E7C60 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CTouchDragVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  unsigned int v4; // ebx
  CTouchDragVisual *v5; // rax
  CTouchDragVisual *v6; // rax
  CBaseObject *v7; // rdi
  int v8; // eax

  if ( a2 )
  {
    v5 = (CTouchDragVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               472LL);
    if ( v5 && (v6 = CTouchDragVisual::CTouchDragVisual(v5, a1), (v7 = v6) != 0LL) )
    {
      v8 = CTouchDragVisual::Initialize(v6);
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
