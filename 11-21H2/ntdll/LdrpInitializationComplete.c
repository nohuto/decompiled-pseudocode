/*
 * XREFs of LdrpInitializationComplete @ 0x18007B3A4
 * Callers:
 *     LdrpProcessInitializationComplete @ 0x18007B170 (LdrpProcessInitializationComplete.c)
 *     LdrpInitializeInternal @ 0x18007B218 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 */

unsigned int *__fastcall LdrpInitializationComplete(volatile signed __int32 *a1, _QWORD *a2, unsigned __int16 a3)
{
  unsigned int *result; // rax
  __int64 v7; // r9
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx

  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v7 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v7 = 2147353476LL;
  }
  if ( *(_BYTE *)v7 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v10 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
        LOBYTE(v9) = -1;
        LOBYTE(v8) = -1;
        result = (unsigned int *)LdrpLogEtwEvent(a3, -1, v8, v9, 0LL, 0LL);
      }
    }
  }
  _InterlockedIncrement(a1);
  if ( *a2 )
    return (unsigned int *)ZwSetEvent(*a2, 0LL);
  return result;
}
