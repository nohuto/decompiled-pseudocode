/*
 * XREFs of ObQueryNameInfo @ 0x1406C0220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ObQueryNameInfo(__int64 a1)
{
  char v1; // al
  __int64 v2; // rcx

  v1 = *(_BYTE *)(a1 - 22);
  v2 = a1 - 48;
  if ( (v1 & 2) != 0 )
    return v2 - byte_140C25440[v1 & 3];
  else
    return 0LL;
}
