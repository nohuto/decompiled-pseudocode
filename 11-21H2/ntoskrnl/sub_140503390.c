/*
 * XREFs of sub_140503390 @ 0x140503390
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140503390(_DWORD *a1)
{
  int v1; // eax
  int v2; // r8d

  v1 = 0;
  if ( qword_140C4E3E8 )
  {
    v2 = *(_DWORD *)(qword_140C4E3E8 + 228);
    if ( v2 == 8 )
    {
      *a1 = 1;
      return 0LL;
    }
    LOBYTE(v1) = v2 != 13;
    v1 += 2;
  }
  *a1 = v1;
  return 0LL;
}
