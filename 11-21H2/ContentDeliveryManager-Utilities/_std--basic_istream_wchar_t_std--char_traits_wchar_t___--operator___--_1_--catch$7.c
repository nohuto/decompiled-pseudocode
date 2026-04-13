/*
 * XREFs of _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::catch$7 @ 0x1800EF818
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 */

__int64 __fastcall std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  int v4; // edx

  v2 = *(_QWORD *)(a2 + 192);
  v3 = v2 + *(int *)(*(_QWORD *)v2 + 4LL);
  v4 = *(_DWORD *)(v3 + 16) | 4;
  if ( !*(_QWORD *)(v3 + 72) )
    LOBYTE(v4) = *(_BYTE *)(v3 + 16) | 4;
  std::ios_base::clear((std::ios_base *)(v2 + *(int *)(*(_QWORD *)v2 + 4LL)), v4, 1);
  return 0LL;
}
