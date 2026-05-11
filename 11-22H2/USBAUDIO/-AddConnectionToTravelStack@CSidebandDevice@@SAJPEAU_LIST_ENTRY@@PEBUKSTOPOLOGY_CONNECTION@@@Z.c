/*
 * XREFs of ?AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1C000C0B4
 * Callers:
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C00116B8 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 *     ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C0011AA8 (-TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_.c)
 *     ?TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0011EAC (-TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECT.c)
 *     ?TraverseToTerminalForDataFlowInPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0012108 (-TraverseToTerminalForDataFlowInPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY.c)
 *     ?TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0012368 (-TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::AddConnectionToTravelStack(
        struct _LIST_ENTRY *a1,
        const struct KSTOPOLOGY_CONNECTION *a2)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *Flink; // rcx

  Pool2 = ExAllocatePool2(64LL, 32LL, 895645765LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(struct KSTOPOLOGY_CONNECTION *)(Pool2 + 16) = *a2;
  Flink = a1->Flink;
  if ( a1->Flink->Blink != a1 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = Flink;
  *(_QWORD *)(Pool2 + 8) = a1;
  Flink->Blink = (struct _LIST_ENTRY *)Pool2;
  a1->Flink = (struct _LIST_ENTRY *)Pool2;
  return 0LL;
}
