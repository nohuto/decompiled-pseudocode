/*
 * XREFs of TpDbgDumpHeapUsage @ 0x180124170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlQueryTagHeap @ 0x1800FDCE0 (RtlQueryTagHeap.c)
 */

PWSTR __fastcall TpDbgDumpHeapUsage(
        BOOLEAN a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, PWSTR, _QWORD, ULONG, SIZE_T),
        __int64 a3)
{
  unsigned int i; // ebx
  PWSTR result; // rax
  _RTL_HEAP_TAG_INFO TagInfo; // [rsp+40h] [rbp-38h] BYREF

  for ( i = 0; i < 0xE; ++i )
  {
    result = RtlQueryTagHeap(NtCurrentPeb()->ProcessHeap, 0, i + (TppHeapTag >> 18), a1, &TagInfo);
    if ( result )
      result = (PWSTR)a2(
                        a3,
                        i + TppHeapTag,
                        result,
                        TagInfo.NumberOfAllocations,
                        TagInfo.NumberOfFrees,
                        TagInfo.BytesAllocated);
  }
  return result;
}
