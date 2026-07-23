/*
 * XREFs of sub_140A0DD98 @ 0x140A0DD98
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_140354748 @ 0x140354748 (sub_140354748.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0DD98(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
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
  _WORD *v21; // rbp
  __int64 v22; // r11
  unsigned int v23; // eax
  size_t v24; // r14
  void *Pool2; // rax
  void *v26; // r13
  _DWORD *v27; // rax
  unsigned int k; // ecx
  __int64 v29; // r8
  _DWORD *v30; // rdx
  _DWORD *v31; // rdx
  int v32; // esi
  _DWORD *v33; // rax
  int v34; // esi
  unsigned int v35; // r8d
  __int64 v36; // r9
  unsigned int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned int m; // ecx
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned int v42; // eax
  unsigned __int64 v43; // rdx
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned __int64 v47; // [rsp+30h] [rbp-48h] BYREF
  __int128 v48; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v48 = 0LL;
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
          v47 = 0LL;
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
              if ( (int)sub_140354748((_WORD *)v8 + 2, v20, &v47) < 0 )
                return (unsigned int)-1073741762;
              if ( v47 + 2 != v22 )
                return (unsigned int)-1073741762;
              v23 = 2 * (v47 >> 1) + 2;
              if ( 2 * (unsigned int)(v47 >> 1) == -2 )
                return (unsigned int)-1073741762;
              v24 = v23;
              Pool2 = (void *)ExAllocatePool2(256LL, v23, 542329939LL);
              v26 = Pool2;
              if ( !Pool2 )
                return (unsigned int)-1073741801;
              memmove(Pool2, v21, v24);
              v27 = *(_DWORD **)(a1 + 8);
              if ( !v27 || *(_DWORD *)a1 <= 5u )
              {
                v4 = -1073741811;
LABEL_57:
                ExFreePoolWithTag(v26, 0);
                return v4;
              }
              for ( k = 0; k < 5; ++k )
              {
                v29 = (unsigned int)*v27;
                v30 = v27 + 1;
                if ( v27 + 1 < v27 )
                  goto LABEL_56;
                v27 = (_DWORD *)((char *)v30 + v29);
                if ( (_DWORD *)((char *)v30 + v29) < v30 )
                  goto LABEL_56;
              }
              if ( v27 + 1 >= v27 )
              {
                v31 = 0LL;
                if ( *v27 )
                  v31 = v27 + 1;
                v32 = qword_140D3B3C0 ? sub_14042A5E0(v26, v31) : -1073700223;
                if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFC0
                  && *(_DWORD *)(a2 + 16) + 68 >= (unsigned int)(*(_DWORD *)(a2 + 16) + 64)
                  && *(_DWORD *)(a2 + 16) + 68 + *(_DWORD *)(a2 + 32) >= (unsigned int)(*(_DWORD *)(a2 + 16) + 68) )
                {
                  *(_DWORD *)(a4 + 4) = 40;
                  v33 = (_DWORD *)ExAllocatePool2(256LL, 40LL, 542329939LL);
                  if ( !v33 )
                  {
                    v4 = -1073741801;
                    goto LABEL_57;
                  }
                  *(_QWORD *)(a4 + 8) = v33;
                  *(_DWORD *)a4 = 0;
                  v34 = v32 | 0x10000000;
                  if ( v33 + 1 >= v33 )
                  {
                    if ( v33 + 2 > (_DWORD *)((char *)v33 + *(unsigned int *)(a4 + 4)) )
                    {
LABEL_51:
                      v4 = -1073741789;
                      goto LABEL_57;
                    }
                    *v33 = 4;
                    v33[1] = v34;
                    v35 = ++*(_DWORD *)a4;
                    v36 = *(_QWORD *)(a4 + 8);
                    if ( !v36 )
                    {
                      v37 = *(_DWORD *)(a4 + 4);
                      if ( v37 + 12 < v37 )
                      {
LABEL_55:
                        *(_DWORD *)(a4 + 4) = -1;
                        goto LABEL_56;
                      }
                      *(_DWORD *)(a4 + 4) = v37 + 12;
                      *(_DWORD *)a4 = v35 + 1;
LABEL_65:
                      v41 = *(_QWORD *)(a4 + 8);
                      if ( v41 )
                      {
                        v43 = *(_QWORD *)(a4 + 8);
                        v44 = 0;
                        if ( *(_DWORD *)a4 )
                        {
                          while ( 1 )
                          {
                            v45 = *(_DWORD *)v43 + 4;
                            if ( *(_DWORD *)v43 >= 0xFFFFFFFC || v43 + v45 < v43 )
                              break;
                            ++v44;
                            v43 += v45;
                            if ( v44 >= *(_DWORD *)a4 )
                              goto LABEL_73;
                          }
                        }
                        else
                        {
LABEL_73:
                          if ( v43 + 4 >= v43 )
                          {
                            if ( v43 + 20 > v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                              goto LABEL_51;
                            *(_DWORD *)v43 = 16;
                            *(_OWORD *)(v43 + 4) = v48;
                            goto LABEL_68;
                          }
                        }
                        goto LABEL_56;
                      }
                      v42 = *(_DWORD *)(a4 + 4);
                      if ( v42 + 20 >= v42 )
                      {
                        *(_DWORD *)(a4 + 4) = v42 + 20;
LABEL_68:
                        ++*(_DWORD *)a4;
                        goto LABEL_57;
                      }
                      goto LABEL_55;
                    }
                    v38 = *(_QWORD *)(a4 + 8);
                    for ( m = 0; m < v35; v38 += v40 )
                    {
                      v40 = *(_DWORD *)v38 + 4;
                      if ( *(_DWORD *)v38 >= 0xFFFFFFFC || v38 + v40 < v38 )
                        goto LABEL_56;
                      ++m;
                    }
                    if ( v38 + 4 >= v38 )
                    {
                      if ( v38 + 12 > v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_51;
                      *(_DWORD *)v38 = 8;
                      *(_QWORD *)(v38 + 4) = v16;
                      ++*(_DWORD *)a4;
                      goto LABEL_65;
                    }
                  }
                }
              }
LABEL_56:
              v4 = -1073741675;
              goto LABEL_57;
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
