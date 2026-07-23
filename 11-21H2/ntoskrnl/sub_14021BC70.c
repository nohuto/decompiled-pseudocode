/*
 * XREFs of sub_14021BC70 @ 0x14021BC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021BD70 @ 0x14021BD70 (sub_14021BD70.c)
 *     sub_14021C050 @ 0x14021C050 (sub_14021C050.c)
 */

char sub_14021BC70()
{
  unsigned __int64 v0; // rbx
  unsigned __int16 v1; // di
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 i; // rdi
  unsigned int j; // ebx
  __int64 v7; // rcx

  v0 = qword_140C0B8E8[0];
  v1 = 0;
  while ( v0 )
  {
LABEL_3:
    _BitScanForward64(&v2, v0);
    v0 &= ~(1LL << v2);
    v3 = (unsigned int)dword_140D105E0[64 * v1 + (unsigned __int8)v2];
    if ( (unsigned int)v3 >= (unsigned int)dword_140D06884 )
      v4 = 0LL;
    else
      v4 = qword_140D088C0[v3];
    sub_14021BD70(v4 + 33968);
  }
  while ( ++v1 < (unsigned int)(unsigned __int16)word_140C0B8E0 )
  {
    v0 = qword_140C0B8E8[v1];
    if ( v0 )
      goto LABEL_3;
  }
  for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
  {
    for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
    {
      v7 = *(_QWORD *)(i + 312) + 136LL * j;
      if ( *(_DWORD *)(v7 + 16) == 1 )
        sub_14021BD70(*(_QWORD *)v7);
    }
  }
  sub_14021C050();
  return 1;
}
