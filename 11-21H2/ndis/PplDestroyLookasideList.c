/*
 * XREFs of PplDestroyLookasideList @ 0x1C005B7A4
 * Callers:
 *     ndisDereferenceDmaAdapterForMiniport @ 0x1C00587C0 (ndisDereferenceDmaAdapterForMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall PplDestroyLookasideList(char *P)
{
  __int64 v2; // rbx
  struct _LOOKASIDE_LIST_EX *v3; // rsi

  if ( P )
  {
    v2 = *(_DWORD *)P - 1;
    if ( *(_DWORD *)P - 1 >= 0 )
    {
      v3 = (struct _LOOKASIDE_LIST_EX *)&P[128 * v2 + 64];
      do
      {
        if ( LOBYTE(v3[1].L.Depth) )
          ExDeleteLookasideListEx(v3);
        v3 = (struct _LOOKASIDE_LIST_EX *)((char *)v3 - 128);
        --v2;
      }
      while ( v2 >= 0 );
    }
    ExFreePoolWithTag(P, 0x6264444Eu);
  }
}
