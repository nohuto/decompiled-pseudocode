/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C02087E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     _WindowFromDC @ 0x1C01BDF48 (_WindowFromDC.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int CurrentProcessId; // ebx
  __int64 *v16; // rcx
  const struct tagWND *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rbx
  _BYTE v34[4]; // [rsp+30h] [rbp-138h] BYREF
  int v35; // [rsp+34h] [rbp-134h] BYREF
  int v36; // [rsp+38h] [rbp-130h]
  unsigned __int64 v37; // [rsp+50h] [rbp-118h] BYREF
  __int128 v38; // [rsp+60h] [rbp-108h]
  __int64 v39; // [rsp+70h] [rbp-F8h]
  __int64 v40; // [rsp+78h] [rbp-F0h]
  __int128 v41; // [rsp+98h] [rbp-D0h]
  __int128 v42; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-B0h]
  __int64 v44; // [rsp+C0h] [rbp-A8h] BYREF
  int v45; // [rsp+C8h] [rbp-A0h]
  __int64 v46; // [rsp+D0h] [rbp-98h]
  __int128 v47; // [rsp+D8h] [rbp-90h]
  __int128 v48; // [rsp+E8h] [rbp-80h]
  __int128 v49; // [rsp+F8h] [rbp-70h]
  __int128 v50; // [rsp+108h] [rbp-60h]
  __int64 v51; // [rsp+118h] [rbp-50h]
  __int64 v52; // [rsp+120h] [rbp-48h]

  v36 = a2;
  v37 = 0LL;
  v35 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v11 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  memset_0(&v44, 0, 0x68uLL);
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(a4 + 32), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v16 = *(__int64 **)(a4 + 32);
    if ( v16 )
    {
      v17 = WindowFromDC(v16);
      if ( v17 )
      {
        v14 = *(_QWORD *)(a4 + 32);
        *(_QWORD *)(a4 + 32) = _GetDC(v17);
      }
    }
  }
  v44 = v13;
  v45 = v36;
  v46 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  v47 = *(_OWORD *)a4;
  v48 = *(_OWORD *)(a4 + 16);
  v49 = *(_OWORD *)(a4 + 32);
  v50 = *(_OWORD *)(a4 + 48);
  v51 = a5;
  v52 = a6;
  ThreadLock(a1, &v42);
  v21 = *((_QWORD *)v12 + 60);
  v41 = *(_OWORD *)(v21 + 64);
  v38 = v41;
  v39 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v13;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224);
  else
    v23 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v23;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v34,
    v18,
    v19,
    v20);
  EtwTraceBeginCallback(12LL);
  v24 = KeUserModeCallback(12LL, &v44, 104LL, &v37, &v35);
  EtwTraceEndCallback(12LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34, v25, v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v30 + 64) = v41;
  *(_QWORD *)(v30 + 80) = v39;
  if ( v24 < 0 || v35 != 24 )
    return 0LL;
  v31 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v32 = *v31;
  v40 = *v31;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*(_QWORD *)(a4 + 32));
    *(_QWORD *)(a4 + 32) = v14;
  }
  return v32;
}
