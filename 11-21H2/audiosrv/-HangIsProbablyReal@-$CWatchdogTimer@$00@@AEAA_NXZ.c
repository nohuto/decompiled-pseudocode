/*
 * XREFs of ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C86D4
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800C8AF8 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?IsVirtualMachine@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C89BC (-IsVirtualMachine@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800C8E00 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 */

char __fastcall CWatchdogTimer<1>::HangIsProbablyReal(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 *v3; // rdx
  _BYTE v5[4]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+34h] [rbp-34h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-30h] BYREF

  if ( IsDebuggerPresent() )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)v2 <= 5u || (*(_BYTE *)(v2 + 16) & 1) == 0 || (*(_QWORD *)(v2 + 24) & 1LL) != *(_QWORD *)(v2 + 24) )
      return 0;
    v3 = (unsigned __int8 *)&unk_1801882D0;
    goto LABEL_18;
  }
  if ( (unsigned __int8)CWatchdogTimer<1>::IsVirtualMachine() )
  {
    v6 = 17;
    RtlGetDeviceFamilyInfoEnum(0LL, &v6, 0LL);
    v2 = *(_QWORD *)(a1 + 8);
    if ( v6 != 6 )
    {
      if ( *(_DWORD *)v2 <= 5u || (*(_BYTE *)(v2 + 16) & 1) == 0 || (*(_QWORD *)(v2 + 24) & 1LL) != *(_QWORD *)(v2 + 24) )
        return 0;
      v3 = (unsigned __int8 *)&unk_180188281;
LABEL_18:
      tlgWriteTransfer_EtwEventWriteTransfer(v2, v3, 0LL, 0LL, 2, (__int64)v7);
      return 0;
    }
    if ( *(_DWORD *)v2 > 5u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
      tlgWriteTransfer_EtwEventWriteTransfer(v2, byte_1801882A5, 0LL, 0LL, 2, (__int64)v7);
  }
  v5[0] = 0;
  if ( (int)CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(a1, v5) < 0 )
    return 0;
  if ( !v5[0] )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
    return 0;
  }
  return 1;
}
