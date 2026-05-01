/*
 * XREFs of AslPathWildcardFindClose @ 0x18009DC38
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x180095980 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     AslpPathWildcardFreeFindContext @ 0x18009F3EC (AslpPathWildcardFreeFindContext.c)
 */

void __fastcall AslPathWildcardFindClose(__int64 *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *a1 )
  {
    if ( *a1 == -1 )
    {
      *a1 = 0LL;
    }
    else
    {
      v2 = *a1;
      AslpPathWildcardFreeFindContext(&v2);
      *a1 = 0LL;
    }
  }
}
