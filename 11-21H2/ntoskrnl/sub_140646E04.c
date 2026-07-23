/*
 * XREFs of sub_140646E04 @ 0x140646E04
 * Callers:
 *     sub_140389D88 @ 0x140389D88 (sub_140389D88.c)
 * Callees:
 *     sub_14037270C @ 0x14037270C (sub_14037270C.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 */

__int64 __fastcall sub_140646E04(const void *a1, _WORD *a2)
{
  _BYTE *v3; // rax
  __int64 v4; // r11
  wchar_t *v5; // r8
  int v6; // r11d

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = bsearch(a1, &off_1400036D0, 0x1B4uLL, 8uLL, (int (__cdecl *)(const void *, const void *))sub_1403CB680);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  v5 = (&off_140004470)[2 * dword_14000447C[4 * word_1400257C0[(v3 - (_BYTE *)&off_1400036D0) >> 3]]];
  do
    ++v4;
  while ( v5[v4] );
  if ( (int)sub_14037270C(a2, 85LL, (__int64)v5, v4 + 1) >= 0 )
    return (unsigned int)(v6 + 1);
  else
    return 0LL;
}
