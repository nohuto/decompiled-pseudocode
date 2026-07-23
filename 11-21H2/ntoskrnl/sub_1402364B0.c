/*
 * XREFs of sub_1402364B0 @ 0x1402364B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140236500 @ 0x140236500 (sub_140236500.c)
 */

bool sub_1402364B0()
{
  char v0; // bl
  char v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0;
  v2 = 0;
  if ( (int)sub_140236500(&v3, &v2) >= 0 && v2 )
    return ((v3 - 209) & 0xFFFFFFFD) == 0;
  return v0;
}
