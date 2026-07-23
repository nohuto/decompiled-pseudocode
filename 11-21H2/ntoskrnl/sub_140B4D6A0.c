/*
 * XREFs of sub_140B4D6A0 @ 0x140B4D6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 */

char sub_140B4D6A0()
{
  int v0; // eax
  __int64 v1; // rdx

  v0 = sub_14036FA84();
  if ( v0 == 1 )
  {
    LOBYTE(v0) = *(_BYTE *)(v1 + 19) - 48;
    if ( (unsigned __int8)v0 <= 9u )
    {
      LOBYTE(v0) = *(_BYTE *)(v1 + 20) - 48;
      if ( (unsigned __int8)v0 <= 9u )
        byte_140D011A0 = 1;
    }
  }
  return v0;
}
