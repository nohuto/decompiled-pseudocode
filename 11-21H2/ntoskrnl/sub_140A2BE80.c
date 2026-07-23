/*
 * XREFs of sub_140A2BE80 @ 0x140A2BE80
 * Callers:
 *     sub_140787620 @ 0x140787620 (sub_140787620.c)
 *     sub_140A25124 @ 0x140A25124 (sub_140A25124.c)
 * Callees:
 *     sub_140787818 @ 0x140787818 (sub_140787818.c)
 *     sub_140A2BD78 @ 0x140A2BD78 (sub_140A2BD78.c)
 */

__int64 __fastcall sub_140A2BE80(
        __int64 a1,
        __int64 a2,
        void *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  int v9; // r15d
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ecx
  _DWORD v19[4]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  LODWORD(a7) = 0;
  v9 = (int)a3;
  *v7 = 0;
  if ( !&qword_140010B80 )
    goto LABEL_12;
  if ( a4
    || (result = sub_140787818(a1, a2, a3, (__int64)&qword_140010B80, &a7, 0LL, 0, v19), (_DWORD)result == -1073741789)
    || !(_DWORD)result )
  {
    if ( a5 )
    {
      v13 = *v7;
      if ( (unsigned int)v13 < a6 )
      {
        v14 = 5 * v13;
        *(_OWORD *)(a5 + 4 * v14) = *(_OWORD *)&qword_140010B80;
        *(_DWORD *)(a5 + 4 * v14 + 16) = *((_DWORD *)&qword_140010B80 + 4);
      }
    }
    v15 = *v7 + 1;
    if ( v15 < *v7 )
    {
LABEL_23:
      result = 3221225621LL;
      goto LABEL_24;
    }
    *v7 = v15;
LABEL_12:
    if ( !a4 )
    {
      result = sub_140A2BD78(a1, a2, v9, (__int64)&qword_14000DF78, &a7, 0LL, 0, v19);
      if ( (_DWORD)result != -1073741789 )
      {
        if ( (_DWORD)result )
        {
          if ( (_DWORD)result == -1073741772 )
            goto LABEL_24;
          return a6 < *v7 ? 0xC0000023 : 0;
        }
      }
    }
    if ( a5 )
    {
      v16 = *v7;
      if ( (unsigned int)v16 < a6 )
      {
        v17 = 5 * v16;
        *(_OWORD *)(a5 + 4 * v17) = *(_OWORD *)&qword_14000DF78;
        *(_DWORD *)(a5 + 4 * v17 + 16) = *((_DWORD *)&qword_14000DF78 + 4);
      }
    }
    v18 = *v7 + 1;
    if ( v18 >= *v7 )
    {
      *v7 = v18;
      return a6 < *v7 ? 0xC0000023 : 0;
    }
    goto LABEL_23;
  }
  if ( (_DWORD)result != -1073741772 )
    goto LABEL_12;
LABEL_24:
  *v7 = 0;
  return result;
}
