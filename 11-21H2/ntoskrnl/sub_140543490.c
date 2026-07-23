/*
 * XREFs of sub_140543490 @ 0x140543490
 * Callers:
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 * Callees:
 *     <none>
 */

bool sub_140543490()
{
  __int64 v0; // rcx
  bool result; // al

  result = 0;
  if ( (dword_140D0688C & 0x400000) != 0 && dword_140D06AD4 != 1 && dword_140D06AD4 != 2 )
  {
    if ( dword_140D06AD4 == 3 )
      return 1;
    if ( dword_140D06AD4 == 4 )
    {
      v0 = *((_QWORD *)KeGetCurrentPrcb() + 4364);
      if ( ((v0 - 1) & v0) != 0 )
        return 1;
    }
  }
  return result;
}
