/*
 * XREFs of EtwpWriteUserEvent @ 0x1406F4170
 * Callers:
 *     NtTraceEvent @ 0x1402579A0 (NtTraceEvent.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     IoGetStackLimits @ 0x14022EA40 (IoGetStackLimits.c)
 *     EtwpReserveTraceBuffer @ 0x1402341D0 (EtwpReserveTraceBuffer.c)
 *     DecodeProviderTraits @ 0x14025826C (DecodeProviderTraits.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpIsEventNameFilterEnabled @ 0x140259FE0 (EtwpIsEventNameFilterEnabled.c)
 *     PsGetCurrentProcessSessionId @ 0x1402A2070 (PsGetCurrentProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1402F6F30 (PsGetProcessStartKey.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140322090 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCreateEventKey @ 0x14034B744 (EtwpCreateEventKey.c)
 *     EtwpFailLogging @ 0x14036666C (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036AD38 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpSendTraceEvent @ 0x1403A2268 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_1480059192__private_IsEnabledDeviceUsage @ 0x1404122C4 (Feature_1480059192__private_IsEnabledDeviceUsage.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpGetStackLookasideListEntry @ 0x140468DC0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpDereferenceStackEntry @ 0x140469672 (EtwpDereferenceStackEntry.c)
 *     EtwpApplyEventNameFilter @ 0x14046ABB6 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x14046B012 (EtwpApplyLevelKwFilter.c)
 *     EtwpTraceLostEvent @ 0x1405FC914 (EtwpTraceLostEvent.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1406000AC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpInvokeEventCallback @ 0x1406014E8 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x14060215C (EtwpGetCrimsonStackKey.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D6E0 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1407E31B8 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E73E4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1409F5380 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r15
  unsigned int v21; // r12d
  __int64 v23; // r11
  __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r9
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r13
  int v31; // ecx
  unsigned __int8 v32; // al
  int v33; // edx
  _KPROCESS *Process; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  bool v37; // al
  unsigned __int64 v38; // rbx
  unsigned __int8 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r11
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rax
  int v46; // ecx
  int v47; // ebx
  unsigned int v48; // r15d
  int v49; // ecx
  __int64 v50; // rdi
  __int64 v51; // rdx
  int v52; // edx
  bool v53; // al
  ULONG v54; // edi
  void *v55; // rsp
  _SLIST_ENTRY *v56; // rsi
  void *v57; // rsp
  _OWORD *v58; // r13
  unsigned int v59; // edx
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  unsigned int v62; // r14d
  unsigned int v63; // edi
  char v64; // al
  BOOL v65; // ecx
  unsigned int v66; // eax
  int v67; // edi
  BOOL v68; // ecx
  unsigned int v69; // eax
  __int64 v70; // r12
  _SLIST_ENTRY *v71; // rdi
  unsigned int v72; // edi
  unsigned int v73; // edx
  int ReserveTraceBufferStatus; // ebx
  int v75; // ecx
  BOOL v76; // ecx
  char v77; // al
  BOOL v78; // ecx
  int v79; // eax
  unsigned __int16 *v80; // rdi
  _OWORD *v81; // rax
  __int128 v82; // xmm0
  __int64 v83; // r13
  __int16 v84; // r14
  unsigned __int16 v85; // r14
  __int64 v86; // rdx
  int v87; // esi
  int v88; // ecx
  int v89; // esi
  __int64 v90; // r14
  unsigned int v91; // ecx
  __int64 v92; // r8
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v94; // r8
  int v95; // edx
  __int64 v96; // r9
  unsigned __int64 v97; // rax
  unsigned __int16 *v98; // rsi
  unsigned int v99; // ecx
  __int64 v100; // rdx
  unsigned __int16 *v101; // rbx
  unsigned __int16 *v102; // r13
  unsigned int v103; // ecx
  unsigned __int16 *v104; // r13
  unsigned __int16 v105; // r14
  unsigned __int16 v106; // r14
  __int64 v107; // rbx
  unsigned __int16 *v108; // rbx
  __int64 v109; // rcx
  unsigned __int16 v110; // dx
  unsigned __int16 *v111; // rsi
  unsigned int v112; // edi
  size_t v113; // r8
  LARGE_INTEGER *v114; // rdx
  unsigned __int8 v115; // cl
  int v116; // ecx
  __int64 v117; // rbx
  void *v118; // r9
  unsigned int v119; // eax
  struct _KTHREAD *v120; // r8
  int v121; // eax
  __int64 v122; // r8
  signed __int64 *v123; // rdx
  signed __int64 v124; // rax
  signed __int64 v125; // rtt
  char v126; // [rsp+220h] [rbp-610h] BYREF
  char v127; // [rsp+650h] [rbp-1E0h] BYREF
  char v128; // [rsp+830h] [rbp+0h]
  unsigned __int8 v129; // [rsp+838h] [rbp+8h]
  int v130; // [rsp+840h] [rbp+10h]
  unsigned int v131; // [rsp+844h] [rbp+14h]
  char v132; // [rsp+848h] [rbp+18h]
  int v133; // [rsp+84Ch] [rbp+1Ch]
  int v134; // [rsp+850h] [rbp+20h]
  unsigned int i; // [rsp+854h] [rbp+24h]
  unsigned __int64 v136; // [rsp+858h] [rbp+28h]
  unsigned int v137; // [rsp+860h] [rbp+30h]
  int v138; // [rsp+864h] [rbp+34h]
  unsigned __int16 v139[2]; // [rsp+868h] [rbp+38h] BYREF
  __int16 v140; // [rsp+86Ch] [rbp+3Ch]
  unsigned int v141; // [rsp+870h] [rbp+40h]
  __int64 v142; // [rsp+878h] [rbp+48h]
  __int64 v143; // [rsp+880h] [rbp+50h]
  unsigned __int16 v144; // [rsp+888h] [rbp+58h]
  unsigned __int16 *v145; // [rsp+890h] [rbp+60h]
  void *StackLookasideListEntry; // [rsp+898h] [rbp+68h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+8A0h] [rbp+70h] BYREF
  __int64 v148; // [rsp+8A8h] [rbp+78h]
  char PreviousMode; // [rsp+8B0h] [rbp+80h]
  char v150; // [rsp+8B1h] [rbp+81h]
  unsigned int v151; // [rsp+8B4h] [rbp+84h]
  int v152; // [rsp+8B8h] [rbp+88h]
  __int64 v153; // [rsp+8C0h] [rbp+90h]
  __int64 v154; // [rsp+8C8h] [rbp+98h]
  __int64 v155; // [rsp+8D0h] [rbp+A0h]
  LARGE_INTEGER v156; // [rsp+8D8h] [rbp+A8h] BYREF
  __int64 v157; // [rsp+8E0h] [rbp+B0h]
  unsigned int v158; // [rsp+8E8h] [rbp+B8h]
  unsigned __int16 *v159; // [rsp+8F0h] [rbp+C0h]
  int v160; // [rsp+8F8h] [rbp+C8h]
  unsigned __int64 v161; // [rsp+900h] [rbp+D0h] BYREF
  void *v162; // [rsp+908h] [rbp+D8h]
  __int64 v163; // [rsp+910h] [rbp+E0h]
  struct _KTHREAD *CurrentThread; // [rsp+918h] [rbp+E8h]
  unsigned __int64 HighLimit; // [rsp+920h] [rbp+F0h] BYREF
  unsigned __int64 LowLimit; // [rsp+928h] [rbp+F8h] BYREF
  unsigned __int64 v167; // [rsp+930h] [rbp+100h] BYREF
  unsigned __int64 v168; // [rsp+938h] [rbp+108h] BYREF
  unsigned __int16 *v169; // [rsp+940h] [rbp+110h] BYREF
  __int64 v170; // [rsp+948h] [rbp+118h]
  void *v171; // [rsp+950h] [rbp+120h]
  char *v172; // [rsp+958h] [rbp+128h]
  __int64 v173; // [rsp+960h] [rbp+130h]
  unsigned __int64 v174; // [rsp+968h] [rbp+138h]
  __int128 v175; // [rsp+970h] [rbp+140h] BYREF
  __int64 v176; // [rsp+980h] [rbp+150h]
  int v177; // [rsp+988h] [rbp+158h]
  int IsEnabledDeviceUsage; // [rsp+98Ch] [rbp+15Ch]
  int v179; // [rsp+990h] [rbp+160h]
  __int64 v180; // [rsp+998h] [rbp+168h]
  unsigned __int64 *v181; // [rsp+9A0h] [rbp+170h]
  __int64 v182; // [rsp+9A8h] [rbp+178h]
  unsigned __int8 *v183; // [rsp+9B0h] [rbp+180h]
  _OWORD v184[25]; // [rsp+9C0h] [rbp+190h] BYREF
  _OWORD Src[5]; // [rsp+B50h] [rbp+320h] BYREF

  v144 = a3;
  v154 = a1;
  v148 = a13;
  v173 = a1;
  v129 = a2;
  v153 = a6;
  v17 = a11;
  v136 = a11;
  v174 = a11;
  v155 = a12;
  v171 = a15;
  LODWORD(v18) = (_DWORD)a16;
  v181 = a16;
  LODWORD(v19) = 0;
  v133 = 0;
  memset(v184, 0, 0x188uLL);
  i = 0;
  memset(Src, 0, sizeof(Src));
  StackLookasideListEntry = 0LL;
  v162 = 0LL;
  v139[0] = 0;
  v169 = 0LL;
  v161 = 0LL;
  v170 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v140 = a14 & 0x200;
  v134 = 512;
  v20 = 1LL;
  ListEntry = 0LL;
  v137 = 0;
  v21 = a10;
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
  v23 = v148;
  if ( !v148 )
    v23 = v154;
  v148 = v23;
  v128 = 0;
  v143 = *(_QWORD *)(v154 + 392);
  v163 = v143;
  if ( a16 && *a16 )
  {
    v161 = *a16;
    v128 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v171, (a14 & 0x400) != 0, v139, &v169);
  CurrentThread = KeGetCurrentThread();
  v183 = &CurrentThread->WaitBlockFill11[164];
  --CurrentThread->KernelApcDisable;
  v129 &= ~a4;
  while ( 2 )
  {
    v25 = v155;
LABEL_16:
    v26 = a9;
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = !_BitScanForward((unsigned int *)&v28, v129);
        i = v28;
        if ( v27 )
          goto LABEL_273;
        v175 = 0LL;
        v176 = 0LL;
        v156.QuadPart = 0LL;
        v130 = 80;
        v151 = 0;
        v141 = 0;
        v138 = 0;
        v159 = 0LL;
        v172 = 0LL;
        LOBYTE(v18) = 0;
        v134 = v18;
        v132 = 0;
        v20 = 1LL;
        v142 = 1LL;
        v157 = 1LL;
        ListEntry = 0LL;
        v129 &= v129 - 1;
        v29 = (unsigned int)v28;
        v30 = v24 + 32 * (v28 + 4);
        if ( !v25
          || (v31 = *(_DWORD *)(v25 + 4LL * (*(unsigned __int16 *)(v30 + 6) >> 5)),
              !_bittest(&v31, *(_BYTE *)(v30 + 6) & 0x1F)) )
        {
          if ( *(_DWORD *)v30 )
          {
            v32 = *(_BYTE *)(v30 + 4);
            if ( a8 <= v32 || !v32 )
            {
              if ( (v33 = *(_DWORD *)(v30 + 8), (v33 & 0x40) != 0) && !v26
                || (v26 & *(_QWORD *)(v30 + 16)) != 0 && (v26 & *(_QWORD *)(v30 + 24)) == *(_QWORD *)(v30 + 24) )
              {
                Process = KeGetCurrentThread()->ApcState.Process;
                if ( (a5 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
                  break;
                if ( (v33 & 0x200) == 0 )
                  break;
              }
            }
          }
        }
        v17 = v136;
      }
      v35 = *(_QWORD *)(v24 + 384);
      v37 = 0;
      if ( v35 )
      {
        v36 = *(_DWORD *)(104 * v29 + v35);
        if ( (v36 & 0x80000200) == 0x80000200 || (v36 & 0x80000100) == 0x80000100 )
          v37 = 1;
      }
      v38 = v136;
      LODWORD(v18) = i;
      if ( v37 )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v24, i, v144, v153, v21, v136) )
          goto LABEL_52;
        v24 = v148;
        v26 = a9;
      }
      if ( v140
        && EtwpIsEventNameFilterEnabled(v24, v18, a8, v26, 0)
        && !EtwpApplyEventNameFilter(v41, v18, v21, v38, 1, 0, v39, v40, 0) )
      {
        goto LABEL_52;
      }
      v42 = *(unsigned __int16 *)(v30 + 6);
      v137 = v42;
      v152 = v42;
      v43 = 8 * v42;
      v180 = 8 * v42;
      v44 = v143;
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v143 + 448) + 8 * v42),
             1u) )
      {
        LODWORD(v45) = v137;
        if ( v137 >= *(_DWORD *)(v44 + 16) )
        {
          v142 = 1LL;
          v157 = 1LL;
        }
        else
        {
          _mm_lfence();
          v45 = *(_QWORD *)(v44 + 456);
          v20 = *(_QWORD *)(v43 + v45);
          v142 = v20;
          v157 = v20;
          LODWORD(v18) = i;
        }
        LOBYTE(v45) = 1;
        v134 = v45;
        v132 = 1;
      }
      if ( (v20 & 1) != 0 )
        break;
      v47 = 0;
      if ( a7 )
      {
        v48 = 104;
        v130 = 104;
        v47 = 16;
      }
      else
      {
        v48 = v130;
      }
      v49 = *(_DWORD *)(v30 + 8);
      if ( (v49 & 0xFFFFFF9F) != 0 )
      {
        if ( (v49 & 0x800) != 0 && v170 && v170 != EtwpHostSiloState )
        {
          v47 |= 0x100u;
          v48 += (*(unsigned __int16 *)(v170 + 4224) + 15) & 0xFFFFFFF8;
          v130 = v48;
        }
        if ( (v49 & 1) != 0 )
        {
          if ( (v128 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem(Src);
            v128 |= 2u;
            v49 = *(_DWORD *)(v30 + 8);
          }
          v47 |= 2u;
          v48 += LOWORD(Src[0]);
          v130 = v48;
        }
        if ( (v49 & 2) != 0 )
        {
          v47 |= 1u;
          v48 += 16;
          v130 = v48;
        }
        if ( (v49 & 0x80u) != 0 )
        {
          v47 |= 0x40u;
          v48 += 16;
          v130 = v48;
        }
        if ( (v49 & 0x100) != 0 )
        {
          v47 |= 0x80u;
          v48 += 16;
          v130 = v48;
        }
        if ( (v49 & 4) != 0 )
        {
          v50 = v148;
          v51 = *(_QWORD *)(v148 + 384);
          v53 = 0;
          if ( v51 )
          {
            v52 = *(_DWORD *)(104LL * (unsigned int)v18 + v51);
            if ( (v52 & 0x80001000) == 0x80001000
              || (v52 & 0x80002000) == 0x80002000
              || (v52 & 0x80004000) == 0x80004000 )
            {
              v53 = 1;
            }
          }
          if ( !v53
            || EtwpApplyLevelKwFilter(v148, v18, a8, a9, 1)
            && (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v153, v50, (unsigned int)v18)
            && EtwpApplyEventNameFilter(v50, v18, a10, v136, 1, 0, a8, a9, 1) )
          {
            if ( (v128 & 1) == 0 )
            {
              v54 = 256;
              StackLookasideListEntry = EtwpGetStackLookasideListEntry();
              if ( StackLookasideListEntry )
              {
                v128 |= 8u;
              }
              else
              {
                HighLimit = 0LL;
                LowLimit = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v55 = alloca(1552LL);
                  StackLookasideListEntry = &v126;
                  v54 = 192;
                }
              }
              v56 = (_SLIST_ENTRY *)StackLookasideListEntry;
              if ( StackLookasideListEntry
                && !EtwpGetStackExtendedHeaderItem(CurrentThread, 0, v54, (__int64)&StackLookasideListEntry, 0, 0LL) )
              {
                if ( (v128 & 8) != 0 )
                {
                  RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, v56 - 1);
                  v128 &= ~8u;
                }
                StackLookasideListEntry = 0LL;
              }
              v128 |= 1u;
            }
            if ( StackLookasideListEntry )
            {
              if ( (*(_DWORD *)(v142 + 820) & 1) != 0
                && EtwpGetCrimsonStackKey(v142, (__int64)StackLookasideListEntry, &ListEntry) )
              {
                v47 |= 8u;
                v48 += 24;
              }
              else
              {
                v47 |= 4u;
                v48 += *(unsigned __int16 *)StackLookasideListEntry;
              }
              v130 = v48;
            }
            LODWORD(v19) = 0;
          }
        }
        if ( (*(_DWORD *)(v30 + 8) & 8) != 0 )
        {
          if ( (v128 & 4) == 0 )
          {
            v167 = 0LL;
            v168 = 0LL;
            IoGetStackLimits(&v168, &v167);
            if ( (unsigned __int64)&v167 - v168 > 0x1E0 )
            {
              v57 = alloca(480LL);
              v162 = &v127;
              EtwpGetPsmKeyExtendedHeaderItem();
            }
            v128 |= 4u;
          }
          if ( v162 )
          {
            v47 |= 0x20u;
            v48 += *(unsigned __int16 *)v162;
            v130 = v48;
          }
        }
      }
      v58 = &v184[3 * LODWORD(v184[24])];
      v59 = a10;
      if ( a10 )
      {
        v160 = 0;
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v60 = v136;
        if ( PreviousMode )
        {
          v61 = 16LL * a10;
          if ( v61 )
          {
            if ( (v136 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v136 + v61 > 0x7FFFFFFF0000LL || v136 + v61 < v136 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v48 = v130;
        while ( 1 )
        {
          v160 = v19;
          if ( (unsigned int)v19 >= v59 )
          {
            LOBYTE(v18) = i;
            goto LABEL_146;
          }
          v62 = v48;
          v151 = *(_DWORD *)(v60 + 16LL * (unsigned int)v19 + 8);
          v63 = v151;
          if ( v151 > 0xFFFF )
          {
            v133 = -2147483643;
            v129 |= 1 << i;
            IsEnabledDeviceUsage = Feature_1480059192__private_IsEnabledDeviceUsage();
            LODWORD(v19) = 0;
            if ( IsEnabledDeviceUsage )
            {
              v44 = v143;
            }
            else
            {
              if ( ListEntry )
                EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v142 + 1008));
              v44 = v143;
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v143 + 448) + v43),
                1u);
            }
            v20 = v142;
            v21 = a10;
            v17 = v136;
            goto LABEL_274;
          }
          if ( v140 )
          {
            v64 = *(_BYTE *)(v60 + 16LL * (unsigned int)v19 + 12);
            v63 = v151;
          }
          else
          {
            v64 = 0;
          }
          if ( v64 )
          {
            if ( v64 == 1 )
            {
              v179 = Feature_1480059192__private_IsEnabledDeviceUsage();
              v141 += v179 ? v63 : (unsigned __int16)v63;
              ++v138;
              v48 = v130;
              v59 = a10;
              v60 = v136;
            }
            else
            {
              v48 = v130;
            }
          }
          else
          {
            v48 = v63 + v130;
            v130 += v63;
          }
          if ( v48 < v62 )
            break;
          LODWORD(v19) = v19 + 1;
        }
        v133 = -2147483643;
        v129 |= 1 << i;
        v177 = Feature_1480059192__private_IsEnabledDeviceUsage();
        LODWORD(v19) = 0;
        if ( v177 )
        {
          v44 = v143;
        }
        else
        {
          if ( ListEntry )
            EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v142 + 1008));
          v44 = v143;
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v143 + 448) + v43), 1u);
        }
        v20 = v142;
        v21 = a10;
        v17 = v136;
        goto LABEL_274;
      }
LABEL_146:
      if ( v138 )
      {
        v19 = 0LL;
        v65 = Feature_1480059192__private_IsEnabledDeviceUsage() != 0;
        v66 = (v141 + 15) & 0xFFFFFFF8;
        if ( v65 && v66 > 0xFFFF )
        {
LABEL_270:
          v121 = v133;
          if ( v133 >= 0 )
            v121 = -1073741675;
          v133 = v121;
          v129 |= 1 << v18;
          v20 = v142;
          v21 = a10;
          v17 = v136;
LABEL_273:
          v44 = v143;
          goto LABEL_274;
        }
        v48 += v66;
        v130 = v48;
      }
      else
      {
        v19 = 0LL;
      }
      v67 = v139[0];
      if ( v139[0] )
      {
        v68 = Feature_1480059192__private_IsEnabledDeviceUsage() != 0;
        v69 = (v67 + 15) & 0xFFFFFFF8;
        if ( v68 && v69 > 0xFFFF )
          goto LABEL_270;
        v48 += v69;
        v130 = v48;
      }
      *((_DWORD *)v58 + 10) = v48;
      v18 = v142;
      v70 = EtwpReserveTraceBuffer(v142, v48, (__int64)&v175, &v156, 0);
      v182 = v70;
      v71 = ListEntry;
      if ( ListEntry )
      {
        EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v18 + 1008));
        if ( (unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() )
          v71 = 0LL;
        ListEntry = v71;
      }
      if ( !v70 )
      {
        v72 = 0;
        v73 = v48;
        v20 = v142;
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v142, v73);
        v21 = a10;
        v17 = v136;
        if ( v138 )
        {
          v72 = a10;
          v19 = v136;
        }
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(
            (_QWORD *)(v154 + 40),
            (__int16 *)(v153 + 40),
            (unsigned __int16 *)(v20 + 136),
            a5,
            ReserveTraceBufferStatus,
            v72,
            v19,
            1,
            1);
        v75 = v133;
        if ( v133 >= 0 )
        {
          if ( (*(_DWORD *)(v20 + 12) & 0x8000000) == 0 )
            v75 = ReserveTraceBufferStatus;
          v133 = v75;
        }
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v143 + 448) + v180), 1u);
        LODWORD(v19) = 0;
        v76 = Feature_1480059192__private_IsEnabledDeviceUsage() != 0;
        v77 = v134;
        if ( v76 )
          v77 = 0;
        LOBYTE(v134) = v77;
        v24 = v148;
        v25 = v155;
        if ( ReserveTraceBufferStatus == -1073741675 )
        {
          v133 = -1073741675;
          v44 = v143;
          goto LABEL_274;
        }
        goto LABEL_16;
      }
      *(_QWORD *)v58 = v18;
      *((_QWORD *)v58 + 1) = v70;
      v58[1] = v175;
      *((_QWORD *)v58 + 4) = v176;
      ++LODWORD(v184[24]);
      v78 = Feature_1480059192__private_IsEnabledDeviceUsage() != 0;
      v79 = (unsigned __int8)v134;
      if ( v78 )
        v79 = 0;
      v134 = v79;
      v132 = v79;
      v158 = 0;
      v18 = 80LL;
      v131 = 80;
      v80 = 0LL;
      v145 = 0LL;
      v81 = (_OWORD *)v153;
      *(_OWORD *)v70 = *(_OWORD *)v153;
      *(_OWORD *)(v70 + 16) = v81[1];
      *(_OWORD *)(v70 + 32) = v81[2];
      *(_OWORD *)(v70 + 48) = v81[3];
      *(_OWORD *)(v70 + 64) = v81[4];
      if ( v169 )
      {
        v82 = *(_OWORD *)v169;
        *(_WORD *)(v70 + 4) |= 0x80u;
      }
      else
      {
        v82 = *(_OWORD *)(v154 + 40);
      }
      *(_OWORD *)(v70 + 24) = v82;
      *(_DWORD *)v70 = *((_DWORD *)&qword_14001CC70 + v144) | v48;
      if ( v47 )
      {
        if ( (v47 & 0x100) != 0 )
        {
          v80 = (unsigned __int16 *)(v70 + 80);
          v83 = v170;
          v84 = (*(_WORD *)(v170 + 4224) + 15) & 0xFFF8;
          *(_WORD *)(v70 + 80) = v84;
          *(_WORD *)(v70 + 82) = 16;
          *(_WORD *)(v70 + 86) = *(_WORD *)(v83 + 4224);
          *(_WORD *)(v70 + 84) &= ~1u;
          *(_WORD *)(v70 + 84) = 0;
          v85 = v84 - *(_WORD *)(v83 + 4224) - 8;
          memmove((void *)(v70 + 88), *(const void **)(v83 + 4216), *(unsigned __int16 *)(v83 + 4224));
          memset((void *)(v70 + 88 + *(unsigned __int16 *)(v83 + 4224)), 0, v85);
          *(_WORD *)(v70 + 4) |= 1u;
          v18 = (unsigned int)*(unsigned __int16 *)(v70 + 80) + 80;
          v131 = *(unsigned __int16 *)(v70 + 80) + 80;
          v145 = (unsigned __int16 *)(v70 + 80);
        }
        if ( (v47 & 0x10) != 0 )
        {
          v86 = v18 + v70;
          *(_DWORD *)v86 = 65560;
          *(_WORD *)(v86 + 6) = 16;
          *(_WORD *)(v86 + 4) = *(_WORD *)(v18 + v70 + 4) & 0xFFFE;
          *(_WORD *)(v86 + 4) = 0;
          *(_OWORD *)(v86 + 8) = *a7;
          *(_WORD *)(v70 + 4) |= 1u;
          v18 = (unsigned int)(v18 + 24);
          v131 = v18;
          if ( v80 )
            v80[2] |= 1u;
          v80 = (unsigned __int16 *)v86;
          v145 = (unsigned __int16 *)v86;
        }
        if ( (v47 & 2) != 0 )
        {
          v18 += v70;
          v87 = LOWORD(Src[0]);
          memmove((void *)v18, Src, LOWORD(Src[0]));
          *(_WORD *)(v70 + 4) |= 1u;
          v88 = v87 + v131;
          v131 += v87;
          if ( v80 )
            v80[2] |= 1u;
          v80 = (unsigned __int16 *)v18;
          v145 = (unsigned __int16 *)v18;
          LODWORD(v18) = v88;
        }
        if ( (v47 & 1) != 0 )
        {
          v89 = v18;
          v90 = (unsigned int)v18 + v70;
          *(_DWORD *)v90 = 196624;
          *(_WORD *)(v90 + 6) = 4;
          *(_WORD *)(v90 + 4) &= ~1u;
          *(_WORD *)(v90 + 4) = 0;
          *(_DWORD *)(v90 + 8) = PsGetCurrentProcessSessionId();
          *(_WORD *)(v70 + 4) |= 1u;
          v91 = v89 + 16;
          v131 = v89 + 16;
          if ( v80 )
            v80[2] |= 1u;
          v80 = (unsigned __int16 *)v90;
          v145 = (unsigned __int16 *)v90;
        }
        else
        {
          v91 = v131;
        }
        if ( (v47 & 0x40) != 0 )
        {
          v92 = v91 + v70;
          *(_DWORD *)v92 = 851984;
          *(_WORD *)(v92 + 6) = 8;
          *(_WORD *)(v92 + 4) &= ~1u;
          *(_WORD *)(v92 + 4) = 0;
          ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
          *((_QWORD *)v94 + 1) = ProcessStartKey;
          *(_WORD *)(v70 + 4) |= 1u;
          v18 = (unsigned int)(v95 + 16);
          v131 = v95 + 16;
          if ( v80 )
            v80[2] |= 1u;
          v80 = v94;
          v145 = v94;
          v48 = v130;
        }
        else
        {
          v18 = v131;
        }
        if ( (v47 & 0x80u) != 0 )
        {
          v96 = v18 + v70;
          *(_DWORD *)v96 = 655376;
          *(_WORD *)(v96 + 6) = 8;
          *(_WORD *)(v96 + 4) = *(_WORD *)(v18 + v70 + 4) & 0xFFFE;
          *(_WORD *)(v96 + 4) = 0;
          if ( (v128 & 0x10) != 0 || (EtwpCreateEventKey(&v161), v128 |= 0x10u, !v181) )
          {
            v97 = v161;
          }
          else
          {
            v97 = v161;
            *v181 = v161;
          }
          *(_QWORD *)(v96 + 8) = v97;
          *(_WORD *)(v70 + 4) |= 1u;
          v18 = (unsigned int)(v18 + 16);
          v131 = v18;
          if ( v80 )
            v80[2] |= 1u;
          v80 = (unsigned __int16 *)v96;
          v145 = (unsigned __int16 *)v96;
        }
        if ( (v47 & 4) != 0 )
        {
          v18 += v70;
          v98 = (unsigned __int16 *)StackLookasideListEntry;
          memmove((void *)v18, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
          *(_WORD *)(v70 + 4) |= 1u;
          v99 = *v98 + v131;
          v131 = v99;
          if ( v80 )
            v80[2] |= 1u;
          v80 = (unsigned __int16 *)v18;
          v145 = (unsigned __int16 *)v18;
          LODWORD(v18) = v99;
        }
        if ( (v47 & 8) != 0 )
        {
          v100 = v70 + (unsigned int)v18;
          *(_DWORD *)v100 = 1179672;
          *(_WORD *)(v100 + 6) = 16;
          *(_WORD *)(v100 + 4) &= ~1u;
          *(_WORD *)(v100 + 4) = 0;
          *(_QWORD *)(v100 + 16) = ListEntry;
          *(_QWORD *)(v100 + 8) = *((_QWORD *)StackLookasideListEntry + 1);
          *(_WORD *)(v70 + 4) |= 1u;
          LODWORD(v18) = v18 + 24;
          v131 = v18;
          if ( v80 )
            v80[2] |= 1u;
          v80 = (unsigned __int16 *)v100;
          v145 = (unsigned __int16 *)v100;
        }
        if ( (v47 & 0x20) != 0 )
        {
          v101 = (unsigned __int16 *)(v70 + (unsigned int)v18);
          v102 = (unsigned __int16 *)v162;
          memmove(v101, v162, *(unsigned __int16 *)v162);
          *(_WORD *)(v70 + 4) |= 1u;
          LODWORD(v18) = *v102 + (_DWORD)v18;
          v131 = v18;
          if ( v80 )
            v80[2] |= 1u;
          v80 = v101;
          v145 = v101;
        }
      }
      v103 = v139[0];
      if ( v139[0] )
      {
        v104 = (unsigned __int16 *)(v70 + (unsigned int)v18);
        v105 = (v139[0] + 15) & 0xFFF8;
        *v104 = v105;
        v104[1] = 12;
        v104[3] = v103;
        v104[2] &= ~1u;
        v104[2] = 0;
        v106 = v105 - v103 - 8;
        v107 = v103;
        memmove(v104 + 4, v171, v103);
        memset((char *)v104 + v107 + 8, 0, v106);
        *(_WORD *)(v70 + 4) |= 1u;
        LODWORD(v18) = *v104 + v131;
        v131 = v18;
        if ( v80 )
          v80[2] |= 1u;
        v80 = v104;
        v145 = v104;
      }
      if ( v138 )
      {
        v108 = (unsigned __int16 *)(v70 + (unsigned int)v18);
        v109 = v141;
        v110 = (v141 + 15) & 0xFFF8;
        *v108 = v110;
        v108[1] = 11;
        v108[3] = v109;
        v108[2] &= ~1u;
        v108[2] = 0;
        v111 = v108 + 4;
        v159 = v108 + 4;
        v172 = (char *)v108 + v109 + 8;
        memset(v172, 0, (unsigned __int16)(v110 - v109 - 8));
        *(_WORD *)(v70 + 4) |= 1u;
        LODWORD(v18) = *v108 + (_DWORD)v18;
        v131 = v18;
        if ( v80 )
          v80[2] |= 1u;
      }
      else
      {
        v111 = v159;
      }
      v112 = 0;
      v17 = v136;
      while ( 1 )
      {
        v158 = v112;
        if ( v112 >= a10 )
          break;
        v113 = *(unsigned int *)(v17 + 16LL * v112 + 8);
        v114 = *(LARGE_INTEGER **)(v17 + 16LL * v112);
        if ( v140 )
        {
          v115 = *(_BYTE *)(v17 + 16LL * v112 + 12);
          v48 = v130;
          v111 = v159;
        }
        else
        {
          v115 = 0;
        }
        if ( v115 )
        {
          v116 = v115 - 1;
          if ( v116 )
          {
            if ( v116 == 2 )
            {
              if ( (_DWORD)v113 == 8 )
              {
                if ( (unsigned __int64)&v114[1] > 0x7FFFFFFF0000LL || &v114[1] < v114 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v156 = *v114;
              }
              ++v112;
            }
            else
            {
              ++v112;
            }
          }
          else
          {
            if ( !v111 )
              goto LABEL_260;
            v117 = *(unsigned int *)(v17 + 16LL * v112 + 8);
            if ( (unsigned __int16 *)((char *)v111 + v113) < v111 || (char *)v111 + v113 > v172 || !v138 )
              goto LABEL_260;
            if ( (_DWORD)v113
              && ((unsigned __int64)v114 + v113 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v114 + v113) < v114) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove(v111, v114, v113);
            v111 = (unsigned __int16 *)((char *)v111 + v117);
            v159 = v111;
            --v138;
            ++v112;
          }
        }
        else
        {
          v118 = (void *)(v70 + (unsigned int)v18);
          v119 = v113 + v18;
          if ( (int)v113 + (int)v18 < (unsigned int)v18 )
          {
            v131 = -1;
LABEL_260:
            v133 = -1073741820;
            *(_DWORD *)v70 = v48 | 0xC00D0000;
            *(LARGE_INTEGER *)(v70 + 16) = v156;
            LODWORD(v19) = 0;
            v20 = v142;
            v44 = v143;
            v21 = a10;
            goto LABEL_274;
          }
          LODWORD(v18) = v113 + v18;
          v131 = v119;
          if ( v119 > v48 )
            goto LABEL_260;
          v150 = KeGetCurrentThread()->PreviousMode;
          if ( v150
            && (_DWORD)v113
            && ((unsigned __int64)v114 + v113 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v114 + v113) < v114) )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove(v118, v114, v113);
          v48 = v130;
          v111 = v159;
          ++v112;
        }
      }
      v25 = v155;
      if ( v155 )
      {
        LODWORD(v18) = v137;
        *(_DWORD *)(v155 + 4LL * (v137 >> 5)) |= 1 << (v137 & 0x1F);
      }
      *(LARGE_INTEGER *)(v70 + 16) = v156;
      v120 = CurrentThread;
      *(_DWORD *)(v70 + 56) = CurrentThread->SchedulerApc.SpareLong0;
      *(_DWORD *)(v70 + 60) = v120->UserTime;
      *(_DWORD *)(v70 + 8) = v120[1].CurrentRunTime;
      *(_DWORD *)(v70 + 12) = v120[1].CycleTime;
      v20 = v142;
      if ( (*(_DWORD *)(v142 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v142, (__int64)&v175);
        v25 = v155;
      }
      LODWORD(v19) = 0;
      v21 = a10;
      v24 = v148;
      v26 = a9;
      if ( *(_QWORD *)(v20 + 1288) )
      {
        EtwpInvokeEventCallback(v20, (__int64)&v175, v154 + 40);
        goto LABEL_14;
      }
    }
    LODWORD(v18) = v134;
    if ( (_BYTE)v134 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v44 + 448) + v43), 1u);
      LODWORD(v18) = (unsigned __int8)v18;
      if ( (unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() )
        LODWORD(v18) = 0;
      v134 = v18;
    }
    v21 = a10;
    if ( v137 != 3 )
    {
LABEL_52:
      v17 = v136;
LABEL_14:
      v24 = v148;
      continue;
    }
    break;
  }
  v46 = -1073741058;
  if ( !*(_DWORD *)(v44 + 4068) )
    v46 = -1073741816;
  v133 = v46;
  v17 = v136;
LABEL_274:
  if ( (unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() )
  {
    if ( ListEntry )
      EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v20 + 1008));
    if ( (_BYTE)v134 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v44 + 448) + 8LL * v137), 1u);
  }
  if ( (v128 & 8) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v133 < 0 )
  {
    EtwpFailLogging(a8, a9, v154, (__int64)v184, v129, 0, v133, v153 + 40, 1, v21, v17, 1);
  }
  else
  {
    for ( i = 0; i < LODWORD(v184[24]); LODWORD(v19) = i )
    {
      v122 = *(_QWORD *)&v184[3 * (unsigned int)v19 + 1];
      v123 = (signed __int64 *)*((_QWORD *)&v184[3 * (unsigned int)v19 + 1] + 1);
      _m_prefetchw(v123);
      v124 = *v123;
      if ( (v122 ^ (unsigned __int64)*v123) >= 0xF )
      {
LABEL_286:
        _InterlockedDecrement((volatile signed __int32 *)(v122 + 12));
      }
      else
      {
        while ( 1 )
        {
          v125 = v124;
          v124 = _InterlockedCompareExchange64(v123, v124 + 1, v124);
          if ( v125 == v124 )
            break;
          if ( (v122 ^ (unsigned __int64)v124) >= 0xF )
            goto LABEL_286;
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v44 + 448) + 8LL * **(unsigned int **)&v184[3 * (unsigned int)v19]),
        1u);
      ++i;
    }
  }
  v27 = (*(_WORD *)v183)++ == 0xFFFF;
  if ( v27
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v133;
}
