/*
 * XREFs of EtwpUseDescriptorType @ 0x180121F48
 * Callers:
 *     EtwEventSetInformation @ 0x1800155D0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

__int64 __fastcall EtwpUseDescriptorType(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // si
  ULONG v8; // ebx
  NTSTATUS v9; // eax

  v4 = ProviderHandleLookup(a1, a1);
  v5 = v4;
  if ( !v4 || (v6 = HIDWORD(a1), !(_WORD)v6) || (_WORD)v6 != *(_WORD *)(v4 + 96) )
  {
    v8 = 6;
    goto LABEL_11;
  }
  v7 = *a2;
  if ( v7 >= 2u )
  {
    v8 = 87;
LABEL_11:
    RtlSetLastWin32Error(v8);
    return v8;
  }
  v9 = NtTraceControl();
  if ( v9 )
  {
    v8 = RtlNtStatusToDosError(v9);
    if ( v8 )
      goto LABEL_11;
  }
  else
  {
    v8 = 0;
  }
  *(_WORD *)(v5 + 98) &= ~0x4000u;
  *(_WORD *)(v5 + 98) |= (v7 & 1) << 14;
  return v8;
}
