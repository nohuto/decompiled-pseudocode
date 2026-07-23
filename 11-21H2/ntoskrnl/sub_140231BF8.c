/*
 * XREFs of sub_140231BF8 @ 0x140231BF8
 * Callers:
 *     sub_1403005E0 @ 0x1403005E0 (sub_1403005E0.c)
 * Callees:
 *     sub_140231E7C @ 0x140231E7C (sub_140231E7C.c)
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140231BF8(_DWORD *a1, __int64 a2, unsigned int a3, _DWORD *a4, size_t Size)
{
  size_t v5; // r12
  unsigned int v6; // r15d
  _DWORD *v10; // r13
  unsigned __int64 v11; // rbp
  _DWORD *v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // r9
  char *v15; // rdi
  __int64 result; // rax
  _DWORD *i; // r14
  __int64 v18; // r13
  char *v19; // rdi
  int v20; // ecx
  __int64 v21; // rcx
  char *v22; // rdi
  _QWORD *v23; // r13
  _QWORD *v24; // r14
  _DWORD *j; // r15
  char *v26; // rdi
  __int64 v27; // rcx
  char *v28; // rdi
  __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v5 = Size;
  v6 = 0;
  v10 = a1;
  if ( a4 && Size && (v11 = (unsigned __int64)a4 + Size, (_DWORD *)((char *)a4 + Size) >= a4) )
  {
    memset(a4, 0, Size);
    v12 = a4 + 4;
    if ( (unsigned __int64)(a4 + 4) > v11 )
    {
      result = 3221225507LL;
    }
    else
    {
      v13 = a3;
      if ( !a2 )
        v13 = *v10;
      v32 = 0LL;
      v14 = 10LL * v13;
      if ( is_mul_ok(0x28uLL, v13) )
      {
        v15 = (char *)&v12[v14];
        result = 0LL;
        if ( (unsigned __int64)&v12[v14] <= v11 )
        {
          *a4 = 1;
          a4[1] = v13;
          *((_QWORD *)a4 + 1) = v12;
          if ( a2 )
          {
            if ( !a3 )
              return result;
            for ( i = a4 + 10; ; i += 10 )
            {
              v18 = sub_1403008B0(v10, a2 + 16LL * v6);
              if ( !v18 )
                break;
              *((_WORD *)i - 4) = *(_WORD *)(v18 + 48);
              v19 = (char *)((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
              v20 = *(_DWORD *)(v18 + 60);
              *((_WORD *)i - 3) = 0;
              *i = v20;
              *(i - 1) = *(_DWORD *)(v18 + 52);
              v21 = *(unsigned __int16 *)(v18 + 32);
              v32 = v21;
              if ( (unsigned __int64)&v19[v21] > v11 )
                goto LABEL_24;
              *((_WORD *)i - 12) = v21;
              *((_WORD *)i - 11) = v21;
              *((_QWORD *)i - 2) = v19;
              memmove(v19, *(const void **)(v18 + 40), (unsigned int)v21);
              v22 = &v19[v32];
              result = sub_140231E7C(v18, (int)i - 24, (_DWORD)v22, (int)v11 - (int)v22, (__int64)&v32);
              if ( (int)result < 0 )
                goto LABEL_28;
              v15 = &v22[v32];
              ++v6;
              v10 = a1;
              if ( v6 >= a3 )
                return result;
            }
            result = 3221226021LL;
            goto LABEL_28;
          }
          v23 = v10 + 2;
          v24 = (_QWORD *)*v23;
          if ( (_QWORD *)*v23 == v23 )
            return result;
          for ( j = a4 + 10; ; j += 10 )
          {
            *((_WORD *)j - 4) = *((_WORD *)v24 + 24);
            *j = *((_DWORD *)v24 + 15);
            *((_WORD *)j - 3) = 0;
            v26 = (char *)((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
            *(j - 1) = *((_DWORD *)v24 + 13);
            v27 = *((unsigned __int16 *)v24 + 16);
            v32 = v27;
            if ( (unsigned __int64)&v26[v27] > v11 )
              break;
            *((_WORD *)j - 12) = v27;
            *((_WORD *)j - 11) = v27;
            *((_QWORD *)j - 2) = v26;
            memmove(v26, (const void *)v24[5], (unsigned int)v27);
            v28 = &v26[v32];
            result = sub_140231E7C((_DWORD)v24, (int)j - 24, (_DWORD)v28, (int)v11 - (int)v28, (__int64)&v32);
            if ( (int)result < 0 )
              goto LABEL_28;
            v15 = &v28[v32];
            v24 = (_QWORD *)*v24;
            if ( v24 == v23 )
              return result;
          }
        }
LABEL_24:
        result = 2147483653LL;
      }
      else
      {
        result = 3221225621LL;
      }
    }
  }
  else
  {
    result = 3221225485LL;
  }
LABEL_28:
  if ( v5 >= 0x10 )
    *(_OWORD *)a4 = 0LL;
  return result;
}
