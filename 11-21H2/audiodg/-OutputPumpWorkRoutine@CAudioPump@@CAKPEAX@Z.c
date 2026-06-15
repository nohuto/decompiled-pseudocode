/*
 * XREFs of ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140001FCC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x140019D50 (-Yield@CAudioPump@@AEAA-AW4TEventType@1@PEA_K@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14001B5B8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x140022AE0 (-RebaseSums@-$LinearFitT@$0BAA@@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140028D5C (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x14002C424 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0pit_EtwEventWriteTransfer @ 0x14002C4A8 (McTemplateU0pit_EtwEventWriteTransfer.c)
 *     ?RemoveFromMMCSS@CAudioPump@@AEAAXXZ @ 0x14002C9C8 (-RemoveFromMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14002D254 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x14002D3A0 (-AERTLockCurrentThread@@YAJXZ.c)
 *     ?AERTUnlockCurrentThread@@YAJXZ @ 0x14002D5E0 (-AERTUnlockCurrentThread@@YAJXZ.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14002DF0C (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x14002E02C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x14002E134 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     floor @ 0x140030930 (floor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x14006B0FC (-AddToSums@-$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14006B19C (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ @ 0x14006BB3C (-UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x14006BBCC (McTemplateU0pi_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=6
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
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  void *v23; // rdx
  int v24; // r8d
  unsigned __int64 v25; // rcx
  double v26; // xmm0_8
  double v27; // xmm0_8
  int v28; // ecx
  double v29; // xmm1_8
  double v30; // xmm0_8
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // r15
  unsigned int *v38; // r13
  unsigned int v39; // ebx
  _QWORD *v40; // rsi
  __int64 v41; // r12
  signed __int64 v42; // r11
  bool v43; // bl
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // r14
  __int128 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r10
  __int128 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r9
  __int64 v54; // rax
  unsigned int v55; // ecx
  unsigned int v56; // edx
  int v57; // eax
  double v58; // xmm2_8
  double v59; // xmm4_8
  double v60; // xmm3_8
  __int64 v61; // rax
  double v62; // xmm1_8
  __int64 v63; // r15
  unsigned __int64 v64; // rsi
  double v65; // xmm6_8
  double v66; // xmm0_8
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rbx
  double LowPart; // xmm0_8
  double v72; // xmm0_8
  int v73; // ecx
  double v74; // xmm1_8
  __int64 v75; // rbx
  unsigned int v76; // eax
  int v77; // eax
  int v78; // ecx
  int v79; // r8d
  int v80; // ecx
  int v81; // r8d
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v85; // eax
  int v86; // eax
  int v87; // ebx
  CAudioPump *v88; // rcx
  void *v89; // rdx
  __int64 v90; // rcx
  int v91; // eax
  wil::details *v92; // rcx
  char v93; // al
  char v94; // al
  char v95; // al
  wil::details *v96; // rcx
  __int64 v97; // rcx
  void *v98; // rax
  __int64 v99; // rcx
  int v100; // [rsp+28h] [rbp-E0h]
  const char *v101; // [rsp+30h] [rbp-D8h]
  char v102; // [rsp+39h] [rbp-CFh]
  int v103; // [rsp+3Ch] [rbp-CCh]
  __int64 v104; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v105; // [rsp+48h] [rbp-C0h] BYREF
  int v106; // [rsp+50h] [rbp-B8h] BYREF
  int v107; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v108; // [rsp+60h] [rbp-A8h] BYREF
  signed __int64 v109; // [rsp+68h] [rbp-A0h]
  struct _RTL_CRITICAL_SECTION *v110; // [rsp+70h] [rbp-98h] BYREF
  __int64 v111; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-88h] BYREF
  __int64 v113; // [rsp+88h] [rbp-80h]
  __int64 v114; // [rsp+90h] [rbp-78h]
  CAudioPump *v115; // [rsp+98h] [rbp-70h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v117; // [rsp+A8h] [rbp-60h] BYREF
  CAudioPump *v118; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v119; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v120; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v121; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v122; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v123; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v124; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v126; // [rsp+F0h] [rbp-18h] BYREF
  LARGE_INTEGER v127; // [rsp+F8h] [rbp-10h] BYREF
  CAudioPump *v128; // [rsp+100h] [rbp-8h] BYREF
  __int64 v129; // [rsp+108h] [rbp+0h] BYREF
  CAudioPump *v130; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v131[4]; // [rsp+118h] [rbp+10h] BYREF
  char v132[8]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v133; // [rsp+140h] [rbp+38h]
  __int64 v134; // [rsp+148h] [rbp+40h]
  int v135; // [rsp+15Ch] [rbp+54h]
  __int128 v136; // [rsp+160h] [rbp+58h]
  __int128 v137; // [rsp+170h] [rbp+68h] BYREF
  char v138[16]; // [rsp+188h] [rbp+80h] BYREF
  CAudioPump **v139; // [rsp+198h] [rbp+90h]
  __int64 v140; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *v141; // [rsp+1A8h] [rbp+A0h]
  __int64 v142; // [rsp+1B0h] [rbp+A8h]
  __int64 *v143; // [rsp+1B8h] [rbp+B0h]
  __int64 v144; // [rsp+1C0h] [rbp+B8h]
  __int64 *v145; // [rsp+1C8h] [rbp+C0h]
  __int64 v146; // [rsp+1D0h] [rbp+C8h]
  __int64 *v147; // [rsp+1D8h] [rbp+D0h]
  __int64 v148; // [rsp+1E0h] [rbp+D8h]
  __int64 *v149; // [rsp+1E8h] [rbp+E0h]
  __int64 v150; // [rsp+1F0h] [rbp+E8h]
  int *v151; // [rsp+1F8h] [rbp+F0h]
  __int64 v152; // [rsp+200h] [rbp+F8h]
  __int64 *v153; // [rsp+208h] [rbp+100h]
  __int64 v154; // [rsp+210h] [rbp+108h]
  __int64 *v155; // [rsp+218h] [rbp+110h]
  __int64 v156; // [rsp+220h] [rbp+118h]
  __int64 *v157; // [rsp+228h] [rbp+120h]
  __int64 v158; // [rsp+230h] [rbp+128h]
  char v159[16]; // [rsp+238h] [rbp+130h] BYREF
  CAudioPump **v160; // [rsp+248h] [rbp+140h]
  __int64 v161; // [rsp+250h] [rbp+148h]
  __int64 *v162; // [rsp+258h] [rbp+150h]
  __int64 v163; // [rsp+260h] [rbp+158h]
  __int64 *v164; // [rsp+268h] [rbp+160h]
  __int64 v165; // [rsp+270h] [rbp+168h]
  char v166[16]; // [rsp+278h] [rbp+170h] BYREF
  CAudioPump **v167; // [rsp+288h] [rbp+180h]
  __int64 v168; // [rsp+290h] [rbp+188h]
  __int64 *v169; // [rsp+298h] [rbp+190h]
  __int64 v170; // [rsp+2A0h] [rbp+198h]
  int *v171; // [rsp+2A8h] [rbp+1A0h]
  __int64 v172; // [rsp+2B0h] [rbp+1A8h]
  char v173[16]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _QWORD *v174; // [rsp+2C8h] [rbp+1C0h]
  __int64 v175; // [rsp+2D0h] [rbp+1C8h]
  __int64 *v176; // [rsp+2D8h] [rbp+1D0h]
  __int64 v177; // [rsp+2E0h] [rbp+1D8h]
  char v178[16]; // [rsp+2E8h] [rbp+1E0h] BYREF
  CAudioPump **v179; // [rsp+2F8h] [rbp+1F0h]
  __int64 v180; // [rsp+300h] [rbp+1F8h]
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  v136 = *((_OWORD *)this + 292);
  v137 = v136;
  EtwEventActivityIdControl(4LL, &v137);
  v3 = 0;
  v102 = 0;
  if ( (byte_1400C1841 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v2, &AudioCore_Pump_Process_Start, this, 3LL);
  *((_DWORD *)this + 79) = 40;
  CAudioPump::AttachToMMCSS(this);
  v5 = *((_QWORD *)this + 582);
  if ( v5 )
  {
    v6 = *(void (__fastcall **)(__int64, HANDLE, char *))(*(_QWORD *)v5 + 40LL);
    CurrentThread = GetCurrentThread();
    v6(v5, CurrentThread, (char *)this + 4664);
    v3 = 0;
  }
  wil::details::SetEvent(*((wil::details **)this + 30), v4);
  if ( (int)AERTLockCurrentThread() >= 0 )
  {
    v3 = 1;
    v102 = 1;
  }
  v105 = *((_QWORD *)this + 580);
  if ( (byte_1400C1841 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v9, v8, this);
  v11 = CAudioPump::Yield((__int64)this, (__int64)&v105);
  if ( (byte_1400C1841 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v10, &AudioCore_Pump_Process_Start, this, 4LL);
  if ( !*((_BYTE *)this + 76) )
  {
    while ( 1 )
    {
      if ( !*((_BYTE *)this + 4648) )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
        v110 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 160);
        if ( *((_BYTE *)this + 76) )
        {
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v110);
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
          v131[1] = (char *)this + 120;
          if ( this != (CAudioPump *)-160LL )
          {
            LastError = GetLastError();
            LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
            SetLastError(LastError);
          }
          v110 = 0LL;
          v13 = _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
              *((_DWORD *)this + 79) = 40;
          }
          else
          {
            v85 = *((_DWORD *)this + 79);
            if ( v85 && (v86 = v85 - 1, (*((_DWORD *)this + 79) = v86) == 0)
              || CAudioPump::InputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26)
              || *((_BYTE *)this + 4648) )
            {
              *((_DWORD *)this + 79) = 40;
              v87 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 40LL))(*((_QWORD *)this + 25));
              if ( v87 == -2147418113 )
                v87 = 0;
              wil::details::in1diag3::Log_IfFailedMsg(
                retaddr,
                (void *)0x2CE,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                (const char *)(unsigned int)v87,
                (__int64)"SetPinInactive failed",
                v101);
              if ( v87 < 0 )
              {
                CAudioPump::CancelTimer(v88, *((void **)this + 34));
                CAudioPump::CancelDeadline(this);
              }
              else
              {
                _InterlockedExchange((volatile __int32 *)this + 78, 0);
                CAudioPump::CancelTimer(v88, *((void **)this + 34));
                CAudioPump::CancelDeadline(this);
                v90 = *((_QWORD *)this + 38);
                if ( v90 )
                {
                  v91 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 24LL))(v90);
                  if ( v91 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x2DE,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                      (const char *)(unsigned int)v91,
                      v100);
                }
              }
              v92 = (wil::details *)*((_QWORD *)this + 51);
              if ( v92 )
                wil::details::SetEvent(v92, v89);
            }
          }
          if ( this != (CAudioPump *)-120LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)this + 3);
        }
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
      v14 = *((_BYTE *)this + 4648);
      switch ( v11 )
      {
        case 2:
          if ( v14 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), 1LL);
            goto LABEL_39;
          }
          break;
        case 32:
          if ( v14 )
          {
            CAudioPump::UpdatePresentationTimestamp(this);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), 0LL);
LABEL_147:
            v96 = (wil::details *)*((_QWORD *)this + 51);
            if ( v96 )
              wil::details::SetEvent(v96, v23);
            goto LABEL_39;
          }
          break;
        case 16:
          if ( v14 )
          {
            CAudioPump::UpdatePresentationTimestamp(this);
            CAudioPump::CheckForPause(this);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), 0LL);
            goto LABEL_39;
          }
          break;
        default:
          if ( v14 )
            goto LABEL_24;
          break;
      }
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
        goto LABEL_37;
LABEL_24:
      (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 25) + 24LL))(
        *((_QWORD *)this + 25),
        &v104,
        v132);
      if ( !v135 )
      {
        v104 = 0LL;
LABEL_152:
        v17 = 0LL;
        goto LABEL_153;
      }
      if ( *((_QWORD *)this + 36) )
      {
        v17 = *((_QWORD *)this + 12);
        if ( v104 )
        {
          if ( v17 + *((_QWORD *)this + 27) - v104 <= 0 )
            goto LABEL_152;
        }
        else
        {
          v17 *= 2LL;
        }
      }
      else
      {
        v16 = *((_QWORD *)this + 12);
        v17 = v16 + *((_QWORD *)this + 27) - v104;
        v15 = v17 % v16;
        if ( v17 % v16 )
        {
          v16 -= v15;
          v17 += v16;
        }
      }
      if ( v17 )
      {
        v16 = *((_QWORD *)this + 29);
        if ( v16 )
        {
          *((_BYTE *)this + 74) = 1;
          v18 = *((_QWORD *)this + 43);
          if ( !v18 || v18 >= 20000 )
          {
            v93 = (unsigned int)AvSetMultimediaMode(v16, 1LL) != 0;
            *((_BYTE *)this + 75) = v93;
            if ( (byte_1400C1841 & 8) != 0 )
              McTemplateU0pit_EtwEventWriteTransfer(
                v16,
                (unsigned int)&AudioCore_Pump_MMBufferingStart,
                (_DWORD)this,
                0,
                v93);
          }
        }
        if ( v17 > 0 && (int)(*((float *)this + 26) * (double)(int)v17 / 10000000.0 + 0.5) )
        {
          do
          {
            v19 = v17;
            if ( v17 > *((_QWORD *)this + 12) )
              v19 = *((_QWORD *)this + 12);
            v111 = v19;
            (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 10) + 32LL))(
              *((_QWORD *)this + 10),
              &v111,
              v132);
            v20 = (unsigned int)(int)(*((float *)this + 26) * (double)(int)v111 / 10000000.0 + 0.5);
            v134 += v20;
            v133 += v20;
            v17 -= v111;
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 32LL))(*((_QWORD *)this + 25));
          }
          while ( (int)(*((float *)this + 26) * (double)(int)v17 / 10000000.0 + 0.5) );
          goto LABEL_37;
        }
      }
LABEL_153:
      if ( (byte_1400C1841 & 4) != 0 )
        McTemplateU0pi_EtwEventWriteTransfer(v16, v15, this, v17);
      if ( !*((_QWORD *)this + 36) && v104 > 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 32LL))(*((_QWORD *)this + 25));
LABEL_37:
      v21 = (__int64 *)*((_QWORD *)this + 10);
      v22 = *v21;
      if ( v11 != 4 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(v22 + 48))(v21, 1LL);
        if ( v11 != 32 )
          goto LABEL_39;
        goto LABEL_147;
      }
      (*(void (__fastcall **)(__int64 *, _QWORD))(v22 + 48))(v21, 0LL);
      v97 = *((_QWORD *)this + 50);
      if ( v97 )
      {
        v98 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v97 + 24LL))(v97);
        SetEvent(v98);
      }
LABEL_39:
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v25 = PerformanceCount.QuadPart - v105;
      if ( PerformanceCount.QuadPart - v105 < 0 )
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
      if ( (byte_1400C1841 & 8) != 0 )
      {
        v117 = *((_QWORD *)this + 41);
        v116 = (unsigned int)(int)v30;
        v115 = this;
        v160 = &v115;
        v161 = 8LL;
        v162 = &v116;
        v163 = 8LL;
        v164 = &v117;
        v165 = 8LL;
        McGenEventWrite_EtwEventWriteTransfer(
          v28,
          (unsigned int)&AudioCore_Pump_ProcPassDuration,
          v24,
          4,
          (__int64)v159);
      }
      if ( v31 > *((_QWORD *)this + 41) && _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
        *((_QWORD *)this + 45) = _InterlockedIncrement64((volatile signed __int64 *)this + 45);
      else
        _InterlockedExchange64((volatile __int64 *)this + 45, 0LL);
      v32 = *((_QWORD *)this + 29);
      if ( !v32 || !*((_BYTE *)this + 74) )
        goto LABEL_119;
      *((_BYTE *)this + 74) = 0;
      *((_QWORD *)this + 43) = *((_QWORD *)this + 42);
      if ( *((_BYTE *)this + 75) )
      {
        v94 = (unsigned int)AvSetMultimediaMode(v32, 0LL) == 0;
        *((_BYTE *)this + 75) = v94;
        if ( (byte_1400C1841 & 8) != 0 )
        {
          McTemplateU0pit_EtwEventWriteTransfer(
            v32,
            (unsigned int)&AudioCore_Pump_MMBufferingStop,
            (_DWORD)this,
            0,
            v94);
          v94 = *((_BYTE *)this + 75);
        }
        if ( v94 )
          goto LABEL_119;
      }
      v33 = *((_QWORD *)this + 12);
      v34 = (unsigned int)(int)(float)((float)(int)v33 * 0.60000002);
      v114 = v34;
      v35 = *((_QWORD *)this + 579);
      if ( v33 < 1000000 )
      {
        v113 = 0LL;
        v103 = 0;
        v36 = *((_QWORD *)this + 577);
        if ( v36 )
        {
          v113 = v35 - v36;
          v103 = 1;
          ++*((_QWORD *)this + 578);
        }
        v37 = *((_QWORD *)this + 578);
        v38 = (unsigned int *)((char *)this + 424);
        v39 = *((_DWORD *)this + 106);
        v40 = (_QWORD *)((char *)this + 16 * (unsigned __int8)v39 + 520);
        if ( v39 )
        {
          v41 = 2 * ((unsigned __int8)(v39 - 1) + 6LL);
          v42 = abs64(v35 - *(_QWORD *)&v38[4 * (unsigned __int8)(v39 - 1) + 26]);
          v109 = v42;
          if ( v37 <= *(_QWORD *)&v38[4 * (unsigned __int8)(v39 - 1) + 24] + *((_QWORD *)this + 63)
            && v42 <= *((_QWORD *)this + 64) )
          {
            goto LABEL_78;
          }
          if ( v39 <= 0x100 )
          {
            v43 = 0;
          }
          else
          {
            v43 = 0;
            if ( (v39 & 0x1FF) == 0 )
            {
              v95 = LinearFitT<256>::RebaseSums((char *)this + 424);
              v42 = v109;
              if ( !v95 )
                v43 = 1;
            }
            v44 = *v40 - *((_QWORD *)this + 57);
            v45 = v40[1] - *((_QWORD *)this + 58);
            *((_QWORD *)this + 61) -= v44 * v45;
            *((_QWORD *)this + 59) -= v44;
            *((_QWORD *)this + 60) -= v45;
            *((_QWORD *)this + 62) -= v44 * v44;
          }
          *v40 = v37;
          v40[1] = v35;
          v46 = v37 - *((_QWORD *)this + 57);
          v47 = v35 - *((_QWORD *)this + 58);
          v48 = v46 * (__int128)v46;
          v131[2] = *((_QWORD *)&v48 + 1);
          if ( (__int64)v48 < 0 )
          {
            if ( *((_QWORD *)&v48 + 1) == -1LL )
              goto LABEL_61;
          }
          else if ( !*((_QWORD *)&v48 + 1) )
          {
LABEL_61:
            v49 = *((_QWORD *)this + 62);
            v50 = v48 + v49;
            if ( v49 < 0 != (__int64)v48 < 0 || v49 < 0 == v50 < 0 )
            {
              v51 = v46 * (__int128)v47;
              v131[3] = *((_QWORD *)&v51 + 1);
              if ( (__int64)v51 < 0 )
              {
                if ( *((_QWORD *)&v51 + 1) == -1LL )
                  goto LABEL_65;
              }
              else if ( !*((_QWORD *)&v51 + 1) )
              {
LABEL_65:
                v52 = *((_QWORD *)this + 61);
                v53 = v51 + v52;
                if ( v52 < 0 != (__int64)v51 < 0 || v52 < 0 == v53 < 0 )
                {
                  *((_QWORD *)this + 61) = v53;
                  *((_QWORD *)this + 59) += v46;
                  *((_QWORD *)this + 60) += v47;
                  *((_QWORD *)this + 62) = v50;
                  ++*v38;
LABEL_68:
                  if ( v43 )
                    goto LABEL_172;
                  if ( *v40 <= *(_QWORD *)&v38[2 * v41] )
                    goto LABEL_172;
                  v54 = *((_QWORD *)this + 64);
                  if ( v54 > 0 && v42 > v54 )
                    goto LABEL_172;
                  v55 = *v38;
                  v39 = *v38;
                  if ( !*v38 )
                    goto LABEL_78;
                  v56 = *v38;
                  if ( v55 >= 0x100 )
                  {
                    v57 = 256;
LABEL_74:
                    v58 = (double)(int)*((_QWORD *)this + 59);
                    v59 = (double)v57;
                    v60 = (double)(int)*((_QWORD *)this + 62) - v58 * v58 / (double)v57;
                    if ( COERCE_DOUBLE(*(_QWORD *)&v60 & _xmm) <= 0.01 || v56 <= 4 )
                    {
                      v62 = *((double *)this + 56);
                      v61 = *((_QWORD *)this + 60);
                    }
                    else
                    {
                      v61 = *((_QWORD *)this + 60);
                      v62 = ((double)(int)*((_QWORD *)this + 61) - (double)(int)v61 * v58 / v59) / v60;
                    }
                    *((double *)this + 55) = v62;
                    *((double *)this + 54) = ((double)(int)v61 - v58 * v62) / v59;
                    v39 = v55;
LABEL_78:
                    v63 = *((_QWORD *)this + 579);
                    *((_QWORD *)this + 577) = v63;
                    v64 = *((_QWORD *)this + 578);
                    v65 = *((double *)this + 55);
                    v66 = floor(
                            (double)(*((_DWORD *)this + 1156) - *((_DWORD *)this + 114)) * v65
                          + (double)(int)*((_QWORD *)this + 58)
                          + *((double *)this + 54)
                          + 0.5);
                    v35 = (unsigned int)(int)v66;
                    if ( v39 <= 1 )
                    {
                      v68 = 0LL;
                    }
                    else
                    {
                      v67 = (unsigned __int8)v39;
                      if ( v39 <= 0x100 )
                        v67 = 0LL;
                      v68 = *(_QWORD *)&v38[4 * (unsigned __int8)(v39 - 1) + 24] - *(_QWORD *)&v38[4 * v67 + 24];
                    }
                    v33 = *((_QWORD *)this + 12);
                    v69 = v33;
                    if ( (byte_1400C1841 & 8) != 0 )
                    {
                      v126 = v33 * v68 / 10000;
                      v125 = (unsigned int)(int)v65;
                      v124 = v33;
                      v106 = v103;
                      v123 = v113;
                      v122 = v35 - v63;
                      v121 = (unsigned int)(int)v66;
                      v120 = v63;
                      v119 = v64;
                      v118 = this;
                      v139 = &v118;
                      v140 = 8LL;
                      v141 = &v119;
                      v142 = 8LL;
                      v143 = &v120;
                      v144 = 8LL;
                      v145 = &v121;
                      v146 = 8LL;
                      v147 = &v122;
                      v148 = 8LL;
                      v149 = &v123;
                      v150 = 8LL;
                      v151 = &v106;
                      v152 = 4LL;
                      v153 = &v124;
                      v154 = 8LL;
                      v155 = &v125;
                      v156 = 8LL;
                      v157 = &v126;
                      v158 = 8LL;
                      McGenEventWrite_EtwEventWriteTransfer(
                        v33,
                        (unsigned int)&AudioCore_Pump_CorrectPosition,
                        (int)v65,
                        11,
                        (__int64)v138);
                      v33 = *((_QWORD *)this + 12);
                      v69 = v33;
                      v64 = *((_QWORD *)this + 578);
                    }
                    if ( v35 - v63 > v69 )
                    {
                      *v38 = 0;
                      *((_QWORD *)this + 62) = 0LL;
                      *((_QWORD *)this + 61) = 0LL;
                      *((_QWORD *)this + 60) = 0LL;
                      *((_QWORD *)this + 59) = 0LL;
                      *((_QWORD *)this + 577) = 0LL;
                      *((_QWORD *)this + 578) = 0LL;
                      v33 = *((_QWORD *)this + 12);
                    }
                    else if ( v64 > 0xA )
                    {
LABEL_86:
                      v34 = v114;
                      goto LABEL_87;
                    }
                    v35 = *((_QWORD *)this + 579);
                    goto LABEL_86;
                  }
LABEL_104:
                  v57 = v56;
                  goto LABEL_74;
                }
              }
            }
          }
          if ( (unsigned __int8)LinearFitT<256>::RebaseSums((char *)this + 424)
            && (unsigned __int8)LinearFitT<256>::AddToSums(v99, v40) )
          {
            v42 = v109;
            goto LABEL_68;
          }
LABEL_172:
          *v38 = 0;
          *((_QWORD *)this + 62) = 0LL;
          *((_QWORD *)this + 61) = 0LL;
          *((_QWORD *)this + 60) = 0LL;
          *((_QWORD *)this + 59) = 0LL;
          *(_OWORD *)((char *)this + 520) = *(_OWORD *)v40;
          *((_QWORD *)this + 57) = *((_QWORD *)this + 65);
          *((_QWORD *)this + 58) = *((_QWORD *)this + 66);
          *v38 = 1;
          v56 = 1;
          v55 = 1;
          goto LABEL_104;
        }
        *v40 = v37;
        v40[1] = v35;
        *v38 = 0;
        *((_QWORD *)this + 62) = 0LL;
        *((_QWORD *)this + 61) = 0LL;
        *((_QWORD *)this + 60) = 0LL;
        *((_QWORD *)this + 59) = 0LL;
        *(_OWORD *)((char *)this + 520) = *(_OWORD *)v40;
        *((_QWORD *)this + 57) = *((_QWORD *)this + 65);
        *((_QWORD *)this + 58) = *((_QWORD *)this + 66);
        *v38 = 1;
        v55 = 1;
        v56 = 1;
        goto LABEL_104;
      }
LABEL_87:
      v70 = v33 - 20000;
      QueryPerformanceCounter(&v127);
      if ( v127.QuadPart < 0 )
        LowPart = (double)(int)(v127.LowPart & 1 | ((unsigned __int64)v127.QuadPart >> 1))
                + (double)(int)(v127.LowPart & 1 | ((unsigned __int64)v127.QuadPart >> 1));
      else
        LowPart = (double)(int)v127.LowPart;
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
          goto LABEL_93;
      }
      v76 = 0;
LABEL_93:
      v77 = AvTaskIndexYield(*((_QWORD *)this + 29), (unsigned int)v75, v76);
      if ( (byte_1400C1841 & 8) != 0 )
      {
        v107 = v77;
        v129 = (unsigned int)v75;
        v128 = this;
        v167 = &v128;
        v168 = 8LL;
        v169 = &v129;
        v170 = 8LL;
        v171 = &v107;
        v172 = 4LL;
        McGenEventWrite_EtwEventWriteTransfer(v78, (unsigned int)&AudioCore_Pump_SetDeadline, v79, 4, (__int64)v166);
LABEL_119:
        if ( (byte_1400C1841 & 8) != 0 )
        {
          v130 = this;
          v179 = &v130;
          v180 = 8LL;
          McGenEventWrite_EtwEventWriteTransfer(v32, (unsigned int)&AudioCore_Pump_Process_Stop, v24, 2, (__int64)v178);
        }
      }
      v11 = CAudioPump::Yield((__int64)this, (__int64)&v105);
      v105 = *((_QWORD *)this + 580);
      if ( (byte_1400C1841 & 8) != 0 )
      {
        LODWORD(v108) = 5;
        v131[0] = this;
        v174 = v131;
        v175 = 8LL;
        v176 = &v108;
        v177 = 4LL;
        McGenEventWrite_EtwEventWriteTransfer(v80, (unsigned int)&AudioCore_Pump_Process_Start, v81, 3, (__int64)v173);
      }
      if ( *((_BYTE *)this + 76) )
      {
        v3 = v102;
        break;
      }
    }
  }
  CAudioPump::CancelDeadline(this);
  CAudioPump::RemoveFromMMCSS(this);
  if ( v3 )
    AERTUnlockCurrentThread();
  if ( (byte_1400C1841 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v83, v82, this);
  EtwEventActivityIdControl(4LL, &v137);
  return 0LL;
}
