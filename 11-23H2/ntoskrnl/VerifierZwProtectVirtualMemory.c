/*
 * XREFs of VerifierZwProtectVirtualMemory @ 0x140AE6010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x140AC3868 (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierZwProtectVirtualMemory(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  VfCheckPageProtection(a4, retaddr);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))pXdvZwProtectVirtualMemory)(
           a1,
           a2,
           a3,
           a4,
           a5);
}
