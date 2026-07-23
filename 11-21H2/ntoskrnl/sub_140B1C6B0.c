/*
 * XREFs of sub_140B1C6B0 @ 0x140B1C6B0
 * Callers:
 *     sub_1403CCC40 @ 0x1403CCC40 (sub_1403CCC40.c)
 *     sub_1403CCD08 @ 0x1403CCD08 (sub_1403CCD08.c)
 *     sub_140B1BD88 @ 0x140B1BD88 (sub_140B1BD88.c)
 *     sub_140B1BE18 @ 0x140B1BE18 (sub_140B1BE18.c)
 *     sub_140B1BEA8 @ 0x140B1BEA8 (sub_140B1BEA8.c)
 *     sub_140B1BF9C @ 0x140B1BF9C (sub_140B1BF9C.c)
 *     sub_140B1C06C @ 0x140B1C06C (sub_140B1C06C.c)
 *     sub_140B1C22C @ 0x140B1C22C (sub_140B1C22C.c)
 *     sub_140B1C2F4 @ 0x140B1C2F4 (sub_140B1C2F4.c)
 *     sub_140B1C3C8 @ 0x140B1C3C8 (sub_140B1C3C8.c)
 *     sub_140B1C49C @ 0x140B1C49C (sub_140B1C49C.c)
 *     sub_140B1C78C @ 0x140B1C78C (sub_140B1C78C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140B1C6B0(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5)
{
  __int64 *v8; // rdx
  int i; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v8 = (__int64 *)qword_140D00130;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v8 == &qword_140D00130 )
        return 3221226021LL;
      v10 = v8[2];
      v8 = (__int64 *)*v8;
      if ( (unsigned int)(*(_DWORD *)(v10 + 32) - 1) <= 1 )
      {
        v11 = *a2 - *(_QWORD *)(v10 + 16);
        if ( *a2 == *(_QWORD *)(v10 + 16) )
          v11 = a2[1] - *(_QWORD *)(v10 + 24);
        if ( !v11 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v12 = *(_DWORD *)(v10 + 36);
  if ( *a5 < v12 )
  {
    *a5 = v12;
    return 3221225507LL;
  }
  else
  {
    memmove(a4, (const void *)(v10 + *(unsigned int *)(v10 + 40)), v12);
    return 0LL;
  }
}
