/*
 * XREFs of sub_1405204D0 @ 0x1405204D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405204D0(unsigned int a1, int *a2)
{
  unsigned int v2; // r8d
  int v3; // eax

  v2 = 0;
  if ( (a1 & 0x40000000) == 0 )
  {
    if ( a1 < dword_140C4A418 )
    {
      v3 = dword_140C4A42C;
      goto LABEL_4;
    }
LABEL_7:
    *a2 = 0;
    return (unsigned int)-1073741811;
  }
  if ( (a1 & 0xBFFFFFFF) >= dword_140C4A460 )
    goto LABEL_7;
  v3 = dword_140C4A440;
LABEL_4:
  *a2 = v3;
  return v2;
}
