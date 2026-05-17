/*
 * XREFs of LdrpResCompareResourceNames @ 0x18000746C
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x180006414 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     wcsncmp @ 0x1800952B0 (wcsncmp.c)
 *     LdrpResReadFile @ 0x1800F0870 (LdrpResReadFile.c)
 */

__int64 __fastcall LdrpResCompareResourceNames(
        __int64 a1,
        void *a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int16 a7,
        int *a8)
{
  void *v8; // rax
  int v11; // edx
  int v12; // r12d
  __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 result; // rax
  char *v16; // rsi
  unsigned __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+20h] [rbp-278h]
  __int64 v22; // [rsp+30h] [rbp-268h]
  char v23; // [rsp+40h] [rbp-258h] BYREF
  int v24; // [rsp+2D0h] [rbp+38h]

  v8 = a2;
  v22 = a3;
  v11 = a7 & 0x8800;
  v12 = a7 & 0x1000;
  v24 = v11;
  if ( !a5 || !a6 )
    return 3221225485LL;
  v13 = *a6;
  v14 = 0;
  if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (int)v13 >= 0 )
    {
      if ( !v12 || (v13 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        *a8 = (_DWORD)a4 - v13;
        return v14;
      }
      return (unsigned int)-1073741701;
    }
    if ( v12 && (v13 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
LABEL_34:
    *a8 = 1;
    return v14;
  }
  if ( (int)v13 >= 0 )
  {
    *a8 = -1;
    return v14;
  }
  LODWORD(v13) = v13 & 0x7FFFFFFF;
  v16 = (char *)(v13 + a5);
  if ( v12 )
  {
    if ( (unsigned __int64)v16 < a5 )
      return (unsigned int)-1073741701;
    if ( v11 == 34816 )
      goto LABEL_30;
    if ( (unsigned __int64)(v16 + 4) < a5 || (unsigned __int64)(v16 + 4) > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
      return (unsigned int)-1073741701;
    v8 = a2;
  }
  if ( v11 != 34816 )
  {
LABEL_18:
    if ( v12 )
    {
      if ( v11 != 34816 )
      {
        v17 = a5 + v13 + 2 * (*(unsigned __int16 *)v16 + 2LL);
        if ( v17 < a5 || v17 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
          return (unsigned int)-1073741701;
      }
    }
    if ( ((unsigned __int64)(v16 + 2) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
    v18 = wcsncmp(a4, (const wchar_t *)v16 + 1, *(unsigned __int16 *)v16);
    if ( v18 )
      goto LABEL_27;
    v19 = -1LL;
    do
      ++v19;
    while ( a4[v19] );
    if ( v19 == *(unsigned __int16 *)v16 )
    {
LABEL_27:
      *a8 = v18;
      return v14;
    }
    goto LABEL_34;
  }
LABEL_30:
  result = LdrpResReadFile(v8);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)v20 + 3 > 0x104 )
      return (unsigned int)-1073741701;
    result = LdrpResReadFile(a2);
    v14 = result;
    if ( (int)result >= 0 )
    {
      v11 = v24;
      v16 = &v23;
      a3 = v22;
      goto LABEL_18;
    }
  }
  return result;
}
