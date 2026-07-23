/*
 * XREFs of sub_1403DEB00 @ 0x1403DEB00
 * Callers:
 *     sub_140A5367C @ 0x140A5367C (sub_140A5367C.c)
 * Callees:
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 */

bool sub_1403DEB00()
{
  bool result; // al
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+34h] [rbp+Ch]

  result = 0;
  if ( *(_DWORD *)(qword_140C54A88 + 224) == 2 )
  {
    v1 = *(_DWORD *)(qword_140C54A88 + 240);
    v2 = -7;
    if ( sub_1402520D4(&v1) )
      return 1;
  }
  return result;
}
