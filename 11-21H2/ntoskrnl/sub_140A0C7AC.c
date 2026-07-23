/*
 * XREFs of sub_140A0C7AC @ 0x140A0C7AC
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_140354748 @ 0x140354748 (sub_140354748.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0C7AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  __int64 v16; // r12
  unsigned int j; // edx
  __int64 v18; // rax
  unsigned int *v19; // r8
  unsigned __int64 v20; // rdx
  _WORD *v21; // rsi
  __int64 v22; // r11
  unsigned int v23; // eax
  size_t v24; // rbp
  void *Pool2; // rax
  void *v26; // r15
  unsigned int *v27; // rcx
  _DWORD *v28; // rax
  unsigned int k; // edx
  __int64 v30; // r10
  _DWORD *v31; // r8
  _DWORD *v32; // r11
  unsigned int m; // edx
  __int64 v34; // rax
  unsigned int *v35; // r8
  _DWORD *v36; // rax
  int v37; // ebx
  unsigned int v38; // r8d
  __int64 v39; // r9
  unsigned int v40; // eax
  unsigned __int64 v41; // rdx
  unsigned int n; // ecx
  unsigned int v43; // eax
  unsigned __int64 v45; // [rsp+68h] [rbp+10h] BYREF

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
          v45 = 0LL;
          if ( *(_DWORD *)a1 > 4u )
          {
            for ( j = 0; j < 4; ++j )
            {
              v18 = *v8;
              v19 = v8 + 1;
              if ( v8 + 1 < v8 )
                return (unsigned int)-1073741675;
              v8 = (unsigned int *)((char *)v19 + v18);
              if ( (unsigned int *)((char *)v19 + v18) < v19 )
                return (unsigned int)-1073741675;
            }
            v20 = *v8;
            if ( v8 + 1 >= v8 )
            {
              if ( !(_DWORD)v20 )
                return (unsigned int)-1073741762;
              v21 = v8 + 1;
              if ( (v20 & 1) != 0 )
                return (unsigned int)-1073741762;
              if ( v21[(v20 >> 1) - 1] )
                return (unsigned int)-1073741762;
              if ( (int)sub_140354748((_WORD *)v8 + 2, v20, &v45) < 0 )
                return (unsigned int)-1073741762;
              if ( v45 + 2 != v22 )
                return (unsigned int)-1073741762;
              v23 = 2 * (v45 >> 1) + 2;
              if ( 2 * (unsigned int)(v45 >> 1) == -2 )
                return (unsigned int)-1073741762;
              v24 = v23;
              Pool2 = (void *)ExAllocatePool2(256LL, v23, 542329939LL);
              v26 = Pool2;
              if ( !Pool2 )
                return (unsigned int)-1073741801;
              memmove(Pool2, v21, v24);
              v27 = *(unsigned int **)(a1 + 8);
              if ( !v27 || *(_DWORD *)a1 <= 5u )
                goto LABEL_32;
              v28 = *(_DWORD **)(a1 + 8);
              for ( k = 0; k < 5; ++k )
              {
                v30 = (unsigned int)*v28;
                v31 = v28 + 1;
                if ( v28 + 1 < v28 )
                  goto LABEL_61;
                v28 = (_DWORD *)((char *)v31 + v30);
                if ( (_DWORD *)((char *)v31 + v30) < v31 )
                  goto LABEL_61;
              }
              if ( v28 + 1 < v28 )
                goto LABEL_61;
              v32 = 0LL;
              if ( *v28 )
                v32 = v28 + 1;
              if ( *(_DWORD *)a1 > 6u )
              {
                for ( m = 0; m < 6; ++m )
                {
                  v34 = *v27;
                  v35 = v27 + 1;
                  if ( v27 + 1 < v27 )
                    goto LABEL_61;
                  v27 = (unsigned int *)((char *)v35 + v34);
                  if ( (unsigned int *)((char *)v35 + v34) < v35 )
                    goto LABEL_61;
                }
                if ( v27 + 1 < v27 )
                  goto LABEL_61;
                if ( !qword_140D3B3D0 )
                {
                  v7 = -1073741637;
                  goto LABEL_62;
                }
                v7 = sub_14042A5E0(v26, v32);
                if ( v7 < 0 )
                  goto LABEL_62;
                if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0
                  || *(_DWORD *)(a2 + 16) + 52 < (unsigned int)(*(_DWORD *)(a2 + 16) + 48)
                  || *(_DWORD *)(a2 + 16) + 52 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 52) )
                {
                  goto LABEL_61;
                }
                *(_DWORD *)(a4 + 4) = 20;
                v36 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
                if ( !v36 )
                {
                  v7 = -1073741801;
                  goto LABEL_62;
                }
                *(_QWORD *)(a4 + 8) = v36;
                *(_DWORD *)a4 = 0;
                v37 = v7 | 0x10000000;
                if ( v36 + 1 < v36 )
                  goto LABEL_61;
                if ( v36 + 2 > (_DWORD *)((char *)v36 + *(unsigned int *)(a4 + 4)) )
                {
LABEL_56:
                  v7 = -1073741789;
                  goto LABEL_62;
                }
                *v36 = 4;
                v36[1] = v37;
                v38 = ++*(_DWORD *)a4;
                v39 = *(_QWORD *)(a4 + 8);
                if ( !v39 )
                {
                  v40 = *(_DWORD *)(a4 + 4);
                  if ( v40 + 12 >= v40 )
                  {
                    *(_DWORD *)(a4 + 4) = v40 + 12;
                    *(_DWORD *)a4 = v38 + 1;
                    v7 = 0;
                    goto LABEL_62;
                  }
                  *(_DWORD *)(a4 + 4) = -1;
                  goto LABEL_61;
                }
                v41 = *(_QWORD *)(a4 + 8);
                for ( n = 0; n < v38; v41 += v43 )
                {
                  v43 = *(_DWORD *)v41 + 4;
                  if ( *(_DWORD *)v41 >= 0xFFFFFFFC || v41 + v43 < v41 )
                    goto LABEL_61;
                  ++n;
                }
                if ( v41 + 4 < v41 )
                {
LABEL_61:
                  v7 = -1073741675;
                  goto LABEL_62;
                }
                v7 = 0;
                if ( v41 + 12 > v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_56;
                *(_DWORD *)v41 = 8;
                *(_QWORD *)(v41 + 4) = v16;
                ++*(_DWORD *)a4;
              }
              else
              {
LABEL_32:
                v7 = -1073741811;
              }
LABEL_62:
              ExFreePoolWithTag(v26, 0);
              return (unsigned int)v7;
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
