/*
 * XREFs of sub_1405435CC @ 0x1405435CC
 * Callers:
 *     sub_140961998 @ 0x140961998 (sub_140961998.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405435CC(int *a1)
{
  int v2; // edx
  int v3; // eax

  if ( (dword_140D068B8 & 1) == 0 )
    return 3221225659LL;
  v2 = *a1;
  if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 2 )
  {
    if ( (dword_140D0693C & 0x80u) != 0 || (dword_140D0693C & 0x38) == 0x10 )
      v3 = 0x80000;
    else
      v3 = 0;
    *a1 = ((dword_140D0693C & 0x14) == 0 ? 0x100000 : 0) | v3 & 0xFF8FFFFF | v2 & 0xFF83FFFF | ((dword_140D0693C & 3) != 0
                                                                                              ? 0x40000
                                                                                              : 0) | 0x20000;
  }
  else
  {
    *a1 = v2 | 0x60000;
  }
  return 0LL;
}
