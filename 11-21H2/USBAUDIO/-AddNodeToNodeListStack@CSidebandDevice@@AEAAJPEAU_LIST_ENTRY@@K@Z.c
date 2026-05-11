/*
 * XREFs of ?AddNodeToNodeListStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@K@Z @ 0x1C0009158
 * Callers:
 *     ?TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000FD04 (-TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPE.c)
 *     ?TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C001035C (-TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::AddNodeToNodeListStack(CSidebandDevice *this, struct _LIST_ENTRY *a2, int a3)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *Flink; // rdx

  if ( a2->Flink == a2 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(64LL, 24LL, 1684174917LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 16) = a3;
  v7 = a2->Flink + 1;
  Flink = v7->Flink;
  if ( v7->Flink->Blink != v7 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = Flink;
  *(_QWORD *)(Pool2 + 8) = v7;
  Flink->Blink = (struct _LIST_ENTRY *)Pool2;
  v7->Flink = (struct _LIST_ENTRY *)Pool2;
  return 0LL;
}
