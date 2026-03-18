/*
 * XREFs of ClientGetListboxString @ 0x1C020576C
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C0157610 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C0223AD0 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0022D84 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00245D4 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0024648 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00246CC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

unsigned __int8 *__fastcall ClientGetListboxString(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagTHREADINFO *v17; // rax
  struct tagTHREADINFO *v18; // r13
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned __int64 v21; // rdi
  unsigned __int8 *result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  unsigned __int64 *v43; // rdi
  ULONG64 v44; // rcx
  unsigned __int64 v45; // rdi
  __int64 v46; // rcx
  _QWORD *v47; // rcx
  ULONG64 v48; // rcx
  ULONG64 v49; // rdx
  __int64 v50; // xmm0_8
  __int64 v51; // rcx
  int v52; // r14d
  int v53; // r8d
  unsigned int v54; // r8d
  unsigned int v55; // eax
  _BYTE v56[4]; // [rsp+30h] [rbp-368h] BYREF
  int v57; // [rsp+34h] [rbp-364h] BYREF
  int v58; // [rsp+38h] [rbp-360h]
  unsigned __int8 *v59; // [rsp+40h] [rbp-358h]
  unsigned __int64 v60; // [rsp+48h] [rbp-350h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-348h] BYREF
  int v62; // [rsp+58h] [rbp-340h]
  __int128 v63; // [rsp+70h] [rbp-328h] BYREF
  __int64 v64; // [rsp+80h] [rbp-318h]
  __int128 v65; // [rsp+90h] [rbp-308h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-2F8h]
  __int128 v67; // [rsp+D0h] [rbp-2C8h]
  __int128 v68; // [rsp+E0h] [rbp-2B8h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-2A8h]
  unsigned __int8 v70[96]; // [rsp+100h] [rbp-298h] BYREF
  unsigned __int8 v71[512]; // [rsp+160h] [rbp-238h] BYREF

  v62 = a2;
  v58 = a7 & 1;
  memset_0(v70, 0, sizeof(v70));
  v12 = v70;
  v60 = 0LL;
  v57 = 0;
  RegionSize = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v17 = PtiCurrentShared(v14, v13, v15, v16);
  v18 = v17;
  if ( a1 )
    v19 = a1[5] - *((_QWORD *)v17 + 59);
  else
    v19 = 0LL;
  v20 = a4[1] & 0x7FFFFFFF;
  v21 = v20 + 2;
  if ( (unsigned int)v21 >= v20 )
  {
    if ( a4[1] >= 0 || v58 || (v21 *= 2LL, v21 <= 0xFFFFFFFF) )
    {
      result = AllocCallbackMessage(96, 1u, (unsigned int)v21, v71, 0, 0x200uLL);
      v12 = result;
      v59 = result;
      if ( !result )
        return result;
      PtiCurrentShared(v24, v23, v25, v26);
      v65 = 0LL;
      v66 = 0LL;
      if ( v12 != v70 && v12 != v71 )
        PushW32ThreadLock((__int64)v12, &v65, (__int64)Win32FreePool);
      *((_QWORD *)v12 + 5) = v19;
      *((_DWORD *)v12 + 12) = v62;
      *((_QWORD *)v12 + 7) = a3;
      *((_QWORD *)v12 + 8) = a5;
      *((_QWORD *)v12 + 9) = a6;
      if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v21, (void **)v12 + 10) >= 0 )
      {
        *((_DWORD *)v12 + 22) = v21;
        ThreadLock(a1, &v68);
        v30 = *((_QWORD *)v18 + 60);
        v67 = *(_OWORD *)(v30 + 64);
        v63 = v67;
        v64 = *(_QWORD *)(v30 + 80);
        *(_QWORD *)(v30 + 72) = v19;
        v31 = a1 ? *a1 : 0LL;
        *(_QWORD *)(*((_QWORD *)v18 + 60) + 64LL) = v31;
        v32 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
        *(_QWORD *)(*((_QWORD *)v18 + 60) + 80LL) = v32;
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
          (LeaveEnterCritProperDisposition *)v56,
          v27,
          v28,
          v29);
        EtwTraceBeginCallback(72LL);
        *((_QWORD *)v12 + 2) = 0LL;
        v33 = KeUserModeCallback(72LL, v12, *(unsigned int *)v12, &v60, &v57);
        EtwTraceEndCallback(72LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition(
          (LeaveEnterCritProperDisposition *)v56,
          v34,
          v35);
        ThreadUnlock1(v37, v36, v38);
        v42 = *((_QWORD *)v18 + 60);
        *(_OWORD *)(v42 + 64) = v67;
        *(_QWORD *)(v42 + 80) = v64;
        if ( v33 >= 0 && v57 == 24 )
        {
          v43 = (unsigned __int64 *)v60;
          v44 = v60 + 8;
          if ( v60 + 8 < v60 || v44 > MmUserProbeAddress )
            v43 = (unsigned __int64 *)MmUserProbeAddress;
          v45 = *v43;
          RegionSize = v45;
          if ( (v45 & 0x80000000) != 0LL || a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
            goto LABEL_53;
          if ( a8 )
          {
            v46 = *((_QWORD *)PtiCurrentShared(v44, v39, v40, v41) + 64);
            if ( !v46 || (*(_DWORD *)(v46 + 84) & 1) == 0 || *(_QWORD *)(v46 + 96) != *((_QWORD *)a4 + 1) )
            {
              v47 = *(_QWORD **)(v60 + 16);
              if ( v47 + 1 < v47 || (unsigned __int64)(v47 + 1) > MmUserProbeAddress )
                v47 = (_QWORD *)MmUserProbeAddress;
              **((_QWORD **)a4 + 1) = *v47;
              goto LABEL_46;
            }
          }
          else
          {
            v48 = v60;
            v49 = v60 + 24;
            if ( v60 + 24 < v60 || v49 > MmUserProbeAddress )
              v48 = MmUserProbeAddress;
            v50 = *(_QWORD *)(v48 + 16);
            v63 = *(_OWORD *)v48;
            v64 = v50;
            v51 = *((_QWORD *)PtiCurrentShared(v48, v49, v40, v41) + 64);
            if ( !v51 || (*(_DWORD *)(v51 + 84) & 1) == 0 || *(int **)(v51 + 96) != a4 )
            {
              v52 = v58;
              v45 = (unsigned int)CalcOutputStringSize(
                                    (struct _CALLBACKSTATUS *)&v63,
                                    v45,
                                    (unsigned int)a4[1] >> 31,
                                    v58);
              RegionSize = v45;
              v53 = a4[1];
              if ( v53 >= 0 )
                v54 = ((unsigned int)v53 >> 1) & 0x3FFFFFFF;
              else
                v54 = v53 & 0x7FFFFFFF;
              CopyOutputString((struct _CALLBACKSTATUS *)&v63, (struct _LARGE_STRING *)a4, v54, v52);
LABEL_46:
              if ( !a8 && v45 != -1LL )
              {
                v55 = (unsigned int)*a4 >> 1;
                if ( a4[1] < 0 )
                  v55 = *a4;
                if ( v45 > v55 )
                  LODWORD(v45) = v55;
              }
              goto LABEL_53;
            }
          }
        }
      }
    }
  }
  LODWORD(v45) = 0;
LABEL_53:
  if ( v12 != v70 && v12 != v71 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v65);
  }
  return (unsigned __int8 *)(unsigned int)v45;
}
