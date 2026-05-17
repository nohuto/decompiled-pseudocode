/*
 * XREFs of RtlReleaseResource @ 0x18005AC30
 * Callers:
 *     <none>
 * Callees:
 *     ZwReleaseSemaphore @ 0x18009EF30 (ZwReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlReleaseResource(__int64 a1)
{
  __int64 result; // rax
  bool v3; // zf
  bool v4; // zf
  int v5; // ett
  int v6; // ett
  unsigned __int32 v7; // ecx
  int v8; // eax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 68);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1 )
      *(_QWORD *)(a1 + 72) = 0LL;
    if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 68)) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v7 = _InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
        if ( v7 )
        {
          v8 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v7, &v9);
          if ( v8 < 0 )
            RtlRaiseStatus((unsigned int)v8);
        }
      }
      result = *(unsigned int *)(a1 + 64);
      v4 = (_DWORD)result == 0;
      if ( (int)result > 0 )
      {
        while ( 1 )
        {
          v5 = result;
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), result - 1, result);
          if ( v5 == (_DWORD)result )
            break;
          v4 = (_DWORD)result == 0;
          if ( (int)result <= 0 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( v4 )
          return result;
      }
      result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v9);
      if ( (int)result < 0 )
        RtlRaiseStatus((unsigned int)result);
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      return result;
    result = *(unsigned int *)(a1 + 64);
    v3 = (_DWORD)result == 0;
    if ( (int)result > 0 )
    {
      while ( 1 )
      {
        v6 = result;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), result - 1, result);
        if ( v6 == (_DWORD)result )
          break;
        v3 = (_DWORD)result == 0;
        if ( (int)result <= 0 )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v3 )
        return result;
    }
    result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v9);
    if ( (int)result < 0 )
      RtlRaiseStatus((unsigned int)result);
  }
  return result;
}
