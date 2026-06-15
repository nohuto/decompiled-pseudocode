/*
 * XREFs of ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800D2570
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800D28F4 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?IsVirtualMachine@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800D2794 (-IsVirtualMachine@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800D2B50 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 */

char __fastcall CWatchdogTimer<1>::HangIsProbablyReal(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  unsigned __int8 *v4; // rdx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  _BYTE v9[4]; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+34h] [rbp-3Ch] BYREF
  int v11; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-30h] BYREF

  if ( IsDebuggerPresent() )
  {
    v2 = *(_DWORD **)(a1 + 8);
    if ( *v2 <= 5u || !tlgKeywordOn((__int64)v2, 1LL) )
      return 0;
    v4 = (unsigned __int8 *)&unk_18018F2E6;
    goto LABEL_14;
  }
  if ( (unsigned __int8)CWatchdogTimer<1>::IsVirtualMachine() )
  {
    v10 = 17;
    RtlGetDeviceFamilyInfoEnum(0LL, &v10, 0LL);
    v5 = *(_DWORD **)(a1 + 8);
    if ( v10 != 6 )
    {
      if ( *v5 <= 5u || !tlgKeywordOn((__int64)v5, 1LL) )
        return 0;
      v4 = (unsigned __int8 *)&unk_18018F297;
LABEL_14:
      tlgWriteTransfer_EtwEventWriteTransfer(v3, v4, 0LL, 0LL, 2, (__int64)v12);
      return 0;
    }
    if ( *v5 > 5u && tlgKeywordOn((__int64)v5, 1LL) )
      tlgWriteTransfer_EtwEventWriteTransfer(v6, byte_18018F2BB, 0LL, 0LL, 2, (__int64)v12);
  }
  v11 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v11, 0LL);
  if ( v11 == 10 )
  {
    v7 = *(_DWORD **)(a1 + 8);
    if ( *v7 <= 5u || !tlgKeywordOn((__int64)v7, 1LL) )
      return 0;
    v4 = (unsigned __int8 *)&unk_18018F270;
    goto LABEL_14;
  }
  v9[0] = 0;
  if ( (int)CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(a1, v9) < 0 )
    return 0;
  if ( !v9[0] )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
    return 0;
  }
  return 1;
}
