/*
 * XREFs of PopFxRequestWorker @ 0x140358140
 * Callers:
 *     PopPepRequestWork @ 0x14035666C (PopPepRequestWork.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x1402EEE50 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 */

__int64 __fastcall PopFxRequestWorker(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // edi

  v1 = (volatile signed __int32 *)&PopFxSystemWorkPool;
  if ( a1 )
    v1 = (volatile signed __int32 *)(a1 + 120);
  result = KeReleaseSemaphoreEx((PVOID)(v1 + 16), 0);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v4 = 0LL;
    while ( 1 )
    {
      v5 = 1 << v4;
      _m_prefetchw((const void *)(v1 + 24));
      result = (unsigned int)_InterlockedOr(v1 + 24, 1 << v4);
      if ( ((unsigned int)result & (1 << v4)) == 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 4 )
        return result;
    }
    result = ExTryQueueWorkItem((__int64)&v1[8 * v4 + 28 + 2 * (unsigned int)v4], 0x30u);
    if ( !(_BYTE)result )
      _InterlockedAnd(v1 + 24, ~v5);
  }
  return result;
}
