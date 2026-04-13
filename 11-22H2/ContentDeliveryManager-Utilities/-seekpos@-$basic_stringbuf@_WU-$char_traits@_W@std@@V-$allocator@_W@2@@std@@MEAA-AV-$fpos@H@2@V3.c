/*
 * XREFs of ?seekpos@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@MEAA?AV?$fpos@H@2@V32@H@Z @ 0x180065160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstringbuf::seekpos(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 *v4; // rdi
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // edx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // edx
  __int64 result; // rax

  v4 = *(unsigned __int64 **)(a1 + 64);
  v7 = *(_QWORD *)a3 + *(int *)(a3 + 8);
  v8 = *v4;
  if ( *v4 && *(_QWORD *)(a1 + 104) < v8 )
    *(_QWORD *)(a1 + 104) = v8;
  if ( v7 != std::_BADOFF )
  {
    if ( (a4 & 1) != 0 && (v9 = **(_QWORD **)(a1 + 56)) != 0 )
    {
      if ( v7 >= 0 )
      {
        v10 = **(_QWORD **)(a1 + 24);
        if ( v7 <= (*(_QWORD *)(a1 + 104) - v10) >> 1 )
        {
          v11 = v7 + ((v10 - v9) >> 1);
          **(_DWORD **)(a1 + 80) -= v11;
          **(_QWORD **)(a1 + 56) += 2LL * v11;
          if ( (a4 & 2) != 0 )
          {
            v12 = *(_QWORD **)(a1 + 64);
            if ( *v12 )
            {
              v13 = **(_QWORD **)(a1 + 56);
              v14 = (*v12 + 2LL * **(int **)(a1 + 88) - v13) >> 1;
              **(_QWORD **)(a1 + 64) = v13;
              **(_DWORD **)(a1 + 88) = v14;
            }
          }
          goto LABEL_18;
        }
      }
    }
    else if ( (a4 & 2) != 0 )
    {
      if ( *v4 )
      {
        if ( v7 >= 0 )
        {
          v15 = **(_QWORD **)(a1 + 24);
          if ( v7 <= (*(_QWORD *)(a1 + 104) - v15) >> 1 )
          {
            v16 = v7 + ((__int64)(v15 - *v4) >> 1);
            **(_DWORD **)(a1 + 88) -= v16;
            **(_QWORD **)(a1 + 64) += 2LL * v16;
            goto LABEL_18;
          }
        }
      }
    }
    v7 = std::_BADOFF;
  }
LABEL_18:
  *(_QWORD *)(a2 + 8) = 0LL;
  result = a2;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)a2 = v7;
  return result;
}
