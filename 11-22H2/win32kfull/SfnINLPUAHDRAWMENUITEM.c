/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C020A120
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     _ServerFixupMenuDC @ 0x1C0234AFC (_ServerFixupMenuDC.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
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
  struct tagTHREADINFO *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rdi
  _BYTE v33[4]; // [rsp+30h] [rbp-188h] BYREF
  int v34; // [rsp+34h] [rbp-184h] BYREF
  int v35; // [rsp+38h] [rbp-180h]
  unsigned __int64 v36; // [rsp+50h] [rbp-168h] BYREF
  __int128 v37; // [rsp+60h] [rbp-158h]
  __int64 v38; // [rsp+70h] [rbp-148h]
  __int64 v39; // [rsp+78h] [rbp-140h]
  __int128 v40; // [rsp+98h] [rbp-120h]
  __int128 v41; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-100h]
  __int64 v43; // [rsp+C0h] [rbp-F8h] BYREF
  int v44; // [rsp+C8h] [rbp-F0h]
  __int64 v45; // [rsp+D0h] [rbp-E8h]
  __int128 v46; // [rsp+D8h] [rbp-E0h]
  __int128 v47; // [rsp+E8h] [rbp-D0h]
  __int128 v48; // [rsp+F8h] [rbp-C0h]
  __int128 v49; // [rsp+108h] [rbp-B0h]
  __int128 v50; // [rsp+118h] [rbp-A0h]
  __int128 v51; // [rsp+128h] [rbp-90h]
  __int128 v52; // [rsp+138h] [rbp-80h]
  __int128 v53; // [rsp+148h] [rbp-70h]
  __int128 v54; // [rsp+158h] [rbp-60h]
  __int64 v55; // [rsp+168h] [rbp-50h]
  __int64 v56; // [rsp+170h] [rbp-48h]

  v35 = a2;
  v36 = 0LL;
  v34 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v11 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  memset_0(&v43, 0, 0xB8uLL);
  v14 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 32));
  v16 = v15;
  if ( v15 )
  {
    v14 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = v15;
    *(_QWORD *)(a4 + 72) = v15;
  }
  v43 = v13;
  v44 = v35;
  v45 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 84) = 0;
  v46 = *(_OWORD *)a4;
  v47 = *(_OWORD *)(a4 + 16);
  v48 = *(_OWORD *)(a4 + 32);
  v49 = *(_OWORD *)(a4 + 48);
  v50 = *(_OWORD *)(a4 + 64);
  v51 = *(_OWORD *)(a4 + 80);
  v52 = *(_OWORD *)(a4 + 96);
  v53 = *(_OWORD *)(a4 + 112);
  v54 = *(_OWORD *)(a4 + 128);
  v55 = a5;
  v56 = a6;
  ThreadLock(a1, &v41);
  v20 = *((_QWORD *)v12 + 60);
  v40 = *(_OWORD *)(v20 + 64);
  v37 = v40;
  v38 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v13;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224);
  else
    v22 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v22;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v33,
    v17,
    v18,
    v19);
  EtwTraceBeginCallback(107LL);
  v23 = KeUserModeCallback(107LL, &v43, 184LL, &v36, &v34);
  EtwTraceEndCallback(107LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v33, v24, v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v29 + 64) = v40;
  *(_QWORD *)(v29 + 80) = v38;
  if ( v23 < 0 || v34 != 24 )
    return 0LL;
  v30 = (__int64 *)v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  v31 = *v30;
  v39 = *v30;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      *(_QWORD *)(a4 + 32) = v14;
      *(_QWORD *)(a4 + 72) = v14;
    }
  }
  return v31;
}
