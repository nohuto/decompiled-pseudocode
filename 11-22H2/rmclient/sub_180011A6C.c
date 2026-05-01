/*
 * XREFs of sub_180011A6C @ 0x180011A6C
 * Callers:
 *     sub_18000BF7C @ 0x18000BF7C (sub_18000BF7C.c)
 *     sub_18000C00C @ 0x18000C00C (sub_18000C00C.c)
 *     sub_18000CF64 @ 0x18000CF64 (sub_18000CF64.c)
 *     sub_18000D00C @ 0x18000D00C (sub_18000D00C.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 * Callees:
 *     sub_18000D168 @ 0x18000D168 (sub_18000D168.c)
 *     sub_18000D884 @ 0x18000D884 (sub_18000D884.c)
 */

void __fastcall sub_180011A6C(struct _TP_TIMER **a1, struct _TP_TIMER *a2)
{
  struct _TP_TIMER *v2; // rsi
  char v5; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]

  v2 = *a1;
  if ( *a1 )
  {
    v5 = 0;
    LastError = GetLastError();
    sub_18000D884(v2);
    sub_18000D168((__int64)&v5);
  }
  *a1 = a2;
}
