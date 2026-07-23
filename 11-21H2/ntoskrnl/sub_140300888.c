/*
 * XREFs of sub_140300888 @ 0x140300888
 * Callers:
 *     sub_1402D6944 @ 0x1402D6944 (sub_1402D6944.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140300888(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
  }
  else
  {
    *a3 = -1LL;
    return (unsigned int)-1073741675;
  }
  return v3;
}
