/*
 * XREFs of ?MoveNodesFromNodesListStackToList@CSidebandDevice@@AEAAXPEAU_LIST_ENTRY@@0@Z @ 0x1C000E9C0
 * Callers:
 *     ?TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000FD04 (-TraverseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPE.c)
 *     ?TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C001035C (-TraverseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall CSidebandDevice::MoveNodesFromNodesListStackToList(
        CSidebandDevice *this,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rdx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *v9; // r8
  struct _LIST_ENTRY *v10; // r8

  while ( a2->Flink != a2 )
  {
    Blink = a2->Blink;
    if ( Blink->Flink != a2 || (v6 = Blink->Blink, v6->Flink != Blink) )
LABEL_11:
      __fastfail(3u);
    a2->Blink = v6;
    v7 = Blink + 1;
    v6->Flink = a2;
    while ( v7->Flink != v7 )
    {
      v8 = Blink[1].Blink;
      if ( v8->Flink != v7 )
        goto LABEL_11;
      v9 = v8->Blink;
      if ( v9->Flink != v8 )
        goto LABEL_11;
      Blink[1].Blink = v9;
      v9->Flink = v7;
      v10 = a3->Blink;
      if ( v10->Flink != a3 )
        goto LABEL_11;
      v8->Flink = a3;
      v8->Blink = v10;
      v10->Flink = v8;
      a3->Blink = v8;
    }
    ExFreePool(Blink);
  }
}
