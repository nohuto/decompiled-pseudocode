/*
 * XREFs of sub_14099CFAC @ 0x14099CFAC
 * Callers:
 *     sub_1405D6AC0 @ 0x1405D6AC0 (sub_1405D6AC0.c)
 * Callees:
 *     sub_140369100 @ 0x140369100 (sub_140369100.c)
 *     sub_14039A88C @ 0x14039A88C (sub_14039A88C.c)
 *     sub_1405DC298 @ 0x1405DC298 (sub_1405DC298.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14099CFAC(int a1)
{
  char v1; // bl
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = a1;
  sub_140A48330(a1);
  byte_140C22731 = v1;
  v2 = sub_14039A88C(0);
  if ( v1 )
  {
    qword_140C22738 = qword_140C54148;
    if ( !qword_140C54148 )
      qword_140C22738 = MEMORY[0xFFFFF78000000008];
    sub_1405DC298();
  }
  else if ( v2 >= 0x1000000 || (v2 & 0xFFFFFF) != 6 )
  {
    sub_140369100(1u);
    dword_140C22710 = 0;
    qword_140C22738 = 0LL;
  }
  return sub_140A47CF8(v4, v3);
}
