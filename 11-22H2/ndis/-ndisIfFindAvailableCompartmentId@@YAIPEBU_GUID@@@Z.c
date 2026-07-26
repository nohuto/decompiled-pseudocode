/*
 * XREFs of ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C00B8C54
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1C0033B78 (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1C0037E08 (-ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rdx
  unsigned int AvailableCompartmentId_old; // ecx
  int v5; // eax

  v1 = qword_1C00F5DA0;
  if ( qword_1C00F5DA0 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
    return 1LL;
  AvailableCompartmentId_old = dword_1C00F4950;
  if ( (unsigned int)dword_1C00F4950 > *(_DWORD *)(qword_1C00F5DA8 + 16) )
  {
    while ( *((_QWORD *)v1 + 143) != *(_QWORD *)&a1->Data1 || *((_QWORD *)v1 + 144) != *(_QWORD *)a1->Data4 )
    {
      v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
      if ( v1 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
        goto LABEL_7;
    }
    return 0LL;
  }
  AvailableCompartmentId_old = ndisIfFindAvailableCompartmentId_old(a1);
  if ( !AvailableCompartmentId_old )
    return 0LL;
LABEL_7:
  v5 = AvailableCompartmentId_old + 1;
  if ( AvailableCompartmentId_old == -2 )
    v5 = 2;
  dword_1C00F4950 = v5;
  return AvailableCompartmentId_old;
}
