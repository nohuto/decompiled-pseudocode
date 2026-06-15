/*
 * XREFs of ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C8820
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800C8AF8 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

bool __fastcall CWatchdogTimer<1>::IsFirstHang(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 v2; // rcx
  signed __int32 v3; // ebx
  signed __int32 v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[5]; // [rsp+38h] [rbp-40h] BYREF
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = _InterlockedExchangeAdd(&`CWatchdogTimer<1>::IsFirstHang'::`2'::hangsCaught, 1u);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = v1 + 1;
  if ( *(_DWORD *)v2 > 5u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    v5 = v3;
    v6[4] = &v5;
    v8 = 0;
    v7 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer(v2, byte_1801882FA, 0LL, 0LL, 3, (__int64)v6);
  }
  return v3 == 1;
}
