/*
 * XREFs of RtlEncodePointer @ 0x1800737B0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlEncodePointer(__int64 a1)
{
  __int64 v1; // rax
  NTSTATUS v4; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus((unsigned int)v4);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return __ROR8__(a1 ^ v1, v1 & 0x3F);
}
