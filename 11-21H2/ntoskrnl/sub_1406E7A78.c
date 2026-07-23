/*
 * XREFs of sub_1406E7A78 @ 0x1406E7A78
 * Callers:
 *     sub_14076D160 @ 0x14076D160 (sub_14076D160.c)
 *     sub_140A25D48 @ 0x140A25D48 (sub_140A25D48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E7A78(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d
  __int64 **v6; // r8
  unsigned int v7; // edx
  __int64 *v8; // r9
  __int64 v10; // rcx

  v5 = -1073741802;
  if ( !a4 )
  {
    v6 = &off_140007230;
    v7 = 0;
    while ( 1 )
    {
      v8 = *v6;
      if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)*v6 + 4) )
      {
        v10 = *(_QWORD *)a5 - *v8;
        if ( *(_QWORD *)a5 == *v8 )
          v10 = *(_QWORD *)(a5 + 8) - v8[1];
        if ( !v10 )
          break;
      }
      ++v7;
      v6 += 2;
      if ( v7 >= 4 )
        return v5;
    }
    return (unsigned int)-1073741790;
  }
  return v5;
}
