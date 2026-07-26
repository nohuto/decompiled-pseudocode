/*
 * XREFs of ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1C0037F98
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1C0033D08 (ndisIfCreateCompartmentBlock.c)
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C00B8C74 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId_old(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // r8
  unsigned int v2; // edx
  int v4; // r9d
  unsigned int v5; // r10d
  bool v6; // zf
  unsigned int v7; // ecx
  unsigned int v8; // eax

  v1 = qword_1C00F5DA8;
  v2 = 1;
  v4 = 1;
  v5 = 0;
  while ( 1 )
  {
    v6 = v1 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA8;
    if ( v1 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA8 )
      break;
    if ( v4 == 1 )
    {
      v7 = *((_DWORD *)v1 + 4);
      v8 = v2 + 1;
      if ( v2 != v7 )
        v8 = v2;
      v2 = v8;
      if ( v8 < v7 )
        v4 = v8;
    }
    if ( *((_QWORD *)v1 + 143) == *(_QWORD *)&a1->Data1 && *((_QWORD *)v1 + 144) == *(_QWORD *)a1->Data4 )
    {
      v4 = 0;
      v6 = v1 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA8;
      break;
    }
    v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
  }
  if ( !v6 )
    v2 = v4;
  if ( v2 != -1 )
    return v2;
  return v5;
}
