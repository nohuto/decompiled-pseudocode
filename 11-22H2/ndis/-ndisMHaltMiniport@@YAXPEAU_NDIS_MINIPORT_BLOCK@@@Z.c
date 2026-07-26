/*
 * XREFs of ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00698A8
 * Callers:
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01534F0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00141C0 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCloseULongRef@@YAEPEAU_ULONG_REFERENCE@@@Z @ 0x1C00B260C (-ndisCloseULongRef@@YAEPEAU_ULONG_REFERENCE@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D4C (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMHaltMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Eu,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      a1);
  if ( ndisCloseULongRef(&a1->Ref.SpinLock) )
  {
    if ( (a1->PnPFlags & 0x4000) == 0 )
    {
      v2 = ((a1->Flags & 0x100) != 0 ? 56 : 380) | 2;
      if ( (a1->Flags & 0x180) != 0 )
        v2 = (a1->Flags & 0x100) != 0 ? 56 : 380;
      ndisMCommonHaltMiniport(a1, v2);
      ndisMDeregisterBugCheckHandler(a1);
    }
    ndisDereferenceMiniport(a1, 0x18u);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Fu,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      a1);
}
