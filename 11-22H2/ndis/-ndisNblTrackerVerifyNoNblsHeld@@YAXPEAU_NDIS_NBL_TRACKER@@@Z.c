/*
 * XREFs of ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00171D0
 * Callers:
 *     NdisNblTrackerDeregisterComponent @ 0x1C00215E0 (NdisNblTrackerDeregisterComponent.c)
 * Callees:
 *     ndisNblTrackerAreNblsOutstandingOnComponent @ 0x1C001720C (ndisNblTrackerAreNblsOutstandingOnComponent.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisNblTrackerVerifyNoNblsHeld(ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebx

  v2 = 0;
  while ( !(unsigned __int8)ndisNblTrackerAreNblsOutstandingOnComponent(BugCheckParameter3, v2) )
  {
    if ( ++v2 >= 2 )
      return;
  }
  if ( !ndisNblTrackerLeakedNblDisposition )
    ndisBugCheckEx(0x27uLL, 1uLL, BugCheckParameter3, 0LL);
  if ( ndisNblTrackerLeakedNblDisposition == 2 && !(_BYTE)KdDebuggerNotPresent )
    __int2c();
}
