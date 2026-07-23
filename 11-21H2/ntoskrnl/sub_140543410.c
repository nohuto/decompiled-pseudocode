/*
 * XREFs of sub_140543410 @ 0x140543410
 * Callers:
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 *     sub_140B12930 @ 0x140B12930 (sub_140B12930.c)
 * Callees:
 *     <none>
 */

bool sub_140543410()
{
  __int64 v0; // rcx
  bool result; // al

  result = 1;
  if ( (dword_140D0688C & 0x400000) != 0 )
  {
    if ( (dword_140D0688C & 2) == 0 )
      return 0;
    if ( dword_140D06AD4 != 2 )
    {
      if ( dword_140D06AD4 != 4 )
        return 0;
      v0 = *((_QWORD *)KeGetCurrentPrcb() + 4364);
      if ( ((v0 - 1) & v0) == 0 )
        return 0;
    }
  }
  return result;
}
