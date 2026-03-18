/*
 * XREFs of ViFaultsIsTagTarget @ 0x140A976F4
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x140A96A2C (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x14063A59C (ExCheckSingleFilter.c)
 *     ViFaultsIsTagPresentInList @ 0x140A976A8 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsIsTagTarget(int a1)
{
  int v1; // r8d
  int v2; // r8d
  unsigned int IsTagPresentInList; // ecx

  if ( (unsigned int)ExCheckSingleFilter(a1, 1786137926) || (unsigned int)ExCheckSingleFilter(v1, 1819692358) )
    return 0LL;
  IsTagPresentInList = ViFaultTagsList == &ViFaultTagsList;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    IsTagPresentInList = ViFaultsIsTagPresentInList(v2);
    if ( IsTagPresentInList )
      ++dword_140D57840;
    else
      ++dword_140D5783C;
  }
  return IsTagPresentInList;
}
