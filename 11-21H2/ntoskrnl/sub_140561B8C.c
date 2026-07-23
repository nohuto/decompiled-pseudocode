/*
 * XREFs of sub_140561B8C @ 0x140561B8C
 * Callers:
 *     sub_1407449E0 @ 0x1407449E0 (sub_1407449E0.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 */

bool __fastcall sub_140561B8C(__int64 a1, const wchar_t *a2)
{
  size_t v4; // rsi
  char v5; // bl
  const wchar_t *v6; // rdi
  size_t v7; // rsi

  v4 = *(_WORD *)(a1 + 40) >> 1;
  v5 = 0;
  if ( !wcsnicmp(a2, *(const wchar_t **)(a1 + 48), v4) && a2[v4] == 58 )
  {
    v6 = &a2[v4];
    v7 = *(_WORD *)(a1 + 72) >> 1;
    if ( !wcsnicmp(v6 + 1, *(const wchar_t **)(a1 + 80), v7) )
      return v6[v7 + 1] == 44;
  }
  return v5;
}
