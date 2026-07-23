/*
 * XREFs of sub_140A12C84 @ 0x140A12C84
 * Callers:
 *     sub_14084328C @ 0x14084328C (sub_14084328C.c)
 *     sub_1408432E0 @ 0x1408432E0 (sub_1408432E0.c)
 *     sub_140843334 @ 0x140843334 (sub_140843334.c)
 *     sub_140843388 @ 0x140843388 (sub_140843388.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 */

__int64 __fastcall sub_140A12C84(__int64 a1, const wchar_t *a2, unsigned int a3, __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // eax
  const wchar_t *v8; // rax

  v6 = 0;
  v7 = sub_140792CCC(a1, a3, a4);
  if ( v7 )
  {
    v8 = (const wchar_t *)sub_140842A24(a1, v7);
    if ( v8 && a2 )
      return wcsicmp(v8, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}
