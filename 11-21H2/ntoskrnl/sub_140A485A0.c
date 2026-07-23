/*
 * XREFs of sub_140A485A0 @ 0x140A485A0
 * Callers:
 *     sub_140A483FC @ 0x140A483FC (sub_140A483FC.c)
 *     sub_140A484F0 @ 0x140A484F0 (sub_140A484F0.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 */

void *__fastcall sub_140A485A0(char a1)
{
  void *v2; // rcx
  void *result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = sub_140236710(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 16600LL) + 55LL) = a1;
  }
  return result;
}
