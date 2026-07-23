/*
 * XREFs of sub_140863534 @ 0x140863534
 * Callers:
 *     sub_1407EFD2C @ 0x1407EFD2C (sub_1407EFD2C.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_14036ABA8 @ 0x14036ABA8 (sub_14036ABA8.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 */

void sub_140863534()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  PVOID *i; // rbx

  sub_140753094(0);
  for ( i = (PVOID *)qword_140C242A0; i != &qword_140C242A0; i = (PVOID *)*i )
  {
    if ( !*((_BYTE *)i + 152) )
      sub_14036ABA8((__int64)i, v0, v1, v2);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
}
