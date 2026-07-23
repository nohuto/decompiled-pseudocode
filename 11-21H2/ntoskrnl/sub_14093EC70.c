/*
 * XREFs of sub_14093EC70 @ 0x14093EC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14055C25C @ 0x14055C25C (sub_14055C25C.c)
 *     sub_14093E9A0 @ 0x14093E9A0 (sub_14093E9A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093EC70(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _OWORD *v8; // r15
  __int64 v9; // r14
  _DWORD *v10; // rbp
  char *Pool2; // rbx
  __int64 v12; // rdi
  int v13; // ebx
  char *v14; // rsi
  char *v15; // r9
  __int64 v16; // rax
  __int64 v17; // r13
  signed __int64 v18; // rcx
  char v19; // al
  int v20; // eax
  __int64 v21; // rdx
  signed __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rax
  _DWORD *v25; // rcx
  void *v26; // rbp
  unsigned __int64 v27; // rbx
  _DWORD *v28; // rdi
  unsigned __int64 v29; // rbx
  int v30; // ebp
  int v31; // [rsp+50h] [rbp-88h] BYREF
  __int64 v32; // [rsp+58h] [rbp-80h]
  __int64 v33; // [rsp+60h] [rbp-78h]
  PVOID P; // [rsp+68h] [rbp-70h]
  __int64 v35; // [rsp+70h] [rbp-68h]
  unsigned __int64 v36; // [rsp+78h] [rbp-60h]
  char *v37; // [rsp+80h] [rbp-58h]

  v31 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  LODWORD(v35) = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Pool2 = (char *)ExAllocatePool2(256LL, 532LL, 538996553LL);
  P = Pool2;
  if ( Pool2 )
  {
    v14 = (char *)ExAllocatePool2(256LL, 544LL, 538996553LL);
    if ( v14
      && (a3 != 2
       || (v8 = (_OWORD *)ExAllocatePool2(256LL, 532LL, 538996553LL)) != 0LL
       && (v35 = 288LL, (v9 = ExAllocatePool2(256LL, 288LL, 538996553LL)) != 0)) )
    {
      v12 = a5;
      v15 = Pool2 + 16;
      v16 = (unsigned int)*a6;
      *a6 = 0;
      v36 = a5 + v16;
      v17 = a5;
      v32 = a5;
      v37 = Pool2 + 16;
      while ( 1 )
      {
        v33 = v12;
        *(_OWORD *)Pool2 = *(_OWORD *)(v14 + 8);
        memmove(v15, v14 + 28, *((unsigned int *)v14 + 6));
        *(_WORD *)&Pool2[2 * ((unsigned __int64)*((unsigned int *)v14 + 6) >> 1) + 16] = 0;
        v13 = sub_14055C25C(1, a1, a2, (__int64)Pool2, 0x214u, (__int64)v14, 0x220u, 0x1Cu, &v31);
        if ( v13 < 0 )
          break;
        v18 = *(_QWORD *)v14;
        if ( *(_QWORD *)v14 == 0x800000000000000EuLL )
        {
          v13 = 0;
          break;
        }
        if ( v18 < 0 )
        {
          v13 = sub_14093E9A0(v18);
          break;
        }
        if ( a4 )
        {
          v19 = sub_14042A5E0(v14 + 8, v14 + 28);
          Pool2 = (char *)P;
          v15 = (char *)P + 16;
          if ( !v19 )
            continue;
        }
        if ( a3 == 2 )
        {
          *v8 = *(_OWORD *)(v14 + 8);
          memmove(v8 + 1, v14 + 28, *((unsigned int *)v14 + 6));
          while ( 1 )
          {
            v20 = sub_14055C25C(0, a1, a2, (__int64)v8, 0x214u, v9, v35, 0x18u, &v31);
            v21 = 0LL;
            v13 = v20;
            if ( v20 < 0 )
              goto LABEL_40;
            v22 = *(_QWORD *)v9;
            if ( *(_QWORD *)v9 == 0x8000000000000005uLL )
            {
              if ( !v12 )
                goto LABEL_28;
              v23 = *(_DWORD *)(v9 + 16) + 32;
              v35 = v23;
              ExFreePoolWithTag((PVOID)v9, 0);
              v24 = ExAllocatePool2(256LL, v23, 538996553LL);
              v21 = 0LL;
              v9 = v24;
              if ( !v24 )
              {
                v13 = -1073741670;
                goto LABEL_40;
              }
              v13 = -1073741789;
            }
            else if ( v22 < 0 )
            {
              v13 = sub_14093E9A0(v22);
LABEL_27:
              if ( v13 < 0 )
                goto LABEL_40;
LABEL_28:
              v25 = (_DWORD *)v32;
              v26 = (void *)((*((unsigned int *)v14 + 6) + v32 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
              v27 = ((unsigned __int64)v26 + *(_QWORD *)(v9 + 16) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v27 <= v36 )
              {
                if ( v12 )
                {
                  v28 = (_DWORD *)v32;
                  *(_OWORD *)(v32 + 16) = *(_OWORD *)(v14 + 8);
                  memmove(v28 + 8, v14 + 28, *((unsigned int *)v14 + 6));
                  v28[1] = (_DWORD)v26 - (_DWORD)v28;
                  memmove(v26, (const void *)(v9 + 24), *(_QWORD *)(v9 + 16));
                  v25 = (_DWORD *)v32;
                  v28[2] = *(_DWORD *)(v9 + 16);
                  v28[3] = *(_DWORD *)(v9 + 8);
                  *v28 = v27 - (_DWORD)v28;
                  v12 = v33;
                }
              }
              else
              {
                v12 = v21;
              }
              v32 = v27;
              v10 = v25;
              *a6 += v27 - (_DWORD)v25;
              goto LABEL_38;
            }
            if ( v13 != -1073741789 )
              goto LABEL_27;
          }
        }
        v29 = (v17 + *((unsigned int *)v14 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
        v30 = (v17 + *((_DWORD *)v14 + 6) + 27) & 0xFFFFFFF8;
        if ( v29 <= v36 )
        {
          if ( v12 )
          {
            *(_OWORD *)(v17 + 4) = *(_OWORD *)(v14 + 8);
            memmove((void *)(v17 + 20), v14 + 28, *((unsigned int *)v14 + 6));
            *(_DWORD *)v17 = v29 - v17;
          }
        }
        else
        {
          v12 = 0LL;
        }
        *a6 += v30 - v17;
        v10 = (_DWORD *)v17;
        v17 = v29;
LABEL_38:
        Pool2 = (char *)P;
        v15 = v37;
      }
LABEL_40:
      if ( v10 && v12 )
        *v10 = 0;
    }
    else
    {
      v12 = a5;
      v13 = -1073741670;
    }
    ExFreePoolWithTag(P, 0);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( v9 )
      ExFreePoolWithTag((PVOID)v9, 0);
  }
  else
  {
    v12 = a5;
    v13 = -1073741670;
  }
  if ( !v12 )
  {
    if ( *a6 )
      return (unsigned int)-1073741789;
  }
  return (unsigned int)v13;
}
