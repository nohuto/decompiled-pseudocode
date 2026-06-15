/*
 * XREFs of ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140008D70 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x140008DC8 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x140008E04 (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140008E4C (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x140009898 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x14000C070 (-Yield@CAudioPump@@AEAA-AW4TEventType@1@PEA_K@Z.c)
 *     ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x14000C340 (-RebaseSums@-$LinearFitT@$0BAA@@@QEAA_NXZ.c)
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140023474 (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x140026164 (-AERTLockCurrentThread@@YAJXZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     floor @ 0x1400291B0 (floor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x1400388E2 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x140039010 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0pii_EtwEventWriteTransfer @ 0x140039072 (McTemplateU0pii_EtwEventWriteTransfer.c)
 *     McTemplateU0pit_EtwEventWriteTransfer @ 0x1400390FC (McTemplateU0pit_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x14003917C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0pxxxixqxxx_EtwEventWriteTransfer @ 0x140039272 (McTemplateU0pxxxixqxxx_EtwEventWriteTransfer.c)
 *     ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x14007399C (-AddToSums@-$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z.c)
 *     ?RemoveFromMMCSS@CAudioPump@@AEAAXXZ @ 0x140073D30 (-RemoveFromMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ @ 0x140074070 (-UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x140074120 (McTemplateU0pi_EtwEventWriteTransfer.c)
 *     ?AERTUnlockCurrentThread@@YAJXZ @ 0x14007AE54 (-AERTUnlockCurrentThread@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioPump::OutputPumpWorkRoutine(CAudioPump *this)
{
  __int64 v2; // rcx
  char v3; // bl
  void *v4; // rdx
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, HANDLE, char *); // rbx
  HANDLE CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // r15d
  DWORD LastError; // ebx
  signed __int32 v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  void *v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  double v26; // xmm0_8
  double v27; // xmm0_8
  int v28; // ecx
  double v29; // xmm1_8
  double v30; // xmm0_8
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  char *v37; // rbx
  __int64 v38; // r14
  unsigned int v39; // r8d
  char *v40; // r12
  __int64 v41; // r15
  signed __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r14
  __int64 v46; // rsi
  __int128 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r10
  __int128 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rax
  unsigned int v54; // ecx
  int v55; // eax
  double v56; // xmm2_8
  double v57; // xmm4_8
  double v58; // xmm3_8
  double v59; // xmm1_8
  __int64 v60; // r12
  unsigned __int64 v61; // r15
  double v62; // xmm6_8
  double v63; // xmm0_8
  unsigned int v64; // edx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rbx
  double LowPart; // xmm0_8
  double v72; // xmm0_8
  int v73; // ecx
  double v74; // xmm1_8
  __int64 v75; // rbx
  unsigned int v76; // eax
  char v77; // al
  int v78; // ecx
  __int64 v79; // rcx
  int v80; // eax
  int v81; // eax
  int v82; // ebx
  CAudioPump *v83; // rcx
  void *v84; // rdx
  __int64 v85; // rcx
  int v86; // eax
  wil::details *v87; // rcx
  char v88; // al
  char v89; // al
  wil::details *v90; // rcx
  __int64 v91; // rcx
  void *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v97; // [rsp+28h] [rbp-E0h]
  const char *v98; // [rsp+30h] [rbp-D8h]
  char v99; // [rsp+68h] [rbp-A0h]
  char v100; // [rsp+69h] [rbp-9Fh]
  char v101; // [rsp+6Ch] [rbp-9Ch]
  __int64 v102; // [rsp+70h] [rbp-98h] BYREF
  __int64 v103; // [rsp+78h] [rbp-90h] BYREF
  __int64 v104; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+88h] [rbp-80h] BYREF
  __int64 v106; // [rsp+90h] [rbp-78h]
  __int64 v107; // [rsp+98h] [rbp-70h]
  char *v108; // [rsp+A0h] [rbp-68h]
  LARGE_INTEGER v109; // [rsp+A8h] [rbp-60h] BYREF
  char *v110; // [rsp+B0h] [rbp-58h]
  __int64 v111; // [rsp+B8h] [rbp-50h]
  __int64 v112; // [rsp+C0h] [rbp-48h]
  char v113[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v114; // [rsp+D0h] [rbp-38h]
  __int64 v115; // [rsp+D8h] [rbp-30h]
  int v116; // [rsp+ECh] [rbp-1Ch]
  __int128 v117; // [rsp+F0h] [rbp-18h]
  __int128 v118; // [rsp+100h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v117 = *(_OWORD *)((char *)this + 4680);
  v118 = v117;
  EtwEventActivityIdControl(4LL, &v118);
  v3 = 0;
  v100 = 0;
  if ( (byte_1400CF981 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v2, &AudioCore_Pump_Process_Start, this, 3LL);
  *((_DWORD *)this + 79) = 40;
  CAudioPump::AttachToMMCSS(this);
  v5 = *((_QWORD *)this + 583);
  if ( v5 )
  {
    v6 = *(void (__fastcall **)(__int64, HANDLE, char *))(*(_QWORD *)v5 + 40LL);
    CurrentThread = GetCurrentThread();
    v6(v5, CurrentThread, (char *)this + 4672);
    v3 = 0;
  }
  wil::details::SetEvent(*((wil::details **)this + 30), v4);
  if ( (int)AERTLockCurrentThread() >= 0 )
  {
    v3 = 1;
    v100 = 1;
  }
  v103 = *((_QWORD *)this + 581);
  if ( (byte_1400CF981 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v9, v8, this);
  v11 = CAudioPump::Yield(this, &v103);
  if ( (byte_1400CF981 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v10, &AudioCore_Pump_Process_Start, this, 4LL);
  if ( !*((_BYTE *)this + 76) )
  {
    while ( 1 )
    {
      if ( !*((_BYTE *)this + 4656) )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
        v108 = (char *)this + 160;
        if ( *((_BYTE *)this + 76) )
        {
          if ( this != (CAudioPump *)-160LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
          v110 = (char *)this + 120;
          if ( this != (CAudioPump *)-160LL )
          {
            LastError = GetLastError();
            LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
            SetLastError(LastError);
          }
          v108 = 0LL;
          v13 = _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
              *((_DWORD *)this + 79) = 40;
          }
          else
          {
            v80 = *((_DWORD *)this + 79);
            if ( v80 && (v81 = v80 - 1, (*((_DWORD *)this + 79) = v81) == 0)
              || CAudioPump::InputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26)
              || *((_BYTE *)this + 4656) )
            {
              *((_DWORD *)this + 79) = 40;
              v82 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 40LL))(*((_QWORD *)this + 25));
              if ( v82 == -2147418113 )
                v82 = 0;
              wil::details::in1diag3::Log_IfFailedMsg(
                retaddr,
                (void *)0x2CE,
                (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                (const char *)(unsigned int)v82,
                (__int64)"SetPinInactive failed",
                v98);
              if ( v82 < 0 )
              {
                CAudioPump::CancelTimer(v83, *((void **)this + 34));
                CAudioPump::CancelDeadline(this);
              }
              else
              {
                _InterlockedExchange((volatile __int32 *)this + 78, 0);
                CAudioPump::CancelTimer(v83, *((void **)this + 34));
                CAudioPump::CancelDeadline(this);
                v85 = *((_QWORD *)this + 38);
                if ( v85 )
                {
                  v86 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v85 + 24LL))(v85);
                  if ( v86 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x2DE,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                      (const char *)(unsigned int)v86,
                      v97);
                }
              }
              v87 = (wil::details *)*((_QWORD *)this + 51);
              if ( v87 )
                wil::details::SetEvent(v87, v84);
            }
          }
          if ( this != (CAudioPump *)-120LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)this + 3);
        }
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
      switch ( v11 )
      {
        case 2:
          if ( *((_BYTE *)this + 4656) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), 1LL);
            goto LABEL_39;
          }
          break;
        case 32:
          if ( *((_BYTE *)this + 4656) )
          {
            CAudioPump::UpdatePresentationTimestamp(this);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), 0LL);
LABEL_140:
            v90 = (wil::details *)*((_QWORD *)this + 51);
            if ( v90 )
              wil::details::SetEvent(v90, v23);
            goto LABEL_39;
          }
          break;
        case 16:
          if ( *((_BYTE *)this + 4656) )
          {
            CAudioPump::UpdatePresentationTimestamp(this);
            CAudioPump::CheckForPause(this);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), 0LL);
            goto LABEL_39;
          }
          break;
        default:
          if ( *((_BYTE *)this + 4656) )
            goto LABEL_24;
          break;
      }
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
        goto LABEL_37;
LABEL_24:
      (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 25) + 24LL))(
        *((_QWORD *)this + 25),
        &v102,
        v113);
      v16 = (_QWORD *)((char *)this + 288);
      if ( !v116 )
      {
        v102 = 0LL;
LABEL_145:
        v17 = 0LL;
        goto LABEL_146;
      }
      if ( *v16 )
      {
        v17 = *((_QWORD *)this + 12);
        if ( v102 )
        {
          if ( v17 + *((_QWORD *)this + 27) - v102 <= 0 )
            goto LABEL_145;
        }
        else
        {
          v17 *= 2LL;
        }
      }
      else
      {
        v15 = *((_QWORD *)this + 12);
        v17 = v15 + *((_QWORD *)this + 27) - v102;
        v14 = v17 % v15;
        if ( v17 % v15 )
        {
          v15 -= v14;
          v17 += v15;
        }
      }
      if ( v17 )
      {
        v15 = *((_QWORD *)this + 29);
        if ( v15 )
        {
          *((_BYTE *)this + 74) = 1;
          v18 = *((_QWORD *)this + 43);
          if ( !v18 || v18 >= 20000 )
          {
            v88 = (unsigned int)AvSetMultimediaMode(v15, 1LL) != 0;
            *((_BYTE *)this + 75) = v88;
            if ( (byte_1400CF981 & 8) != 0 )
              McTemplateU0pit_EtwEventWriteTransfer(
                v15,
                (unsigned int)&AudioCore_Pump_MMBufferingStart,
                (_DWORD)this,
                0,
                v88);
          }
        }
        if ( v17 > 0 && (int)(*((float *)this + 26) * (double)(int)v17 / 10000000.0 + 0.5) )
        {
          do
          {
            v19 = v17;
            if ( v17 > *((_QWORD *)this + 12) )
              v19 = *((_QWORD *)this + 12);
            v104 = v19;
            (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 10) + 32LL))(
              *((_QWORD *)this + 10),
              &v104,
              v113);
            v20 = (unsigned int)(int)(*((float *)this + 26) * (double)(int)v104 / 10000000.0 + 0.5);
            v115 += v20;
            v114 += v20;
            v17 -= v104;
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 32LL))(*((_QWORD *)this + 25));
          }
          while ( (int)(*((float *)this + 26) * (double)(int)v17 / 10000000.0 + 0.5) );
          goto LABEL_37;
        }
      }
LABEL_146:
      if ( (byte_1400CF981 & 4) != 0 )
        McTemplateU0pi_EtwEventWriteTransfer(v15, v14, this, v17);
      if ( !*v16 && v102 > 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 32LL))(*((_QWORD *)this + 25));
LABEL_37:
      v21 = (__int64 *)*((_QWORD *)this + 10);
      v22 = *v21;
      if ( v11 != 4 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(v22 + 48))(v21, 1LL);
        if ( v11 != 32 )
          goto LABEL_39;
        goto LABEL_140;
      }
      (*(void (__fastcall **)(__int64 *, _QWORD))(v22 + 48))(v21, 0LL);
      v91 = *((_QWORD *)this + 50);
      if ( v91 )
      {
        v92 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 24LL))(v91);
        SetEvent(v92);
      }
LABEL_39:
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v25 = PerformanceCount.QuadPart - v103;
      if ( PerformanceCount.QuadPart - v103 < 0 )
        v26 = (double)(int)(v25 & 1 | (v25 >> 1)) + (double)(int)(v25 & 1 | (v25 >> 1));
      else
        v26 = (double)(int)v25;
      v27 = v26 * 10000000.0;
      v28 = g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      {
        v28 = g_u64QPCFrequency & 1;
        v29 = (double)(int)(v28 | (g_u64QPCFrequency >> 1)) + (double)(int)(v28 | (g_u64QPCFrequency >> 1));
      }
      else
      {
        v29 = (double)(int)g_u64QPCFrequency;
      }
      v30 = v27 / v29;
      v31 = (unsigned int)(int)v30;
      *((_QWORD *)this + 42) = v31;
      *((_QWORD *)this + 46) += v31;
      ++*((_DWORD *)this + 94);
      if ( (byte_1400CF981 & 8) != 0 )
        McTemplateU0pii_EtwEventWriteTransfer(v28, v24, (_DWORD)this, (int)v30, *((_QWORD *)this + 41));
      if ( v31 > *((_QWORD *)this + 41) && _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
        *((_QWORD *)this + 45) = _InterlockedIncrement64((volatile signed __int64 *)this + 45);
      else
        _InterlockedExchange64((volatile __int64 *)this + 45, 0LL);
      v32 = *((_QWORD *)this + 29);
      if ( !v32 || !*((_BYTE *)this + 74) )
        goto LABEL_116;
      *((_BYTE *)this + 74) = 0;
      *((_QWORD *)this + 43) = *((_QWORD *)this + 42);
      if ( *((_BYTE *)this + 75) )
      {
        v89 = (unsigned int)AvSetMultimediaMode(v32, 0LL) == 0;
        *((_BYTE *)this + 75) = v89;
        if ( (byte_1400CF981 & 8) != 0 )
          McTemplateU0pit_EtwEventWriteTransfer(
            v32,
            (unsigned int)&AudioCore_Pump_MMBufferingStop,
            (_DWORD)this,
            0,
            v89);
        if ( *((_BYTE *)this + 75) )
          goto LABEL_116;
      }
      v33 = *((_QWORD *)this + 12);
      v34 = (unsigned int)(int)(float)((float)(int)v33 * 0.60000002);
      v107 = v34;
      v35 = *((_QWORD *)this + 580);
      if ( v33 >= 1000000 )
        goto LABEL_86;
      v106 = 0LL;
      v101 = 0;
      v36 = *((_QWORD *)this + 578);
      if ( v36 )
      {
        v106 = v35 - v36;
        v101 = 1;
        ++*((_QWORD *)this + 579);
      }
      v37 = (char *)this + 424;
      v38 = *((_QWORD *)this + 579);
      v39 = *((_DWORD *)this + 108);
      v40 = (char *)this + 16 * (unsigned __int8)v39 + 528;
      if ( !v39 )
      {
        *(_QWORD *)v40 = v38;
        *((_QWORD *)v40 + 1) = v35;
        goto LABEL_114;
      }
      v99 = 0;
      v41 = 2LL * (unsigned __int8)(v39 - 1);
      v42 = abs64(v35 - *(_QWORD *)&v37[16 * (unsigned __int8)(v39 - 1) + 112]);
      if ( v38 > *((_QWORD *)this + 2 * (unsigned __int8)(v39 - 1) + 66) + *((_QWORD *)this + 64)
        || v42 > *((_QWORD *)this + 65) )
      {
        if ( v39 > 0x100 )
        {
          if ( (v39 & 0x1FF) == 0 && !(unsigned __int8)LinearFitT<256>::RebaseSums((char *)this + 424) )
            v99 = 1;
          v43 = *(_QWORD *)v40 - *((_QWORD *)this + 58);
          v44 = *((_QWORD *)v40 + 1) - *((_QWORD *)this + 59);
          *((_QWORD *)this + 62) -= v43 * v44;
          *((_QWORD *)this + 60) -= v43;
          *((_QWORD *)this + 61) -= v44;
          *((_QWORD *)this + 63) -= v43 * v43;
        }
        *(_QWORD *)v40 = v38;
        *((_QWORD *)v40 + 1) = v35;
        v45 = v38 - *((_QWORD *)this + 58);
        v46 = v35 - *((_QWORD *)this + 59);
        v47 = v45 * (__int128)v45;
        v111 = *((_QWORD *)&v47 + 1);
        if ( (__int64)v47 < 0 )
        {
          if ( *((_QWORD *)&v47 + 1) == -1LL )
            goto LABEL_60;
        }
        else if ( !*((_QWORD *)&v47 + 1) )
        {
LABEL_60:
          v48 = *((_QWORD *)this + 63);
          v49 = v47 + v48;
          if ( v48 < 0 != (__int64)v47 < 0 || v48 < 0 == v49 < 0 )
          {
            v50 = v45 * (__int128)v46;
            v112 = *((_QWORD *)&v50 + 1);
            if ( (__int64)v50 < 0 )
            {
              if ( *((_QWORD *)&v50 + 1) == -1LL )
                goto LABEL_64;
            }
            else if ( !*((_QWORD *)&v50 + 1) )
            {
LABEL_64:
              v51 = *((_QWORD *)this + 62);
              v52 = v50 + v51;
              if ( v51 < 0 != (__int64)v50 < 0 || v51 < 0 == v52 < 0 )
              {
                *((_QWORD *)this + 62) = v52;
                *((_QWORD *)this + 60) += v45;
                *((_QWORD *)this + 61) += v46;
                *((_QWORD *)this + 63) = v49;
                ++*((_DWORD *)this + 108);
                goto LABEL_67;
              }
            }
          }
        }
        if ( (unsigned __int8)LinearFitT<256>::RebaseSums((char *)this + 424)
          && (unsigned __int8)LinearFitT<256>::AddToSums(v93, v40) )
        {
LABEL_67:
          if ( v99 )
            goto LABEL_114;
          if ( *(_QWORD *)v40 <= *(_QWORD *)&v37[8 * v41 + 104] )
            goto LABEL_114;
          v53 = *((_QWORD *)this + 65);
          if ( v53 > 0 && v42 > v53 )
            goto LABEL_114;
        }
        else
        {
LABEL_114:
          LinearFitT<256>::InitWithPoint((__int64)this + 424, v40);
        }
        v54 = *((_DWORD *)this + 108);
        if ( v54 )
        {
          v55 = 256;
          if ( v54 < 0x100 )
            v55 = *((_DWORD *)this + 108);
          v56 = (double)(int)*((_QWORD *)this + 60);
          v57 = (double)v55;
          v58 = (double)(int)*((_QWORD *)this + 63) - v56 * v56 / (double)v55;
          if ( COERCE_DOUBLE(*(_QWORD *)&v58 & _xmm) <= 0.01 || v54 <= 4 )
            v59 = *((double *)this + 57);
          else
            v59 = ((double)(int)*((_QWORD *)this + 62) - (double)(int)*((_QWORD *)this + 61) * v56 / v57) / v58;
          *((double *)this + 56) = v59;
          *((double *)this + 55) = ((double)(int)*((_QWORD *)this + 61) - v59 * v56) / v57;
        }
      }
      v60 = *((_QWORD *)this + 580);
      *((_QWORD *)this + 578) = v60;
      v61 = *((_QWORD *)this + 579);
      v62 = *((double *)this + 56);
      v63 = floor(
              (double)(*((_DWORD *)this + 1158) - *((_DWORD *)this + 116)) * v62
            + (double)(int)*((_QWORD *)this + 59)
            + *((double *)this + 55)
            + 0.5);
      v35 = (unsigned int)(int)v63;
      v64 = *((_DWORD *)this + 108);
      if ( v64 <= 1 )
      {
        v66 = 0LL;
      }
      else
      {
        v65 = (unsigned __int8)v64;
        if ( v64 <= 0x100 )
          v65 = 0LL;
        v66 = *(_QWORD *)&v37[16 * (unsigned __int8)(v64 - 1) + 104] - *(_QWORD *)&v37[16 * v65 + 104];
      }
      v67 = *((_QWORD *)this + 12);
      v68 = v66 * v67;
      v69 = v66 * v67 / 10000;
      if ( (byte_1400CF981 & 8) != 0 )
      {
        McTemplateU0pxxxixqxxx_EtwEventWriteTransfer(
          v68,
          v69,
          (_DWORD)this,
          v61,
          v60,
          (int)v63,
          v35 - v60,
          v106,
          v101,
          v67,
          (int)v62,
          v68 / 10000);
        v61 = *((_QWORD *)this + 579);
      }
      v33 = *((_QWORD *)this + 12);
      if ( v35 - v60 > v33 )
      {
        LinearFitT<256>::Reset((__int64)this + 424);
        *((_QWORD *)this + 578) = 0LL;
        *((_QWORD *)this + 579) = 0LL;
        v33 = *((_QWORD *)this + 12);
      }
      else if ( v61 > 0xA )
      {
        v34 = v107;
        goto LABEL_86;
      }
      v35 = *((_QWORD *)this + 580);
      v34 = v107;
LABEL_86:
      v70 = v33 - 20000;
      QueryPerformanceCounter(&v109);
      if ( v109.QuadPart < 0 )
        LowPart = (double)(int)(v109.LowPart & 1 | ((unsigned __int64)v109.QuadPart >> 1))
                + (double)(int)(v109.LowPart & 1 | ((unsigned __int64)v109.QuadPart >> 1));
      else
        LowPart = (double)(int)v109.LowPart;
      v72 = LowPart * 10000000.0;
      v73 = g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      {
        v73 = g_u64QPCFrequency & 1;
        v74 = (double)(int)(v73 | (g_u64QPCFrequency >> 1)) + (double)(int)(v73 | (g_u64QPCFrequency >> 1));
      }
      else
      {
        v74 = (double)(int)g_u64QPCFrequency;
      }
      v75 = v34 - (unsigned int)(int)(v72 / v74) + v35 + v70;
      if ( v75 < 0 )
      {
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McTemplateU0pit_EtwEventWriteTransfer(v73, (unsigned int)&AudioCore_Pump_MissedDeadline, (_DWORD)this, v75, 1);
        LODWORD(v75) = 0;
      }
      else
      {
        v76 = v75 - 50000;
        if ( v75 - 50000 > 0 )
          goto LABEL_92;
      }
      v76 = 0;
LABEL_92:
      v77 = AvTaskIndexYield(*((_QWORD *)this + 29), (unsigned int)v75, v76);
      if ( (byte_1400CF981 & 8) != 0 )
      {
        McTemplateU0pit_EtwEventWriteTransfer(v78, (unsigned int)&AudioCore_Pump_SetDeadline, (_DWORD)this, v75, v77);
LABEL_116:
        if ( (byte_1400CF981 & 8) != 0 )
          McTemplateU0p_EtwEventWriteTransfer(v32, v24, this);
      }
      v11 = CAudioPump::Yield(this, &v103);
      v103 = *((_QWORD *)this + 581);
      if ( (byte_1400CF981 & 8) != 0 )
        McTemplateU0pq_EtwEventWriteTransfer(v79, &AudioCore_Pump_Process_Start, this, 5LL);
      if ( *((_BYTE *)this + 76) )
      {
        v3 = v100;
        break;
      }
    }
  }
  CAudioPump::CancelDeadline(this);
  CAudioPump::RemoveFromMMCSS(this);
  if ( v3 )
    AERTUnlockCurrentThread();
  if ( (byte_1400CF981 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v95, v94, this);
  EtwEventActivityIdControl(4LL, &v118);
  return 0LL;
}
