/*
 * XREFs of DpiFdoInitializeMipiDsi @ 0x1C0026160
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiFdoCleanupMipiDsi @ 0x1C00261F4 (DpiFdoCleanupMipiDsi.c)
 *     DpiQueryMiniportInterface @ 0x1C01FA410 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeMipiDsi(__int64 a1)
{
  __int64 v1; // rsi
  int MiniportInterface; // edi
  _OWORD *v3; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  v3 = (_OWORD *)(v1 + 5456);
  if ( !*(_WORD *)(v1 + 5456) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_MIPI_DSI_INTERFACE, 56, 1);
    if ( MiniportInterface < 0 )
    {
      *v3 = 0LL;
      *(_OWORD *)(v1 + 5472) = 0LL;
      *(_OWORD *)(v1 + 5488) = 0LL;
      *(_QWORD *)(v1 + 5504) = 0LL;
LABEL_4:
      DpiFdoCleanupMipiDsi(v1);
      return (unsigned int)MiniportInterface;
    }
    if ( *(_WORD *)v3 != 56 || !*(_QWORD *)(v1 + 5488) || !*(_QWORD *)(v1 + 5496) || !*(_QWORD *)(v1 + 5504) )
    {
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      goto LABEL_4;
    }
  }
  return (unsigned int)MiniportInterface;
}
