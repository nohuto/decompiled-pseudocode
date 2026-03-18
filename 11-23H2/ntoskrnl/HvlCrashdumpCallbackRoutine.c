/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x1405479E0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

char HvlCrashdumpCallbackRoutine()
{
  ULONG_PTR *v0; // rbx

  v0 = (ULONG_PTR *)qword_140C5F3A8;
  if ( qword_140C5F3A8 && (*((_DWORD *)qword_140C5F3A8 + 1) & 1) != 0 )
  {
    ((void (__fastcall *)(__int64))off_140C01AA8[0])(1LL);
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v0[23], v0[24], v0[25], v0[26]);
  }
  return 0;
}
