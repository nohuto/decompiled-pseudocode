/*
 * XREFs of sub_140A29598 @ 0x140A29598
 * Callers:
 *     sub_14083D8B0 @ 0x14083D8B0 (sub_14083D8B0.c)
 *     sub_140A28530 @ 0x140A28530 (sub_140A28530.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A29598(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d
  __int64 **v6; // r8
  unsigned int v7; // edx
  __int64 *v8; // r9
  __int64 v9; // rcx

  v5 = -1073741802;
  if ( !a4 )
  {
    v6 = &off_14000AE18;
    v7 = 0;
    while ( 1 )
    {
      v8 = *v6;
      if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)*v6 + 4) )
      {
        v9 = *(_QWORD *)a5 - *v8;
        if ( *(_QWORD *)a5 == *v8 )
          v9 = *(_QWORD *)(a5 + 8) - v8[1];
        if ( !v9 )
          break;
      }
      ++v7;
      v6 += 2;
      if ( v7 >= 3 )
        return v5;
    }
    return (unsigned int)-1073741790;
  }
  return v5;
}
