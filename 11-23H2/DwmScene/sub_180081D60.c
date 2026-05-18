/*
 * XREFs of sub_180081D60 @ 0x180081D60
 * Callers:
 *     sub_180081E6C @ 0x180081E6C (sub_180081E6C.c)
 * Callees:
 *     sub_180081A10 @ 0x180081A10 (sub_180081A10.c)
 */

char sub_180081D60()
{
  __int16 *v0; // rax
  __int64 v1; // rcx
  __int16 *v2; // r8
  __int16 *v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int16 *v6; // rdi
  unsigned __int64 i; // rcx

  LOBYTE(v0) = sub_180081A10();
  if ( (_BYTE)v0 )
  {
    LOBYTE(v0) = (unsigned __int8)sub_1800819FC(v3, v1 >> 1);
  }
  else
  {
    v4 = (unsigned __int64)(v1 + 1) >> 1;
    if ( v3 > v2 )
      v4 = 0LL;
    if ( v4 >= 8 )
    {
      v0 = &v3[v4 - 1];
      if ( v3 > &word_18011445C || v0 < &word_18011445C )
      {
        LOBYTE(v0) = -1;
        v5 = 2 * (v4 & 0xFFFFFFFFFFFFFFF8uLL);
        v6 = v3;
        for ( i = v5 >> 1; i; --i )
          *v6++ = -1;
        v3 = (__int16 *)((char *)v3 + v5);
      }
    }
    while ( v3 != v2 )
      *v3++ = -1;
  }
  return (char)v0;
}
