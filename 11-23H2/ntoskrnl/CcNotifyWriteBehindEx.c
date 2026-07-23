/*
 * XREFs of CcNotifyWriteBehindEx @ 0x140536F90
 * Callers:
 *     MiObtainFreePages @ 0x14063547C (MiObtainFreePages.c)
 *     MiFlushAllPagesWorker @ 0x14063A234 (MiFlushAllPagesWorker.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x140536FEC (CcNotifyWriteBehindInternal.c)
 */

__int64 __fastcall CcNotifyWriteBehindEx(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return CcNotifyWriteBehindInternal(v3, (unsigned int)result);
  return result;
}
