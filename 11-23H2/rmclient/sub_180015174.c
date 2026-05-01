/*
 * XREFs of sub_180015174 @ 0x180015174
 * Callers:
 *     sub_180015674 @ 0x180015674 (sub_180015674.c)
 * Callees:
 *     sub_18000D168 @ 0x18000D168 (sub_18000D168.c)
 *     sub_18000D8F8 @ 0x18000D8F8 (sub_18000D8F8.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 */

void __fastcall sub_180015174(struct _TP_TIMER **a1, _BYTE *a2, void *a3)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  char v7; // [rsp+38h] [rbp+10h] BYREF
  DWORD LastError; // [rsp+3Ch] [rbp+14h]

  if ( !*a2 )
  {
    if ( !*a1 )
    {
      v7 = 0;
      LastError = GetLastError();
      ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)sub_180015150, a3, 0LL);
      sub_180011A6C(a1, ThreadpoolTimer);
      sub_18000D168((__int64)&v7);
    }
    sub_18000D8F8(a1, a2, 300000LL);
  }
}
