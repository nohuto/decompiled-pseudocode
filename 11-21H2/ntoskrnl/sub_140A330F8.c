/*
 * XREFs of sub_140A330F8 @ 0x140A330F8
 * Callers:
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A330F8(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        const void **a8,
        unsigned __int16 *Src)
{
  unsigned int v9; // r13d
  unsigned int v10; // ebx
  __int64 v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // rbp
  unsigned int v14; // r15d
  void *v15; // rcx
  __int64 Pool2; // rax
  __int64 v17; // rsi
  __int64 v19; // rcx
  char *v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // r15
  __int64 v23; // r12
  char *v24; // r13
  __int64 v25; // rbp
  char *v26; // rbx
  __int64 v27; // rax
  unsigned int v29; // r13d
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r12
  char *v33; // rdi
  __int64 v34; // r14
  const void **v35; // rbx
  unsigned int v36; // eax
  void *v37; // rcx
  __int64 v41; // [rsp+A8h] [rbp+50h]

  v9 = a5;
  v10 = a2 + 104;
  v11 = a3;
  v12 = a4;
  v13 = a1;
  v14 = a3 + a4;
  if ( a3 + a4 + a5 )
  {
    Pool2 = ExAllocatePool2(258LL, v10, 1919109443LL);
    v17 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    *(_DWORD *)Pool2 = v10;
    v19 = Pool2 + 104;
    *(_DWORD *)(Pool2 + 52) = a6;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 104;
    v20 = (char *)(16LL * v14 + Pool2 + 104);
    v21 = 0LL;
    v41 = v17 + 104;
    *(_DWORD *)(v17 + 32) = v11;
    if ( (_DWORD)v11 )
    {
      v22 = a7;
      v23 = v11;
      v24 = (char *)a7 - v19;
      v25 = v19 - (_QWORD)a7;
      do
      {
        v26 = (char *)v22 + v25;
        memmove(v20, *(const void **)&v24[(_QWORD)v22 + v25 + 8], (unsigned int)*v22);
        *((_QWORD *)v26 + 1) = v20;
        *(_DWORD *)v26 = *v22;
        v27 = (unsigned int)*v22;
        v22 += 4;
        v20 += (v27 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        --v23;
      }
      while ( v23 );
      v13 = a1;
      v21 = v11;
      v9 = a5;
      v12 = a4;
      v19 = v17 + 104;
    }
    *(_DWORD *)(v17 + 16) = v12;
    *(_QWORD *)(v17 + 8) = v19 + 16 * v21;
    if ( v12 )
    {
      v29 = 0;
      do
      {
        memmove(v20, a8[1], *(unsigned int *)a8);
        v30 = (unsigned int)v11 + v29++;
        v30 *= 2LL;
        *(_QWORD *)(v41 + 8 * v30 + 8) = v20;
        *(_DWORD *)(v41 + 8 * v30) = *(_DWORD *)a8;
        v31 = *(unsigned int *)a8;
        a8 += 2;
        v20 += (v31 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      while ( v29 < v12 );
      v9 = a5;
    }
    *(_OWORD *)(v17 + 56) = 0LL;
    v32 = v9;
    *(_QWORD *)(v17 + 40) = v20;
    *(_DWORD *)(v17 + 48) = v9;
    memmove(v20, Src, 120LL * v9);
    v33 = &v20[120 * v9];
    if ( v9 )
    {
      v34 = -80LL - (_QWORD)Src;
      v35 = (const void **)(Src + 40);
      do
      {
        if ( *(_WORD *)v35 )
        {
          memmove(v33, *(v35 - 1), *(unsigned __int16 *)v35);
          *(const void **)((char *)v35 + v34 + *(_QWORD *)(v17 + 40) + 72) = v33;
          v33 += *(unsigned __int16 *)v35;
        }
        if ( *((_WORD *)v35 + 8) )
        {
          memmove(v33, v35[1], *((unsigned __int16 *)v35 + 8));
          *(const void **)((char *)v35 + v34 + *(_QWORD *)(v17 + 40) + 88) = v33;
          v33 += *((unsigned __int16 *)v35 + 8);
        }
        v36 = *((_DWORD *)v35 + 6);
        if ( v36 )
        {
          memmove(v33, v35[4], v36);
          *(const void **)((char *)v35 + v34 + *(_QWORD *)(v17 + 40) + 112) = v33;
          v33 += *((unsigned int *)v35 + 6);
        }
        v35 += 15;
        --v32;
      }
      while ( v32 );
    }
    v37 = *(void **)(v13 + 16);
    if ( v37 )
      ExFreePoolWithTag(v37, 0x72634943u);
    *(_QWORD *)(v13 + 16) = v17;
  }
  else
  {
    v15 = *(void **)(a1 + 16);
    if ( v15 )
      ExFreePoolWithTag(v15, 0x72634943u);
    *(_QWORD *)(v13 + 16) = 0LL;
  }
  return 0LL;
}
