/*
 * XREFs of sub_180016748 @ 0x180016748
 * Callers:
 *     sub_180012AD0 @ 0x180012AD0 (sub_180012AD0.c)
 *     sub_1800165E0 @ 0x1800165E0 (sub_1800165E0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180016748(unsigned __int64 a1)
{
  unsigned __int64 j; // rdx
  bool i; // zf
  _QWORD **v3; // rax
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rcx

  j = a1;
  for ( i = a1 == 0; ; i = j == 0 )
  {
    if ( i )
      return 0LL;
    if ( *(_QWORD *)(j + 24) )
      break;
    v3 = *(_QWORD ***)(j + 8);
    v4 = j;
    if ( v3 )
    {
      v5 = *v3;
      for ( j = *(_QWORD *)(j + 8); v5; v5 = (_QWORD *)*v5 )
        j = (unsigned __int64)v5;
    }
    else
    {
      while ( 1 )
      {
        j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v4 )
          break;
        v4 = j;
      }
    }
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(j + 24)) <= 1 )
    __fastfail(0xEu);
  return j;
}
