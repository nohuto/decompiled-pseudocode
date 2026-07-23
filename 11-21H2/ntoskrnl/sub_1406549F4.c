/*
 * XREFs of sub_1406549F4 @ 0x1406549F4
 * Callers:
 *     sub_140AA7018 @ 0x140AA7018 (sub_140AA7018.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_1406549F4()
{
  struct _KPRCB *CurrentPrcb; // rcx
  int v1; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *((_BYTE *)CurrentPrcb + 13242) )
    {
      if ( (*((_BYTE *)CurrentPrcb + 13244) & 8) != 0 )
      {
        v1 = dword_140D05038 ? *(_DWORD *)(qword_140D088C0[0] + 32276) : *((_DWORD *)CurrentPrcb + 8069);
        if ( v1 + 100 < (unsigned int)(MEMORY[0xFFFFF78000000008] >> 18) )
          return 1;
      }
    }
  }
  return result;
}
