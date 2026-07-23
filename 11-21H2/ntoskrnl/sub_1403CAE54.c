/*
 * XREFs of sub_1403CAE54 @ 0x1403CAE54
 * Callers:
 *     sub_140B55C50 @ 0x140B55C50 (sub_140B55C50.c)
 * Callees:
 *     sub_1403CAF18 @ 0x1403CAF18 (sub_1403CAF18.c)
 */

__int64 __fastcall sub_1403CAE54(__int64 a1, _OWORD *a2)
{
  int v2; // r8d
  __int64 *v3; // rbx
  unsigned int v4; // edi
  __int64 *v7; // r9
  unsigned int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned __int16 *i; // r14

  v2 = 0;
  v3 = &qword_1400091E8;
  v4 = 0;
  *a2 = 0LL;
  do
  {
    v7 = (__int64 *)*(v3 - 1);
    if ( v7 != &qword_140005FF8 || (dword_140C0DF90 & 0x20000) == 0 )
    {
      v2 = 0;
      v8 = *(unsigned __int16 *)v7 >> 1;
      v9 = 0;
      v10 = *(_DWORD *)v3;
      for ( i = (unsigned __int16 *)v7[1]; v9 < v8; ++i )
      {
        v2 = sub_1403CAF18(*i, v10, a1, a2);
        if ( v2 < 0 )
          break;
        ++v9;
      }
      if ( v2 < 0 )
        break;
    }
    ++v4;
    v3 += 2;
  }
  while ( v4 < 0x1A );
  return (unsigned int)v2;
}
