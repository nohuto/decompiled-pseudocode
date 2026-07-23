/*
 * XREFs of VfDifCaptureDriverEntry @ 0x140209F44
 * Callers:
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x140209F84 (VfTargetDriversGetNode.c)
 *     ViDifCheckCallbackInterception @ 0x14020A524 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureDriverEntry @ 0x1405CF4BC (ViDifCaptureDriverEntry.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

char __fastcall VfDifCaptureDriverEntry(__int64 a1)
{
  __int64 Node; // rax
  __int64 Pool2; // rax

  if ( *(_QWORD *)(a1 + 88) )
  {
    Node = VfTargetDriversGetNode();
    if ( Node )
      *(_QWORD *)(Node + 48) = a1;
  }
  if ( !(unsigned __int8)ViDifCheckCallbackInterception(a1) )
    return 0;
  Pool2 = ExAllocatePool2(64LL, 256LL, 1229940310LL);
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) = Pool2;
  ViDifCaptureDriverEntry(a1);
  return 1;
}
