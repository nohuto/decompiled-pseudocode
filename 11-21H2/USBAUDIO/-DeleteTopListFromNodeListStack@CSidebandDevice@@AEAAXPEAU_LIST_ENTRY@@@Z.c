/*
 * XREFs of ?DeleteTopListFromNodeListStack@CSidebandDevice@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0009BE0
 * Callers:
 *     ?TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000FD04 (-TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPE.c)
 *     ?TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C001035C (-TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall CSidebandDevice::DeleteTopListFromNodeListStack(CSidebandDevice *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v3; // rax
  struct _LIST_ENTRY *v4; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rax

  Flink = a2->Flink;
  if ( a2->Flink != a2 )
  {
    if ( Flink->Blink != a2 || (v3 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_11:
      __fastfail(3u);
    a2->Flink = v3;
    v4 = Flink + 1;
    v3->Blink = a2;
    while ( v4->Flink != v4 )
    {
      Blink = Flink[1].Blink;
      if ( Blink->Flink != v4 )
        goto LABEL_11;
      v6 = Blink->Blink;
      if ( v6->Flink != Blink )
        goto LABEL_11;
      Flink[1].Blink = v6;
      v6->Flink = v4;
      ExFreePool(Blink);
    }
    ExFreePool(Flink);
  }
}
