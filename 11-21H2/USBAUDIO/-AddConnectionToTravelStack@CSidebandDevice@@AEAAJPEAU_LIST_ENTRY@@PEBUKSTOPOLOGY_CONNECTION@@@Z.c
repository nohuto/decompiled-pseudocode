/*
 * XREFs of ?AddConnectionToTravelStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1C000907C
 * Callers:
 *     ?TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000FD04 (-TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPE.c)
 *     ?TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C001035C (-TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEA.c)
 *     ?TraverseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0010768 (-TraverseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNE.c)
 *     ?TraverseToTerminalForDataFlowInPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0010A34 (-TraverseToTerminalForDataFlowInPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLO.c)
 *     ?TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0010CE8 (-TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::AddConnectionToTravelStack(
        CSidebandDevice *this,
        struct _LIST_ENTRY *a2,
        const struct KSTOPOLOGY_CONNECTION *a3)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *Flink; // rcx

  Pool2 = ExAllocatePool2(64LL, 32LL, 895645765LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(struct KSTOPOLOGY_CONNECTION *)(Pool2 + 16) = *a3;
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = Flink;
  *(_QWORD *)(Pool2 + 8) = a2;
  Flink->Blink = (struct _LIST_ENTRY *)Pool2;
  a2->Flink = (struct _LIST_ENTRY *)Pool2;
  return 0LL;
}
