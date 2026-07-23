/*
 * XREFs of bsearch @ 0x1403E1840
 * Callers:
 *     sub_140372644 @ 0x140372644 (sub_140372644.c)
 *     sub_1403C68CC @ 0x1403C68CC (sub_1403C68CC.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E7300 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x1405E7780 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x1405E79C0 (RtlRemovePropertyStore.c)
 *     sub_140646E04 @ 0x140646E04 (sub_140646E04.c)
 *     sub_140797B54 @ 0x140797B54 (sub_140797B54.c)
 *     sub_14082DD70 @ 0x14082DD70 (sub_14082DD70.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_14042A590 @ 0x14042A590 (sub_14042A590.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  size_t v6; // rsi
  char *v7; // rdi
  char *v8; // rbx
  size_t v10; // rbp
  bool v11; // zf
  char *v12; // r14
  int v13; // eax

  v6 = NumOfElements;
  v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v8 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    sub_14042A590(PtFuncCompare);
    while ( v8 <= v7 )
    {
      v10 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v8) )
          return 0LL;
        return v8;
      }
      v11 = (v6 & 1) == 0;
      v6 = v10 - 1;
      if ( !v11 )
        v6 = v10;
      v12 = &v8[SizeOfElements * v6];
      v13 = ((__int64 (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v12);
      if ( !v13 )
        return &v8[SizeOfElements * v6];
      if ( v13 >= 0 )
      {
        v8 = &v12[SizeOfElements];
        v6 = v10;
      }
      else
      {
        v7 = &v12[-SizeOfElements];
      }
    }
  }
  else
  {
    _misaligned_access();
  }
  return 0LL;
}
