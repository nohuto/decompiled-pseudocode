/*
 * XREFs of PiSwFindBusRelations @ 0x140798554
 * Callers:
 *     PiSwFindChildren @ 0x14079852C (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x14086A04C (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022D020 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int64 a1)
{
  bool v1; // zf
  _OWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8) == 0LL;
  memset(v3, 0, sizeof(v3));
  if ( v1 )
    return 0LL;
  v3[0] = *(_OWORD *)a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, v3);
}
