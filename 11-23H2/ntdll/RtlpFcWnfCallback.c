/*
 * XREFs of RtlpFcWnfCallback @ 0x1800B0E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     TpPostWork @ 0x180034C20 (TpPostWork.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800713C8 (RtlpFcUpdateLocalConfiguration.c)
 */

__int64 __fastcall RtlpFcWnfCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 *i; // rbx

  RtlpFcUpdateLocalConfiguration(a4, MEMORY[0x7FFE0720], 1);
  v5 = (volatile signed __int64 *)(a4 + 208);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a4 + 208), v6, v7, v8);
  v11 = a4 + 216;
  for ( i = *(__int64 **)(a4 + 216); i != (__int64 *)v11; i = (__int64 *)*i )
    TpPostWork((_PEB_LDR_DATA *)i[5], v9, v10);
  RtlReleaseSRWLockShared(v5);
  return 0LL;
}
