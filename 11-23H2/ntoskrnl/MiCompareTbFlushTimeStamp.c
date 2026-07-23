/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x14033DDE8
 * Callers:
 *     MiFlushTbAsNeeded @ 0x14027A1E0 (MiFlushTbAsNeeded.c)
 *     MiAttachSessionGlobal @ 0x14033DD2C (MiAttachSessionGlobal.c)
 *     MiReadyReservedView @ 0x14062F3E0 (MiReadyReservedView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1, int a2)
{
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  while ( 1 )
  {
    _InterlockedOr(v4, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - a1) > 2 || (a1 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - a1) >= 2 )
      return 0;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      break;
    v5 = 0;
    _InterlockedOr(v4, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v5);
    if ( (a1 & 1) == 0 )
      return 0;
  }
  return 1;
}
