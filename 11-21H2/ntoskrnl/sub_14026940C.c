/*
 * XREFs of sub_14026940C @ 0x14026940C
 * Callers:
 *     sub_140592398 @ 0x140592398 (sub_140592398.c)
 *     sub_1406F2420 @ 0x1406F2420 (sub_1406F2420.c)
 * Callees:
 *     sub_1402697B0 @ 0x1402697B0 (sub_1402697B0.c)
 */

__int64 sub_14026940C()
{
  unsigned int v0; // eax
  __int64 v1; // r10
  unsigned __int64 v2; // r10

  v0 = sub_1402697B0(&qword_140C534C0);
  v2 = qword_140C53510 + v0 + v1;
  if ( v2 >= 0x100000000LL )
    LODWORD(v2) = -1;
  return (unsigned int)v2;
}
