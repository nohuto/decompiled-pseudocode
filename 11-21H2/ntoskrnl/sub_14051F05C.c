/*
 * XREFs of sub_14051F05C @ 0x14051F05C
 * Callers:
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 * Callees:
 *     <none>
 */

bool sub_14051F05C()
{
  struct _KPRCB *CurrentPrcb; // rax
  char v1; // cl

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = *((_BYTE *)CurrentPrcb + 141);
  if ( v1 == 1 )
    return *((_BYTE *)CurrentPrcb + 64) >= 0x17u;
  else
    return v1 == 2;
}
