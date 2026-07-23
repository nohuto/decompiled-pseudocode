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

int __fastcall LdrpInitializationComplete(volatile signed __int32 *a1, HANDLE *a2, unsigned __int16 a3)
{
  struct _PEB *v6; // rax
  __int64 v7; // r9
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx

  LODWORD(v6) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v6 )
  {
    v6 = NtCurrentPeb();
    v7 = (__int64)v6->SharedData + 554;
  }
  else
  {
    v7 = 2147353476LL;
  }
  if ( *(_BYTE *)v7 )
  {
    v6 = NtCurrentPeb();
    if ( (v6->TracingFlags & 4) != 0 )
    {
      LODWORD(v6) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v6 )
      {
        v6 = NtCurrentPeb();
        v10 = (__int64)v6->SharedData + 555;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
        LOBYTE(v9) = -1;
        LOBYTE(v8) = -1;
        LODWORD(v6) = LdrpLogEtwEvent(a3, -1, v8, v9, 0LL, 0LL);
      }
    }
  }
  _InterlockedIncrement(a1);
  if ( *a2 )
    LODWORD(v6) = ZwSetEvent(*a2, 0LL);
  return (int)v6;
}
