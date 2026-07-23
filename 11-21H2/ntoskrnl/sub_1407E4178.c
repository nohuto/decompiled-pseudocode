/*
 * XREFs of sub_1407E4178 @ 0x1407E4178
 * Callers:
 *     sub_1407E4118 @ 0x1407E4118 (sub_1407E4118.c)
 * Callees:
 *     sub_1402E1260 @ 0x1402E1260 (sub_1402E1260.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140649558 @ 0x140649558 (sub_140649558.c)
 *     sub_1406DD6DC @ 0x1406DD6DC (sub_1406DD6DC.c)
 */

__int64 __fastcall sub_1407E4178(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // r10d
  int v9; // edi
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  unsigned int v13; // edx
  unsigned int v14; // ecx
  size_t Size[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v4 = *(_DWORD *)a1;
  v5 = *(_DWORD *)(a1 + 8);
  LODWORD(Size[0]) = 0;
  v17 = 0;
  v18 = 0;
  v9 = sub_140649558(v5, v4, (int *)Size);
  if ( v9 >= 0 )
  {
    v9 = sub_1402E1260(v10, *(_DWORD *)(a1 + 24), (int *)&v18);
    if ( v9 >= 0 )
    {
      v9 = sub_140649558(v18, v11, (int *)&v17);
      if ( v9 >= 0 )
      {
        v13 = *(_DWORD *)(a1 + 4);
        if ( v13 + 1 >= v12 )
        {
          v9 = sub_1406DD6DC(*(PVOID *)(a1 + 16), LODWORD(Size[0]), v17, (_QWORD *)(a1 + 16));
          if ( v9 < 0 )
            return (unsigned int)v9;
          *(_DWORD *)(a1 + 8) += *(_DWORD *)(a1 + 24);
          v12 = *(_DWORD *)(a1 + 8);
          v13 = *(_DWORD *)(a1 + 4);
        }
        if ( a4 <= v13 && v12 )
        {
          memmove(
            (void *)(*(_QWORD *)(a1 + 16) + (a4 + 1) * *(_DWORD *)a1),
            (const void *)(*(_QWORD *)(a1 + 16) + a4 * *(_DWORD *)a1),
            *(_DWORD *)a1 * (v13 - a4));
          v14 = *(_DWORD *)a1;
          ++*(_DWORD *)(a1 + 4);
          *(_QWORD *)(a4 * v14 + *(_QWORD *)(a1 + 16)) = a2;
        }
        else
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  return (unsigned int)v9;
}
