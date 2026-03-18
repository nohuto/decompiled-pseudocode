/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x14054AB60
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall HvlCrashdumpCallbackRoutine(PVOID Context, __int64 Handled)
{
  ULONG_PTR *v2; // rbx

  v2 = (ULONG_PTR *)qword_140C48908;
  if ( qword_140C48908 && (*((_DWORD *)qword_140C48908 + 1) & 1) != 0 )
  {
    ((void (__fastcall *)(__int64, __int64))off_140C01CE8[0])(1LL, Handled);
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v2[23], v2[24], v2[25], v2[26]);
  }
  return 0;
}
