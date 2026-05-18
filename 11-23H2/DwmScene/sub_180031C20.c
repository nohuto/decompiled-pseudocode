/*
 * XREFs of sub_180031C20 @ 0x180031C20
 * Callers:
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 *     sub_1800E570A @ 0x1800E570A (sub_1800E570A.c)
 *     sub_1800E5A0D @ 0x1800E5A0D (sub_1800E5A0D.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 */

__int64 __fastcall sub_180031C20(void ***a1)
{
  void **v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_1800318EC(v1 + 2);
    return sub_18000B988(v1);
  }
  return result;
}
