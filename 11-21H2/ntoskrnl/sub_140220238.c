/*
 * XREFs of sub_140220238 @ 0x140220238
 * Callers:
 *     sub_1402012BC @ 0x1402012BC (sub_1402012BC.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     sub_140804350 @ 0x140804350 (sub_140804350.c)
 * Callees:
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 */

char __fastcall sub_140220238(__int64 a1, unsigned int *a2)
{
  char v2; // bl
  bool v3; // zf
  int v4; // r8d
  wchar_t *EndPtr; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_WORD *)a1 == 48;
  EndPtr = 0LL;
  if ( !v3 || ((*(_WORD *)(a1 + 2) - 88) & 0xFFDF) != 0 )
  {
    v4 = 10;
  }
  else
  {
    a1 += 4LL;
    v4 = 16;
  }
  *a2 = wcstoul((const wchar_t *)a1, &EndPtr, v4);
  if ( EndPtr && !*EndPtr )
    return 1;
  return v2;
}
