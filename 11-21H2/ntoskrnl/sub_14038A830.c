/*
 * XREFs of sub_14038A830 @ 0x14038A830
 * Callers:
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     sub_14038A880 @ 0x14038A880 (sub_14038A880.c)
 */

_QWORD *__fastcall sub_14038A830(char a1, unsigned int a2)
{
  void *i; // rcx
  _QWORD *result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx

  for ( i = 0LL; ; i = v7 )
  {
    result = sub_140236710(i);
    v7 = result;
    if ( !result )
      break;
    LOBYTE(v6) = a1;
    sub_14038A880(*result, v6, a2);
  }
  return result;
}
