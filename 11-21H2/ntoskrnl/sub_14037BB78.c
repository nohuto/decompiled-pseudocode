/*
 * XREFs of sub_14037BB78 @ 0x14037BB78
 * Callers:
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14037BB78(_QWORD *a1)
{
  unsigned __int64 v1; // rdx

  v1 = *a1 - a1[3] - 1LL;
  if ( a1[4] < v1 )
    a1[4] = v1;
}
