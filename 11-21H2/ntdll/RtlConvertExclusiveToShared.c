/*
 * XREFs of RtlConvertExclusiveToShared @ 0x18008CEF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x1800A41B0 (ZwReleaseSemaphore.c)
 */

__int64 __fastcall RtlConvertExclusiveToShared(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 72) = 0LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 68), 1);
  result = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)result )
  {
    v2 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
    if ( (_DWORD)v2 )
    {
      result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v2, &v3);
      if ( (int)result < 0 )
      {
        RtlRaiseStatus((unsigned int)result);
        JUMPOUT(0x1800D434ALL);
      }
    }
  }
  return result;
}
