/*
 * XREFs of bsearch @ 0x180096740
 * Callers:
 *     RtlpFindUnicodeStringInSection @ 0x180045FD0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x180046540 (RtlpLocateActivationContextSection.c)
 *     RtlpFindGuidInSection @ 0x180047CB0 (RtlpFindGuidInSection.c)
 *     RtlSetProtectedPolicy @ 0x180087700 (RtlSetProtectedPolicy.c)
 *     RtlQueryProtectedPolicy @ 0x180087FB0 (RtlQueryProtectedPolicy.c)
 *     RtlCompareExchangePropertyStore @ 0x180101130 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x180101420 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180101590 (RtlRemovePropertyStore.c)
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     _guard_check_icall @ 0x18009A30C (_guard_check_icall.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
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
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    while ( v8 <= v7 )
    {
      v10 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))CompareFunction)(Key, v8) )
          return 0LL;
        return v8;
      }
      v11 = (v6 & 1) == 0;
      v6 = v10 - 1;
      if ( !v11 )
        v6 = v10;
      v12 = &v8[SizeOfElements * v6];
      v13 = ((__int64 (__fastcall *)(const void *, char *))CompareFunction)(Key, v12);
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
    invalid_parameter();
  }
  return 0LL;
}
