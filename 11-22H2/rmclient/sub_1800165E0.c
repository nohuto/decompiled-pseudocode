/*
 * XREFs of sub_1800165E0 @ 0x1800165E0
 * Callers:
 *     sub_180012CD4 @ 0x180012CD4 (sub_180012CD4.c)
 *     sub_1800131B4 @ 0x1800131B4 (sub_1800131B4.c)
 * Callees:
 *     sub_180016348 @ 0x180016348 (sub_180016348.c)
 *     sub_180016748 @ 0x180016748 (sub_180016748.c)
 */

__int64 __fastcall sub_1800165E0(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 i; // rcx
  __int64 v7; // rbx

  v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  v3 = a1[1];
  v4 = a1;
  if ( v3 )
  {
    v5 = *(_QWORD **)v3;
    if ( *(_QWORD *)v3 )
    {
      do
      {
        v3 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
      }
      while ( v5 );
    }
  }
  else
  {
    for ( i = a1[2]; ; i = *(_QWORD *)(v3 + 16) )
    {
      v3 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v3 || *(_QWORD **)v3 == v4 )
        break;
      v4 = (_QWORD *)v3;
    }
  }
  v7 = sub_180016748(v3);
  RtlReleaseSRWLockShared(v2 + 16);
  sub_180016348(a1);
  return v7;
}
