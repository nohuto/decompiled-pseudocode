/*
 * XREFs of sub_140728F70 @ 0x140728F70
 * Callers:
 *     sub_140728DA0 @ 0x140728DA0 (sub_140728DA0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407288D0 @ 0x1407288D0 (sub_1407288D0.c)
 *     sub_14072A810 @ 0x14072A810 (sub_14072A810.c)
 */

__int64 sub_140728F70(
        ACCESS_MASK *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        void **a9,
        unsigned int a10,
        unsigned int *a11,
        unsigned __int16 *a12,
        unsigned int *a13,
        ...)
{
  unsigned __int16 *v13; // r9
  unsigned int v14; // edi
  char v15; // r13
  unsigned int v17; // r15d
  unsigned int v18; // r10d
  char v19; // r12
  __int64 v20; // rsi
  unsigned int v21; // ecx
  unsigned __int16 *v22; // rbx
  unsigned int v23; // ebx
  __int64 result; // rax
  char v25; // al
  unsigned int v26; // eax
  unsigned __int16 *v27; // rcx
  char v28; // al
  char v29; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v30; // [rsp+84h] [rbp-15h] BYREF
  unsigned __int16 *v31; // [rsp+90h] [rbp-9h]
  __int64 v32; // [rsp+E8h] [rbp+4Fh] BYREF
  char v33; // [rsp+F0h] [rbp+57h]
  __int64 v34; // [rsp+F8h] [rbp+5Fh]
  unsigned __int16 *v35; // [rsp+148h] [rbp+AFh] BYREF
  va_list va; // [rsp+148h] [rbp+AFh]
  va_list va1; // [rsp+150h] [rbp+B7h] BYREF

  va_start(va1, a13);
  va_start(va, a13);
  v35 = va_arg(va1, unsigned __int16 *);
  v34 = a4;
  v33 = a3;
  v13 = v35;
  v14 = 0;
  v15 = 0;
  v31 = 0LL;
  v30 = 0;
  v29 = 0;
  *(_BYTE *)v35 = 0;
  v17 = 0;
  LOBYTE(v32) = 0;
  v18 = 0;
  v19 = 0;
  if ( a2 )
  {
    v25 = *((_BYTE *)Src + 1);
    if ( (v25 & 4) == 0 && ((v25 & 1) != 0 || (v25 & 2) != 0) )
      v19 = 1;
  }
  v20 = (__int64)a12;
  v21 = 0;
  v35 = 0LL;
  v22 = a12 + 4;
  if ( a12[2] )
  {
    while ( v22 < (unsigned __int16 *)((char *)a12 + a12[1]) )
    {
      ++v21;
      v22 = (unsigned __int16 *)((char *)v22 + v22[1]);
      if ( v21 >= a12[2] )
        goto LABEL_6;
    }
    return 3221225597LL;
  }
LABEL_6:
  if ( v22 > (unsigned __int16 *)((char *)a12 + a12[1]) )
    return 3221225597LL;
  v35 = v22;
  if ( !v22 )
    return 3221225597LL;
  if ( a2 )
  {
    if ( (*((_BYTE *)Src + 1) & 2) == 0 )
      goto LABEL_10;
  }
  else if ( (*((_BYTE *)Src + 1) & 1) == 0 )
  {
LABEL_10:
    v23 = 0;
    goto LABEL_11;
  }
  v31 = v22;
  if ( !sub_1407288D0(
          Src,
          v33,
          v19,
          v34,
          a5,
          a6,
          a7,
          GenericMapping,
          a9,
          a10,
          (void **)va,
          &v30,
          (__int64)a12,
          v13,
          &v29,
          &v32) )
    return 3221225597LL;
  v18 = v30;
  if ( !(_BYTE)v32 && v30 )
  {
    if ( (unsigned __int8)sub_14072A810(v20, v22) )
    {
      --*(_WORD *)(v20 + 4);
      v18 = 0;
      v15 = v29;
      v17 = 0;
      v35 = v22;
      v23 = v30;
      v30 = 0;
      goto LABEL_11;
    }
    v18 = v30;
  }
  v15 = v29;
  v23 = 0;
  v17 = v18;
LABEL_11:
  if ( v19 )
  {
    if ( v18 && !v15 )
    {
      if ( !(_BYTE)v32 )
      {
        v27 = v31;
        v28 = *((_BYTE *)v31 + 1) | *((_BYTE *)Src + 1) & 3;
        *((_BYTE *)v31 + 1) = v28;
        if ( v33 )
          *((_BYTE *)v27 + 1) = v28 | 0x10;
      }
      goto LABEL_12;
    }
    if ( *(_BYTE *)Src > 8u || Src[1] )
    {
      v17 += *((unsigned __int16 *)Src + 1);
      if ( v17 <= 0xFFFF )
      {
        if ( *((unsigned __int16 *)Src + 1) > v20 + *(unsigned __int16 *)(v20 + 2) - (_QWORD)v35 )
        {
          LOBYTE(v32) = 1;
        }
        else if ( !(_BYTE)v32 )
        {
          memmove(v35, Src, *((unsigned __int16 *)Src + 1));
          *((_BYTE *)v35 + 1) |= 8u;
          ++*(_WORD *)(v20 + 4);
          if ( v33 )
          {
            *((_BYTE *)v35 + 1) |= 0x10u;
            if ( (unsigned __int8)sub_14072A810(v20, v35) )
            {
              --*(_WORD *)(v20 + 4);
              v26 = *((unsigned __int16 *)Src + 1);
              if ( v23 <= v26 )
                v23 = *((unsigned __int16 *)Src + 1);
              v17 -= v26;
            }
          }
        }
        goto LABEL_12;
      }
      return 3221225597LL;
    }
  }
LABEL_12:
  if ( (_BYTE)v32 )
    v14 = -1073741789;
  *a11 = v17;
  result = v14;
  *a13 = v23;
  return result;
}
