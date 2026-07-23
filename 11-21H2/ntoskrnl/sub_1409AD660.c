/*
 * XREFs of sub_1409AD660 @ 0x1409AD660
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_1409AD660(_BYTE *a1)
{
  struct _KPRCB *CurrentPrcb; // rcx

  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
    ProbeForWrite(a1, 4uLL, 1u);
  CurrentPrcb = KeGetCurrentPrcb();
  *(_WORD *)a1 = *((unsigned __int8 *)CurrentPrcb + 208);
  a1[2] = *((_BYTE *)CurrentPrcb + 209);
  a1[3] = 0;
  return 0LL;
}
