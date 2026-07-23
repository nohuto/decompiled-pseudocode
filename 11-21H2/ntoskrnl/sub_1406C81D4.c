/*
 * XREFs of sub_1406C81D4 @ 0x1406C81D4
 * Callers:
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 * Callees:
 *     sub_140248854 @ 0x140248854 (sub_140248854.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     sub_1406C8478 @ 0x1406C8478 (sub_1406C8478.c)
 */

__int64 __fastcall sub_1406C81D4(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned int v3; // ebx

  v1 = sub_140248854(a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = sub_1406C8478(1LL, v1);
    sub_1402E0164(v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
