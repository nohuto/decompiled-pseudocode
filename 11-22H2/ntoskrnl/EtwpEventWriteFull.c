/*
 * XREFs of EtwpEventWriteFull @ 0x140258450
 * Callers:
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140399294 (EtwWriteKMSecurityEvent.c)
 *     EtwpStackWalkApc @ 0x140468760 (EtwpStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1405FDAD8 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1405FEED0 (EtwWriteString.c)
 *     EtwWriteErrorLogEntry @ 0x140872CE8 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 *     MmCanThreadFault @ 0x14022786C (MmCanThreadFault.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     IoGetStackLimits @ 0x14022E950 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x14022EBF0 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     EtwpReserveTraceBuffer @ 0x1402340E0 (EtwpReserveTraceBuffer.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140257600 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259BB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140321C20 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x140365E7C (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036A548 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpSendTraceEvent @ 0x1403A18C8 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     EtwpGetStackLookasideListEntry @ 0x140468360 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x140468426 (EtwpQueueStackWalkApc.c)
 *     EtwpDereferenceStackEntry @ 0x140468C12 (EtwpDereferenceStackEntry.c)
 *     EtwpApplyEventNameFilter @ 0x14046A156 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x14046A5B2 (EtwpApplyLevelKwFilter.c)
 *     EtwpTraceLostEvent @ 0x1405FC434 (EtwpTraceLostEvent.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405FFBCC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpInvokeEventCallback @ 0x140601008 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C7C (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyStackWalkIdFilter @ 0x140604318 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D550 (EtwpGetSidExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        _QWORD *a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
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
  _SLIST_ENTRY *v20; // r15
  __int16 v21; // dx
  __int64 v23; // rax
  int v24; // ecx
  char v25; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 CurrentIrql; // rax
  unsigned __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // r11
  bool v32; // zf
  __int64 v33; // rdx
  unsigned int v34; // r13d
  char v35; // r14
  __int64 v36; // r12
  int v37; // ecx
  __int64 v38; // rdx
  unsigned __int8 v39; // al
  _KPROCESS *Process; // rcx
  __int64 v41; // rax
  __int64 v42; // rbx
  char v43; // al
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int8 v46; // dl
  unsigned __int8 v47; // al
  unsigned __int64 v48; // rbx
  BOOLEAN v49; // al
  __int64 v50; // rcx
  __int64 v51; // r10
  int v52; // eax
  int v53; // ecx
  __int64 v54; // r14
  unsigned int v55; // ecx
  __int64 v56; // rbx
  unsigned __int8 v57; // r15
  signed __int64 *v58; // rdx
  signed __int64 v59; // rax
  signed __int64 v60; // rtt
  int v61; // ebx
  int v62; // esi
  unsigned int v63; // r15d
  int v64; // eax
  int v65; // eax
  int v66; // eax
  unsigned __int16 *v67; // rcx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v70; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  int v72; // eax
  int v73; // eax
  __int64 v74; // rdx
  int v75; // edx
  bool v76; // al
  unsigned __int16 *v77; // r12
  unsigned __int8 v78; // r14
  unsigned int v79; // esi
  __int64 v80; // r9
  int v81; // r14d
  unsigned int v82; // esi
  void *v83; // rsp
  _QWORD *v84; // r8
  bool v85; // cl
  char CrimsonStackKey; // al
  _OWORD *v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // r8
  unsigned __int16 v90; // si
  int v91; // edi
  char v92; // al
  __int16 v93; // cx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r14
  int ReserveTraceBufferStatus; // ebx
  __int64 v98; // rsi
  unsigned int v99; // r14d
  BOOLEAN v100; // al
  __int64 v101; // r15
  int v102; // ecx
  _WORD *v103; // r12
  __int128 v104; // xmm0
  GUID v105; // xmm0
  _DWORD *v106; // rcx
  __int64 v107; // r13
  __int16 v108; // r14
  unsigned __int16 v109; // r14
  __int64 v110; // rsi
  unsigned __int16 *v111; // r14
  unsigned __int16 *v112; // rcx
  unsigned __int16 *v113; // rsi
  unsigned __int16 *v114; // rsi
  int SessionId; // eax
  int v116; // ecx
  unsigned __int16 *v117; // rdx
  unsigned __int16 *v118; // r8
  struct _KPRCB *v119; // rcx
  unsigned __int64 v120; // rax
  _QWORD *v121; // rsi
  unsigned __int16 *v122; // r8
  unsigned __int16 *v123; // rdx
  unsigned __int16 *v124; // rsi
  unsigned __int16 v125; // bx
  unsigned __int16 *v126; // r14
  unsigned __int16 v127; // si
  unsigned __int16 v128; // si
  int v129; // r13d
  int v130; // r10d
  _OWORD *v131; // r14
  unsigned __int16 *v132; // rbx
  __int64 v133; // rcx
  unsigned __int16 v134; // dx
  unsigned int i; // esi
  size_t v136; // rdx
  char *v137; // rbx
  char *v138; // rcx
  __int64 v139; // rbx
  struct _KPRCB *v140; // rdx
  _GENERAL_LOOKASIDE *v141; // rcx
  char v142; // [rsp+40h] [rbp-610h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+610h] [rbp-40h]
  unsigned int v144; // [rsp+618h] [rbp-38h]
  char v145; // [rsp+650h] [rbp+0h]
  unsigned __int8 v146; // [rsp+658h] [rbp+8h]
  char v147; // [rsp+660h] [rbp+10h]
  unsigned int v148; // [rsp+664h] [rbp+14h]
  unsigned __int8 v149; // [rsp+668h] [rbp+18h]
  int v150; // [rsp+66Ch] [rbp+1Ch]
  int Size; // [rsp+670h] [rbp+20h]
  __int16 Size_4; // [rsp+674h] [rbp+24h]
  unsigned int v153; // [rsp+678h] [rbp+28h]
  int v154; // [rsp+67Ch] [rbp+2Ch]
  char v155; // [rsp+680h] [rbp+30h]
  __int64 v156; // [rsp+688h] [rbp+38h]
  unsigned __int16 v157; // [rsp+690h] [rbp+40h]
  unsigned __int16 v158; // [rsp+694h] [rbp+44h]
  int v159; // [rsp+698h] [rbp+48h]
  __int64 v160; // [rsp+6A0h] [rbp+50h]
  void *Src; // [rsp+6A8h] [rbp+58h]
  __int16 v162; // [rsp+6B0h] [rbp+60h]
  int v163; // [rsp+6B4h] [rbp+64h]
  unsigned __int16 *v164; // [rsp+6B8h] [rbp+68h]
  __int64 v165; // [rsp+6C0h] [rbp+70h]
  unsigned int v166; // [rsp+6C8h] [rbp+78h]
  _OWORD *v167; // [rsp+6D0h] [rbp+80h]
  void *StackLookasideListEntry; // [rsp+6D8h] [rbp+88h] BYREF
  __int64 v169; // [rsp+6E0h] [rbp+90h]
  __int64 v170; // [rsp+6E8h] [rbp+98h]
  unsigned __int16 *v171; // [rsp+6F0h] [rbp+A0h]
  unsigned int v172; // [rsp+6F8h] [rbp+A8h]
  __int64 v173; // [rsp+700h] [rbp+B0h]
  _QWORD *v174; // [rsp+708h] [rbp+B8h]
  PSLIST_ENTRY v175; // [rsp+710h] [rbp+C0h]
  unsigned __int64 v176; // [rsp+718h] [rbp+C8h]
  void *v177; // [rsp+720h] [rbp+D0h]
  __int128 *v178; // [rsp+728h] [rbp+D8h]
  void *v179; // [rsp+730h] [rbp+E0h]
  void *v180; // [rsp+738h] [rbp+E8h]
  __int64 v181; // [rsp+740h] [rbp+F0h]
  __int64 v182; // [rsp+748h] [rbp+F8h]
  unsigned int v183; // [rsp+750h] [rbp+100h]
  unsigned __int64 v184; // [rsp+758h] [rbp+108h]
  _DWORD *v185; // [rsp+760h] [rbp+110h]
  PSLIST_ENTRY ListEntry; // [rsp+768h] [rbp+118h] BYREF
  __int64 v187; // [rsp+770h] [rbp+120h]
  struct _KTHREAD *v188; // [rsp+778h] [rbp+128h]
  unsigned __int64 HighLimit; // [rsp+780h] [rbp+130h] BYREF
  unsigned __int64 LowLimit; // [rsp+788h] [rbp+138h] BYREF
  LARGE_INTEGER v191; // [rsp+790h] [rbp+140h] BYREF
  __int64 v192; // [rsp+798h] [rbp+148h]
  unsigned __int64 *v193; // [rsp+7A0h] [rbp+150h]
  char *v194; // [rsp+7A8h] [rbp+158h]
  __int128 v195; // [rsp+7B0h] [rbp+160h] BYREF
  __int64 v196; // [rsp+7C0h] [rbp+170h]
  _OWORD *v197; // [rsp+7C8h] [rbp+178h]
  __int64 v198; // [rsp+7D0h] [rbp+180h]
  _QWORD *v199; // [rsp+7D8h] [rbp+188h]
  _OWORD v200[25]; // [rsp+7E0h] [rbp+190h] BYREF

  v198 = a11;
  v183 = a10;
  v197 = a9;
  v165 = a14;
  v174 = a1;
  v146 = a2;
  v166 = a4;
  v160 = a5;
  v173 = a11;
  v19 = a12;
  v187 = a13;
  v179 = a16;
  v193 = a17;
  v163 = 0;
  memset(v200, 0, 0x188uLL);
  v153 = 0;
  v20 = 0LL;
  Src = 0LL;
  v175 = 0LL;
  StackLookasideListEntry = 0LL;
  v184 = 0LL;
  v162 = a15 & 0x200;
  v192 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( a10 > 0x80 )
    return 3221225485LL;
  v23 = v165;
  if ( !v165 )
    v23 = (__int64)a1;
  v165 = v23;
  v182 = v23;
  if ( v179 )
  {
    if ( v21 )
    {
      v24 = 0;
      v178 = (__int128 *)((char *)v179 + 6);
    }
    else
    {
      v24 = *(unsigned __int16 *)v179;
      v178 = 0LL;
    }
    Size_4 = v24;
    v159 = v24;
  }
  else
  {
    v159 = 0;
    Size_4 = 0;
    v178 = 0LL;
  }
  v25 = 0;
  v145 = 0;
  v169 = v174[49];
  v181 = v169;
  if ( v193 && *v193 )
  {
    v184 = *v193;
    v25 = 4;
    v145 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v188 = CurrentThread;
  if ( !a12 )
    v19 = (__int64)CurrentThread;
  v185 = (_DWORD *)v19;
  if ( KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    LOBYTE(CurrentIrql) = 15;
  v147 = CurrentIrql;
  v170 = CurrentIrql;
  v149 = CurrentIrql;
  v155 = 0;
  if ( !(_BYTE)CurrentIrql )
  {
    --v188->KernelApcDisable;
    v155 = 1;
  }
  v146 &= ~a3;
  v29 = 80LL;
  v30 = a5;
  v31 = v165;
  while ( 1 )
  {
LABEL_25:
    v32 = !_BitScanForward((unsigned int *)&v33, v146);
    v153 = v33;
    if ( v32 )
      goto LABEL_75;
    v156 = 1LL;
    v195 = 0LL;
    v196 = 0LL;
    ListEntry = 0LL;
    v191.QuadPart = 0LL;
    v34 = 80;
    Size = 80;
    v150 = 80;
    v164 = 0LL;
    v171 = 0LL;
    v35 = 0;
    LOBYTE(v157) = 0;
    v158 = 0;
    v154 = 0;
    v180 = 0LL;
    v194 = 0LL;
    v146 &= v146 - 1;
    v28 = (unsigned int)v33;
    v36 = v31 + 32 * (v33 + 4);
    if ( v187 )
    {
      v37 = *(_DWORD *)(v187 + 4LL * (*(unsigned __int16 *)(v36 + 6) >> 5));
      v29 = 80LL;
      if ( _bittest(&v37, *(_BYTE *)(v36 + 6) & 0x1F) )
        continue;
    }
    v38 = *(_QWORD *)(v30 + 8);
    v29 = 80LL;
    if ( *(_DWORD *)v36 )
    {
      v39 = *(_BYTE *)(v36 + 4);
      if ( *(_BYTE *)(v30 + 4) <= v39 || !v39 )
      {
        v29 = *(unsigned int *)(v36 + 8);
        if ( ((v29 & 0x40) == 0 || v38)
          && ((v38 & *(_QWORD *)(v36 + 16)) == 0 || (v38 & *(_QWORD *)(v36 + 24)) != *(_QWORD *)(v36 + 24)) )
        {
          v29 = 80LL;
          continue;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (v166 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
          break;
        v29 = 80LL;
        if ( (*(_DWORD *)(v36 + 8) & 0x200) == 0 )
          break;
      }
    }
  }
  v41 = *(_QWORD *)(v31 + 384);
  if ( v41
    && ((v42 = 104 * v28, (*(_DWORD *)(104 * v28 + v41) & 0x80000200) == 0x80000200)
     || (*(_DWORD *)(104 * v28 + v41) & 0x80000100) == 0x80000100) )
  {
    v43 = 1;
  }
  else
  {
    v42 = 104 * v28;
    v43 = 0;
  }
  if ( v43 )
  {
    if ( !EtwpApplyEventIdPayloadFilter(v31, v153, 0, v30, *(_WORD *)v30, a10, v173, 0, v170) )
    {
LABEL_71:
      v31 = v165;
      v29 = 80LL;
LABEL_24:
      v30 = v160;
      goto LABEL_25;
    }
    v30 = v160;
    v31 = v165;
  }
  if ( v162 )
  {
    v29 = *(_QWORD *)(v30 + 8);
    v44 = 0LL;
    v45 = *(_QWORD *)(v31 + 384);
    if ( v45 )
    {
      if ( (*(_DWORD *)(v42 + v45) & 0x80000400) == 0x80000400 )
        v44 = *(_QWORD *)(v42 + v45 + 96);
      if ( v44 )
      {
        v46 = *(_BYTE *)(v30 + 4);
        v47 = *(_BYTE *)(v44 + 1);
        if ( (v46 <= v47 || !v47)
          && (!v29 || (v29 & *(_QWORD *)(v44 + 8)) != 0 && (v29 & *(_QWORD *)(v44 + 16)) == *(_QWORD *)(v44 + 16))
          && !(unsigned __int8)EtwpApplyEventNameFilter(v31, v153, a10, v173, 0, v170, v46, *(_QWORD *)(v30 + 8), 0) )
        {
          goto LABEL_71;
        }
      }
    }
  }
  v48 = *(unsigned __int16 *)(v36 + 6);
  v172 = *(unsigned __int16 *)(v36 + 6);
  v176 = v48;
  if ( (unsigned __int8)v170 >= 2u )
  {
    v176 = (unsigned int)v48;
    v50 = v169;
    if ( (unsigned int)v48 >= *(_DWORD *)(v169 + 16) )
    {
      v51 = 1LL;
      v156 = 1LL;
      v176 = (unsigned int)v48;
    }
    else
    {
      _mm_lfence();
      v51 = *(_QWORD *)(*(_QWORD *)(v169 + 456) + 8 * v48);
      v156 = v51;
    }
  }
  else
  {
    v49 = ExAcquireRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v169 + 448) + 8 * v48),
            1u);
    v50 = v169;
    if ( v49 )
    {
      if ( (unsigned int)v48 >= *(_DWORD *)(v169 + 16) )
      {
        v156 = 1LL;
      }
      else
      {
        _mm_lfence();
        v156 = *(_QWORD *)(*(_QWORD *)(v169 + 456) + 8 * v48);
      }
      v35 = 1;
      LOBYTE(v157) = 1;
    }
    v51 = v156;
  }
  if ( (v51 & 1) == 0 )
  {
    v61 = v197 != 0LL ? 0x10 : 0;
    v62 = 104;
    if ( !v197 )
      v62 = 80;
    v63 = v62;
    v148 = v62;
    if ( (*(_DWORD *)(v36 + 8) & 0xFFFFFF9F) != 0 )
    {
      if ( EtwpPagingDisabled || (v166 & 1) != 0 || (LOBYTE(v64) = MmCanThreadFault(), !v64) || BYTE6(v188[1].Queue) )
        v65 = 0;
      else
        v65 = 256;
      v61 |= v65;
      v66 = *(_DWORD *)(v36 + 8);
      v148 = v62;
      if ( (v66 & 0x800) != 0 )
      {
        if ( v192 )
        {
          v148 = v62;
          if ( v192 != EtwpHostSiloState )
          {
            v61 |= 0x200u;
            v63 = v62 + ((*(unsigned __int16 *)(v192 + 4224) + 15) & 0xFFFFFFF8);
            v148 = v63;
          }
        }
        v34 = Size;
      }
      if ( (v66 & 1) != 0 && (v61 & 0x100) != 0 )
      {
        v67 = (unsigned __int16 *)Src;
        if ( Src )
          goto LABEL_113;
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[8].P;
        ++P->TotalAllocates;
        v70 = RtlpInterlockedPopEntrySList(&P->ListHead);
        Src = v70;
        if ( !v70 )
        {
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[8].L;
          ++L->TotalAllocates;
          v70 = RtlpInterlockedPopEntrySList(&L->ListHead);
          Src = v70;
          if ( !v70 )
          {
            ++L->AllocateMisses;
            v70 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                  (unsigned int)L->Type,
                                  L->Size,
                                  L->Tag);
            Src = v70;
          }
        }
        if ( v70 )
          LODWORD(v70->Next) = CurrentPrcb->Number;
        v175 = v70;
        if ( v70 )
        {
          EtwpGetSidExtendedHeaderItem();
          v67 = (unsigned __int16 *)Src;
          if ( Src )
          {
LABEL_113:
            v61 |= 2u;
            v63 += *v67;
            v148 = v63;
          }
        }
      }
      v72 = *(_DWORD *)(v36 + 8);
      if ( (v72 & 2) != 0 )
      {
        v61 |= 1u;
        v63 += 16;
        v148 = v63;
      }
      if ( (v72 & 0x80u) != 0 && (ObGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
      {
        v61 |= 0x40u;
        v63 += 16;
        v148 = v63;
      }
      v73 = *(_DWORD *)(v36 + 8);
      if ( (v73 & 0x100) != 0 )
      {
        v61 |= 0x80u;
        v63 += 16;
        v148 = v63;
      }
      if ( (v73 & 4) == 0 || EtwpPagingDisabled )
        goto LABEL_154;
      v74 = *(_QWORD *)(v165 + 384);
      v76 = 0;
      if ( v74 )
      {
        v75 = *(_DWORD *)(104LL * v153 + v74);
        if ( (v75 & 0x80001000) == 0x80001000 || (v75 & 0x80002000) == 0x80002000 || (v75 & 0x80004000) == 0x80004000 )
          v76 = 1;
      }
      v77 = (unsigned __int16 *)v160;
      if ( !v76
        || (v78 = v149,
            LOBYTE(BugCheckParameter4) = v149 < 2u,
            v79 = v153,
            (unsigned __int8)EtwpApplyLevelKwFilter(
                               v165,
                               v153,
                               *(unsigned __int8 *)(v160 + 4),
                               *(_QWORD *)(v160 + 8),
                               v149 < 2u))
        && (LOBYTE(v80) = v78 < 2u, v81 = v165, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v77, v165, v79, v80))
        && (unsigned __int8)EtwpApplyEventNameFilter(
                              v81,
                              v79,
                              a10,
                              v173,
                              0,
                              v170,
                              *((_BYTE *)v77 + 4),
                              *((_QWORD *)v77 + 1),
                              1) )
      {
        if ( (v25 & 1) == 0 )
        {
          v82 = 256;
          StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
          if ( StackLookasideListEntry )
          {
            v25 |= 2u;
          }
          else
          {
            HighLimit = 0LL;
            LowLimit = 0LL;
            IoGetStackLimits(&LowLimit, &HighLimit);
            if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
            {
              v83 = alloca(1552LL);
              StackLookasideListEntry = &v142;
              v82 = 192;
            }
          }
          if ( StackLookasideListEntry )
          {
            v84 = 0LL;
            v85 = (*(_DWORD *)(v156 + 816) & 0x40000000) == 0;
            if ( v174[5] == *(_QWORD *)&EventTracingProvGuid.Data1
              && v174[6] == *(_QWORD *)EventTracingProvGuid.Data4
              && *v77 == 18 )
            {
              v61 |= 0x20u;
              v84 = v174 + 10;
              v85 = 0;
            }
            LOBYTE(BugCheckParameter4) = v85;
            if ( !(unsigned __int8)EtwpGetStackExtendedHeaderItem(
                                     v185,
                                     v166,
                                     v82,
                                     &StackLookasideListEntry,
                                     BugCheckParameter4,
                                     v84) )
            {
              if ( (v25 & 2) != 0 )
              {
                RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
                v25 &= ~2u;
              }
              StackLookasideListEntry = 0LL;
            }
          }
          v25 |= 1u;
          v145 = v25;
        }
        v51 = v156;
        if ( StackLookasideListEntry )
        {
          if ( (*(_DWORD *)(v156 + 820) & 1) != 0
            && (CrimsonStackKey = EtwpGetCrimsonStackKey(v156, StackLookasideListEntry, &ListEntry),
                v51 = v156,
                CrimsonStackKey) )
          {
            v61 |= 8u;
            v63 += 24;
            v148 = v63;
          }
          else
          {
            v61 |= 4u;
            v63 += *(unsigned __int16 *)StackLookasideListEntry;
            v148 = v63;
          }
        }
      }
      else
      {
LABEL_154:
        v51 = v156;
      }
    }
    v87 = &v200[3 * LODWORD(v200[24])];
    v167 = v87;
    if ( a10 )
    {
      v88 = v173 + 8;
      v89 = a10;
      v90 = v158;
      v91 = v154;
      do
      {
        if ( v162 )
          v92 = *(_BYTE *)(v88 + 4);
        else
          v92 = 0;
        if ( v92 )
        {
          if ( v92 == 1 )
          {
            v90 += *(_WORD *)v88;
            v158 = v90;
            v154 = ++v91;
          }
        }
        else
        {
          v63 += *(_DWORD *)v88;
          v148 = v63;
        }
        v88 += 16LL;
        --v89;
      }
      while ( v89 );
      v25 = v145;
      v87 = v167;
    }
    if ( v154 )
    {
      v63 += (v158 + 15) & 0xFFFFFFF8;
      v148 = v63;
    }
    if ( (_WORD)v159 )
    {
      v63 += ((unsigned __int16)v159 + 15) & 0xFFFFFFF8;
      v148 = v63;
    }
    *((_DWORD *)v87 + 10) = v63;
    v93 = 0;
    if ( (v166 & 4) != 0 )
      v93 = 512;
    if ( (v166 & 8) != 0 )
      v93 |= 0x600u;
    v94 = EtwpReserveTraceBuffer(v51, v63, (__int64)&v195, &v191, v93);
    v167 = (_OWORD *)v94;
    v96 = v156;
    if ( ListEntry )
    {
      EtwpDereferenceStackEntry(ListEntry);
      v94 = (__int64)v167;
    }
    if ( !v94 )
    {
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v96, v63, v95);
      v98 = v198;
      if ( !v154 )
        v98 = 0LL;
      v99 = v183;
      if ( !v154 )
        v99 = 0;
      v100 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
      v101 = v156;
      if ( v100 )
      {
        v144 = v99;
        v54 = v160;
        EtwpTraceLostEvent((_DWORD)v174 + 40, v160, v156 + 136, v166, ReserveTraceBufferStatus, v144, v98, v149 < 2u, 0);
      }
      else
      {
        v54 = v160;
      }
      v102 = v163;
      if ( v163 >= 0 )
      {
        if ( (*(_DWORD *)(v101 + 12) & 0x8000000) == 0 )
          v102 = ReserveTraceBufferStatus;
        v163 = v102;
      }
      if ( (_BYTE)v157 )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v169 + 448) + 8 * v176), 1u);
      v20 = (_SLIST_ENTRY *)Src;
      v31 = v165;
      v29 = 80LL;
      if ( ReserveTraceBufferStatus != -1073741675 )
        goto LABEL_24;
      v163 = -1073741675;
      goto LABEL_76;
    }
    *(_QWORD *)v87 = v96;
    *((_QWORD *)v87 + 1) = v94;
    v87[1] = v195;
    *((_QWORD *)v87 + 4) = v196;
    ++LODWORD(v200[24]);
    *(_DWORD *)v94 = v63 | 0xC0130000;
    v103 = (_WORD *)(v94 + 4);
    v177 = (void *)(v94 + 4);
    *(_WORD *)(v94 + 4) = a6;
    *(_WORD *)(v94 + 6) = a7;
    *(_OWORD *)(v94 + 40) = *(_OWORD *)v160;
    if ( v178 )
    {
      v104 = *v178;
      *v103 = a6 | 0x80;
    }
    else
    {
      v104 = *(_OWORD *)(v174 + 5);
    }
    *(_OWORD *)(v94 + 24) = v104;
    if ( a8 )
      v105 = *a8;
    else
      v105 = NullGuid;
    *(GUID *)(v94 + 64) = v105;
    v199 = (_QWORD *)(v94 + 16);
    *(LARGE_INTEGER *)(v94 + 16) = v191;
    v106 = v185;
    *(_DWORD *)(v94 + 8) = v185[308];
    *(_DWORD *)(v94 + 12) = v106[306];
    *(_DWORD *)(v94 + 56) = v106[163];
    *(_DWORD *)(v94 + 60) = v106[183];
    if ( v61 )
    {
      if ( (v61 & 0x200) != 0 )
      {
        v164 = (unsigned __int16 *)(v94 + 80);
        v107 = v192;
        v108 = (*(_WORD *)(v192 + 4224) + 15) & 0xFFF8;
        *(_WORD *)(v94 + 80) = v108;
        *(_WORD *)(v94 + 82) = 16;
        *(_WORD *)(v94 + 86) = *(_WORD *)(v107 + 4224);
        *(_WORD *)(v94 + 84) = 0;
        v109 = v108 - *(_WORD *)(v107 + 4224) - 8;
        v110 = v94 + 88;
        memmove((void *)(v94 + 88), *(const void **)(v107 + 4216), *(unsigned __int16 *)(v107 + 4224));
        memset((void *)(v110 + *(unsigned __int16 *)(v107 + 4224)), 0, v109);
        *v103 |= 1u;
        v111 = v164;
        v34 = *v164 + 80;
        Size = v34;
        v150 = v34;
        v171 = v164;
        v94 = (__int64)v167;
      }
      else
      {
        v111 = v164;
      }
      if ( (v61 & 0x10) != 0 )
      {
        v112 = (unsigned __int16 *)(v94 + v34);
        *(_DWORD *)v112 = 65560;
        *((_DWORD *)v112 + 1) = 0x100000;
        *(_OWORD *)(v112 + 4) = *a9;
        *v103 |= 1u;
        v34 += 24;
        Size = v34;
        v150 = v34;
        if ( v111 )
          v111[2] |= 1u;
        v111 = v112;
        v164 = v112;
        v171 = v112;
      }
      if ( (v61 & 2) != 0 )
      {
        v113 = (unsigned __int16 *)(v94 + v34);
        memmove(v113, Src, *(unsigned __int16 *)Src);
        *v103 |= 1u;
        v34 += *(unsigned __int16 *)Src;
        Size = v34;
        v150 = v34;
        if ( v111 )
          v111[2] |= 1u;
        v111 = v113;
        v164 = v113;
        v171 = v113;
      }
      if ( (v61 & 1) != 0 )
      {
        v114 = (unsigned __int16 *)((char *)v167 + v34);
        *(_DWORD *)v114 = 196624;
        *((_DWORD *)v114 + 1) = 0x40000;
        SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
        v116 = 0;
        if ( SessionId != -1 )
          v116 = SessionId;
        *((_DWORD *)v114 + 2) = v116;
        *v103 |= 1u;
        v34 += 16;
        Size = v34;
        v150 = v34;
        if ( v111 )
          v111[2] |= 1u;
        v111 = v114;
        v164 = v114;
        v171 = v114;
      }
      v28 = (unsigned __int64)v167;
      if ( (v61 & 0x40) != 0 )
      {
        v117 = (unsigned __int16 *)((char *)v167 + v34);
        *(_DWORD *)v117 = 851984;
        *((_DWORD *)v117 + 1) = 0x80000;
        *((_QWORD *)v117 + 1) = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[6] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
        *v103 |= 1u;
        v34 += 16;
        Size = v34;
        v150 = v34;
        if ( v111 )
          v111[2] |= 1u;
        v111 = v117;
        v164 = v117;
        v171 = v117;
      }
      if ( (v61 & 0x80u) != 0 )
      {
        v118 = (unsigned __int16 *)(v28 + v34);
        *(_DWORD *)v118 = 655376;
        *((_DWORD *)v118 + 1) = 0x80000;
        if ( (v25 & 4) == 0 )
        {
          v119 = KeGetCurrentPrcb();
          v120 = _InterlockedIncrement64((volatile signed __int64 *)v119->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v119->Number << 48);
          v184 = v120;
          v25 |= 4u;
          v145 = v25;
          if ( v193 )
            *v193 = v120;
        }
        *((_QWORD *)v118 + 1) = v184;
        *v103 |= 1u;
        v34 += 16;
        Size = v34;
        v150 = v34;
        if ( v111 )
          v111[2] |= 1u;
        v111 = v118;
        v164 = v118;
        v171 = v118;
      }
      if ( (v61 & 4) != 0 )
      {
        v121 = (_QWORD *)(v28 + v34);
        memmove(v121, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
        if ( v121[1] )
        {
          if ( (v61 & 0x20) == 0 )
          {
            LOBYTE(v28) = 1;
            if ( !(unsigned __int8)EtwpQueueStackWalkApc(
                                     (_DWORD)v185,
                                     (unsigned __int8)v170,
                                     v156,
                                     v28,
                                     (__int64)(v121 + 1)) )
              v121[1] = 0LL;
          }
        }
        *v103 |= 1u;
        v34 += *(unsigned __int16 *)StackLookasideListEntry;
        Size = v34;
        v150 = v34;
        if ( v164 )
          v164[2] |= 1u;
        v111 = (unsigned __int16 *)v121;
        v164 = (unsigned __int16 *)v121;
        v171 = (unsigned __int16 *)v121;
      }
      v122 = 0LL;
      if ( (v61 & 8) != 0 )
      {
        v123 = (unsigned __int16 *)((char *)v167 + v34);
        *(_DWORD *)v123 = 1179672;
        *((_DWORD *)v123 + 1) = 0x100000;
        *((_QWORD *)v123 + 2) = ListEntry;
        *((_QWORD *)v123 + 1) = *((_QWORD *)StackLookasideListEntry + 1);
        *v103 |= 1u;
        v34 += 24;
        Size = v34;
        v150 = v34;
        if ( v111 )
          v111[2] |= 1u;
        v124 = v123;
        v164 = v123;
        v171 = v123;
      }
      else
      {
        v124 = v164;
      }
      v94 = (__int64)v167;
    }
    else
    {
      v124 = v164;
      v122 = 0LL;
    }
    v125 = v159;
    if ( (_WORD)v159 )
    {
      v126 = (unsigned __int16 *)(v94 + v34);
      v176 = (unsigned __int64)v126;
      v127 = (v159 + 15) & 0xFFF8;
      *v126 = v127;
      *(_DWORD *)(v126 + 1) = 12;
      v126[3] = v125;
      v128 = v127 - v125 - 8;
      v157 = v128;
      memmove(v126 + 4, v179, v125);
      memset((char *)v126 + v125 + 8, 0, v128);
      v129 = Size;
      v122 = v164;
      *v103 |= 1u;
      v34 = *v126 + v129;
      v150 = v34;
      if ( v122 )
        v122[2] |= 1u;
      v124 = v126;
    }
    v130 = v154;
    v131 = v167;
    if ( v154 )
    {
      v132 = (unsigned __int16 *)((char *)v167 + v34);
      v133 = v158;
      v134 = (v158 + 15) & 0xFFF8;
      *v132 = v134;
      *(_DWORD *)(v132 + 1) = 11;
      v132[3] = v133;
      v180 = v132 + 4;
      v194 = (char *)v132 + v133 + 8;
      memset(v194, 0, (unsigned __int16)(v134 - v133 - 8));
      *v103 |= 1u;
      v34 += *v132;
      v150 = v34;
      v130 = v154;
      if ( v124 )
        v124[2] |= 1u;
    }
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        v153 = i;
        if ( i >= a10 )
        {
          v139 = v156;
          if ( (*(_DWORD *)(v156 + 12) & 0x80000) != 0
            && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
          {
            EtwpSendTraceEvent(v156, &v195, v122);
          }
          if ( *(_QWORD *)(v139 + 1288) )
            EtwpInvokeEventCallback(v139, &v195, v174 + 5, 0LL);
          v20 = (_SLIST_ENTRY *)Src;
          v30 = v160;
          v31 = v165;
          v29 = 80LL;
          if ( v187 )
            *(_DWORD *)(v187 + 4LL * (v172 >> 5)) |= 1 << (v172 & 0x1F);
          goto LABEL_25;
        }
        v136 = *(unsigned int *)(v173 + 16LL * i + 8);
        Size = *(_DWORD *)(v173 + 16LL * i + 8);
        v28 = *(_QWORD *)(v173 + 16LL * i);
        if ( v162 )
          v122 = (unsigned __int16 *)*(unsigned __int8 *)(v173 + 16LL * i + 12);
        else
          LOBYTE(v122) = 0;
        if ( (_BYTE)v122 )
          break;
        v138 = (char *)v131 + v34;
        v177 = v138;
        v34 += v136;
        v150 = v34;
        if ( v34 > v63 )
          KeBugCheckEx(0x11Du, 5uLL, v34, v63, 0LL);
        memmove(v138, (const void *)v28, v136);
        v130 = v154;
LABEL_265:
        ++i;
        v131 = v167;
      }
      if ( (unsigned __int8)v122 != 1 )
      {
        if ( (unsigned __int8)v122 == 3 && (_DWORD)v136 == 8 )
          *v199 = *(_QWORD *)v28;
        goto LABEL_265;
      }
      if ( !v180 || (v137 = (char *)v180 + v136, v177 = (char *)v180 + v136, (char *)v180 + v136 > v194) || !v130 )
        KeBugCheckEx(0x11Du, 5uLL, v34, v63, 0LL);
      memmove(v180, (const void *)v28, v136);
      v180 = v137;
      v130 = --v154;
      v131 = v167;
    }
  }
  if ( v35 )
  {
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v50 + 448) + 8LL * (unsigned int)v48),
      1u);
    v50 = v169;
  }
  if ( (_DWORD)v48 != 3 )
    goto LABEL_71;
  v52 = *(_DWORD *)(v50 + 4068);
  v53 = -1073741816;
  if ( v52 )
    v53 = -1073741058;
  v163 = v53;
LABEL_75:
  v54 = v160;
LABEL_76:
  if ( (v25 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v163 < 0 )
  {
    EtwpFailLogging(
      *(unsigned __int8 *)(v54 + 4),
      *(_QWORD *)(v54 + 8),
      (_DWORD)v174,
      (unsigned int)v200,
      v146,
      v166,
      v163,
      v54,
      v149 < 2u,
      a10,
      v173,
      0);
  }
  else
  {
    v55 = 0;
    v153 = 0;
    if ( LODWORD(v200[24]) )
    {
      v56 = v169;
      v57 = v170;
      do
      {
        v28 = (unsigned __int64)&v200[3 * v55];
        v29 = *(_QWORD *)(v28 + 16);
        v58 = *(signed __int64 **)(v28 + 24);
        _m_prefetchw(v58);
        v59 = *v58;
        if ( (v29 ^ (unsigned __int64)*v58) >= 0xF )
        {
LABEL_84:
          _InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
        }
        else
        {
          while ( 1 )
          {
            v60 = v59;
            v59 = _InterlockedCompareExchange64(v58, v59 + 1, v59);
            if ( v60 == v59 )
              break;
            if ( (v29 ^ (unsigned __int64)v59) >= 0xF )
              goto LABEL_84;
          }
        }
        if ( v57 < 2u )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v56 + 448) + 8LL * **(unsigned int **)v28),
            1u);
        v55 = ++v153;
      }
      while ( v153 < LODWORD(v200[24]) );
      v20 = (_SLIST_ENTRY *)Src;
    }
  }
  if ( v155 )
    KeLeaveCriticalRegionThread((__int64)v188);
  if ( v20 )
  {
    v140 = KeGetCurrentPrcb();
    v141 = v140->PPLookasideList[8].P;
    ++v141->TotalFrees;
    if ( LOWORD(v141->ListHead.Alignment) < v141->Depth
      || (++v141->FreeMisses,
          v141 = v140->PPLookasideList[8].L,
          ++v141->TotalFrees,
          LOWORD(v141->ListHead.Alignment) < v141->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v141->ListHead, v20);
    }
    else
    {
      ++v141->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *, struct _KPRCB *, __int64, unsigned __int64))v141->FreeEx)(
        v20,
        v140,
        v29,
        v28);
    }
  }
  return (unsigned int)v163;
}
