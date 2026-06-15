/*
 * XREFs of ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18001B350
 * Callers:
 *     ??$MakeAndInitialize@VCProcess@@V1@PEAXAEAKAEAKPEAGPEAGAEA_KPEAG_NPEAGAEA_NAEA_NAEAHAEAHAEAHAEAHAEAHAEAHAEA_NAEAHAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCProcess@@$$QEAPEAXAEAK2$$QEAPEAG3AEA_K3$$QEA_N3AEA_N6AEAH77777677@Z @ 0x18001E2A0 (--$MakeAndInitialize@VCProcess@@V1@PEAXAEAKAEAKPEAGPEAGAEA_KPEAG_NPEAGAEA_NAEA_NAEAHAEAHAEAHAEAH.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180013EB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180013F48 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18001C294 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CProcess::RuntimeClassInitialize(
        CProcess *this,
        void *a2,
        int a3,
        int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        unsigned __int64 a7,
        const unsigned __int16 *a8,
        int a9,
        const unsigned __int16 *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        bool a19,
        int a20,
        int a21)
{
  HANDLE *v22; // rdi
  char *v23; // r14
  DWORD LastError; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v26; // rax
  const char *v27; // r9
  void *v29; // rdi
  DWORD v30; // ebx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // ebx
  void *v36; // r15
  DWORD v37; // ebx
  unsigned __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // ebx
  void *v43; // r15
  DWORD v44; // ebx
  unsigned __int64 v45; // r9
  int v46; // eax
  unsigned int v47; // ebx
  const unsigned __int16 *v48; // rax
  void *v49; // r15
  DWORD v50; // ebx
  int v51; // eax
  unsigned int v52; // ebx
  int v53; // eax
  unsigned int v54; // ebx
  DWORD v55; // r14d
  unsigned int v56; // r15d
  HANDLE v57; // rbx
  void *v58; // rdi
  HANDLE v59; // rax
  _BYTE *v60; // rdx
  _DWORD *i; // rax
  HANDLE v62; // r12
  HANDLE v63; // rdi
  DWORD v64; // ebx
  unsigned int v65; // eax
  _DWORD *v66; // rcx
  unsigned int v67; // eax
  _DWORD *v68; // rsi
  _DWORD *v69; // rcx
  __int64 dwDesiredAccess; // [rsp+20h] [rbp-E8h]
  __int64 dwDesiredAccessa; // [rsp+20h] [rbp-E8h]
  __int64 dwDesiredAccessb; // [rsp+20h] [rbp-E8h]
  HANDLE hSourceHandle; // [rsp+40h] [rbp-C8h] BYREF
  const unsigned __int16 *v74; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE TargetHandle; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE ProcessInformation[40]; // [rsp+58h] [rbp-B0h] BYREF
  DWORD dwProcessId[4]; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+90h] [rbp-78h] BYREF
  const unsigned __int16 **v79; // [rsp+B0h] [rbp-58h]
  __int64 v80; // [rsp+B8h] [rbp-50h]
  HANDLE *p_hSourceHandle; // [rsp+C0h] [rbp-48h]
  __int64 v82; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  hSourceHandle = a2;
  v74 = a10;
  *((_DWORD *)this + 40) = a3;
  *((_DWORD *)this + 41) = a4;
  *((_DWORD *)this + 48) = a9;
  *((_DWORD *)this + 105) = a11;
  *((_DWORD *)this + 106) = a12;
  *((_DWORD *)this + 107) = a13;
  *((_DWORD *)this + 108) = a14;
  *((_DWORD *)this + 110) = a16;
  *((_DWORD *)this + 111) = a17;
  *((_DWORD *)this + 116) = a18;
  *((_DWORD *)this + 109) = a15;
  *((_QWORD *)this + 26) = a7;
  *((_BYTE *)this + 786) = a19;
  *((_DWORD *)this + 117) = a20;
  *((_DWORD *)this + 118) = a21;
  if ( a2 )
  {
    v22 = (HANDLE *)((char *)this + 152);
    v23 = (char *)*((_QWORD *)this + 19);
    if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v23);
      SetLastError(LastError);
    }
    *v22 = 0LL;
    CurrentProcess = GetCurrentProcess();
    v26 = GetCurrentProcess();
    if ( !DuplicateHandle(v26, hSourceHandle, CurrentProcess, v22, 0x101000u, 0, 0) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xA17,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
               v27);
  }
  v29 = (void *)*((_QWORD *)this + 21);
  if ( v29 )
  {
    v30 = GetLastError();
    CoTaskMemFree(v29);
    SetLastError(v30);
  }
  *((_QWORD *)this + 21) = 0LL;
  v31 = -1LL;
  v32 = -1LL;
  do
    ++v32;
  while ( a5[v32] );
  v35 = _AllocStringWorker<CTCoAllocPolicy>(
          (__int64)this,
          (__int64)a2,
          a5,
          v32,
          dwDesiredAccess,
          (unsigned __int16 **)this + 21);
  if ( v35 >= 0 )
  {
    v36 = (void *)*((_QWORD *)this + 23);
    if ( v36 )
    {
      v37 = GetLastError();
      CoTaskMemFree(v36);
      SetLastError(v37);
    }
    *((_QWORD *)this + 23) = 0LL;
    v38 = -1LL;
    do
      ++v38;
    while ( a8[v38] );
    v39 = _AllocStringWorker<CTCoAllocPolicy>(v34, v33, a8, v38, dwDesiredAccessa, (unsigned __int16 **)this + 23);
    v42 = v39;
    if ( v39 >= 0 )
    {
      if ( !a6 )
        goto LABEL_25;
      v43 = (void *)*((_QWORD *)this + 22);
      if ( v43 )
      {
        v44 = GetLastError();
        CoTaskMemFree(v43);
        SetLastError(v44);
      }
      *((_QWORD *)this + 22) = 0LL;
      v45 = -1LL;
      do
        ++v45;
      while ( a6[v45] );
      v46 = _AllocStringWorker<CTCoAllocPolicy>(v41, v40, a6, v45, dwDesiredAccessb, (unsigned __int16 **)this + 22);
      v47 = v46;
      if ( v46 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA26,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v46);
        return v47;
      }
      else
      {
LABEL_25:
        v48 = v74;
        if ( !v74 )
          goto LABEL_61;
        v49 = (void *)*((_QWORD *)this + 25);
        if ( v49 )
        {
          v50 = GetLastError();
          CoTaskMemFree(v49);
          SetLastError(v50);
          v48 = v74;
        }
        *((_QWORD *)this + 25) = 0LL;
        do
          ++v31;
        while ( v48[v31] );
        v51 = _AllocStringWorker<CTCoAllocPolicy>(v41, v40, v48, v31, dwDesiredAccessb, (unsigned __int16 **)this + 25);
        v52 = v51;
        if ( v51 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA2A,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
            (const char *)(unsigned int)v51);
          return v52;
        }
        else
        {
LABEL_61:
          if ( hSourceHandle && (v53 = CProcess::SetupProcessTerminationWatcher(this), v54 = v53, v53 < 0) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA33,
              (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              (const char *)(unsigned int)v53);
            return v54;
          }
          else
          {
            v55 = *((_DWORD *)this + 40);
            LODWORD(hSourceHandle) = v55;
            v56 = 0;
            TargetHandle = 0LL;
            v57 = GetCurrentProcess();
            v58 = (void *)*((_QWORD *)this + 19);
            v59 = GetCurrentProcess();
            if ( DuplicateHandle(v59, v58, v57, &TargetHandle, 0x1000u, 0, 0) )
            {
              while ( 1 )
              {
                v60 = (_BYTE *)*((_QWORD *)this + 17);
                if ( v60 == *((_BYTE **)this + 18) )
                {
                  std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(
                    (__int64)this + 128,
                    v60,
                    &hSourceHandle);
                }
                else
                {
                  *(_DWORD *)v60 = v55;
                  *((_QWORD *)this + 17) += 4LL;
                }
                v55 = 0;
                LODWORD(hSourceHandle) = 0;
                if ( TargetHandle )
                {
                  if ( NtQueryInformationProcess(TargetHandle, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) >= 0 )
                    break;
                }
LABEL_48:
                ++v56;
                if ( !v55 || v56 >= 0xA )
                  goto LABEL_50;
              }
              v55 = dwProcessId[0];
              LODWORD(hSourceHandle) = dwProcessId[0];
              for ( i = (_DWORD *)*((_QWORD *)this + 16); ; ++i )
              {
                if ( i == *((_DWORD **)this + 17) )
                {
                  v62 = OpenProcess(0x1000u, 0, dwProcessId[0]);
                  v63 = TargetHandle;
                  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                  {
                    v64 = GetLastError();
                    CloseHandle(v63);
                    SetLastError(v64);
                  }
                  TargetHandle = v62;
                  goto LABEL_48;
                }
                if ( *i == dwProcessId[0] )
                  break;
              }
              v69 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
              if ( *v69 > 4u )
              {
                LODWORD(hSourceHandle) = *((_DWORD *)this + 40);
                LODWORD(v74) = v55;
                p_hSourceHandle = &hSourceHandle;
                v82 = 4LL;
                v79 = &v74;
                v80 = 4LL;
                tlgWriteTransfer_EventWriteTransfer(
                  (__int64)v69,
                  (unsigned __int8 *)dword_180050F61,
                  0LL,
                  0LL,
                  4u,
                  &v78);
              }
            }
LABEL_50:
            v65 = 0;
            v66 = (_DWORD *)((char *)this + 216);
            do
            {
              *v66 = -2147023728;
              ++v65;
              ++v66;
            }
            while ( v65 < 2 );
            v67 = 0;
            v68 = (_DWORD *)((char *)this + 496);
            do
            {
              *v68 = 0;
              ++v67;
              ++v68;
            }
            while ( v67 < 2 );
            if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
              CloseHandle(TargetHandle);
            return 0LL;
          }
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1F,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v39);
      return v42;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1D,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v35);
    return (unsigned int)v35;
  }
}
