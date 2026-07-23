/*
 * XREFs of sub_1405F9E38 @ 0x1405F9E38
 * Callers:
 *     sub_1405F9C9C @ 0x1405F9C9C (sub_1405F9C9C.c)
 * Callees:
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_14037F42C @ 0x14037F42C (sub_14037F42C.c)
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 */

__int64 __fastcall sub_1405F9E38(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, _DWORD *a6, _DWORD *a7)
{
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  _DWORD *v10; // r12
  int v11; // ebp
  int v12; // eax
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  int v22; // r8d

  v8 = a6;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = &a6[*a7];
  v11 = (a5 - 1) | (a3 << *(_DWORD *)(a1 + 812));
  v12 = *(_DWORD *)(v9 + 32);
  if ( (v12 & 1) == 0 )
  {
    sub_140237ED8((__int64 *)(a1 + 64), *(_QWORD *)(a2 + 8));
    v12 = *(_DWORD *)(v9 + 32);
  }
  *(_DWORD *)(v9 + 32) = v12 | 1;
  **(_DWORD **)(a1 + 760) = v11;
  result = sub_140380C38(a1 + 64, *(_DWORD *)(a1 + 768), v9);
  if ( (_DWORD)result != -1073741818 )
  {
    if ( !(_DWORD)result )
    {
      v14 = *(_DWORD *)(v9 + 24);
      if ( v14 == -1 || !v14 )
        v15 = v9 + 8;
      else
        v15 = *(_QWORD *)v9 + 16LL * (unsigned int)(v14 - 1);
      v8 = a6 + 1;
      v16 = (unsigned int)(**(_DWORD **)(v15 + 8) >> *(_DWORD *)(a1 + 456));
      _BitScanReverse((unsigned int *)&v17, v16);
      *a6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 192) + 16 * (v16 ^ (unsigned int)(1 << v17)))
                      + (unsigned int)(*(_DWORD *)(a1 + 464) * (**(_DWORD **)(v15 + 8) & *(_DWORD *)(a1 + 460)))
                      + *(unsigned int *)(a1 + 472)
                      + 8LL);
    }
    if ( v8 >= v10 )
    {
LABEL_16:
      *a7 = v8 - a6;
      return 0LL;
    }
    else
    {
      while ( 1 )
      {
        v18 = (_DWORD *)sub_14037F42C(a1 + 64, v9);
        if ( v18 == (_DWORD *)-1LL )
          return 3221225478LL;
        if ( v18 )
        {
          v19 = (unsigned int)(*v18 >> *(_DWORD *)(a1 + 456));
          _BitScanReverse((unsigned int *)&v20, v19);
          v21 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + (unsigned int)(*(_DWORD *)(a1 + 464) * (*v18 & *(_DWORD *)(a1 + 460)))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v20 + 192) + 16 * (v19 ^ (unsigned int)(1 << v20))));
          v22 = *v21 & *(_DWORD *)(a1 + 808);
          if ( *v21 >> *(_DWORD *)(a1 + 812) == a3 )
          {
            *v8++ = v21[2];
            if ( v22 )
            {
              if ( v8 < v10 )
                continue;
            }
          }
        }
        goto LABEL_16;
      }
    }
  }
  return result;
}
