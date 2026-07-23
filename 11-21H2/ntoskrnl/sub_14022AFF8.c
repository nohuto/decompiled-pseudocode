/*
 * XREFs of sub_14022AFF8 @ 0x14022AFF8
 * Callers:
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403AC3AC @ 0x1403AC3AC (sub_1403AC3AC.c)
 *     sub_140460192 @ 0x140460192 (sub_140460192.c)
 *     EtwSendTraceBuffer @ 0x140630940 (EtwSendTraceBuffer.c)
 *     sub_140630ACC @ 0x140630ACC (sub_140630ACC.c)
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     sub_1403860B0 @ 0x1403860B0 (sub_1403860B0.c)
 */

__int64 __fastcall sub_14022AFF8(unsigned int a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 result; // rax

  v4 = a1;
  *a4 = 0;
  if ( a3 == 1 || (unsigned __int8)KeGetEffectiveIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v8 = v4;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8 * v4), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  else
  {
    v8 = v4;
  }
  result = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 8 * v8);
  if ( (result & 1) != 0 )
  {
    LOBYTE(v9) = *a4;
    sub_1403860B0((unsigned int)v4, a2, v9);
    return 0LL;
  }
  return result;
}
