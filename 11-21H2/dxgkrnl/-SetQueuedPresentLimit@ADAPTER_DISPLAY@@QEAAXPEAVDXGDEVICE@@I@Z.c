/*
 * XREFs of ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C02C2AA0
 * Callers:
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C01C6458 (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C03BE934 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetQueuedPresentLimit(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  unsigned int i; // ebx

  if ( *((_QWORD *)this + 56) )
  {
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
    {
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)this, a2, i) )
        BLTQUEUE::SetQueuedPresentLimit((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 56) + 8LL) + 2920LL * i), a3);
    }
  }
}
