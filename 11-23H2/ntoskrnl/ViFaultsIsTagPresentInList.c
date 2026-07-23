/*
 * XREFs of ViFaultsIsTagPresentInList @ 0x140AD6B70
 * Callers:
 *     ViFaultsAddTagNoDuplicates @ 0x140AD6620 (ViFaultsAddTagNoDuplicates.c)
 *     ViFaultsIsTagTarget @ 0x140AD6BBC (ViFaultsIsTagTarget.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x14046B55E (ExCheckSingleFilter.c)
 */

__int64 __fastcall ViFaultsIsTagPresentInList(int a1)
{
  PVOID *v1; // r8
  PVOID *v2; // r11
  int v3; // r10d
  unsigned int v4; // r9d
  PVOID **v5; // r8

  v1 = (PVOID *)ViFaultTagsList;
  v2 = &ViFaultTagsList;
  v3 = a1;
  v4 = 0;
  while ( v1 != v2 )
  {
    if ( (unsigned int)ExCheckSingleFilter(v3, *((_DWORD *)v1 + 4)) )
      return 1;
    v1 = *v5;
  }
  return v4;
}
