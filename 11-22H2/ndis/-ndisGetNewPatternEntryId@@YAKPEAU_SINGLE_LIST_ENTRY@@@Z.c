/*
 * XREFs of ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C009396C
 * Callers:
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094990 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094BC0 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0099314 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetNewPatternEntryId(struct _SINGLE_LIST_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rdx
  unsigned int i; // r8d
  unsigned int v3; // ecx
  __int64 result; // rax

  Next = a1->Next;
  for ( i = 0; Next; i = v3 )
  {
    v3 = (unsigned int)Next[5].Next;
    if ( v3 > i + 1 )
      break;
    Next = Next->Next;
  }
  result = i + 1;
  if ( i == 65279 )
    NT_ASSERT("0x0000FF00 != PrevId + 1");
  return result;
}
