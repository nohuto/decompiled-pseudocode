/*
 * XREFs of sub_140281C00 @ 0x140281C00
 * Callers:
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_140709F54 @ 0x140709F54 (sub_140709F54.c)
 *     sub_140755920 @ 0x140755920 (sub_140755920.c)
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_14096D8A8 @ 0x14096D8A8 (sub_14096D8A8.c)
 *     sub_1409736EC @ 0x1409736EC (sub_1409736EC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140281C00(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 i; // rdx
  _QWORD *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v1 = (unsigned __int64)v3;
        v3 = (_QWORD *)*v3;
      }
      while ( v3 );
    }
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(_QWORD *)v1 == a1 )
        break;
      a1 = v1;
    }
  }
  return v1;
}
