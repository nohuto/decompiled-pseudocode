/*
 * XREFs of ?ndisGetListEntriesCount@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0093950
 * Callers:
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0068BC4 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetListEntriesCount(struct _SINGLE_LIST_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rdx
  __int64 result; // rax

  Next = a1->Next;
  result = 0LL;
  while ( Next )
  {
    Next = Next->Next;
    result = (unsigned int)(result + 1);
  }
  return result;
}
