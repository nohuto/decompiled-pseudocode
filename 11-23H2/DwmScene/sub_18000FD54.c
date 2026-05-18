/*
 * XREFs of sub_18000FD54 @ 0x18000FD54
 * Callers:
 *     sub_18000D6E4 @ 0x18000D6E4 (sub_18000D6E4.c)
 *     sub_18000EE74 @ 0x18000EE74 (sub_18000EE74.c)
 *     sub_18000FC64 @ 0x18000FC64 (sub_18000FC64.c)
 * Callees:
 *     sub_18000D644 @ 0x18000D644 (sub_18000D644.c)
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 */

void __fastcall sub_18000FD54(void **a1, void *a2)
{
  void *v2; // rsi
  char v5; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]

  v2 = *a1;
  if ( *a1 )
  {
    v5 = 0;
    LastError = GetLastError();
    sub_18000D958(v2);
    sub_18000D644((__int64)&v5);
  }
  *a1 = a2;
}
