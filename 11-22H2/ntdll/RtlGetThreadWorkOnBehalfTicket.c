/*
 * XREFs of RtlGetThreadWorkOnBehalfTicket @ 0x18007E250
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlGetThreadWorkOnBehalfTicket(_QWORD *a1, int a2)
{
  char v2; // bl
  NTSTATUS v4; // ecx
  __int64 v6; // rax
  __int64 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+38h] [rbp-20h]

  v2 = a2;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 3 )
  {
    return (unsigned int)-1073741584;
  }
  else if ( (a2 & 2) != 0 )
  {
    v4 = ZwQueryInformationThread(
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           ThreadWorkOnBehalfTicket,
           &ThreadInformation,
           0x10u,
           0LL);
    if ( v4 >= 0 )
    {
      if ( (v2 & 4) != 0 || (v8 & 1) == 0 )
        v6 = ThreadInformation;
      else
        v6 = 0LL;
      *a1 = v6;
    }
  }
  else
  {
    *a1 = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    return 0;
  }
  return (unsigned int)v4;
}
