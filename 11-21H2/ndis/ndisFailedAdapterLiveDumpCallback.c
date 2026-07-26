/*
 * XREFs of ndisFailedAdapterLiveDumpCallback @ 0x1C011FA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFailedAdapterLiveDumpCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF

  v8 = *(_QWORD *)(a8 + 3760);
  if ( !*(_QWORD *)(v8 + 864) )
    return 0LL;
  v10[1] = a2;
  v10[0] = a1;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall *)()))(v8 + 864))(v10, ndisLiveDumpAddSecondaryData);
}
