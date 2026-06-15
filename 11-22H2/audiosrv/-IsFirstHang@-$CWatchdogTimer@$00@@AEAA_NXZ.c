/*
 * XREFs of ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800D26F8
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800D28F4 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

bool __fastcall CWatchdogTimer<1>::IsFirstHang(__int64 a1)
{
  signed __int32 v1; // ebx
  _DWORD *v2; // rcx
  signed __int32 v3; // ebx
  __int64 v4; // rcx
  signed __int32 v6; // [rsp+30h] [rbp-48h] BYREF
  char v7[32]; // [rsp+38h] [rbp-40h] BYREF
  signed __int32 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v1 = _InterlockedExchangeAdd(&`CWatchdogTimer<1>::IsFirstHang'::`2'::hangsCaught, 1u);
  v2 = *(_DWORD **)(a1 + 8);
  v3 = v1 + 1;
  if ( *v2 > 5u && tlgKeywordOn((__int64)v2, 1LL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = v3;
    v9 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer(v4, byte_18018F310, 0LL, 0LL, 3, (__int64)v7);
  }
  return v3 == 1;
}
