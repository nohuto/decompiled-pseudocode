/*
 * XREFs of sub_140A9755C @ 0x140A9755C
 * Callers:
 *     sub_140A96D84 @ 0x140A96D84 (sub_140A96D84.c)
 *     sub_140A9700C @ 0x140A9700C (sub_140A9700C.c)
 * Callees:
 *     sub_140A81CF4 @ 0x140A81CF4 (sub_140A81CF4.c)
 */

__int64 __fastcall sub_140A9755C(__int64 a1)
{
  const void **v1; // rbx
  unsigned int v3; // edi

  v1 = (const void **)qword_140C1ACF0;
  v3 = 0;
  while ( v1 != (const void **)&qword_140C1ACF0 )
  {
    if ( sub_140A81CF4(v1 + 2, a1) )
      return 1;
    v1 = (const void **)*v1;
  }
  return v3;
}
