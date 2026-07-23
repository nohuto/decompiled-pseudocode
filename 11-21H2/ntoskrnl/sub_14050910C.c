/*
 * XREFs of sub_14050910C @ 0x14050910C
 * Callers:
 *     sub_140A5367C @ 0x140A5367C (sub_140A5367C.c)
 * Callees:
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_1403AAE80 @ 0x1403AAE80 (sub_1403AAE80.c)
 */

bool sub_14050910C()
{
  char v0; // al
  bool result; // al
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  LOBYTE(v2) = 0;
  v0 = sub_1403AAE80(0LL, 0LL, 0LL, &v2);
  result = 0;
  if ( ((unsigned __int8)v2 & (unsigned __int8)-(v0 != 0)) == 1 && *(_DWORD *)(qword_140C54A88 + 224) == 2 )
  {
    v2 = *(_DWORD *)(qword_140C54A88 + 240);
    v3 = -8;
    if ( sub_1402520D4(&v2) )
      return 1;
  }
  return result;
}
