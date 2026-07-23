/*
 * XREFs of sub_140286630 @ 0x140286630
 * Callers:
 *     sub_14024DA80 @ 0x14024DA80 (sub_14024DA80.c)
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 *     sub_1402864A0 @ 0x1402864A0 (sub_1402864A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140286630(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rbp
  int v8; // edx
  unsigned int v9; // ecx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // r14
  int v14; // ebx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  unsigned int i; // ebx
  __int64 v19; // rsi
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx

  result = a1 + 1784;
  v5 = a1 + 1912;
  v6 = 0;
  v7 = a1 + 1944;
  do
  {
    if ( *(_QWORD *)(result + 16) )
    {
      v8 = *(_DWORD *)(result + 24);
      v9 = a2 - v8;
      if ( a3 || v9 > 2 || (v8 & 1) == 0 && v9 >= 2 )
      {
LABEL_9:
        while ( 2 )
        {
          v10 = *(_QWORD **)result;
          if ( *(_QWORD *)result != result )
          {
            if ( v10[1] != result )
              goto LABEL_26;
            v11 = *v10;
            if ( *(_QWORD **)(*v10 + 8LL) != v10 )
              goto LABEL_26;
            *(_QWORD *)result = v11;
            *(_QWORD *)(v11 + 8) = result;
            v12 = (v10[2] >> 18) & 7LL;
            v10[4] &= 0x3FFFFFFFFFFFFFFFuLL;
            v13 = &v10[-5 * v12];
            v14 = 0;
            v15 = v13 + 4;
            while ( *v15 < 0x4000000000000000uLL )
            {
              v15 += 5;
              if ( (unsigned int)++v14 >= 8 )
              {
                v17 = &v10[-5 * v12];
                for ( i = 0; i < 8; ++i )
                {
                  if ( i != v12 )
                  {
                    v19 = *v17;
                    if ( *(_QWORD **)(*v17 + 8LL) != v17 )
                      goto LABEL_26;
                    v20 = (_QWORD *)v17[1];
                    if ( (_QWORD *)*v20 != v17 )
                      goto LABEL_26;
                    *v20 = v19;
                    *(_QWORD *)(v19 + 8) = v20;
                  }
                  v17 += 5;
                }
                *(_QWORD *)(v5 + 16) -= 7LL;
                v21 = *(_QWORD **)(v7 + 8);
                if ( *v21 == v7 )
                {
                  *v13 = v7;
                  v13[1] = v21;
                  *v21 = v13;
                  *(_QWORD *)(v7 + 8) = v13;
                  ++*(_QWORD *)(v7 + 16);
                  goto LABEL_9;
                }
LABEL_26:
                __fastfail(3u);
              }
            }
            v16 = *(_QWORD **)(v5 + 8);
            if ( *v16 == v5 )
            {
              *v10 = v5;
              v10[1] = v16;
              *v16 = v10;
              *(_QWORD *)(v5 + 8) = v10;
              ++*(_QWORD *)(v5 + 16);
              continue;
            }
            goto LABEL_26;
          }
          break;
        }
        *(_QWORD *)(result + 16) = 0LL;
      }
    }
    ++v6;
    result += 32LL;
  }
  while ( v6 < 4 );
  return result;
}
