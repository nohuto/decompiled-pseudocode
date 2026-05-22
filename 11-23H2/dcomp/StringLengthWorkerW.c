/*
 * XREFs of StringLengthWorkerW @ 0x180022D20
 * Callers:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180021CB8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18002293C (-MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA-AV-$basic_string@GU-$char.c)
 *     ?StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180163540 (-StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  HRESULT result; // eax
  size_t v4; // r9

  result = 0;
  v4 = cchMax;
  if ( cchMax )
  {
    while ( *psz )
    {
      ++psz;
      if ( !--cchMax )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    result = -2147024809;
  }
  if ( pcchLength )
  {
    if ( result < 0 )
      *pcchLength = 0LL;
    else
      *pcchLength = v4 - cchMax;
  }
  return result;
}
