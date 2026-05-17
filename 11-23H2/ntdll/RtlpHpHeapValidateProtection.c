/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x1800466F8
 * Callers:
 *     RtlpGetHeapProtection @ 0x1800466C4 (RtlpGetHeapProtection.c)
 *     RtlpHpSegMgrCommit @ 0x180047080 (RtlpHpSegMgrCommit.c)
 *     RtlProtectHeap @ 0x180049120 (RtlProtectHeap.c)
 *     RtlpHpSegMgrReserve @ 0x18004AD68 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x1800642B8 (RtlpHpLargeAlloc.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpLogHeapFailure @ 0x1801229F0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  unsigned int v4; // edi
  int v7; // eax
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+48h] [rbp-30h]

  v4 = a2;
  if ( a2 == 64 )
  {
    if ( a3 == 5 )
      v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64, __int64 *, __int64, _QWORD))(a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a4 + 24)))(
             a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4,
             -1LL,
             a1,
             3LL,
             &v8,
             48LL,
             0LL);
    else
      v7 = ZwQueryVirtualMemory(-1LL, a1, 3LL, &v8, 48LL, 0LL);
    if ( v7 < 0 || (v9 & 0x60) == 0 || v8 != a1 )
    {
      RtlpLogHeapFailure(0, a1, 1, v9, 0LL, 0LL);
      return 4;
    }
  }
  return v4;
}
