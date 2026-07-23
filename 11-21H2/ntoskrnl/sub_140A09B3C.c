/*
 * XREFs of sub_140A09B3C @ 0x140A09B3C
 * Callers:
 *     sub_140646AB8 @ 0x140646AB8 (sub_140646AB8.c)
 * Callees:
 *     sub_140A0980C @ 0x140A0980C (sub_140A0980C.c)
 *     sub_140A09B84 @ 0x140A09B84 (sub_140A09B84.c)
 */

__int64 sub_140A09B3C()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = &qword_140A3A118;
  do
  {
    v3 = *(_DWORD *)v1;
    sub_140A09B84(v0++, &v3);
    v1 += 4;
  }
  while ( v0 < 0x11 );
  return sub_140A0980C();
}
