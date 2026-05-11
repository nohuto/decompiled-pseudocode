/*
 * XREFs of ?AddNodeListToNodeListStack@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C00090EC
 * Callers:
 *     ?TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000FD04 (-TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPE.c)
 *     ?TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C001035C (-TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::AddNodeListToNodeListStack(CSidebandDevice *this, struct _LIST_ENTRY *a2)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rax
  struct _LIST_ENTRY *Flink; // rax

  Pool2 = ExAllocatePool2(64LL, 32LL, 1717729349LL);
  v4 = (struct _LIST_ENTRY *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v6 = (_QWORD *)(Pool2 + 16);
  v6[1] = v6;
  *v6 = v6;
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    __fastfail(3u);
  v4->Flink = Flink;
  v4->Blink = a2;
  Flink->Blink = v4;
  result = 0LL;
  a2->Flink = v4;
  return result;
}
