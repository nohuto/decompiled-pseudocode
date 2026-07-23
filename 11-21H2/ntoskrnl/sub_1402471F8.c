/*
 * XREFs of sub_1402471F8 @ 0x1402471F8
 * Callers:
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

unsigned __int64 __fastcall sub_1402471F8(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int16 v5; // ax

  v3 = a1;
  v4 = *(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(a2 + 44);
  if ( (__int64)(v4 - a1) >> 3 > a3 )
    v4 = a1 + 8 * a3;
  do
  {
    v5 = sub_140317A10(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v5 & 0x3E0) != 0LL || (v5 & 1) != 0 )
      break;
    v3 = (__int64)(((((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) + 0x10000000) >> 16;
  }
  while ( v3 < v4 );
  if ( v3 <= v4 )
    return v3;
  return v4;
}
