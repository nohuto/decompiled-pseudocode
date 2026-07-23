/*
 * XREFs of sub_14051D820 @ 0x14051D820
 * Callers:
 *     <none>
 * Callees:
 *     KeDispatchSecondaryInterrupt @ 0x14056EBB0 (KeDispatchSecondaryInterrupt.c)
 */

char __fastcall sub_14051D820(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  if ( a3 )
    *a3 = 0;
  v3 = *(_DWORD *)(a2 + 16);
  if ( a1 < v3 || a1 >= v3 + *(_DWORD *)(a2 + 20) )
    return 0;
  else
    return KeDispatchSecondaryInterrupt(*(unsigned int *)(a2 + 16LL * (a1 - v3) + 168), 0LL);
}
