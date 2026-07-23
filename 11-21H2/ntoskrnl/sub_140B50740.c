/*
 * XREFs of sub_140B50740 @ 0x140B50740
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 */

__int64 __fastcall sub_140B50740(const wchar_t *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  *a4 = 0;
  if ( !wcsicmp(a1, L"EventLog") )
    *a4 = 1;
  return 0LL;
}
