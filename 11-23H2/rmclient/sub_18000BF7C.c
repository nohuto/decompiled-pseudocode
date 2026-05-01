/*
 * XREFs of sub_18000BF7C @ 0x18000BF7C
 * Callers:
 *     sub_18000FAEC @ 0x18000FAEC (sub_18000FAEC.c)
 * Callees:
 *     sub_18000D168 @ 0x18000D168 (sub_18000D168.c)
 *     sub_18000D8F8 @ 0x18000D8F8 (sub_18000D8F8.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 */

__int64 __fastcall sub_18000BF7C(_QWORD *a1, _BYTE *a2, void *a3)
{
  __int64 result; // rax
  PTP_TIMER ThreadpoolTimer; // rax
  char v8; // [rsp+38h] [rbp+10h] BYREF
  DWORD LastError; // [rsp+3Ch] [rbp+14h]

  result = 0LL;
  if ( !*a2 )
  {
    if ( !*a1 )
    {
      v8 = 0;
      LastError = GetLastError();
      ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)pfnti, a3, 0LL);
      sub_180011A6C(a1, ThreadpoolTimer);
      sub_18000D168(&v8);
    }
    return sub_18000D8F8(a1, a2, 300000LL);
  }
  return result;
}
