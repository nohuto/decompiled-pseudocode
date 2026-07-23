/*
 * XREFs of sub_140B4D598 @ 0x140B4D598
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140B4D598(_QWORD *a1, unsigned int a2, int *a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = 8;
  if ( a2 < 8 )
  {
    v3 = 0;
    result = 3221225476LL;
  }
  else
  {
    *a1 = qword_140C4A0D0;
    result = 0LL;
  }
  *a3 = v3;
  return result;
}
