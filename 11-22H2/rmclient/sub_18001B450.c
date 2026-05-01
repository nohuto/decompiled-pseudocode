/*
 * XREFs of sub_18001B450 @ 0x18001B450
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800099BC @ 0x1800099BC (sub_1800099BC.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18001AA68 @ 0x18001AA68 (sub_18001AA68.c)
 */

__int64 __fastcall sub_18001B450(__int64 a1, __int64 *a2)
{
  int v3; // eax
  signed int v4; // eax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-98h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-90h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-28h] BYREF

  v8 = 0LL;
  v3 = NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessVmCounters,
         ProcessInformation,
         0x70u,
         &ReturnLength);
  if ( v3 >= 0 )
  {
    sub_1800099BC(&v8);
    v5 = sub_18001AA68(&v8, &v12, v11);
    if ( v5 >= 0 )
    {
      v6 = v8;
      v8 = 0LL;
      *a2 = v6;
    }
  }
  else
  {
    v4 = RtlNtStatusToDosError(v3);
    v5 = v4;
    if ( v4 > 0 )
      v5 = (unsigned __int16)v4 | 0x80070000;
  }
  sub_1800099BC(&v8);
  return (unsigned int)v5;
}
