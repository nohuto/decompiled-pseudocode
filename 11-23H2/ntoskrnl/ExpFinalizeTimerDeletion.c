/*
 * XREFs of ExpFinalizeTimerDeletion @ 0x1403609F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFinalizeTimerDeletion(unsigned __int64 P)
{
  void (__fastcall *v2)(unsigned __int64); // rax

  v2 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(P ^ __ROL8__(
                                                                                     *(_QWORD *)(P + 136) ^ KiWaitNever,
                                                                                     KiWaitNever)));
  if ( v2 )
    v2(KiWaitAlways ^ _byteswap_uint64(P ^ __ROL8__(*(_QWORD *)(P + 144) ^ KiWaitNever, KiWaitNever)));
  *(_BYTE *)(P + 152) = ~ExpTimerFreedCookie;
  ExFreePoolWithTag((PVOID)P, 0x6D547845u);
}
