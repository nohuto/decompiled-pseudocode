/*
 * XREFs of sub_180003338 @ 0x180003338
 * Callers:
 *     sub_1800032F0 @ 0x1800032F0 (sub_1800032F0.c)
 *     sub_18001C110 @ 0x18001C110 (sub_18001C110.c)
 * Callees:
 *     sub_1800034B0 @ 0x1800034B0 (sub_1800034B0.c)
 *     sub_180003584 @ 0x180003584 (sub_180003584.c)
 *     sub_180004DB0 @ 0x180004DB0 (sub_180004DB0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

signed int __fastcall sub_180003338(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  int InformationProcess; // eax
  signed int result; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r15
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  ULONG ReturnLength; // [rsp+30h] [rbp-79h] BYREF
  __int64 v15; // [rsp+38h] [rbp-71h] BYREF
  __int64 v16; // [rsp+40h] [rbp-69h] BYREF
  _OWORD ProcessInformation[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v18; // [rsp+68h] [rbp-41h]
  _BYTE v19[16]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v20; // [rsp+80h] [rbp-29h]
  _BYTE SystemInformation[8]; // [rsp+90h] [rbp-19h] BYREF
  unsigned int v22; // [rsp+98h] [rbp-11h]

  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess < 0 )
    goto LABEL_2;
  if ( (int)sub_180004DB0() < 0 )
  {
    v9 = v18;
    v10 = v18;
  }
  else
  {
    result = sub_1800034B0(qword_180032C78, &v15);
    if ( result < 0 )
      return result;
    result = sub_180003584(qword_180032C78, &v16);
    if ( result < 0 )
      return result;
    v9 = v15;
    v10 = v16;
  }
  if ( ((v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v11 = v22;
    InformationProcess = NtQuerySystemInformation(
                           MaxSystemInfoClass|SystemFullMemoryInformation,
                           v19,
                           0x20u,
                           &ReturnLength);
    if ( InformationProcess < 0 )
    {
LABEL_2:
      result = RtlNtStatusToDosError(InformationProcess);
      if ( result > 0 )
        return (unsigned __int16)result | 0x80070000;
      return result;
    }
    v9 = v11 * v20;
  }
  if ( a2 )
    *a2 = v9;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
  {
    v12 = ProcessInformation[1];
    *(_OWORD *)a4 = ProcessInformation[0];
    v13 = v18;
    *(_OWORD *)(a4 + 16) = v12;
    *(_QWORD *)(a4 + 32) = v13;
  }
  return 0;
}
