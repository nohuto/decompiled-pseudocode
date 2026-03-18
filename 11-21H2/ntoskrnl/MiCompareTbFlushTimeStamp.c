/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x140238E78
 * Callers:
 *     MiAttachSessionGlobal @ 0x140238D0C (MiAttachSessionGlobal.c)
 *     MiFlushTbAsNeeded @ 0x140352EB0 (MiFlushTbAsNeeded.c)
 *     MiReadyReservedView @ 0x14059219C (MiReadyReservedView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1, int a2)
{
  int v3; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a1 & 1;
  while ( 1 )
  {
    _InterlockedOr(v5, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - a1) > 2 || !v3 && (unsigned int)(KiTbFlushTimeStamp - a1) >= 2 )
      return 0;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      break;
    v6 = 0;
    _InterlockedOr(v5, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v6);
    if ( !v3 )
      return 0;
  }
  return 1;
}
