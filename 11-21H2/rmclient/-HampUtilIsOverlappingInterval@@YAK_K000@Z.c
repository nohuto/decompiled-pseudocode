/*
 * XREFs of ?HampUtilIsOverlappingInterval@@YAK_K000@Z @ 0x18001E740
 * Callers:
 *     ?HampUsageInfoMergeVectors@@YA?AU_HAM_APPLICATION_USAGE_INFO@@PEAU1@0@Z @ 0x18001E6A4 (-HampUsageInfoMergeVectors@@YA-AU_HAM_APPLICATION_USAGE_INFO@@PEAU1@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilIsOverlappingInterval(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  if ( a1 >= a2 )
  {
    if ( a1 <= a2 || a3 >= a4 )
      return 1LL;
    return a1 <= a4;
  }
  if ( a3 >= a4 )
  {
    if ( a3 <= a4 )
      return 1LL;
    return a3 <= a2;
  }
  return a1 <= a4 && a2 >= a3;
}
