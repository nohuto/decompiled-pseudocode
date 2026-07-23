/*
 * XREFs of sub_1407875CC @ 0x1407875CC
 * Callers:
 *     sub_14076A7E8 @ 0x14076A7E8 (sub_14076A7E8.c)
 *     sub_140787558 @ 0x140787558 (sub_140787558.c)
 * Callees:
 *     sub_14077ED0C @ 0x14077ED0C (sub_14077ED0C.c)
 */

int __fastcall sub_1407875CC(__int64 a1, const WCHAR *a2, WCHAR *a3)
{
  int result; // eax

  result = sub_14077ED0C(a1, a2, 1, a3, 0LL, 0);
  if ( !result )
    return -1073741595;
  if ( result == -1073741789 )
  {
    a3[38] = 0;
    return 0;
  }
  return result;
}
