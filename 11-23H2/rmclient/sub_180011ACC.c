/*
 * XREFs of sub_180011ACC @ 0x180011ACC
 * Callers:
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 *     sub_18000D8D0 @ 0x18000D8D0 (sub_18000D8D0.c)
 *     sub_180011890 @ 0x180011890 (sub_180011890.c)
 * Callees:
 *     sub_18000D168 @ 0x18000D168 (sub_18000D168.c)
 *     sub_18000D5F8 @ 0x18000D5F8 (sub_18000D5F8.c)
 */

void __fastcall sub_180011ACC(void **a1, void *a2)
{
  void *v2; // rsi
  char v5; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]

  v2 = *a1;
  if ( *a1 )
  {
    v5 = 0;
    LastError = GetLastError();
    sub_18000D5F8(v2);
    sub_18000D168((__int64)&v5);
  }
  *a1 = a2;
}
