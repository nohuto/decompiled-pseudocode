/*
 * XREFs of sub_180011B2C @ 0x180011B2C
 * Callers:
 *     sub_1800101BC @ 0x1800101BC (sub_1800101BC.c)
 *     sub_180010248 @ 0x180010248 (sub_180010248.c)
 * Callees:
 *     sub_18000D168 @ 0x18000D168 (sub_18000D168.c)
 *     sub_1800102E4 @ 0x1800102E4 (sub_1800102E4.c)
 */

void __fastcall sub_180011B2C(void **a1, void *a2)
{
  void *v2; // rsi
  char v5; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]

  v2 = *a1;
  if ( *a1 )
  {
    v5 = 0;
    LastError = GetLastError();
    sub_1800102E4(v2);
    sub_18000D168((__int64)&v5);
  }
  *a1 = a2;
}
