/*
 * XREFs of sub_140A28B84 @ 0x140A28B84
 * Callers:
 *     sub_14083D8B0 @ 0x14083D8B0 (sub_14083D8B0.c)
 *     sub_140A28530 @ 0x140A28530 (sub_140A28530.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A28B84(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 **v7; // r11
  unsigned int v8; // r10d
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 *v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx

  v7 = &off_14000AE18;
  v8 = 0;
  *a7 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = v9;
    if ( a5 && (unsigned int)v9 < a6 )
    {
      v11 = *v7;
      v12 = 5 * v9;
      *(_OWORD *)(a5 + 4 * v12) = *(_OWORD *)*v7;
      *(_DWORD *)(a5 + 4 * v12 + 16) = *((_DWORD *)v11 + 4);
      v10 = *a7;
    }
    v13 = v10 + 1;
    v9 = 0xFFFFFFFFLL;
    if ( v10 + 1 >= v10 )
      v9 = v13;
    v14 = v13 < v10 ? 0xC0000095 : 0;
    *a7 = v9;
    if ( v13 < v10 )
      break;
    ++v8;
    v7 += 2;
    if ( v8 >= 3 )
      return a6 < (unsigned int)v9 ? 0xC0000023 : 0;
  }
  *a7 = 0;
  return v14;
}
