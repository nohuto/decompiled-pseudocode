/*
 * XREFs of sub_1403DCE20 @ 0x1403DCE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14050DC38 @ 0x14050DC38 (sub_14050DC38.c)
 */

char __fastcall sub_1403DCE20(unsigned __int8 a1)
{
  signed __int32 v1; // eax

  LOBYTE(v1) = byte_140C4E364;
  if ( a1 > (unsigned __int8)byte_140C4E364 )
  {
    LOBYTE(v1) = a1;
    byte_140C4E364 = a1;
  }
  if ( (unsigned __int8)v1 > 1u )
  {
    LOBYTE(v1) = qword_140C4E390;
    if ( (*(_DWORD *)(qword_140C4E390 + 224) & 0x4000) != 0 )
    {
      v1 = _InterlockedCompareExchange(&dword_140C4C778, 1, 0);
      if ( !v1 )
        LOBYTE(v1) = sub_14050DC38(&stru_140039420);
    }
  }
  return v1;
}
