/*
 * XREFs of ??_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z @ 0x1C0010380
 * Callers:
 *     ??_EDMMVIDPNSOURCEMODESET@@WBI@EAAPEAXI@Z @ 0x1C002D370 (--_EDMMVIDPNSOURCEMODESET@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODESET@@WFI@EAAPEAXI@Z @ 0x1C002D380 (--_EDMMVIDPNSOURCEMODESET@@WFI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODESET@@WGI@EAAPEAXI@Z @ 0x1C002D390 (--_EDMMVIDPNSOURCEMODESET@@WGI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODESET@@WHI@EAAPEAXI@Z @ 0x1C002D3A0 (--_EDMMVIDPNSOURCEMODESET@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000C768 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C0016FF0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

_QWORD *__fastcall DMMVIDPNSOURCEMODESET::`scalar deleting destructor'(_QWORD *P, char a2)
{
  ReferenceCounted *v4; // rcx

  *P = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  P[3] = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  v4 = (ReferenceCounted *)(P + 11);
  *((_DWORD *)P + 32) |= 0x6D640000u;
  P[14] = 0LL;
  *(_QWORD *)v4 = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  P[15] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  P[13] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted(v4);
  P[3] = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  P[4] = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear();
  *P = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
