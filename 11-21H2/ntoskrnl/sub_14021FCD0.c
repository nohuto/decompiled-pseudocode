/*
 * XREFs of sub_14021FCD0 @ 0x14021FCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021FD60 @ 0x14021FD60 (sub_14021FD60.c)
 */

char sub_14021FCD0()
{
  __int64 i; // rdi
  int v1; // eax
  unsigned int j; // ebx

  for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 984);
    if ( v1 != -1 )
      *(_DWORD *)(i + 984) = v1 + 1;
    for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
    {
      if ( *(_QWORD *)(136LL * j + *(_QWORD *)(i + 312)) )
        sub_14021FD60();
    }
  }
  return 1;
}
