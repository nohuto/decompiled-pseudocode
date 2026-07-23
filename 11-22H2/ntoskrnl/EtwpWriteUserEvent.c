/*
 * XREFs of EtwpWriteUserEvent @ 0x1406F41F0
 * Callers:
 *     NtTraceEvent @ 0x1402577C0 (NtTraceEvent.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     IoGetStackLimits @ 0x14022E950 (IoGetStackLimits.c)
 *     EtwpReserveTraceBuffer @ 0x1402340E0 (EtwpReserveTraceBuffer.c)
 *     DecodeProviderTraits @ 0x14025808C (DecodeProviderTraits.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259BB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpIsEventNameFilterEnabled @ 0x140259C30 (EtwpIsEventNameFilterEnabled.c)
 *     PsGetCurrentProcessSessionId @ 0x1402A1CC0 (PsGetCurrentProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1402F6CA0 (PsGetProcessStartKey.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140321C20 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCreateEventKey @ 0x14034AFA4 (EtwpCreateEventKey.c)
 *     EtwpFailLogging @ 0x140365E7C (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036A548 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpSendTraceEvent @ 0x1403A18C8 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     EtwpGetStackLookasideListEntry @ 0x140468360 (EtwpGetStackLookasideListEntry.c)
 *     EtwpDereferenceStackEntry @ 0x140468C12 (EtwpDereferenceStackEntry.c)
 *     EtwpApplyEventNameFilter @ 0x14046A156 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x14046A5B2 (EtwpApplyLevelKwFilter.c)
 *     EtwpTraceLostEvent @ 0x1405FC434 (EtwpTraceLostEvent.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405FFBCC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpInvokeEventCallback @ 0x140601008 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C7C (EtwpGetCrimsonStackKey.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D550 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1407E3468 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E7204 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1409F51A0 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        char a4,
        int a5,
        __int64 a6,
        _OWORD *a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        __int64 a12,
        __int64 a13,
        __int16 a14,
        void *a15,
        unsigned __int64 *a16)
{
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v23; // r14
  unsigned int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 v27; // r9
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // r13
  char v31; // bl
  __int64 v32; // r8
  __int64 v33; // r15
  int v34; // ecx
  unsigned __int8 v35; // al
  int v36; // edx
  _KPROCESS *Process; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  bool v40; // al
  unsigned __int64 v41; // rsi
  unsigned int v42; // edi
  unsigned __int8 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // r11d
  __int64 v46; // rax
  __int64 v47; // rsi
  int v48; // ecx
  int v49; // ebx
  unsigned int v50; // r14d
  int v51; // ecx
  __int64 v52; // rdx
  int v53; // edx
  bool v54; // al
  ULONG v55; // esi
  void *v56; // rsp
  _SLIST_ENTRY *v57; // rdi
  void *v58; // rsp
  _OWORD *v59; // rdi
  int v60; // r15d
  __int64 v61; // rax
  unsigned int v62; // r9d
  unsigned int v63; // r10d
  unsigned int v64; // r8d
  char v65; // al
  PSLIST_ENTRY v66; // r13
  __int64 v67; // r15
  unsigned int v68; // edi
  __int64 v69; // rsi
  int ReserveTraceBufferStatus; // ebx
  int v71; // ecx
  __int64 v72; // rsi
  unsigned __int16 *v73; // r15
  _OWORD *v74; // rax
  __int128 v75; // xmm0
  __int64 v76; // rcx
  __int16 v77; // si
  unsigned __int16 v78; // si
  __int64 v79; // rdx
  int v80; // edi
  int v81; // ecx
  int v82; // edi
  __int64 v83; // rsi
  unsigned int v84; // ecx
  __int16 v85; // r11
  __int64 v86; // r8
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v88; // r8
  int v89; // edx
  __int64 v90; // r9
  unsigned __int64 v91; // rax
  unsigned __int16 *v92; // rdi
  unsigned int v93; // ecx
  __int64 v94; // rdx
  unsigned __int16 *v95; // rbx
  unsigned __int16 *v96; // rdi
  unsigned int v97; // ecx
  unsigned __int16 *v98; // r13
  unsigned __int16 v99; // si
  unsigned __int16 v100; // si
  __int64 v101; // rbx
  unsigned __int16 *v102; // rbx
  __int64 v103; // rcx
  unsigned __int16 v104; // dx
  unsigned __int16 *v105; // rdi
  unsigned int v106; // r15d
  size_t v107; // r8
  LARGE_INTEGER *v108; // rdx
  unsigned __int8 v109; // cl
  int v110; // ecx
  __int64 v111; // rbx
  void *v112; // r9
  unsigned int v113; // eax
  struct _KTHREAD *v114; // r8
  __int64 v115; // r15
  __int64 v116; // r8
  signed __int64 *v117; // rdx
  signed __int64 v118; // rax
  signed __int64 v119; // rtt
  char v120; // [rsp+220h] [rbp-610h] BYREF
  char v121; // [rsp+650h] [rbp-1E0h] BYREF
  char v122; // [rsp+830h] [rbp+0h]
  unsigned __int8 v123; // [rsp+838h] [rbp+8h]
  int v124; // [rsp+840h] [rbp+10h]
  unsigned int v125; // [rsp+844h] [rbp+14h]
  int v126; // [rsp+848h] [rbp+18h]
  unsigned int v127; // [rsp+84Ch] [rbp+1Ch]
  unsigned __int16 v128; // [rsp+850h] [rbp+20h]
  unsigned __int64 v129; // [rsp+858h] [rbp+28h]
  __int64 v130; // [rsp+860h] [rbp+30h]
  int v131; // [rsp+868h] [rbp+38h]
  unsigned __int16 v132; // [rsp+86Ch] [rbp+3Ch] BYREF
  __int16 v133; // [rsp+870h] [rbp+40h]
  __int64 v134; // [rsp+878h] [rbp+48h]
  unsigned __int16 v135; // [rsp+880h] [rbp+50h]
  void *StackLookasideListEntry; // [rsp+888h] [rbp+58h] BYREF
  unsigned __int16 *v137; // [rsp+890h] [rbp+60h]
  __int64 v138; // [rsp+898h] [rbp+68h]
  unsigned int v139; // [rsp+8A0h] [rbp+70h]
  char PreviousMode; // [rsp+8A5h] [rbp+75h]
  unsigned int v142; // [rsp+8A8h] [rbp+78h]
  __int64 v143; // [rsp+8B0h] [rbp+80h]
  __int64 v144; // [rsp+8B8h] [rbp+88h]
  LARGE_INTEGER v145; // [rsp+8C0h] [rbp+90h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+8C8h] [rbp+98h] BYREF
  unsigned int v147; // [rsp+8D0h] [rbp+A0h]
  unsigned int v148; // [rsp+8D4h] [rbp+A4h]
  unsigned __int16 *v149; // [rsp+8D8h] [rbp+A8h]
  unsigned __int64 v150; // [rsp+8E0h] [rbp+B0h] BYREF
  __int64 v151; // [rsp+8E8h] [rbp+B8h]
  void *v152; // [rsp+8F0h] [rbp+C0h]
  __int64 v153; // [rsp+8F8h] [rbp+C8h]
  struct _KTHREAD *CurrentThread; // [rsp+900h] [rbp+D0h]
  unsigned __int64 HighLimit; // [rsp+908h] [rbp+D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+910h] [rbp+E0h] BYREF
  unsigned __int64 v157; // [rsp+918h] [rbp+E8h] BYREF
  unsigned __int64 v158; // [rsp+920h] [rbp+F0h] BYREF
  __int64 v159; // [rsp+928h] [rbp+F8h]
  unsigned __int16 *v160; // [rsp+930h] [rbp+100h] BYREF
  void *v161; // [rsp+938h] [rbp+108h]
  char *v162; // [rsp+940h] [rbp+110h]
  __int64 v163; // [rsp+948h] [rbp+118h]
  __int64 v164; // [rsp+950h] [rbp+120h]
  __int64 v165; // [rsp+958h] [rbp+128h]
  unsigned __int64 v166; // [rsp+960h] [rbp+130h]
  __int128 v167; // [rsp+968h] [rbp+138h] BYREF
  __int64 v168; // [rsp+978h] [rbp+148h]
  unsigned __int64 *v169; // [rsp+980h] [rbp+150h]
  __int64 v170; // [rsp+988h] [rbp+158h]
  unsigned __int8 *v171; // [rsp+990h] [rbp+160h]
  _OWORD v172[25]; // [rsp+9A0h] [rbp+170h] BYREF
  _OWORD Src[5]; // [rsp+B30h] [rbp+300h] BYREF

  v135 = a3;
  v130 = a1;
  v18 = a13;
  v164 = a1;
  v123 = a2;
  v19 = a6;
  v134 = a6;
  v165 = a6;
  v20 = a11;
  v129 = a11;
  v166 = a11;
  v153 = a12;
  v161 = a15;
  v169 = a16;
  LODWORD(v21) = 0;
  v126 = 0;
  memset(v172, 0, 0x188uLL);
  v127 = 0;
  memset(Src, 0, sizeof(Src));
  StackLookasideListEntry = 0LL;
  v152 = 0LL;
  v132 = 0;
  v160 = 0LL;
  v150 = 0LL;
  v151 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v133 = a14 & 0x200;
  if ( a11 )
  {
    if ( a10 )
      goto LABEL_5;
    return 3221225485LL;
  }
  if ( a10 )
    return 3221225485LL;
LABEL_5:
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a13 )
    v18 = a1;
  v138 = v18;
  v122 = 0;
  v23 = *(_QWORD *)(a1 + 392);
  v143 = v23;
  v163 = v23;
  if ( a16 && *a16 )
  {
    v150 = *a16;
    v122 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v161, (a14 & 0x400) != 0, &v132, &v160);
  CurrentThread = KeGetCurrentThread();
  v171 = &CurrentThread->WaitBlockFill11[164];
  --CurrentThread->KernelApcDisable;
  v123 &= ~a4;
  v25 = v138;
LABEL_13:
  v26 = v130;
LABEL_14:
  v27 = a9;
  while ( 1 )
  {
    v28 = !_BitScanForward((unsigned int *)&v29, v123);
    v127 = v29;
    if ( v28 )
      break;
    v30 = 1LL;
    v144 = 1LL;
    v167 = 0LL;
    v168 = 0LL;
    ListEntry = 0LL;
    v145.QuadPart = 0LL;
    v124 = 80;
    v142 = 0;
    v31 = 0;
    v128 = 0;
    v131 = 0;
    v149 = 0LL;
    v162 = 0LL;
    v123 &= v123 - 1;
    v32 = (unsigned int)v29;
    v33 = v25 + 32 * (v29 + 4);
    if ( v153
      && (v34 = *(_DWORD *)(v153 + 4LL * (*(unsigned __int16 *)(v33 + 6) >> 5)),
          _bittest(&v34, *(_BYTE *)(v33 + 6) & 0x1F))
      || !*(_DWORD *)v33
      || (v35 = *(_BYTE *)(v33 + 4), a8 > v35) && v35
      || ((v36 = *(_DWORD *)(v33 + 8), (v36 & 0x40) == 0) || v27)
      && ((v27 & *(_QWORD *)(v33 + 16)) == 0 || (v27 & *(_QWORD *)(v33 + 24)) != *(_QWORD *)(v33 + 24))
      || ((Process = KeGetCurrentThread()->ApcState.Process, (a5 & 2) != 0)
       || SLODWORD(Process[1].DirectoryTableBase) < 0)
      && (v36 & 0x200) != 0 )
    {
      v20 = v129;
      v26 = v130;
    }
    else
    {
      v38 = *(_QWORD *)(v25 + 384);
      v40 = 0;
      if ( v38 )
      {
        v39 = *(_DWORD *)(104 * v32 + v38);
        if ( (v39 & 0x80000200) == 0x80000200 || (v39 & 0x80000100) == 0x80000100 )
          v40 = 1;
      }
      v41 = v129;
      v42 = v127;
      if ( v40 )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v25, v127, v135, v134, v24, v129) )
          goto LABEL_49;
        v25 = v138;
        v27 = a9;
      }
      if ( v133
        && EtwpIsEventNameFilterEnabled(v25, v42, a8, v27, 0)
        && !EtwpApplyEventNameFilter(v138, v42, v45, v41, 1, 0, v43, v44, 0) )
      {
        goto LABEL_49;
      }
      v46 = *(unsigned __int16 *)(v33 + 6);
      v139 = *(unsigned __int16 *)(v33 + 6);
      v47 = 8 * v46;
      v159 = 8 * v46;
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v23 + 448) + 8 * v46),
             1u) )
      {
        if ( v139 >= *(_DWORD *)(v23 + 16) )
        {
          v30 = 1LL;
        }
        else
        {
          _mm_lfence();
          v30 = *(_QWORD *)(v47 + *(_QWORD *)(v23 + 456));
          v42 = v127;
        }
        v144 = v30;
        v31 = 1;
      }
      if ( (v30 & 1) != 0 )
      {
        if ( v31 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v23 + 448) + v47), 1u);
        if ( v139 != 3 )
        {
LABEL_49:
          v24 = a10;
          v20 = v129;
          v25 = v138;
          v19 = v134;
          goto LABEL_13;
        }
        v48 = -1073741058;
        if ( !*(_DWORD *)(v23 + 4068) )
          v48 = -1073741816;
        v126 = v48;
        v20 = v129;
        v19 = v134;
        v26 = v130;
        break;
      }
      v49 = 0;
      if ( a7 )
      {
        v50 = 104;
        v124 = 104;
        v49 = 16;
      }
      else
      {
        v50 = v124;
      }
      v51 = *(_DWORD *)(v33 + 8);
      if ( (v51 & 0xFFFFFF9F) != 0 )
      {
        if ( (v51 & 0x800) != 0 && v151 && v151 != EtwpHostSiloState )
        {
          v49 |= 0x100u;
          v50 += (*(unsigned __int16 *)(v151 + 4224) + 15) & 0xFFFFFFF8;
          v124 = v50;
        }
        if ( (v51 & 1) != 0 )
        {
          if ( (v122 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem(Src);
            v122 |= 2u;
            v51 = *(_DWORD *)(v33 + 8);
          }
          v49 |= 2u;
          v50 += LOWORD(Src[0]);
          v124 = v50;
        }
        if ( (v51 & 2) != 0 )
        {
          v49 |= 1u;
          v50 += 16;
          v124 = v50;
        }
        if ( (v51 & 0x80u) != 0 )
        {
          v49 |= 0x40u;
          v50 += 16;
          v124 = v50;
        }
        if ( (v51 & 0x100) != 0 )
        {
          v49 |= 0x80u;
          v50 += 16;
          v124 = v50;
        }
        if ( (v51 & 4) != 0 )
        {
          v52 = *(_QWORD *)(v138 + 384);
          v54 = 0;
          if ( v52 )
          {
            v53 = *(_DWORD *)(104LL * v42 + v52);
            if ( (v53 & 0x80001000) == 0x80001000
              || (v53 & 0x80002000) == 0x80002000
              || (v53 & 0x80004000) == 0x80004000 )
            {
              v54 = 1;
            }
          }
          if ( !v54
            || EtwpApplyLevelKwFilter(v138, v42, a8, a9, 1)
            && (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v134, v138, v42)
            && EtwpApplyEventNameFilter(v138, v42, a10, v129, 1, 0, a8, a9, 1) )
          {
            if ( (v122 & 1) == 0 )
            {
              v55 = 256;
              StackLookasideListEntry = EtwpGetStackLookasideListEntry();
              if ( StackLookasideListEntry )
              {
                v122 |= 8u;
              }
              else
              {
                HighLimit = 0LL;
                LowLimit = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v56 = alloca(1552LL);
                  StackLookasideListEntry = &v120;
                  v55 = 192;
                }
              }
              v57 = (_SLIST_ENTRY *)StackLookasideListEntry;
              if ( StackLookasideListEntry
                && !EtwpGetStackExtendedHeaderItem(CurrentThread, 0, v55, (__int64)&StackLookasideListEntry, 0, 0LL) )
              {
                if ( (v122 & 8) != 0 )
                {
                  RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, v57 - 1);
                  v122 &= ~8u;
                }
                StackLookasideListEntry = 0LL;
              }
              v122 |= 1u;
              v47 = v159;
            }
            if ( StackLookasideListEntry )
            {
              if ( (*(_DWORD *)(v30 + 820) & 1) != 0
                && EtwpGetCrimsonStackKey(v30, (__int64)StackLookasideListEntry, &ListEntry) )
              {
                v49 |= 8u;
                v50 += 24;
              }
              else
              {
                v49 |= 4u;
                v50 += *(unsigned __int16 *)StackLookasideListEntry;
              }
              v124 = v50;
            }
          }
        }
        if ( (*(_DWORD *)(v33 + 8) & 8) != 0 )
        {
          if ( (v122 & 4) == 0 )
          {
            v157 = 0LL;
            v158 = 0LL;
            IoGetStackLimits(&v158, &v157);
            if ( (unsigned __int64)&v157 - v158 > 0x1E0 )
            {
              v58 = alloca(480LL);
              v152 = &v121;
              EtwpGetPsmKeyExtendedHeaderItem();
            }
            v122 |= 4u;
          }
          if ( v152 )
          {
            v49 |= 0x20u;
            v50 += *(unsigned __int16 *)v152;
            v124 = v50;
          }
        }
      }
      v59 = &v172[3 * LODWORD(v172[24])];
      v60 = a10;
      if ( a10 )
      {
        v147 = 0;
        if ( KeGetCurrentThread()->PreviousMode )
        {
          v61 = 16LL * a10;
          if ( v61 )
          {
            if ( (v129 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v129 + v61 > 0x7FFFFFFF0000LL || v129 + v61 < v129 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v62 = 0;
        v147 = 0;
        v50 = v124;
        while ( 1 )
        {
          if ( v62 >= a10 )
            goto LABEL_132;
          v63 = v50;
          v142 = *(_DWORD *)(v129 + 16LL * v62 + 8);
          v64 = v142;
          if ( v142 > 0xFFFF )
            break;
          if ( v133 )
          {
            v65 = *(_BYTE *)(v129 + 16LL * v62 + 12);
            v64 = v142;
          }
          else
          {
            v65 = 0;
          }
          if ( v65 )
          {
            if ( v65 == 1 )
            {
              v128 += v64;
              ++v131;
            }
            v50 = v124;
          }
          else
          {
            v50 = v64 + v124;
            v124 += v64;
          }
          if ( v50 < v63 )
          {
            v126 = -2147483643;
            v123 |= 1 << v127;
            if ( ListEntry )
              EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v30 + 1008));
            goto LABEL_118;
          }
          v147 = ++v62;
        }
        v126 = -2147483643;
        v123 |= 1 << v127;
        if ( ListEntry )
          EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v30 + 1008));
LABEL_118:
        v23 = v143;
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v143 + 448) + v47), 1u);
        v20 = v129;
        v19 = v134;
        v26 = v130;
        goto LABEL_246;
      }
LABEL_132:
      if ( v131 )
      {
        v50 += (v128 + 15) & 0xFFFFFFF8;
        v124 = v50;
      }
      if ( v132 )
      {
        v50 += (v132 + 15) & 0xFFFFFFF8;
        v124 = v50;
      }
      *((_DWORD *)v59 + 10) = v50;
      v21 = EtwpReserveTraceBuffer(v30, v50, (__int64)&v167, &v145, 0);
      v170 = v21;
      v66 = ListEntry;
      v67 = v144;
      if ( ListEntry )
        EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v144 + 1008));
      if ( !v21 )
      {
        v68 = 0;
        v69 = 0LL;
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v67, v50);
        v20 = v129;
        if ( v131 )
        {
          v68 = a10;
          v69 = v129;
        }
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(
            (_QWORD *)(v130 + 40),
            (__int16 *)(v134 + 40),
            (unsigned __int16 *)(v67 + 136),
            a5,
            ReserveTraceBufferStatus,
            v68,
            v69,
            1,
            1);
        v71 = v126;
        if ( v126 >= 0 )
        {
          if ( (*(_DWORD *)(v67 + 12) & 0x8000000) == 0 )
            v71 = ReserveTraceBufferStatus;
          v126 = v71;
        }
        v23 = v143;
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v143 + 448) + v159), 1u);
        v28 = ReserveTraceBufferStatus == -1073741675;
        v24 = a10;
        v25 = v138;
        v19 = v134;
        v26 = v130;
        if ( v28 )
        {
          v126 = -1073741675;
          v60 = a10;
          goto LABEL_246;
        }
        goto LABEL_14;
      }
      *(_QWORD *)v59 = v67;
      *((_QWORD *)v59 + 1) = v21;
      v59[1] = v167;
      *((_QWORD *)v59 + 4) = v168;
      ++LODWORD(v172[24]);
      v148 = 0;
      v72 = 80LL;
      v125 = 80;
      v73 = 0LL;
      v137 = 0LL;
      v74 = (_OWORD *)v134;
      *(_OWORD *)v21 = *(_OWORD *)v134;
      *(_OWORD *)(v21 + 16) = v74[1];
      *(_OWORD *)(v21 + 32) = v74[2];
      *(_OWORD *)(v21 + 48) = v74[3];
      *(_OWORD *)(v21 + 64) = v74[4];
      if ( v160 )
      {
        v75 = *(_OWORD *)v160;
        *(_WORD *)(v21 + 4) |= 0x80u;
      }
      else
      {
        v75 = *(_OWORD *)(v130 + 40);
      }
      *(_OWORD *)(v21 + 24) = v75;
      *(_DWORD *)v21 = *((_DWORD *)&qword_14001CB90 + v135) | v50;
      if ( v49 )
      {
        if ( (v49 & 0x100) != 0 )
        {
          v73 = (unsigned __int16 *)(v21 + 80);
          v76 = v151;
          v77 = (*(_WORD *)(v151 + 4224) + 15) & 0xFFF8;
          *(_WORD *)(v21 + 80) = v77;
          *(_WORD *)(v21 + 82) = 16;
          *(_WORD *)(v21 + 86) = *(_WORD *)(v76 + 4224);
          *(_WORD *)(v21 + 84) &= ~1u;
          *(_WORD *)(v21 + 84) = 0;
          v78 = v77 - *(_WORD *)(v76 + 4224) - 8;
          memmove((void *)(v21 + 88), *(const void **)(v76 + 4216), *(unsigned __int16 *)(v76 + 4224));
          memset((void *)(v21 + 88 + *(unsigned __int16 *)(v151 + 4224)), 0, v78);
          *(_WORD *)(v21 + 4) |= 1u;
          v72 = (unsigned int)*(unsigned __int16 *)(v21 + 80) + 80;
          v125 = *(unsigned __int16 *)(v21 + 80) + 80;
          v137 = (unsigned __int16 *)(v21 + 80);
        }
        if ( (v49 & 0x10) != 0 )
        {
          v79 = v72 + v21;
          *(_DWORD *)v79 = 65560;
          *(_WORD *)(v79 + 6) = 16;
          *(_WORD *)(v79 + 4) = *(_WORD *)(v72 + v21 + 4) & 0xFFFE;
          *(_WORD *)(v79 + 4) = 0;
          *(_OWORD *)(v79 + 8) = *a7;
          *(_WORD *)(v21 + 4) |= 1u;
          v72 = (unsigned int)(v72 + 24);
          v125 = v72;
          if ( v73 )
            v73[2] |= 1u;
          v73 = (unsigned __int16 *)v79;
          v137 = (unsigned __int16 *)v79;
        }
        if ( (v49 & 2) != 0 )
        {
          v72 += v21;
          v80 = LOWORD(Src[0]);
          memmove((void *)v72, Src, LOWORD(Src[0]));
          *(_WORD *)(v21 + 4) |= 1u;
          v81 = v80 + v125;
          v125 += v80;
          if ( v73 )
            v73[2] |= 1u;
          v73 = (unsigned __int16 *)v72;
          v137 = (unsigned __int16 *)v72;
          LODWORD(v72) = v81;
        }
        if ( (v49 & 1) != 0 )
        {
          v82 = v72;
          v83 = (unsigned int)v72 + v21;
          *(_DWORD *)v83 = 196624;
          *(_WORD *)(v83 + 6) = 4;
          *(_WORD *)(v83 + 4) &= ~1u;
          *(_WORD *)(v83 + 4) = 0;
          *(_DWORD *)(v83 + 8) = PsGetCurrentProcessSessionId();
          *(_WORD *)(v21 + 4) |= 1u;
          v84 = v82 + 16;
          v125 = v82 + 16;
          if ( v73 )
            v73[2] |= 1u;
          v73 = (unsigned __int16 *)v83;
          v137 = (unsigned __int16 *)v83;
        }
        else
        {
          v84 = v125;
        }
        v85 = 0;
        if ( (v49 & 0x40) != 0 )
        {
          v86 = v84 + v21;
          *(_DWORD *)v86 = 851984;
          *(_WORD *)(v86 + 6) = 8;
          *(_WORD *)(v86 + 4) &= ~1u;
          *(_WORD *)(v86 + 4) = 0;
          ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
          *((_QWORD *)v88 + 1) = ProcessStartKey;
          *(_WORD *)(v21 + 4) |= 1u;
          v72 = (unsigned int)(v89 + 16);
          v125 = v89 + 16;
          if ( v73 )
            v73[2] |= 1u;
          v73 = v88;
          v137 = v88;
          v66 = ListEntry;
          v50 = v124;
        }
        else
        {
          v72 = v125;
        }
        if ( (v49 & 0x80u) != 0 )
        {
          v90 = v72 + v21;
          *(_DWORD *)v90 = 655376;
          *(_WORD *)(v90 + 6) = 8;
          *(_WORD *)(v90 + 4) = *(_WORD *)(v72 + v21 + 4) & 0xFFFE;
          *(_WORD *)(v90 + 4) = v85;
          if ( (v122 & 0x10) != 0 || (EtwpCreateEventKey(&v150), v122 |= 0x10u, !v169) )
          {
            v91 = v150;
          }
          else
          {
            v91 = v150;
            *v169 = v150;
          }
          *(_QWORD *)(v90 + 8) = v91;
          *(_WORD *)(v21 + 4) |= 1u;
          v72 = (unsigned int)(v72 + 16);
          v125 = v72;
          if ( v73 )
            v73[2] |= 1u;
          v73 = (unsigned __int16 *)v90;
          v137 = (unsigned __int16 *)v90;
        }
        if ( (v49 & 4) != 0 )
        {
          v72 += v21;
          v92 = (unsigned __int16 *)StackLookasideListEntry;
          memmove((void *)v72, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
          *(_WORD *)(v21 + 4) |= 1u;
          v93 = *v92 + v125;
          v125 = v93;
          if ( v73 )
            v73[2] |= 1u;
          v73 = (unsigned __int16 *)v72;
          v137 = (unsigned __int16 *)v72;
          LODWORD(v72) = v93;
        }
        if ( (v49 & 8) != 0 )
        {
          v94 = v21 + (unsigned int)v72;
          *(_DWORD *)v94 = 1179672;
          *(_WORD *)(v94 + 6) = 16;
          *(_WORD *)(v94 + 4) &= ~1u;
          *(_WORD *)(v94 + 4) = 0;
          *(_QWORD *)(v94 + 16) = v66;
          *(_QWORD *)(v94 + 8) = *((_QWORD *)StackLookasideListEntry + 1);
          *(_WORD *)(v21 + 4) |= 1u;
          LODWORD(v72) = v72 + 24;
          v125 = v72;
          if ( v73 )
            v73[2] |= 1u;
          v73 = (unsigned __int16 *)v94;
          v137 = (unsigned __int16 *)v94;
        }
        if ( (v49 & 0x20) != 0 )
        {
          v95 = (unsigned __int16 *)(v21 + (unsigned int)v72);
          v96 = (unsigned __int16 *)v152;
          memmove(v95, v152, *(unsigned __int16 *)v152);
          *(_WORD *)(v21 + 4) |= 1u;
          LODWORD(v72) = *v96 + (_DWORD)v72;
          v125 = v72;
          if ( v73 )
            v73[2] |= 1u;
          v73 = v95;
          v137 = v95;
        }
      }
      v97 = v132;
      if ( v132 )
      {
        v98 = (unsigned __int16 *)(v21 + (unsigned int)v72);
        v99 = (v132 + 15) & 0xFFF8;
        *v98 = v99;
        v98[1] = 12;
        v98[3] = v97;
        v98[2] &= ~1u;
        v98[2] = 0;
        v100 = v99 - v97 - 8;
        v101 = v97;
        memmove(v98 + 4, v161, v97);
        memset((char *)v98 + v101 + 8, 0, v100);
        *(_WORD *)(v21 + 4) |= 1u;
        LODWORD(v72) = *v98 + v125;
        v125 = v72;
        if ( v73 )
          v73[2] |= 1u;
        v73 = v98;
        v137 = v98;
      }
      if ( v131 )
      {
        v102 = (unsigned __int16 *)(v21 + (unsigned int)v72);
        v103 = v128;
        v104 = (v128 + 15) & 0xFFF8;
        *v102 = v104;
        v102[1] = 11;
        v102[3] = v103;
        v102[2] &= ~1u;
        v102[2] = 0;
        v105 = v102 + 4;
        v149 = v102 + 4;
        v162 = (char *)v102 + v103 + 8;
        memset(v162, 0, (unsigned __int16)(v104 - v103 - 8));
        *(_WORD *)(v21 + 4) |= 1u;
        LODWORD(v72) = *v102 + (_DWORD)v72;
        v125 = v72;
        if ( v73 )
          v73[2] |= 1u;
      }
      else
      {
        v105 = v149;
      }
      v106 = 0;
      v24 = a10;
      v20 = v129;
      while ( 1 )
      {
        v148 = v106;
        if ( v106 >= v24 )
          break;
        v107 = *(unsigned int *)(v20 + 16LL * v106 + 8);
        v108 = *(LARGE_INTEGER **)(v20 + 16LL * v106);
        if ( v133 )
        {
          v109 = *(_BYTE *)(v20 + 16LL * v106 + 12);
          v50 = v124;
          v105 = v149;
        }
        else
        {
          v109 = 0;
        }
        if ( v109 )
        {
          v110 = v109 - 1;
          if ( v110 )
          {
            if ( v110 == 2 )
            {
              if ( (_DWORD)v107 == 8 )
              {
                if ( (unsigned __int64)&v108[1] > 0x7FFFFFFF0000LL || &v108[1] < v108 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v145 = *v108;
              }
              ++v106;
            }
            else
            {
              ++v106;
            }
          }
          else
          {
            if ( !v105 )
              goto LABEL_235;
            v111 = *(unsigned int *)(v20 + 16LL * v106 + 8);
            if ( (unsigned __int16 *)((char *)v105 + v107) < v105 || (char *)v105 + v107 > v162 || !v131 )
              goto LABEL_235;
            if ( (_DWORD)v107
              && ((unsigned __int64)v108 + v107 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v108 + v107) < v108) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove(v105, v108, v107);
            v105 = (unsigned __int16 *)((char *)v105 + v111);
            v149 = v105;
            --v131;
            v24 = a10;
            ++v106;
          }
        }
        else
        {
          v112 = (void *)(v21 + (unsigned int)v72);
          v113 = v107 + v72;
          if ( (int)v107 + (int)v72 < (unsigned int)v72 )
          {
            v125 = -1;
LABEL_235:
            v126 = -1073741820;
            *(_DWORD *)v21 = v50 | 0xC00D0000;
            *(LARGE_INTEGER *)(v21 + 16) = v145;
            LODWORD(v21) = 0;
            v23 = v143;
            v60 = a10;
            v19 = v134;
            v26 = v130;
            goto LABEL_246;
          }
          LODWORD(v72) = v107 + v72;
          v125 = v113;
          if ( v113 > v50 )
            goto LABEL_235;
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          if ( PreviousMode
            && (_DWORD)v107
            && ((unsigned __int64)v108 + v107 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v108 + v107) < v108) )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove(v112, v108, v107);
          v50 = v124;
          v105 = v149;
          v24 = a10;
          ++v106;
        }
      }
      if ( v153 )
        *(_DWORD *)(v153 + 4LL * (v139 >> 5)) |= 1 << (v139 & 0x1F);
      *(LARGE_INTEGER *)(v21 + 16) = v145;
      v114 = CurrentThread;
      *(_DWORD *)(v21 + 56) = CurrentThread->SchedulerApc.SpareLong0;
      *(_DWORD *)(v21 + 60) = v114->UserTime;
      *(_DWORD *)(v21 + 8) = v114[1].CurrentRunTime;
      *(_DWORD *)(v21 + 12) = v114[1].CycleTime;
      v115 = v144;
      if ( (*(_DWORD *)(v144 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v144, (__int64)&v167);
        v24 = a10;
      }
      LODWORD(v21) = 0;
      v23 = v143;
      v25 = v138;
      v27 = a9;
      v19 = v134;
      v26 = v130;
      if ( *(_QWORD *)(v115 + 1288) )
      {
        EtwpInvokeEventCallback(v115, (__int64)&v167, v130 + 40);
        v24 = a10;
        v25 = v138;
        goto LABEL_14;
      }
    }
  }
  v60 = a10;
LABEL_246:
  if ( (v122 & 8) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v126 < 0 )
  {
    EtwpFailLogging(a8, a9, v26, (__int64)v172, v123, v21, v126, v19 + 40, 1, v60, v20, 1);
  }
  else
  {
    v127 = v21;
    if ( LODWORD(v172[24]) )
    {
      do
      {
        v116 = *(_QWORD *)&v172[3 * (unsigned int)v21 + 1];
        v117 = (signed __int64 *)*((_QWORD *)&v172[3 * (unsigned int)v21 + 1] + 1);
        _m_prefetchw(v117);
        v118 = *v117;
        if ( (v116 ^ (unsigned __int64)*v117) >= 0xF )
        {
LABEL_253:
          _InterlockedDecrement((volatile signed __int32 *)(v116 + 12));
        }
        else
        {
          while ( 1 )
          {
            v119 = v118;
            v118 = _InterlockedCompareExchange64(v117, v118 + 1, v118);
            if ( v119 == v118 )
              break;
            if ( (v116 ^ (unsigned __int64)v118) >= 0xF )
              goto LABEL_253;
          }
        }
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v23 + 448) + 8LL
                                                                  * **(unsigned int **)&v172[3 * (unsigned int)v21]),
          1u);
        LODWORD(v21) = ++v127;
      }
      while ( v127 < LODWORD(v172[24]) );
    }
  }
  v28 = (*(_WORD *)v171)++ == 0xFFFF;
  if ( v28
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v126;
}
