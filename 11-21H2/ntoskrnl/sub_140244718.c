/*
 * XREFs of sub_140244718 @ 0x140244718
 * Callers:
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140244718(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 i; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    for ( ; *(_QWORD *)(v1 + 8); v1 = *(_QWORD *)(v1 + 8) )
      ;
  }
  else
  {
    for ( i = a1[2]; ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(unsigned __int64 **)(v1 + 8) == a1 )
        break;
      a1 = (unsigned __int64 *)v1;
    }
  }
  return v1;
}
