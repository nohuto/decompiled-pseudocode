/*
 * XREFs of EtwpUseDescriptorType @ 0x180125090
 * Callers:
 *     EtwEventSetInformation @ 0x18002FB70 (EtwEventSetInformation.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030550 (ProviderHandleLookup.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 */

__int64 __fastcall EtwpUseDescriptorType(__int64 a1, unsigned __int8 *a2)
{
  __int16 v3; // rbx^4
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int8 v6; // di
  unsigned __int32 v7; // ebx
  NTSTATUS v8; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-28h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 v12; // [rsp+40h] [rbp-18h]

  v3 = WORD2(a1);
  v4 = ProviderHandleLookup(a1, a1);
  v5 = v4;
  if ( !v4 || v3 != *(_WORD *)(v4 + 84) )
  {
    v7 = 6;
    goto LABEL_10;
  }
  v6 = *a2;
  if ( v6 >= 2u )
  {
    v7 = 87;
LABEL_10:
    RtlSetLastWin32Error(v7);
    return v7;
  }
  InputBuffer = *(_QWORD *)(v4 + 88);
  v12 = v6;
  v8 = NtTraceControl(EtwUseDescriptorTypeCode, &InputBuffer, 0x10u, 0LL, 0, &ReturnLength);
  if ( v8 )
  {
    v7 = RtlNtStatusToDosError(v8);
    if ( v7 )
      goto LABEL_10;
  }
  else
  {
    v7 = 0;
  }
  *(_WORD *)(v5 + 86) = *(_WORD *)(v5 + 86) & 0xBFFF | ((v6 & 1) << 14);
  return v7;
}
