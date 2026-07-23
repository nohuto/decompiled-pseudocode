/*
 * XREFs of sub_1402D1840 @ 0x1402D1840
 * Callers:
 *     sub_1406DF254 @ 0x1406DF254 (sub_1406DF254.c)
 *     sub_1406DF440 @ 0x1406DF440 (sub_1406DF440.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_1407468A0 @ 0x1407468A0 (sub_1407468A0.c)
 *     sub_140746B5C @ 0x140746B5C (sub_140746B5C.c)
 *     sub_1409439F8 @ 0x1409439F8 (sub_1409439F8.c)
 *     sub_140944218 @ 0x140944218 (sub_140944218.c)
 * Callees:
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14055F4A4 @ 0x14055F4A4 (sub_14055F4A4.c)
 */

__int64 sub_1402D1840(__int64 a1, __int64 a2, int a3, const wchar_t *a4, ...)
{
  const wchar_t *v5; // r10
  int v6; // r8d
  unsigned __int16 v8; // cx
  unsigned __int64 v9; // rax
  wchar_t *v10; // r15
  size_t v11; // rsi
  size_t v12; // r14
  size_t v13; // rdi
  int v14; // ebx
  int v15; // eax
  wchar_t *v16; // rax
  const WCHAR *v18; // rax
  size_t v19; // [rsp+40h] [rbp-28h] BYREF
  size_t v20; // [rsp+48h] [rbp-20h] BYREF
  wchar_t *v21; // [rsp+50h] [rbp-18h] BYREF
  va_list Args; // [rsp+D0h] [rbp+68h] BYREF

  va_start(Args, a4);
  v5 = a4;
  v6 = 0;
  if ( a1 || (a3 & 0x100) == 0 )
  {
    v8 = *(_WORD *)a1;
    if ( (v8 & 1) != 0 )
      return (unsigned int)-1073741811;
    v9 = *(unsigned __int16 *)(a1 + 2);
    if ( (v9 & 1) != 0
      || v8 > (unsigned __int16)v9
      || (_WORD)v9 == 0xFFFF
      || (v10 = *(wchar_t **)(a1 + 8)) == 0LL && (v8 || (_WORD)v9) )
    {
      return (unsigned int)-1073741811;
    }
    v11 = v9 >> 1;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
  }
  v21 = v10;
  LOWORD(v12) = v11;
  v20 = v11;
  LOWORD(v13) = 0;
  v19 = 0LL;
  if ( (a3 & 0x100) != 0 )
  {
    v18 = &word_1404370A0;
    if ( a4 )
      v18 = a4;
    v5 = v18;
  }
  v14 = 0;
  if ( (a3 & 0xFFFFE000) != 0 )
  {
    v14 = -1073741811;
    goto LABEL_33;
  }
  if ( v11 )
  {
    v21 = 0LL;
    v15 = vsnwprintf(v10, v11, v5, Args);
    if ( v15 < 0 || (v13 = v15, v15 > v11) )
    {
      v13 = v11;
      v19 = v11;
      v14 = -2147483643;
    }
    else
    {
      v19 = v15;
    }
    v12 = v11 - v13;
    v21 = &v10[v13];
    v20 = v11 - v13;
    if ( v14 >= 0 )
    {
      if ( (a3 & 0x200) != 0 && v12 )
        memset(&v10[v13], (unsigned __int8)a3, 2 * v12);
      goto LABEL_16;
    }
LABEL_33:
    if ( (a3 & 0x1C00) != 0 && v11 )
    {
      sub_14055F4A4((_DWORD)v10, v11, v6, (unsigned int)&v19, (__int64)&v21, (__int64)&v20, a3);
      LOWORD(v12) = v20;
      LOWORD(v13) = v19;
    }
    goto LABEL_16;
  }
  if ( *v5 )
  {
    v14 = v10 != 0LL ? -2147483643 : -1073741811;
    goto LABEL_33;
  }
LABEL_16:
  if ( a1 )
    *(_WORD *)a1 = 2 * v13;
  if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
  {
    if ( a2 )
    {
      v16 = v21;
      *(_WORD *)(a2 + 2) = 2 * v12;
      *(_QWORD *)(a2 + 8) = v16;
      *(_WORD *)a2 = 0;
    }
  }
  return (unsigned int)v14;
}
