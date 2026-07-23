/*
 * XREFs of VerifierExAllocateCacheAwareRundownProtection @ 0x140ADD200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x140AC3910 (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExAllocateCacheAwareRundownProtection(unsigned int a1, unsigned int a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPoolType(a1, retaddr, a2);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))pXdvExAllocateCacheAwareRundownProtection)(a1, a2);
}
