/*
 * XREFs of sub_18003C2F4 @ 0x18003C2F4
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 * Callees:
 *     sub_18005F3AC @ 0x18005F3AC (sub_18005F3AC.c)
 *     sub_180060110 @ 0x180060110 (sub_180060110.c)
 */

void __fastcall sub_18003C2F4(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_18005F3AC(i[2]) == 1 )
      sub_180060110(i[2]);
  }
}
