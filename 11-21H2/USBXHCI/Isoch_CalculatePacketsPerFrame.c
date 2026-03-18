/*
 * XREFs of Isoch_CalculatePacketsPerFrame @ 0x1C000160C
 * Callers:
 *     Isoch_Initialize @ 0x1C006B570 (Isoch_Initialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_CalculatePacketsPerFrame(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // eax
  unsigned int v4; // r8d

  v1 = 1;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL);
  if ( v2 != 1 && (unsigned int)(v2 - 2) <= 1 )
  {
    v4 = 1 << (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 102LL) - 1);
    if ( v4 > 8 )
      v4 = 8;
    return 8 / v4;
  }
  return v1;
}
