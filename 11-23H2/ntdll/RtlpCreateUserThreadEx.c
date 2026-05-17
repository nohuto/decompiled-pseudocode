/*
 * XREFs of RtlpCreateUserThreadEx @ 0x18005C2F0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64SuspendThread @ 0x180001CA0 (RtlpWow64SuspendThread.c)
 *     RtlCreateUserThread @ 0x18005C280 (RtlCreateUserThread.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D7DE0 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7C08 (RtlpWow64SuspendProcess.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtCreateThreadEx @ 0x1800A2780 (NtCreateThreadEx.c)
 */

__int64 __fastcall RtlpCreateUserThreadEx(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        HANDLE *a10,
        _OWORD *a11)
{
  __int64 v12; // rsi
  char v13; // r9
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  int v18; // ecx
  __int64 result; // rax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  _QWORD v28[10]; // [rsp+B0h] [rbp-50h] BYREF

  v12 = a4;
  v13 = a3;
  v21 = 0LL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return 3221225485LL;
  v22 = 48;
  v25 = 512;
  v26 = a2;
  v14 = a3 & 1 | 2;
  v28[1] = 65539LL;
  v28[2] = 16LL;
  v28[0] = 40LL;
  if ( (a3 & 2) == 0 )
    v14 = a3 & 1;
  v28[3] = &v21;
  v15 = v14 | 4;
  if ( (a3 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x10;
  if ( (a3 & 0x10) == 0 )
    v16 = v15;
  v17 = v16 | 0x20;
  if ( (v13 & 0x20) == 0 )
    v17 = v16;
  v23 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v18 = v17 | 0x40;
  v28[4] = 0LL;
  if ( (v13 & 0x40) == 0 )
    v18 = v17;
  result = NtCreateThreadEx(&Handle, 0x1FFFFFLL, &v22, a1, a8, a9, v18, v12, a6, a5, v28);
  if ( (int)result >= 0 )
  {
    if ( a10 )
      *a10 = Handle;
    else
      NtClose(Handle);
    if ( a11 )
      *a11 = v21;
    return 0LL;
  }
  return result;
}
