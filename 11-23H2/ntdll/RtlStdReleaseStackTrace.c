/*
 * XREFs of RtlStdReleaseStackTrace @ 0x18010F620
 * Callers:
 *     RtlDeleteCriticalSection @ 0x18005ACD0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x18005C9D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18005CDB4 (RtlLogStackBackTraceEx.c)
 *     RtlReleaseStackTrace @ 0x18010F320 (RtlReleaseStackTrace.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A4C80 (RtlpInterlockedPushEntrySList.c)
 *     RtlpStdLockAcquire @ 0x18010FB74 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18010FB94 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  _DWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD **v8; // rdi
  _QWORD **v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *v12; // rcx
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v6 = (_DWORD *)(a2 + 16);
    v7 = *(unsigned __int16 *)(a2 + 14);
    do
    {
      v5 += *v6;
      v6 += 2;
      --v7;
    }
    while ( v7 );
  }
  v8 = (_QWORD **)(16LL * (v5 % *(_DWORD *)(a1 + 720)) + a1 + 728);
  v9 = v8 + 1;
  RtlpStdLockAcquire(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      v12 = *v8;
      if ( *v8 )
      {
        while ( v12 != (_QWORD *)a2 )
        {
          v8 = (_QWORD **)v12;
          v12 = (_QWORD *)*v12;
          if ( !v12 )
            goto LABEL_9;
        }
        *v8 = *(_QWORD **)a2;
      }
      else
      {
LABEL_9:
        __debugbreak();
      }
      v4 = 1;
    }
  }
  result = RtlpStdLockRelease(v9);
  if ( v4 )
  {
    result = RtlpInterlockedPushEntrySList(
               (__int128 *)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
               (_QWORD *)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
