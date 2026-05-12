/*
 * XREFs of RaidFreeEnclosureIdMappings @ 0x1C0041B04
 * Callers:
 *     DllUnload @ 0x1C0064D60 (DllUnload.c)
 * Callees:
 *     <none>
 */

void RaidFreeEnclosureIdMappings()
{
  PVOID *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (PVOID *)EnclosureIdList;
    if ( EnclosureIdList == &EnclosureIdList )
      break;
    if ( *((PVOID **)EnclosureIdList + 1) != &EnclosureIdList
      || (v1 = *(_QWORD *)EnclosureIdList, *(PVOID *)(*(_QWORD *)EnclosureIdList + 8LL) != EnclosureIdList) )
    {
      __fastfail(3u);
    }
    EnclosureIdList = *(PVOID *)EnclosureIdList;
    *(_QWORD *)(v1 + 8) = &EnclosureIdList;
    ExFreePoolWithTag(v0[2], 0x48536152u);
    ExFreePoolWithTag(v0, 0x48536152u);
  }
}
