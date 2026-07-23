/*
 * XREFs of EtwpEventWriteFull @ 0x140258630
 * Callers:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140399764 (EtwWriteKMSecurityEvent.c)
 *     EtwpStackWalkApc @ 0x1404691C0 (EtwpStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1405FDFB8 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1405FF3B0 (EtwWriteString.c)
 *     EtwWriteErrorLogEntry @ 0x140872A58 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     MmCanThreadFault @ 0x14022795C (MmCanThreadFault.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     IoGetStackLimits @ 0x14022EA40 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     EtwpReserveTraceBuffer @ 0x1402341D0 (EtwpReserveTraceBuffer.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x1402577E0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140322090 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x14036666C (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036AD38 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpSendTraceEvent @ 0x1403A2268 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_1480059192__private_IsEnabledDeviceUsage @ 0x1404122C4 (Feature_1480059192__private_IsEnabledDeviceUsage.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpGetStackLookasideListEntry @ 0x140468DC0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x140468E86 (EtwpQueueStackWalkApc.c)
 *     EtwpDereferenceStackEntry @ 0x140469672 (EtwpDereferenceStackEntry.c)
 *     EtwpApplyEventNameFilter @ 0x14046ABB6 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x14046B012 (EtwpApplyLevelKwFilter.c)
 *     EtwpTraceLostEvent @ 0x1405FC914 (EtwpTraceLostEvent.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1406000AC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpInvokeEventCallback @ 0x1406014E8 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x14060215C (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1406047F8 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D6E0 (EtwpGetSidExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        _QWORD *a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        unsigned __int16 *a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  __int64 v19; // rbx
  __int64 v20; // r13
  int v21; // r14d
  int v22; // ecx
  __int16 v23; // dx
  __int64 v25; // rax
  char v26; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 CurrentIrql; // r11
  int v29; // ebx
  __int64 v30; // r9
  __int64 v31; // r10
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // r8
  __int64 v36; // r12
  int v37; // ecx
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  int v40; // edx
  _KPROCESS *Process; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  char v44; // al
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int8 v48; // r8
  unsigned __int8 v49; // al
  unsigned __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rsi
  int v53; // r12d
  int v54; // ebx
  int v55; // esi
  unsigned int v56; // r15d
  int v57; // eax
  int v58; // eax
  int v59; // eax
  unsigned __int16 *v60; // rcx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v63; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  int v65; // eax
  int v66; // eax
  __int64 v67; // rdx
  int v68; // edx
  bool v69; // al
  unsigned __int16 *v70; // r12
  unsigned __int8 v71; // r14
  unsigned int v72; // esi
  __int64 v73; // r9
  int v74; // r14d
  unsigned int v75; // esi
  void *v76; // rsp
  _QWORD *v77; // r8
  bool v78; // cl
  _OWORD *v79; // r12
  unsigned int v80; // r14d
  unsigned __int16 *v81; // rsi
  char v82; // al
  unsigned int v83; // eax
  int v84; // ebx
  unsigned __int16 v85; // si
  unsigned int v86; // eax
  __int16 v87; // cx
  __int64 v88; // r14
  __int64 v89; // r8
  _SLIST_ENTRY *v90; // rsi
  int IsEnabledDeviceUsage; // eax
  __int64 v92; // rdx
  __int64 v93; // r15
  int ReserveTraceBufferStatus; // ebx
  __int64 v95; // rsi
  unsigned int v96; // r14d
  int v97; // eax
  __int64 v98; // r8
  unsigned __int8 v99; // cl
  _WORD *v100; // r12
  __int128 v101; // xmm0
  GUID v102; // xmm0
  _DWORD *v103; // rcx
  unsigned __int16 *v104; // rcx
  __int64 v105; // r13
  unsigned __int16 v106; // r14
  unsigned __int16 v107; // r14
  _WORD *v108; // rsi
  unsigned __int16 *v109; // r14
  unsigned int v110; // r10d
  unsigned __int16 *v111; // rcx
  unsigned __int16 *v112; // rsi
  unsigned __int16 *v113; // rsi
  int SessionId; // eax
  int v115; // ecx
  unsigned __int16 *v116; // rdx
  unsigned __int16 *v117; // r8
  struct _KPRCB *v118; // rcx
  unsigned __int64 v119; // rax
  _QWORD *v120; // rsi
  int v121; // r9d
  char v122; // al
  unsigned __int16 *v123; // rdx
  unsigned __int16 *v124; // rsi
  unsigned __int16 v125; // bx
  unsigned __int16 *v126; // r14
  unsigned __int16 v127; // si
  unsigned __int16 v128; // si
  unsigned __int16 *v129; // rdx
  int v130; // r10d
  int v131; // r11d
  __int64 v132; // r14
  unsigned __int16 *v133; // rbx
  __int64 v134; // rax
  unsigned __int16 v135; // dx
  unsigned int i; // esi
  size_t v137; // rdx
  _QWORD *v138; // r9
  char *v139; // rbx
  void *v140; // rcx
  unsigned int v141; // r10d
  __int64 v142; // r15
  __int64 v143; // rsi
  unsigned __int8 v144; // r14
  __int64 v145; // r8
  signed __int64 *v146; // rdx
  signed __int64 v147; // rax
  signed __int64 v148; // rtt
  _SLIST_ENTRY *v149; // r8
  struct _KPRCB *v150; // rdx
  _GENERAL_LOOKASIDE *v151; // rcx
  char v152; // [rsp+40h] [rbp-610h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+610h] [rbp-40h]
  char v154; // [rsp+650h] [rbp+0h]
  int v155; // [rsp+654h] [rbp+4h]
  char v156; // [rsp+658h] [rbp+8h]
  unsigned __int8 v157; // [rsp+659h] [rbp+9h]
  char v158; // [rsp+660h] [rbp+10h]
  unsigned int v159; // [rsp+668h] [rbp+18h]
  int v160; // [rsp+66Ch] [rbp+1Ch]
  unsigned int Size; // [rsp+670h] [rbp+20h]
  int Size_4; // [rsp+674h] [rbp+24h]
  unsigned __int8 v163; // [rsp+678h] [rbp+28h]
  int v164; // [rsp+67Ch] [rbp+2Ch]
  __int16 v165; // [rsp+680h] [rbp+30h]
  int v166; // [rsp+684h] [rbp+34h]
  unsigned int v167; // [rsp+688h] [rbp+38h]
  char v168; // [rsp+68Ch] [rbp+3Ch]
  unsigned int v169; // [rsp+690h] [rbp+40h]
  int v170; // [rsp+694h] [rbp+44h]
  __int64 v171; // [rsp+698h] [rbp+48h]
  __int16 v172; // [rsp+6A0h] [rbp+50h]
  unsigned __int16 *v173; // [rsp+6A8h] [rbp+58h]
  unsigned __int16 *v174; // [rsp+6B0h] [rbp+60h]
  __int64 v175; // [rsp+6B8h] [rbp+68h]
  __int64 v176; // [rsp+6C0h] [rbp+70h]
  unsigned int v177; // [rsp+6C8h] [rbp+78h]
  void *StackLookasideListEntry; // [rsp+6D0h] [rbp+80h] BYREF
  void *Src; // [rsp+6D8h] [rbp+88h]
  int v180; // [rsp+6E0h] [rbp+90h]
  __int64 v181; // [rsp+6E8h] [rbp+98h]
  int v182; // [rsp+6F0h] [rbp+A0h]
  unsigned __int16 *v183; // [rsp+6F8h] [rbp+A8h]
  __int64 v184; // [rsp+700h] [rbp+B0h]
  __int64 v185; // [rsp+708h] [rbp+B8h]
  PSLIST_ENTRY ListEntry; // [rsp+710h] [rbp+C0h] BYREF
  __int64 v187; // [rsp+718h] [rbp+C8h]
  _QWORD *v188; // [rsp+720h] [rbp+D0h]
  PSLIST_ENTRY v189; // [rsp+728h] [rbp+D8h]
  unsigned __int64 v190; // [rsp+730h] [rbp+E0h]
  void *v191; // [rsp+738h] [rbp+E8h]
  __int128 *v192; // [rsp+740h] [rbp+F0h]
  void *v193; // [rsp+748h] [rbp+F8h]
  void *v194; // [rsp+750h] [rbp+100h]
  __int64 v195; // [rsp+758h] [rbp+108h]
  __int64 v196; // [rsp+760h] [rbp+110h]
  unsigned int v197; // [rsp+768h] [rbp+118h]
  unsigned __int64 v198; // [rsp+770h] [rbp+120h]
  _DWORD *v199; // [rsp+778h] [rbp+128h]
  __int64 v200; // [rsp+780h] [rbp+130h]
  struct _KTHREAD *v201; // [rsp+788h] [rbp+138h]
  unsigned __int64 HighLimit; // [rsp+790h] [rbp+140h] BYREF
  unsigned __int64 LowLimit; // [rsp+798h] [rbp+148h] BYREF
  LARGE_INTEGER v204; // [rsp+7A0h] [rbp+150h] BYREF
  __int64 v205; // [rsp+7A8h] [rbp+158h]
  unsigned __int64 *v206; // [rsp+7B0h] [rbp+160h]
  char *v207; // [rsp+7B8h] [rbp+168h]
  __int128 v208; // [rsp+7C0h] [rbp+170h] BYREF
  __int64 v209; // [rsp+7D0h] [rbp+180h]
  _OWORD *v210; // [rsp+7D8h] [rbp+188h]
  __int64 v211; // [rsp+7E0h] [rbp+190h]
  _QWORD *v212; // [rsp+7E8h] [rbp+198h]
  _OWORD v213[25]; // [rsp+7F0h] [rbp+1A0h] BYREF

  v164 = a2;
  v211 = a11;
  v197 = a10;
  v210 = a9;
  v175 = a14;
  v188 = a1;
  v177 = a4;
  v173 = a5;
  v187 = a11;
  v19 = a12;
  v200 = a13;
  v193 = a16;
  v206 = a17;
  LODWORD(v20) = 0;
  v21 = 0;
  v160 = 0;
  v180 = 0;
  memset(v213, 0, 0x188uLL);
  Size = 0;
  Src = 0LL;
  v189 = 0LL;
  StackLookasideListEntry = 0LL;
  v198 = 0LL;
  v172 = a15 & 0x200;
  v205 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v22 = v205;
  LOBYTE(v22) = 0;
  Size_4 = v22;
  ListEntry = 0LL;
  v169 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  v25 = v175;
  if ( !v175 )
    v25 = (__int64)a1;
  v175 = v25;
  v196 = v25;
  if ( v193 )
  {
    if ( v23 )
    {
      v170 = 0;
      v165 = 0;
      v192 = (__int128 *)((char *)v193 + 6);
    }
    else
    {
      v170 = *(unsigned __int16 *)v193;
      v165 = v170;
      v192 = 0LL;
    }
  }
  else
  {
    v170 = 0;
    v165 = 0;
    v192 = 0LL;
  }
  v26 = 0;
  v154 = 0;
  v181 = v188[49];
  v195 = v181;
  if ( v206 && *v206 )
  {
    v198 = *v206;
    v26 = 4;
    v154 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v201 = CurrentThread;
  if ( !a12 )
    v19 = (__int64)CurrentThread;
  v199 = (_DWORD *)v19;
  if ( KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    LOBYTE(CurrentIrql) = 15;
  v156 = CurrentIrql;
  v176 = CurrentIrql;
  v163 = CurrentIrql;
  v168 = 0;
  if ( !(_BYTE)CurrentIrql )
  {
    --v201->KernelApcDisable;
    v168 = 1;
  }
  v29 = v164;
  LOBYTE(v29) = ~a3 & v164;
  v30 = (__int64)v173;
  v31 = v175;
LABEL_23:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            v32 = !_BitScanForward((unsigned int *)&v33, (unsigned __int8)v29);
            Size = v33;
            if ( v32 )
              goto LABEL_282;
            v208 = 0LL;
            v209 = 0LL;
            v204.QuadPart = 0LL;
            v155 = 80;
            v174 = 0LL;
            v183 = 0LL;
            v167 = 0;
            v166 = 0;
            v194 = 0LL;
            v207 = 0LL;
            LOBYTE(Size_4) = 0;
            v34 = 1LL;
            v171 = 1LL;
            v184 = 1LL;
            ListEntry = 0LL;
            LOBYTE(v29) = (v29 - 1) & v29;
            v164 = v29;
            v158 = v29;
            v35 = (unsigned int)v33;
            v36 = v31 + 32 * (v33 + 4);
            if ( v200 )
            {
              v37 = *(_DWORD *)(v200 + 4LL * (*(unsigned __int16 *)(v36 + 6) >> 5));
              if ( _bittest(&v37, *(_BYTE *)(v36 + 6) & 0x1F) )
                continue;
            }
            break;
          }
          v38 = *(_QWORD *)(v30 + 8);
          if ( !*(_DWORD *)v36 )
            continue;
          break;
        }
        v39 = *(_BYTE *)(v36 + 4);
        if ( *(_BYTE *)(v30 + 4) > v39 )
        {
          if ( v39 )
            continue;
        }
        break;
      }
      v40 = *(_DWORD *)(v36 + 8);
      if ( ((v40 & 0x40) == 0 || v38)
        && ((v38 & *(_QWORD *)(v36 + 16)) == 0 || (*(_QWORD *)(v36 + 24) & v38) != *(_QWORD *)(v36 + 24)) )
      {
        continue;
      }
      break;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ((v177 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (v40 & 0x200) != 0 )
      continue;
    break;
  }
  v42 = *(_QWORD *)(v31 + 384);
  if ( v42
    && ((v43 = 104 * v35, (*(_DWORD *)(104 * v35 + v42) & 0x80000200) == 0x80000200)
     || (*(_DWORD *)(104 * v35 + v42) & 0x80000100) == 0x80000100) )
  {
    v44 = 1;
  }
  else
  {
    v43 = 104 * v35;
    v44 = 0;
  }
  if ( v44 )
  {
    if ( !EtwpApplyEventIdPayloadFilter(v31, Size, 0, v30, *(_WORD *)v30, a10, v187, 0, CurrentIrql) )
      goto LABEL_70;
    v30 = (__int64)v173;
    v31 = v175;
    LOBYTE(CurrentIrql) = v176;
  }
  if ( v172 )
  {
    v45 = *(_QWORD *)(v30 + 8);
    v46 = 0LL;
    v47 = *(_QWORD *)(v31 + 384);
    if ( v47 )
    {
      if ( (*(_DWORD *)(v43 + v47) & 0x80000400) == 0x80000400 )
        v46 = *(_QWORD *)(v43 + v47 + 96);
      if ( v46 )
      {
        v48 = *(_BYTE *)(v30 + 4);
        v49 = *(_BYTE *)(v46 + 1);
        if ( (v48 <= v49 || !v49)
          && (!v45 || (v45 & *(_QWORD *)(v46 + 8)) != 0 && (*(_QWORD *)(v46 + 16) & v45) == *(_QWORD *)(v46 + 16))
          && !(unsigned __int8)EtwpApplyEventNameFilter(
                                 v31,
                                 Size,
                                 a10,
                                 v187,
                                 0,
                                 CurrentIrql,
                                 v48,
                                 *(_QWORD *)(v30 + 8),
                                 0) )
        {
          goto LABEL_70;
        }
      }
    }
  }
  v50 = *(unsigned __int16 *)(v36 + 6);
  v169 = v50;
  v182 = v50;
  v51 = (unsigned int)v50;
  v190 = v50;
  v52 = v181;
  if ( (unsigned __int8)v176 >= 2u )
  {
    v190 = (unsigned int)v50;
    if ( (unsigned int)v50 >= *(_DWORD *)(v181 + 16) )
    {
      v190 = (unsigned int)v50;
    }
    else
    {
      _mm_lfence();
      v34 = *(_QWORD *)(*(_QWORD *)(v181 + 456) + 8LL * (unsigned int)v50);
    }
  }
  else
  {
    if ( !ExAcquireRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v181 + 448) + 8 * v50),
            1u) )
      goto LABEL_64;
    if ( (unsigned int)v51 < *(_DWORD *)(v52 + 16) )
    {
      _mm_lfence();
      v34 = *(_QWORD *)(*(_QWORD *)(v52 + 456) + 8 * v51);
    }
    LOBYTE(Size_4) = 1;
  }
  v171 = v34;
  v184 = v34;
LABEL_64:
  if ( (v34 & 1) == 0 )
  {
    v54 = v210 != 0LL ? 0x10 : 0;
    v55 = 104;
    if ( !v210 )
      v55 = 80;
    v56 = v55;
    v159 = v55;
    if ( (*(_DWORD *)(v36 + 8) & 0xFFFFFF9F) != 0 )
    {
      if ( EtwpPagingDisabled
        || (v177 & 1) != 0
        || (LOBYTE(v57) = MmCanThreadFault(), !v57)
        || (v58 = 256, BYTE6(v201[1].Queue)) )
      {
        v58 = 0;
      }
      v54 |= v58;
      v59 = *(_DWORD *)(v36 + 8);
      v159 = v55;
      if ( (v59 & 0x800) != 0 )
      {
        if ( v205 )
        {
          v159 = v55;
          if ( v205 != EtwpHostSiloState )
          {
            v54 |= 0x200u;
            v56 = v55 + ((*(unsigned __int16 *)(v205 + 4224) + 15) & 0xFFFFFFF8);
            v159 = v56;
          }
        }
        LODWORD(v20) = 0;
      }
      if ( (v59 & 1) != 0 && (v54 & 0x100) != 0 )
      {
        v60 = (unsigned __int16 *)Src;
        if ( Src )
          goto LABEL_97;
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[8].P;
        ++P->TotalAllocates;
        v63 = RtlpInterlockedPopEntrySList(&P->ListHead);
        Src = v63;
        if ( !v63 )
        {
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[8].L;
          ++L->TotalAllocates;
          v63 = RtlpInterlockedPopEntrySList(&L->ListHead);
          Src = v63;
          if ( !v63 )
          {
            ++L->AllocateMisses;
            v63 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                  (unsigned int)L->Type,
                                  L->Size,
                                  L->Tag);
            Src = v63;
          }
        }
        if ( v63 )
          LODWORD(v63->Next) = CurrentPrcb->Number;
        v189 = v63;
        if ( v63 )
        {
          EtwpGetSidExtendedHeaderItem();
          v60 = (unsigned __int16 *)Src;
          if ( Src )
          {
LABEL_97:
            v54 |= 2u;
            v56 += *v60;
            v159 = v56;
          }
        }
      }
      v65 = *(_DWORD *)(v36 + 8);
      if ( (v65 & 2) != 0 )
      {
        v54 |= 1u;
        v56 += 16;
        v159 = v56;
      }
      if ( (v65 & 0x80u) != 0 && (ObGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
      {
        v54 |= 0x40u;
        v56 += 16;
        v159 = v56;
      }
      v66 = *(_DWORD *)(v36 + 8);
      if ( (v66 & 0x100) != 0 )
      {
        v54 |= 0x80u;
        v56 += 16;
        v159 = v56;
      }
      if ( (v66 & 4) != 0 && !EtwpPagingDisabled )
      {
        v67 = *(_QWORD *)(v175 + 384);
        v69 = 0;
        if ( v67 )
        {
          v68 = *(_DWORD *)(104LL * Size + v67);
          if ( (v68 & 0x80001000) == 0x80001000 || (v68 & 0x80002000) == 0x80002000 || (v68 & 0x80004000) == 0x80004000 )
            v69 = 1;
        }
        v70 = v173;
        if ( !v69
          || (v71 = v163,
              LOBYTE(BugCheckParameter4) = v163 < 2u,
              v72 = Size,
              (unsigned __int8)EtwpApplyLevelKwFilter(
                                 v175,
                                 Size,
                                 *((unsigned __int8 *)v173 + 4),
                                 *((_QWORD *)v173 + 1),
                                 v163 < 2u))
          && (LOBYTE(v73) = v71 < 2u, v74 = v175, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v70, v175, v72, v73))
          && (unsigned __int8)EtwpApplyEventNameFilter(
                                v74,
                                v72,
                                a10,
                                v187,
                                0,
                                v176,
                                *((_BYTE *)v70 + 4),
                                *((_QWORD *)v70 + 1),
                                1) )
        {
          if ( (v26 & 1) == 0 )
          {
            v75 = 256;
            StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
            if ( StackLookasideListEntry )
            {
              v26 |= 2u;
            }
            else
            {
              HighLimit = 0LL;
              LowLimit = 0LL;
              IoGetStackLimits(&LowLimit, &HighLimit);
              if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
              {
                v76 = alloca(1552LL);
                StackLookasideListEntry = &v152;
                v75 = 192;
              }
            }
            if ( StackLookasideListEntry )
            {
              v77 = 0LL;
              v78 = (*(_DWORD *)(v171 + 816) & 0x40000000) == 0;
              if ( v188[5] == *(_QWORD *)&EventTracingProvGuid.Data1
                && v188[6] == *(_QWORD *)EventTracingProvGuid.Data4
                && *v70 == 18 )
              {
                v54 |= 0x20u;
                v77 = v188 + 10;
                v78 = 0;
              }
              LOBYTE(BugCheckParameter4) = v78;
              if ( !(unsigned __int8)EtwpGetStackExtendedHeaderItem(
                                       v199,
                                       v177,
                                       v75,
                                       &StackLookasideListEntry,
                                       BugCheckParameter4,
                                       v77) )
              {
                if ( (v26 & 2) != 0 )
                {
                  RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
                  v26 &= ~2u;
                }
                StackLookasideListEntry = 0LL;
              }
            }
            v26 |= 1u;
            v154 = v26;
          }
          if ( StackLookasideListEntry )
          {
            if ( (*(_DWORD *)(v171 + 820) & 1) != 0
              && (unsigned __int8)EtwpGetCrimsonStackKey(v171, StackLookasideListEntry, &ListEntry) )
            {
              v54 |= 8u;
              v56 += 24;
            }
            else
            {
              v54 |= 4u;
              v56 += *(unsigned __int16 *)StackLookasideListEntry;
            }
            v159 = v56;
          }
        }
      }
    }
    v79 = &v213[3 * LODWORD(v213[24])];
    v80 = 0;
    if ( a10 )
    {
      v81 = (unsigned __int16 *)(v187 + 8);
      while ( !(unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() || *(_DWORD *)v81 <= 0xFFFFu )
      {
        if ( v172 )
          v82 = *((_BYTE *)v81 + 4);
        else
          v82 = 0;
        if ( v82 )
        {
          if ( v82 == 1 )
          {
            if ( (unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() )
              v167 += *(_DWORD *)v81;
            else
              v167 += *v81;
            ++v166;
          }
        }
        else
        {
          v56 += *(_DWORD *)v81;
          v159 = v56;
        }
        ++v80;
        v81 += 8;
        if ( v80 >= a10 )
          goto LABEL_154;
      }
      v21 = v160;
      if ( v160 >= 0 )
        v21 = -2147483643;
      v84 = (unsigned __int8)v164;
      goto LABEL_281;
    }
LABEL_154:
    if ( v166 )
    {
      if ( (unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() )
      {
        v83 = (v167 + 15) & 0xFFFFFFF8;
        if ( v83 > 0xFFFF )
          goto LABEL_278;
      }
      else
      {
        v83 = (v167 + 15) & 0xFFFFFFF8;
      }
      v56 += v83;
      v159 = v56;
    }
    v85 = v170;
    if ( (_WORD)v170 )
    {
      if ( (unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() )
      {
        v86 = (v85 + 15) & 0xFFFFFFF8;
        if ( v86 > 0xFFFF )
        {
LABEL_278:
          v21 = v160;
          if ( v160 >= 0 )
            v21 = -1073741675;
          v84 = (unsigned __int8)v164;
LABEL_281:
          v160 = v21;
          v29 = v84 | (1 << Size);
LABEL_282:
          LOBYTE(v53) = Size_4;
          goto LABEL_283;
        }
      }
      else
      {
        v86 = (v85 + 15) & 0xFFFFFFF8;
      }
      v56 += v86;
      v159 = v56;
    }
    *((_DWORD *)v79 + 10) = v56;
    v87 = 0;
    if ( (v177 & 4) != 0 )
      v87 = 512;
    if ( (v177 & 8) != 0 )
      v87 |= 0x600u;
    v88 = v171;
    v20 = EtwpReserveTraceBuffer(v171, v56, (__int64)&v208, &v204, v87);
    v185 = v20;
    v90 = ListEntry;
    if ( ListEntry )
    {
      EtwpDereferenceStackEntry(ListEntry);
      IsEnabledDeviceUsage = Feature_1480059192__private_IsEnabledDeviceUsage();
      v89 = 0LL;
      if ( IsEnabledDeviceUsage )
        v90 = 0LL;
      ListEntry = v90;
    }
    if ( !v20 )
    {
      v92 = v56;
      v93 = v171;
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v171, v92, v89);
      v95 = v211;
      if ( !v166 )
        v95 = 0LL;
      v96 = v197;
      if ( !v166 )
        v96 = 0;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(
          (_DWORD)v188 + 40,
          (_DWORD)v173,
          v93 + 136,
          v177,
          ReserveTraceBufferStatus,
          v96,
          v95,
          v163 < 2u,
          0);
      v21 = v160;
      if ( v160 >= 0 )
      {
        if ( (*(_DWORD *)(v93 + 12) & 0x8000000) == 0 )
          v21 = ReserveTraceBufferStatus;
        v160 = v21;
        v180 = v21;
      }
      LOBYTE(v53) = Size_4;
      if ( (_BYTE)Size_4 )
      {
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v181 + 448) + 8 * v190), 1u);
        v53 = (unsigned __int8)v53;
        if ( (unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() )
          v53 = 0;
        Size_4 = v53;
      }
      v32 = ReserveTraceBufferStatus == -1073741675;
      v29 = v164;
      v31 = v175;
      if ( v32 )
      {
        v21 = -1073741675;
        v160 = -1073741675;
        goto LABEL_283;
      }
LABEL_21:
      v30 = (__int64)v173;
      goto LABEL_22;
    }
    *(_QWORD *)v79 = v88;
    *((_QWORD *)v79 + 1) = v20;
    v79[1] = v208;
    *((_QWORD *)v79 + 4) = v209;
    ++LODWORD(v213[24]);
    v97 = Feature_1480059192__private_IsEnabledDeviceUsage();
    v99 = Size_4;
    if ( v97 )
      v99 = 0;
    Size_4 = v99;
    v157 = v99;
    *(_DWORD *)v20 = v56 | 0xC0130000;
    v100 = (_WORD *)(v20 + 4);
    v191 = (void *)(v20 + 4);
    *(_WORD *)(v20 + 4) = a6;
    *(_WORD *)(v20 + 6) = a7;
    *(_OWORD *)(v20 + 40) = *(_OWORD *)v173;
    if ( v192 )
    {
      v101 = *v192;
      *v100 = a6 | 0x80;
    }
    else
    {
      v101 = *(_OWORD *)(v188 + 5);
    }
    *(_OWORD *)(v20 + 24) = v101;
    if ( a8 )
      v102 = *a8;
    else
      v102 = NullGuid;
    *(GUID *)(v20 + 64) = v102;
    v212 = (_QWORD *)(v20 + 16);
    *(LARGE_INTEGER *)(v20 + 16) = v204;
    v103 = v199;
    *(_DWORD *)(v20 + 8) = v199[308];
    *(_DWORD *)(v20 + 12) = v103[306];
    *(_DWORD *)(v20 + 56) = v103[163];
    *(_DWORD *)(v20 + 60) = v103[183];
    if ( v54 )
    {
      if ( (v54 & 0x200) != 0 )
      {
        v104 = (unsigned __int16 *)(v20 + 80);
        v174 = v104;
        v105 = v205;
        v106 = (*(_WORD *)(v205 + 4224) + 15) & 0xFFF8;
        *v104 = v106;
        v104[1] = 16;
        v104[3] = *(_WORD *)(v105 + 4224);
        v104[2] = 0;
        v107 = v106 - *(_WORD *)(v105 + 4224) - 8;
        v108 = v104 + 4;
        memmove(v104 + 4, *(const void **)(v105 + 4216), *(unsigned __int16 *)(v105 + 4224));
        memset((char *)v108 + *(unsigned __int16 *)(v105 + 4224), 0, v107);
        *v100 |= 1u;
        v109 = v174;
        v110 = *v174 + 80;
        v155 = v110;
        v183 = v174;
        v20 = v185;
      }
      else
      {
        v109 = v174;
        v110 = v155;
      }
      if ( (v54 & 0x10) != 0 )
      {
        v111 = (unsigned __int16 *)(v20 + v110);
        *(_DWORD *)v111 = 65560;
        *((_DWORD *)v111 + 1) = 0x100000;
        *(_OWORD *)(v111 + 4) = *a9;
        *v100 |= 1u;
        v110 += 24;
        v155 = v110;
        if ( v109 )
          v109[2] |= 1u;
        v109 = v111;
        v174 = v111;
        v183 = v111;
      }
      if ( (v54 & 2) != 0 )
      {
        v112 = (unsigned __int16 *)(v20 + v110);
        memmove(v112, Src, *(unsigned __int16 *)Src);
        *v100 |= 1u;
        v110 = *(unsigned __int16 *)Src + v155;
        v155 = v110;
        if ( v109 )
          v109[2] |= 1u;
        v109 = v112;
        v174 = v112;
        v183 = v112;
      }
      if ( (v54 & 1) != 0 )
      {
        v113 = (unsigned __int16 *)(v20 + v110);
        *(_DWORD *)v113 = 196624;
        *((_DWORD *)v113 + 1) = 0x40000;
        SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
        v115 = 0;
        if ( SessionId != -1 )
          v115 = SessionId;
        *((_DWORD *)v113 + 2) = v115;
        *v100 |= 1u;
        v110 = v155 + 16;
        v155 += 16;
        if ( v109 )
          v109[2] |= 1u;
        v109 = v113;
        v174 = v113;
        v183 = v113;
      }
      if ( (v54 & 0x40) != 0 )
      {
        v116 = (unsigned __int16 *)(v20 + v110);
        *(_DWORD *)v116 = 851984;
        *((_DWORD *)v116 + 1) = 0x80000;
        *((_QWORD *)v116 + 1) = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[6] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
        *v100 |= 1u;
        v110 += 16;
        v155 = v110;
        if ( v109 )
          v109[2] |= 1u;
        v109 = v116;
        v174 = v116;
        v183 = v116;
      }
      if ( (v54 & 0x80u) != 0 )
      {
        v117 = (unsigned __int16 *)(v20 + v110);
        *(_DWORD *)v117 = 655376;
        *((_DWORD *)v117 + 1) = 0x80000;
        if ( (v26 & 4) == 0 )
        {
          v118 = KeGetCurrentPrcb();
          v119 = _InterlockedIncrement64((volatile signed __int64 *)v118->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v118->Number << 48);
          v198 = v119;
          v26 |= 4u;
          v154 = v26;
          if ( v206 )
            *v206 = v119;
        }
        *((_QWORD *)v117 + 1) = v198;
        *v100 |= 1u;
        v110 += 16;
        v155 = v110;
        if ( v109 )
          v109[2] |= 1u;
        v109 = v117;
        v174 = v117;
        v183 = v117;
      }
      if ( (v54 & 4) != 0 )
      {
        v120 = (_QWORD *)(v20 + v110);
        memmove(v120, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
        if ( !v120[1] || (v54 & 0x20) != 0 )
        {
          v98 = 0LL;
        }
        else
        {
          LOBYTE(v121) = 1;
          v122 = EtwpQueueStackWalkApc((_DWORD)v199, (unsigned __int8)v176, v171, v121, (__int64)(v120 + 1));
          v98 = 0LL;
          if ( !v122 )
            v120[1] = 0LL;
        }
        *v100 |= 1u;
        v110 = *(unsigned __int16 *)StackLookasideListEntry + v155;
        v155 = v110;
        if ( v174 )
          v174[2] |= 1u;
        v109 = (unsigned __int16 *)v120;
        v174 = (unsigned __int16 *)v120;
        v183 = (unsigned __int16 *)v120;
      }
      else
      {
        v98 = 0LL;
      }
      if ( (v54 & 8) != 0 )
      {
        v123 = (unsigned __int16 *)(v20 + v110);
        *(_DWORD *)v123 = 1179672;
        *((_DWORD *)v123 + 1) = 0x100000;
        *((_QWORD *)v123 + 2) = ListEntry;
        *((_QWORD *)v123 + 1) = *((_QWORD *)StackLookasideListEntry + 1);
        *v100 |= 1u;
        v110 += 24;
        v155 = v110;
        if ( v109 )
          v109[2] |= 1u;
        v124 = v123;
        v174 = v123;
        v183 = v123;
        goto LABEL_245;
      }
    }
    else
    {
      v110 = v155;
    }
    v124 = v174;
LABEL_245:
    v125 = v170;
    if ( (_WORD)v170 )
    {
      v126 = (unsigned __int16 *)(v20 + v110);
      v190 = (unsigned __int64)v126;
      v127 = (v170 + 15) & 0xFFF8;
      *v126 = v127;
      *(_DWORD *)(v126 + 1) = 12;
      v126[3] = v125;
      v128 = v127 - v125 - 8;
      LOWORD(Size) = v128;
      memmove(v126 + 4, v193, v125);
      memset((char *)v126 + v125 + 8, 0, v128);
      v129 = v174;
      v130 = v155;
      *v100 |= 1u;
      v110 = *v126 + v130;
      v155 = v110;
      if ( v129 )
        v129[2] |= 1u;
      v124 = v126;
    }
    v131 = v166;
    v132 = v185;
    LODWORD(v20) = 0;
    if ( v166 )
    {
      v133 = (unsigned __int16 *)(v185 + v110);
      v134 = v167;
      v135 = (v167 + 15) & 0xFFF8;
      *v133 = v135;
      *(_DWORD *)(v133 + 1) = 11;
      v133[3] = v134;
      v194 = v133 + 4;
      v207 = (char *)v133 + v134 + 8;
      memset(v207, 0, (unsigned __int16)(v135 - v134 - 8));
      *v100 |= 1u;
      v110 = *v133 + v155;
      v155 = v110;
      v131 = v166;
      if ( v124 )
        v124[2] |= 1u;
    }
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        v167 = i;
        if ( i >= a10 )
        {
          v142 = v171;
          if ( (*(_DWORD *)(v171 + 12) & 0x80000) != 0
            && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
          {
            EtwpSendTraceEvent(v171, &v208, v98);
          }
          if ( *(_QWORD *)(v142 + 1288) )
            EtwpInvokeEventCallback(v142, &v208, v188 + 5, 0LL);
          v21 = v160;
          v29 = v164;
          v30 = (__int64)v173;
          v31 = v175;
          LOBYTE(CurrentIrql) = v176;
          if ( v200 )
          {
            *(_DWORD *)(v200 + 4LL * (v169 >> 5)) |= 1 << (v169 & 0x1F);
LABEL_22:
            LOBYTE(CurrentIrql) = v176;
          }
          goto LABEL_23;
        }
        v137 = *(unsigned int *)(v187 + 16LL * i + 8);
        Size = *(_DWORD *)(v187 + 16LL * i + 8);
        v138 = *(_QWORD **)(v187 + 16LL * i);
        if ( v172 )
          v98 = *(unsigned __int8 *)(v187 + 16LL * i + 12);
        else
          LOBYTE(v98) = 0;
        if ( (_BYTE)v98 )
          break;
        v140 = (void *)(v132 + v110);
        v191 = v140;
        v141 = v137 + v110;
        v155 = v141;
        if ( v141 > v56 )
          KeBugCheckEx(0x11Du, 5uLL, v141, v56, 0LL);
        memmove(v140, v138, v137);
        v110 = v155;
        v131 = v166;
LABEL_268:
        ++i;
      }
      if ( (unsigned __int8)v98 != 1 )
      {
        if ( (unsigned __int8)v98 == 3 && (_DWORD)v137 == 8 )
          *v212 = *v138;
        goto LABEL_268;
      }
      if ( !v194 || (v139 = (char *)v194 + v137, v191 = (char *)v194 + v137, (char *)v194 + v137 > v207) || !v131 )
        KeBugCheckEx(0x11Du, 5uLL, v110, v56, 0LL);
      memmove(v194, v138, v137);
      v110 = v155;
      v194 = v139;
      v131 = --v166;
    }
  }
  LOBYTE(v53) = Size_4;
  if ( (_BYTE)Size_4 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v52 + 448) + 8 * v51), 1u);
    v53 = (unsigned __int8)v53;
    if ( (unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() )
      v53 = 0;
    Size_4 = v53;
  }
  if ( (_DWORD)v51 != 3 )
  {
LABEL_70:
    v29 = v164;
    v31 = v175;
    goto LABEL_21;
  }
  v21 = -1073741816;
  if ( *(_DWORD *)(v52 + 4068) )
    v21 = -1073741058;
  v160 = v21;
  LOBYTE(v29) = v164;
LABEL_283:
  if ( (unsigned int)Feature_1480059192__private_IsEnabledDeviceUsage() )
  {
    if ( ListEntry )
      EtwpDereferenceStackEntry(ListEntry);
    v143 = v181;
    if ( (_BYTE)v53 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v181 + 448) + 8LL * v169), 1u);
  }
  else
  {
    v143 = v181;
  }
  if ( (v26 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v21 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)v173 + 4),
      *((_QWORD *)v173 + 1),
      (_DWORD)v188,
      (unsigned int)v213,
      v29,
      v177,
      v21,
      (__int64)v173,
      v163 < 2u,
      a10,
      v187,
      0);
  }
  else
  {
    Size = 0;
    if ( LODWORD(v213[24]) )
    {
      v144 = v176;
      do
      {
        v145 = *(_QWORD *)&v213[3 * (unsigned int)v20 + 1];
        v146 = (signed __int64 *)*((_QWORD *)&v213[3 * (unsigned int)v20 + 1] + 1);
        _m_prefetchw(v146);
        v147 = *v146;
        if ( (v145 ^ (unsigned __int64)*v146) >= 0xF )
        {
LABEL_297:
          _InterlockedDecrement((volatile signed __int32 *)(v145 + 12));
        }
        else
        {
          while ( 1 )
          {
            v148 = v147;
            v147 = _InterlockedCompareExchange64(v146, v147 + 1, v147);
            if ( v148 == v147 )
              break;
            if ( (v145 ^ (unsigned __int64)v147) >= 0xF )
              goto LABEL_297;
          }
        }
        if ( v144 < 2u )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v143 + 448)
                                           + 8LL * **(unsigned int **)&v213[3 * (unsigned int)v20]),
            1u);
        LODWORD(v20) = ++Size;
      }
      while ( Size < LODWORD(v213[24]) );
      v21 = v160;
    }
  }
  if ( v168 )
    KeLeaveCriticalRegionThread((__int64)v201);
  v149 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v150 = KeGetCurrentPrcb();
    v151 = v150->PPLookasideList[8].P;
    ++v151->TotalFrees;
    if ( LOWORD(v151->ListHead.Alignment) < v151->Depth
      || (++v151->FreeMisses,
          v151 = v150->PPLookasideList[8].L,
          ++v151->TotalFrees,
          LOWORD(v151->ListHead.Alignment) < v151->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v151->ListHead, v149);
    }
    else
    {
      ++v151->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))v151->FreeEx)(v149);
    }
  }
  return (unsigned int)v21;
}
