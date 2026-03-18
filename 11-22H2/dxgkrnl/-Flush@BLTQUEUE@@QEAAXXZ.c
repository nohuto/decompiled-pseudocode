/*
 * XREFs of ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C0194A88
 * Callers:
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0194BE8 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01E944C (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B6DB0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C03D40D4 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0194B64 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::Flush(BLTQUEUE *this)
{
  __int64 v2; // rbp
  __int64 v3; // rbx

  if ( *((_QWORD *)this + 76) )
  {
    v2 = *((unsigned int *)this + 214);
    if ( KeReadStateEvent((PRKEVENT)((char *)this + 544)) )
      *((_DWORD *)this + 236) |= 1u;
    *((LARGE_INTEGER *)this + 5 * v2 + 108) = KeQueryPerformanceCounter(0LL);
    *((_BYTE *)this + 573) = 1;
    BLTQUEUE::IssueCommand(this);
    *((LARGE_INTEGER *)this + 5 * v2 + 111) = KeQueryPerformanceCounter(0LL);
    v3 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 5 * v2 + 112) = v3 * KeQueryTimeIncrement();
    *((_DWORD *)this + 214) = ((_BYTE)v2 - 1) & 1;
  }
}
