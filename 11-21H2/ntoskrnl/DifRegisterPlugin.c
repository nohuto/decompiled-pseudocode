/*
 * XREFs of DifRegisterPlugin @ 0x140604970
 * Callers:
 *     sub_1405FFDD0 @ 0x1405FFDD0 (sub_1405FFDD0.c)
 *     sub_1406019A0 @ 0x1406019A0 (sub_1406019A0.c)
 *     sub_140601DB0 @ 0x140601DB0 (sub_140601DB0.c)
 *     sub_140628A6C @ 0x140628A6C (sub_140628A6C.c)
 *     sub_14065521C @ 0x14065521C (sub_14065521C.c)
 *     sub_140AA4854 @ 0x140AA4854 (sub_140AA4854.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14060455C @ 0x14060455C (sub_14060455C.c)
 *     sub_140604620 @ 0x140604620 (sub_140604620.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140605160 @ 0x140605160 (sub_140605160.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A897D8 @ 0x140A897D8 (sub_140A897D8.c)
 *     sub_140A89818 @ 0x140A89818 (sub_140A89818.c)
 *     sub_140A89888 @ 0x140A89888 (sub_140A89888.c)
 */

__int64 __fastcall DifRegisterPlugin(__int64 a1, unsigned int a2, unsigned int a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r12
  _OWORD *v6; // rdi
  unsigned int v7; // r11d
  int v8; // eax
  unsigned int v9; // r10d
  __int64 v10; // rdi
  int v11; // r9d
  __int64 *v12; // rsi
  __int64 v13; // r10
  __int64 v14; // rsi
  void *Pool2; // rax
  int v16; // edx
  void *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 **v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  char v31; // al
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 **v34; // rdx
  __int64 v35; // rax
  __int64 **v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rdx
  _OWORD *v39; // rax
  __int64 v41; // [rsp+70h] [rbp+8h]
  unsigned int v43; // [rsp+80h] [rbp+18h]

  v41 = a1;
  v4 = 0;
  v5 = a3;
  v6 = a4;
  v7 = a2;
  if ( a3 < 0x40 )
  {
    v8 = *((_DWORD *)&qword_140D01450 + ((unsigned __int64)a3 >> 5));
    if ( _bittest(&v8, a3 & 0x1F) )
    {
      if ( !byte_140D04BC0[a3] )
      {
        v43 = 0;
        v9 = 0;
        if ( a2 )
        {
          while ( 1 )
          {
            v10 = a1 + 32LL * v9;
            if ( !*(_QWORD *)(v10 + 16) && !*(_QWORD *)(v10 + 24) )
              goto LABEL_38;
            if ( (unsigned __int8)sub_140A89888(*(unsigned int *)(v10 + 8)) )
            {
              v12 = sub_140604844(v11);
              if ( v12 )
              {
                if ( v13 )
                {
                  v32 = sub_14060455C(v10, 1, v5);
                  if ( !v32 )
                    goto LABEL_47;
                  v33 = (__int64 *)(v32 + 16);
                  v34 = (__int64 **)v12[5];
                  if ( *v34 != v12 + 4 )
                    goto LABEL_45;
                  v7 = a2;
                  *v33 = (__int64)(v12 + 4);
                  v33[1] = (__int64)v34;
                  *v34 = v33;
                  v12[5] = (__int64)v33;
                }
                if ( !*(_QWORD *)(v10 + 24) )
                  goto LABEL_37;
                v35 = sub_14060455C(v10, 0, v5);
                if ( !v35 )
                  goto LABEL_47;
                v36 = (__int64 **)(v12 + 6);
                v37 = (__int64 *)(v35 + 16);
                v38 = v12[6];
                if ( *(__int64 **)(v38 + 8) != v12 + 6 )
LABEL_45:
                  __fastfail(3u);
                *v37 = v38;
                v37[1] = (__int64)v36;
                *(_QWORD *)(v38 + 8) = v37;
                *v36 = v37;
              }
              else
              {
                v14 = -1LL;
                do
                  ++v14;
                while ( *(_BYTE *)(*(_QWORD *)v10 + v14) );
                Pool2 = (void *)ExAllocatePool2(64LL, v14 + 1, 1315334468LL);
                v17 = Pool2;
                if ( !Pool2 )
                  goto LABEL_47;
                memmove(Pool2, *(const void **)v10, v14 + 1);
                v18 = ExAllocatePool2(64LL, 64LL, 1315334468LL);
                v19 = v18;
                if ( !v18 )
                {
                  v4 = -1073741801;
                  ExFreePoolWithTag(v17, 0x4E666944u);
                  goto LABEL_48;
                }
                *(_QWORD *)v18 = v17;
                v20 = v18 + 32;
                v21 = v18 + 48;
                *(_DWORD *)(v18 + 8) = *(_DWORD *)(v10 + 8);
                *(_QWORD *)(v18 + 40) = v18 + 32;
                *(_QWORD *)(v18 + 32) = v18 + 32;
                *(_QWORD *)(v18 + 56) = v18 + 48;
                *(_QWORD *)(v18 + 48) = v18 + 48;
                if ( *(_QWORD *)(v10 + 16) )
                {
                  v22 = sub_14060455C(v10, 1, v5);
                  if ( !v22 )
                    goto LABEL_42;
                  v23 = *(__int64 ***)(v20 + 8);
                  v24 = (__int64 *)(v22 + 16);
                  if ( *v23 != (__int64 *)v20 )
                    goto LABEL_45;
                  *v24 = v20;
                  v24[1] = (__int64)v23;
                  *v23 = v24;
                  *(_QWORD *)(v20 + 8) = v24;
                }
                if ( *(_QWORD *)(v10 + 24) )
                {
                  v25 = sub_14060455C(v10, 0, v5);
                  if ( !v25 )
                  {
LABEL_42:
                    ExFreePoolWithTag(v17, 0x4E666944u);
                    ExFreePoolWithTag((PVOID)v19, 0x4E666944u);
                    goto LABEL_47;
                  }
                  v26 = *(_QWORD *)v21;
                  v27 = (_QWORD *)(v25 + 16);
                  if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
                    goto LABEL_45;
                  *v27 = v26;
                  v27[1] = v21;
                  *(_QWORD *)(v26 + 8) = v27;
                  *(_QWORD *)v21 = v27;
                }
                v28 = (_QWORD *)qword_140C1A8B8;
                v29 = (_QWORD *)(v19 + 16);
                if ( *(__int64 **)qword_140C1A8B8 != &qword_140C1A8B0 )
                  goto LABEL_45;
                *v29 = &qword_140C1A8B0;
                *(_QWORD *)(v19 + 24) = v28;
                *v28 = v29;
                qword_140C1A8B8 = v19 + 16;
                v30 = *(unsigned int *)(v19 + 8);
                if ( (unsigned int)v30 >= 0x10000000 )
                  v31 = sub_140A897D8(v30, off_140C073E8[(unsigned int)(v30 - 0x10000000)], v19);
                else
                  v31 = sub_140A89818(v30, *(&off_140C074F8 + v30), v19);
                if ( !v31 )
                {
                  sub_140605160("Binding failure for 0x%x\n", *(_DWORD *)(v19 + 8));
                  v4 = -1073738625;
                  goto LABEL_48;
                }
              }
            }
            else
            {
              sub_140605160("API %d is not available for the plugin %d.\n", v11, v5);
            }
            v7 = a2;
LABEL_37:
            a1 = v41;
LABEL_38:
            v9 = v43 + 1;
            v43 = v9;
            if ( v9 >= v7 )
            {
              v6 = a4;
              break;
            }
          }
        }
        if ( !v6 )
        {
          v39 = 0LL;
LABEL_50:
          qword_140D049C0[v5] = (__int64)v39;
          byte_140D04BC0[v5] = 1;
          return v4;
        }
        v39 = (_OWORD *)ExAllocatePool2(64LL, 16LL, 1315334468LL);
        if ( v39 )
        {
          *v39 = *v6;
          goto LABEL_50;
        }
LABEL_47:
        v4 = -1073741801;
LABEL_48:
        sub_140605160("Loading plugin %d failed!!!\n", v16);
        sub_140604620((_DWORD *)(unsigned int)v5);
      }
    }
  }
  return v4;
}
