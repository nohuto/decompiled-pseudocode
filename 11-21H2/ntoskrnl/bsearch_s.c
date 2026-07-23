/*
 * XREFs of bsearch_s @ 0x1403E1950
 * Callers:
 *     sub_140294C30 @ 0x140294C30 (sub_140294C30.c)
 *     sub_14041ADA8 @ 0x14041ADA8 (sub_14041ADA8.c)
 *     sub_1405EEC28 @ 0x1405EEC28 (sub_1405EEC28.c)
 *     sub_1409BFF78 @ 0x1409BFF78 (sub_1409BFF78.c)
 *     SeQuerySecureBootPlatformManifest @ 0x1409CDBD0 (SeQuerySecureBootPlatformManifest.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_14042A590 @ 0x14042A590 (sub_14042A590.c)
 */

void *__cdecl bsearch_s(
        const void *Key,
        const void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(void *, const void *, const void *),
        void *Context)
{
  rsize_t v7; // rsi
  char *v8; // rdi
  char *v9; // rbx
  rsize_t v11; // r15
  bool v12; // zf
  char *v13; // r14
  int v14; // eax

  v7 = NumOfElements;
  v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v9 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    sub_14042A590(PtFuncCompare);
    while ( v9 <= v8 )
    {
      v11 = v7 >> 1;
      if ( !(v7 >> 1) )
      {
        if ( !v7 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(void *, const void *, char *))PtFuncCompare)(Context, Key, v9) )
          return 0LL;
        return v9;
      }
      v12 = (v7 & 1) == 0;
      v7 = v11 - 1;
      if ( !v12 )
        v7 = v11;
      v13 = &v9[SizeOfElements * v7];
      v14 = ((__int64 (__fastcall *)(void *, const void *, char *))PtFuncCompare)(Context, Key, v13);
      if ( !v14 )
        return &v9[SizeOfElements * v7];
      if ( v14 >= 0 )
      {
        v9 = &v13[SizeOfElements];
        v7 = v11;
      }
      else
      {
        v8 = &v13[-SizeOfElements];
      }
    }
  }
  else
  {
    _misaligned_access();
  }
  return 0LL;
}
