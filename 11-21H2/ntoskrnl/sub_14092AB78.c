/*
 * XREFs of sub_14092AB78 @ 0x14092AB78
 * Callers:
 *     sub_1406C321C @ 0x1406C321C (sub_1406C321C.c)
 *     sub_140757090 @ 0x140757090 (sub_140757090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14092AB78(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax
  unsigned int v6; // [rsp+0h] [rbp-18h]

  v6 = 0;
  if ( *(char *)(a1 + 6126) >= 0 )
  {
    if ( *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1408LL) )
    {
      v2 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_QWORD *)(v2 + 1408) )
      {
        v3 = *(_WORD *)(v2 + 2412);
        if ( v3 == 332 || v3 == 452 )
          return *(char *)(a1 + 12234) < 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return v6;
}
