/*
 * XREFs of sub_18003201C @ 0x18003201C
 * Callers:
 *     sub_180033930 @ 0x180033930 (sub_180033930.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_18003201C(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = v1[3];
      v3 = (_QWORD *)*v1;
      if ( v2 )
        sub_180010530(v2);
      result = sub_1800100E8(v1, 0x20uLL);
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
