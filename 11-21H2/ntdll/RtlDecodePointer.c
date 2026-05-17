/*
 * XREFs of RtlDecodePointer @ 0x1800742C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlDecodePointer(__int64 a1)
{
  unsigned int v1; // edx
  NTSTATUS v4; // eax
  int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
    {
      RtlRaiseStatus((unsigned int)v4);
      __debugbreak();
    }
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return __ROR8__(a1, 64 - (v1 & 0x3F)) ^ v1;
}
