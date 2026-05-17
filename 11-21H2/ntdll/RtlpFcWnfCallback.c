/*
 * XREFs of RtlpFcWnfCallback @ 0x1800B12B0
 * Callers:
 *     <none>
 * Callees:
 *     TpPostWork @ 0x18001B690 (TpPostWork.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800763A8 (RtlpFcUpdateLocalConfiguration.c)
 */

__int64 __fastcall RtlpFcWnfCallback(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  volatile signed __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 *i; // rbx

  RtlpFcUpdateLocalConfiguration(a4, MEMORY[0x7FFE0720], 1);
  v5 = (volatile signed __int64 *)(a4 + 208);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a4 + 208));
  v8 = a4 + 216;
  for ( i = *(__int64 **)(a4 + 216); i != (__int64 *)v8; i = (__int64 *)*i )
    TpPostWork((_PEB_LDR_DATA *)i[5], v6, v7);
  RtlReleaseSRWLockShared(v5);
  return 0LL;
}
