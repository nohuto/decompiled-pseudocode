/*
 * XREFs of ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0066F24
 * Callers:
 *     ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C002434C (-ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C0066CF8 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006E914 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qLL @ 0x1C0018668 (WPP_RECORDER_SF_qLL.c)
 */

void __fastcall ndisUpdateMiniportFakeStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char XState; // al
  int v2; // edx
  char v3[4]; // [rsp+38h] [rbp-10h]

  XState = a1->XState;
  v2 = -1073741823;
  if ( (XState & 4) != 0 )
  {
    v2 = -1071448017;
  }
  else if ( (XState & 2) != 0 )
  {
    v2 = -1071448033;
  }
  else if ( (XState & 1) != 0 )
  {
    v2 = -1073676275;
  }
  a1->FakeStatus = v2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v3 = v2;
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      0xDu,
      0x42u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      XState,
      *(_DWORD *)v3);
  }
}
