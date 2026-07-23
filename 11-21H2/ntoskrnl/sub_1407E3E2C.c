/*
 * XREFs of sub_1407E3E2C @ 0x1407E3E2C
 * Callers:
 *     sub_1407E3070 @ 0x1407E3070 (sub_1407E3070.c)
 * Callees:
 *     sub_1402E1260 @ 0x1402E1260 (sub_1402E1260.c)
 *     sub_140649558 @ 0x140649558 (sub_140649558.c)
 *     sub_1406DD6DC @ 0x1406DD6DC (sub_1406DD6DC.c)
 *     sub_1407E3F10 @ 0x1407E3F10 (sub_1407E3F10.c)
 */

__int64 __fastcall sub_1407E3E2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r10d
  __int64 result; // rax
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-18h] BYREF
  size_t Size[2]; // [rsp+24h] [rbp-14h] BYREF
  unsigned int v19; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 20);
  LODWORD(Size[0]) = 0;
  v17 = 0;
  v19 = 0;
  result = sub_140649558(v5, 0x20u, (int *)Size);
  if ( (int)result >= 0 )
  {
    result = sub_1402E1260(v11, *(_DWORD *)(a1 + 32), (int *)&v19);
    if ( (int)result >= 0 )
    {
      result = sub_140649558(v19, v12, (int *)&v17);
      if ( (int)result >= 0 )
      {
        v14 = *(unsigned int *)(a1 + 16);
        if ( (int)v14 + 1 >= v13 )
        {
          result = sub_1406DD6DC(*(PVOID *)(a1 + 24), LODWORD(Size[0]), v17, (_QWORD *)(a1 + 24));
          if ( (int)result < 0 )
            return result;
          *(_DWORD *)(a1 + 20) += *(_DWORD *)(a1 + 32);
          v14 = *(unsigned int *)(a1 + 16);
        }
        v15 = a5;
        v16 = *(_QWORD *)(a1 + 24) + 32 * v14;
        *(_QWORD *)v16 = a2;
        *(_QWORD *)(v16 + 8) = a3;
        *(_QWORD *)(v16 + 16) = a4;
        *(_DWORD *)(v16 + 24) = v15;
        ++*(_DWORD *)(a1 + 16);
        return sub_1407E3F10(a2);
      }
    }
  }
  return result;
}
