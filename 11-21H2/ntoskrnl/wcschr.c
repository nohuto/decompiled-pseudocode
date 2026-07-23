/*
 * XREFs of wcschr @ 0x1403E32C0
 * Callers:
 *     sub_1402012BC @ 0x1402012BC (sub_1402012BC.c)
 *     sub_1405FACB4 @ 0x1405FACB4 (sub_1405FACB4.c)
 *     sub_1406C4594 @ 0x1406C4594 (sub_1406C4594.c)
 *     sub_1406DBB10 @ 0x1406DBB10 (sub_1406DBB10.c)
 *     sub_1406DCD40 @ 0x1406DCD40 (sub_1406DCD40.c)
 *     sub_1406E1D34 @ 0x1406E1D34 (sub_1406E1D34.c)
 *     sub_1407449E0 @ 0x1407449E0 (sub_1407449E0.c)
 *     sub_1407455A8 @ 0x1407455A8 (sub_1407455A8.c)
 *     sub_1407473E8 @ 0x1407473E8 (sub_1407473E8.c)
 *     sub_140767130 @ 0x140767130 (sub_140767130.c)
 *     sub_1407697FC @ 0x1407697FC (sub_1407697FC.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_140772B6C @ 0x140772B6C (sub_140772B6C.c)
 *     sub_1407741A4 @ 0x1407741A4 (sub_1407741A4.c)
 *     sub_14077CF10 @ 0x14077CF10 (sub_14077CF10.c)
 *     sub_14077ED0C @ 0x14077ED0C (sub_14077ED0C.c)
 *     sub_140784454 @ 0x140784454 (sub_140784454.c)
 *     sub_140785234 @ 0x140785234 (sub_140785234.c)
 *     sub_1407FC710 @ 0x1407FC710 (sub_1407FC710.c)
 *     sub_14080397C @ 0x14080397C (sub_14080397C.c)
 *     sub_140805024 @ 0x140805024 (sub_140805024.c)
 *     sub_14082E2BC @ 0x14082E2BC (sub_14082E2BC.c)
 *     sub_14082ED84 @ 0x14082ED84 (sub_14082ED84.c)
 *     sub_14083DA50 @ 0x14083DA50 (sub_14083DA50.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140843D74 @ 0x140843D74 (sub_140843D74.c)
 *     sub_140943248 @ 0x140943248 (sub_140943248.c)
 *     sub_14094E74C @ 0x14094E74C (sub_14094E74C.c)
 *     sub_1409F21D0 @ 0x1409F21D0 (sub_1409F21D0.c)
 *     sub_140A10AD0 @ 0x140A10AD0 (sub_140A10AD0.c)
 *     sub_140A15610 @ 0x140A15610 (sub_140A15610.c)
 *     sub_140A1D75C @ 0x140A1D75C (sub_140A1D75C.c)
 *     sub_140A1DB40 @ 0x140A1DB40 (sub_140A1DB40.c)
 *     sub_140A295FC @ 0x140A295FC (sub_140A295FC.c)
 *     sub_140A2DB88 @ 0x140A2DB88 (sub_140A2DB88.c)
 *     sub_140A2F5D0 @ 0x140A2F5D0 (sub_140A2F5D0.c)
 *     sub_140A3037C @ 0x140A3037C (sub_140A3037C.c)
 *     sub_140A303F4 @ 0x140A303F4 (sub_140A303F4.c)
 *     sub_140A30458 @ 0x140A30458 (sub_140A30458.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
