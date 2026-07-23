/*
 * XREFs of sub_140516470 @ 0x140516470
 * Callers:
 *     <none>
 * Callees:
 *     sub_140504DAC @ 0x140504DAC (sub_140504DAC.c)
 *     sub_140516B78 @ 0x140516B78 (sub_140516B78.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140516470(struct _DMA_ADAPTER *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char v5; // bp

  v2 = a2[1];
  v5 = sub_140516B78();
  if ( *(_BYTE *)(v2 + 97) )
    ExFreePoolWithTag(a2, 0);
  if ( v5 )
    sub_140504DAC(a1);
}
