/*
 * XREFs of ?_Unlock@?$basic_filebuf@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18064B870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::basic_filebuf<unsigned short>::_Unlock(__int64 a1)
{
  FILE *v1; // rcx

  v1 = *(FILE **)(a1 + 128);
  if ( v1 )
    _unlock_file(v1);
}
