/*
 * XREFs of RtlpHpSetHeapTag @ 0x180100F0C
 * Callers:
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapTagUpdateEvent @ 0x180118DD8 (RtlpLogHeapTagUpdateEvent.c)
 */

__int64 __fastcall RtlpHpSetHeapTag(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx

  v3 = 0;
  if ( a1 && a2 && *(_DWORD *)(a1 + 16) == -571548178 && a3 == 8 )
  {
    v5 = *a2;
    *(_QWORD *)(a1 + 104) = *a2;
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v6 = 2147353472LL;
    if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapTagUpdateEvent(a1, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
