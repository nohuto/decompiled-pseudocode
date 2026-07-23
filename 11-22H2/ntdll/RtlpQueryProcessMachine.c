/*
 * XREFs of RtlpQueryProcessMachine @ 0x1800E351C
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x1800E2FBC (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A1B60 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800A3D80 (_alloca_probe.c)
 */

__int64 __fastcall RtlpQueryProcessMachine(__int64 a1, _WORD *a2)
{
  ULONG *p_ReturnLength; // rbx
  NTSTATUS v4; // ecx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  ULONG v9; // edx
  __int64 v10; // r9
  __int64 v11; // r8
  __int16 v13; // ax
  ULONG ReturnLength; // [rsp+30h] [rbp+0h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp+8h] BYREF
  _BYTE SystemInformation[24]; // [rsp+40h] [rbp+10h] BYREF

  InputBuffer = a1;
  ReturnLength = 20;
  p_ReturnLength = (ULONG *)SystemInformation;
  v4 = NtQuerySystemInformationEx(
         SystemSupportedProcessorArchitectures2,
         &InputBuffer,
         8u,
         SystemInformation,
         0x14u,
         &ReturnLength);
  if ( v4 == -1073741789 )
  {
    v5 = ReturnLength + 15LL;
    if ( v5 <= ReturnLength )
      v5 = 0xFFFFFFFFFFFFFF0LL;
    v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
    v7 = alloca(v6);
    v8 = alloca(v6);
    p_ReturnLength = &ReturnLength;
    v4 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures2,
           &InputBuffer,
           8u,
           &ReturnLength,
           ReturnLength,
           &ReturnLength);
  }
  if ( v4 >= 0 )
  {
    v9 = *p_ReturnLength;
    LODWORD(v10) = 0;
    if ( !(unsigned __int16)*p_ReturnLength )
      return (unsigned int)-1073741816;
    v11 = 0LL;
    while ( (v9 & 0x80000) == 0 )
    {
      v10 = (unsigned int)(v10 + 1);
      v11 = (unsigned int)v10;
      v9 = p_ReturnLength[v10];
      if ( !(_WORD)v9 )
        return (unsigned int)-1073741816;
    }
    v13 = p_ReturnLength[v11];
    if ( v13 )
      *a2 = v13;
    else
      return (unsigned int)-1073741816;
  }
  return (unsigned int)v4;
}
