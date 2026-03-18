/*
 * XREFs of bsearch @ 0x1403D9E00
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x140371A5C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14038D264 (DownLevelLanguageNameToLangID.c)
 *     RtlCompareExchangePropertyStore @ 0x1405AA4B0 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x1405AA930 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x1405AAB80 (RtlRemovePropertyStore.c)
 *     DownLevelGetParentLanguageName @ 0x1406145F0 (DownLevelGetParentLanguageName.c)
 *     EtwpIsGuidAllowed @ 0x1406C040C (EtwpIsGuidAllowed.c)
 *     sub_14080F79C @ 0x14080F79C (sub_14080F79C.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E3C0 (xHalTimerWatchdogStop.c)
 *     _guard_check_icall @ 0x140429BD0 (_guard_check_icall.c)
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
    xHalTimerWatchdogStop();
  }
  return 0LL;
}
