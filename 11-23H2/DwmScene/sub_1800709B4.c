/*
 * XREFs of sub_1800709B4 @ 0x1800709B4
 * Callers:
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_180070998 @ 0x180070998 (sub_180070998.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800709B4(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // r8d
  __int64 v4; // rdx
  __int64 result; // rax

  if ( !a3 )
  {
    *a1 |= a2;
    goto LABEL_7;
  }
  v3 = a3 - 1;
  if ( !v3 )
  {
    result = ~a2;
    *a1 &= ~a2;
LABEL_7:
    a1[1] |= a2;
    return result;
  }
  if ( v3 == 1 )
  {
    v4 = ~a2;
    *a1 &= v4;
    a1[1] &= v4;
  }
  return result;
}
