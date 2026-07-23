/*
 * XREFs of sub_140A0E160 @ 0x140A0E160
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0E160(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r10
  unsigned int *v12; // r9
  unsigned int v13; // r9d
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  __int64 v16; // r14
  int v17; // edx
  __int64 v18; // rax
  unsigned int *v19; // r8
  __int64 v20; // rdx
  unsigned int *v21; // rax
  unsigned int *v22; // rcx
  int v23; // esi
  _DWORD *Pool2; // rax
  int v25; // esi
  unsigned int v26; // r8d
  __int64 v27; // r10
  unsigned int v28; // eax
  unsigned __int64 v30; // rdx
  unsigned int j; // ecx
  unsigned int v32; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a4 )
    {
      v8 = *(unsigned int **)(a1 + 8);
      if ( v8 )
      {
        if ( *(_DWORD *)a1 > 3u )
        {
          v9 = v8;
          for ( i = 0; i < 3; ++i )
          {
            v11 = *v9;
            v12 = v9 + 1;
            if ( v9 + 1 < v9 )
              return (unsigned int)-1073741675;
            v9 = (unsigned int *)((char *)v12 + v11);
            if ( (unsigned int *)((char *)v12 + v11) < v12 )
              return (unsigned int)-1073741675;
          }
          v13 = *v9;
          v14 = v9 + 1;
          if ( v9 + 1 < v9 )
            return (unsigned int)-1073741675;
          v15 = 0LL;
          if ( v13 )
            v15 = v14;
          if ( v13 != 8 )
            return (unsigned int)-1073741789;
          v16 = *(_QWORD *)v15;
          if ( *(_DWORD *)a1 > 4u )
          {
            v17 = 0;
            while ( 1 )
            {
              v18 = *v8;
              v19 = v8 + 1;
              if ( v8 + 1 < v8 )
                break;
              v8 = (unsigned int *)((char *)v19 + v18);
              if ( (unsigned int *)((char *)v19 + v18) < v19 )
                break;
              if ( (unsigned int)++v17 >= 4 )
              {
                v20 = *v8;
                v21 = v8 + 1;
                if ( v8 + 1 < v8 )
                  return (unsigned int)-1073741675;
                v22 = 0LL;
                if ( (_DWORD)v20 )
                  v22 = v21;
                v23 = qword_140D3B360 ? sub_14042A5E0(v22, v20) : -1073741637;
                if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0
                  || *(_DWORD *)(a2 + 16) + 52 < (unsigned int)(*(_DWORD *)(a2 + 16) + 48)
                  || *(_DWORD *)(a2 + 16) + 52 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 52) )
                {
                  return (unsigned int)-1073741675;
                }
                *(_DWORD *)(a4 + 4) = 20;
                Pool2 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
                if ( !Pool2 )
                  return (unsigned int)-1073741801;
                *(_QWORD *)(a4 + 8) = Pool2;
                *(_DWORD *)a4 = 0;
                v25 = v23 | 0x10000000;
                if ( Pool2 + 1 < Pool2 )
                  return (unsigned int)-1073741675;
                if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
                  return (unsigned int)-1073741789;
                *Pool2 = 4;
                Pool2[1] = v25;
                v26 = ++*(_DWORD *)a4;
                v27 = *(_QWORD *)(a4 + 8);
                if ( !v27 )
                {
                  v28 = *(_DWORD *)(a4 + 4);
                  if ( v28 + 12 >= v28 )
                  {
                    *(_DWORD *)(a4 + 4) = v28 + 12;
                    *(_DWORD *)a4 = v26 + 1;
                    return v4;
                  }
                  *(_DWORD *)(a4 + 4) = -1;
                  return (unsigned int)-1073741675;
                }
                v30 = *(_QWORD *)(a4 + 8);
                for ( j = 0; j < v26; v30 += v32 )
                {
                  v32 = *(_DWORD *)v30 + 4;
                  if ( *(_DWORD *)v30 >= 0xFFFFFFFC || v30 + v32 < v30 )
                    return (unsigned int)-1073741675;
                  ++j;
                }
                if ( v30 + 4 < v30 )
                  return (unsigned int)-1073741675;
                if ( v30 + 12 <= v27 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v30 = 8;
                  *(_QWORD *)(v30 + 4) = v16;
                  ++*(_DWORD *)a4;
                  return v4;
                }
                return (unsigned int)-1073741789;
              }
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
