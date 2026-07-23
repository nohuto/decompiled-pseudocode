/*
 * XREFs of sub_140661D80 @ 0x140661D80
 * Callers:
 *     sub_1407F1308 @ 0x1407F1308 (sub_1407F1308.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140661D80(_QWORD *a1, __int16 a2, unsigned __int16 *a3, unsigned int a4, unsigned __int16 *a5)
{
  __int64 v5; // rbp
  unsigned __int16 *v9; // rsi
  unsigned int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // edx
  __int64 Pool2; // rax
  __int64 v18; // rdi
  unsigned int v19; // ebx
  __int64 v20; // r8
  unsigned int v21; // r15d
  int *v23; // rbx
  unsigned __int16 *v24; // rcx
  unsigned int v25; // r10d
  __int64 v26; // r8
  int v27; // eax

  v5 = a4;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( !*((_QWORD *)a3 + 1) )
    return (unsigned int)-1073741811;
  v9 = a5;
  if ( a4 )
  {
    if ( !a5 )
      return (unsigned int)-1073741811;
  }
  if ( a1[8] )
    return (unsigned int)-1073741791;
  v10 = 4 * a4;
  v11 = -1;
  v12 = v5;
  if ( (unsigned __int64)(4 * v5) > 0xFFFFFFFF )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v13 = v10 + 12;
    if ( v10 + 12 >= v10 )
      v11 = v10 + 12;
    v14 = v13 < v10 ? 0xC0000095 : 0;
    if ( v13 >= v10 )
    {
      if ( v11 <= 0x10 )
        v11 = 16;
      v15 = v11 + *a3;
      if ( v15 < v11 )
      {
        return (unsigned int)-1073741675;
      }
      else
      {
        v16 = 0;
        if ( (_DWORD)v5 )
        {
          v24 = a5;
          while ( *((_QWORD *)v24 + 1) )
          {
            v25 = v15 + *v24;
            if ( v25 < v15 )
              return (unsigned int)-1073741675;
            ++v16;
            v24 += 8;
            v15 = v25;
            if ( v16 >= (unsigned int)v5 )
              goto LABEL_14;
          }
          return (unsigned int)-1073741811;
        }
LABEL_14:
        Pool2 = ExAllocatePool2(256LL, v15, *(unsigned int *)(*a1 + 24LL));
        v18 = Pool2;
        if ( Pool2 )
        {
          *(_WORD *)(Pool2 + 4) = a2;
          v19 = 4 * v5 + 12;
          *(_DWORD *)Pool2 = v5;
          if ( v19 <= 0x10 )
            v19 = 16;
          v20 = *a3 >> 1;
          *(_DWORD *)(Pool2 + 8) = v20;
          memmove((void *)(Pool2 + v19), *((const void **)a3 + 1), 2 * v20);
          v21 = v19 + 2 * *(_DWORD *)(v18 + 8);
          if ( (_DWORD)v5 )
          {
            v23 = (int *)(v18 + 12);
            do
            {
              v26 = *v9 >> 1;
              *v23 = v26;
              memmove((void *)(v18 + v21), *((const void **)v9 + 1), 2 * v26);
              v27 = *v23++;
              v9 += 8;
              v21 += 2 * v27;
              --v12;
            }
            while ( v12 );
          }
          a1[8] = v18;
          return 0;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return v14;
}
