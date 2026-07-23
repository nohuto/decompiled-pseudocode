/*
 * XREFs of sub_14057303C @ 0x14057303C
 * Callers:
 *     sub_140578398 @ 0x140578398 (sub_140578398.c)
 * Callees:
 *     sub_140292B8C @ 0x140292B8C (sub_140292B8C.c)
 */

__int64 __fastcall sub_14057303C(__int64 a1, __int64 *a2, int a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int64 i; // rbx
  unsigned __int64 v11; // rdx

  do
  {
    v7 = sub_140292B8C(&qword_140D06A00);
    if ( v8 && *a2 == v7 )
      return *(_QWORD *)v8;
    v9 = 0LL;
    for ( i = a4; i; i &= ~(1LL << v11) )
    {
      _BitScanForward64(&v11, i);
      v9 |= *((_QWORD *)qword_140D06BD8 + (unsigned int)((a3 << 6) + v11));
    }
  }
  while ( qword_140D06A00 != v7 );
  *a2 = v7;
  if ( v8 )
    *(_QWORD *)v8 = v9;
  return v9;
}
