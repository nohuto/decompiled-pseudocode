/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x1800245B8
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x180021E40 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180024214 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlReAllocateHeap @ 0x180024530 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlSizeHeap @ 0x1800270A0 (RtlSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180027604 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpStackLoggingEnabled @ 0x180027750 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpReAllocateHeap @ 0x18002DBE0 (RtlpHpReAllocateHeap.c)
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180055544 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpProbeUserBufferSafe @ 0x180078ADC (RtlpProbeUserBufferSafe.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpCallInterceptRoutine @ 0x1800FEA3C (RtlpCallInterceptRoutine.c)
 *     RtlpSetupExtendedBlock @ 0x180102C1C (RtlpSetupExtendedBlock.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceAddStack @ 0x1801155F0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180116230 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpValidateLFHBlock @ 0x180118A5C (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _WORD *a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  _QWORD *v10; // rsi
  int v11; // r15d
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // r9d
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r10
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r12d
  __int64 Heap; // rax
  int v25; // esi
  struct _TEB *v26; // rbx
  struct _TEB *v27; // rbx
  _QWORD *v28; // rax
  bool v29; // cf
  unsigned int v30; // r15d
  struct _TEB *v31; // rbx
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int16 v34; // dx
  int v35; // eax
  int v36; // eax
  unsigned __int16 v37; // ax
  __int64 v38; // rcx
  char v39; // dl
  __int16 v40; // ax
  unsigned __int16 v41; // ax
  __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // cl
  __int64 v46; // rsi
  signed __int32 v48; // r15d
  __int64 DeferredCriticalSectionEvent; // r14
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int16 v52; // ax
  int v53; // eax
  int v54; // r8d
  __int64 v55; // rax
  unsigned __int16 v56; // ax
  int v57; // eax
  unsigned __int64 v58; // rdx
  int v59; // r9d
  int v60; // eax
  int v61; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+34h] [rbp-CCh]
  int v64; // [rsp+38h] [rbp-C8h]
  int v65; // [rsp+48h] [rbp-B8h]
  int v66; // [rsp+48h] [rbp-B8h]
  int v67; // [rsp+48h] [rbp-B8h]
  int v68; // [rsp+48h] [rbp-B8h]
  unsigned int v69[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v70; // [rsp+60h] [rbp-A0h]
  __int128 v71; // [rsp+70h] [rbp-90h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+80h] [rbp-80h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v62 = 0;
  v64 = 0;
  v10 = 0LL;
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
    {
      v18 = RtlpHpConvertFlagsToSegmentFlags(a2);
      v20 = *(_DWORD *)(a1 + 220);
      v21 = 0;
      if ( v20 )
        LOBYTE(v21) = v20 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
      v22 = v8;
      v23 = v18 | 1;
      if ( !v21 )
        v23 = v18;
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
      {
        v6 = *(_QWORD *)(v8 - 16);
        v22 = v8 - v6;
      }
      if ( v6 + v7 < v7
        || (Heap = RtlpHpReAllocateHeap(a1, v23, v22, (int)v6 + (int)v7, (__int64)a5, v19),
            v10 = (_QWORD *)Heap,
            (unsigned __int64)(Heap - 1) > 0xFFFFFFFFFFFFFFFDuLL) )
      {
        v29 = v10 != 0LL;
        v10 = 0LL;
        v30 = v29 ? -1073741819 : -1073741801;
        NtCurrentTeb()->LastStatusValue = v30;
        v31 = NtCurrentTeb();
        v31->LastErrorValue = RtlNtStatusToDosError(v30);
        if ( v23 < 0 || *(int *)(a1 + 20) < 0 )
        {
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.ExceptionAddress = RtlRaiseException;
          ExceptionRecord.ExceptionCode = v30;
          ExceptionRecord.NumberParameters = 1;
          ExceptionRecord.ExceptionInformation[0] = v7;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      else
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          v28 = (_QWORD *)(v6 + Heap);
          *(v28 - 2) = v6;
          if ( v6 > 0x10 )
            *v10 = v6;
          v10 = v28;
        }
        if ( a5 )
          *a5 -= v6;
      }
      if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) && v10 )
      {
        RtlpHpStackTraceRemoveStack(a1, v8);
        RtlpHpStackTraceAddStack(a1, v10);
      }
      return (__int64)v10;
    }
    if ( a5 )
      *a5 = 0LL;
    if ( a6 )
      *a6 = 0;
    v11 = *(_DWORD *)(a1 + 116) | a2;
    v63 = v11;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      if ( !dword_180174238 )
      {
        v12 = *(_QWORD *)(a1 + 392);
        v13 = v12;
        if ( (v12 || (v13 = qword_18017AC28) != 0) && a4 > v13 )
        {
          v32 = *(_QWORD *)(a1 + 400);
          if ( v32 )
            RtlpLogHeapFailure(20, a1, 0, v32, v7, v12);
          goto LABEL_43;
        }
      }
      if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
      {
        v17 = RtlpProbeUserBufferSafe(a1, a3);
      }
      else
      {
        if ( (a3 & 0xF) != 0 )
        {
          RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
          goto LABEL_14;
        }
        v6 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v6 -= 16LL * *(unsigned __int8 *)(v6 + 14);
        if ( (*(_BYTE *)(v6 + 15) & 0x3F) != 0 )
        {
LABEL_14:
          if ( !v6 )
          {
            v25 = -1073741819;
            goto LABEL_44;
          }
          if ( *(_BYTE *)(v8 - 1) != 5 )
            goto LABEL_16;
          if ( *(char *)(v6 + 15) >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v70 = *(_DWORD *)(v6 + 8) ^ *(_DWORD *)(a1 + 136);
              if ( HIBYTE(v70) != ((unsigned __int8)v70 ^ (unsigned __int8)(BYTE1(v70) ^ BYTE2(v70))) )
                goto LABEL_86;
            }
          }
          else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v6, 0LL) )
          {
LABEL_86:
            RtlpLogHeapFailure(3, a1, v6, v8, 0LL, 0LL);
            v25 = -1073741811;
            goto LABEL_44;
          }
          if ( *(char *)(v6 + 15) >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v35 = *(_DWORD *)(v6 + 8);
              LOWORD(v65) = v35;
              if ( (v35 & *(_DWORD *)(a1 + 124)) != 0 )
                v65 = *(_DWORD *)(a1 + 136) ^ v35;
              v34 = v65;
            }
            else
            {
              v34 = *(_WORD *)(v6 + 8);
            }
          }
          else
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v6 + 8) ^ a1 ^ (v6 >> 4)) )
              v33 = 0LL;
            else
              v33 = *(_QWORD *)(v6
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v6 >> 4)) >> 12));
            v34 = *(_WORD *)(v33 + 36);
          }
          if ( *(_BYTE *)(v6 + 15) == 4 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v36 = *(_DWORD *)(v6 + 8);
              LOWORD(v66) = v36;
              if ( (v36 & *(_DWORD *)(a1 + 124)) != 0 )
                v66 = *(_DWORD *)(a1 + 136) ^ v36;
              v37 = v66;
            }
            else
            {
              v37 = *(_WORD *)(v6 + 8);
            }
            v38 = v34 + *(_QWORD *)(v6 - 16) - v37;
          }
          else
          {
            v38 = 16LL * v34;
          }
          if ( v38 + v6 < v8 )
            goto LABEL_86;
          LODWORD(v10) = *(_DWORD *)(v8 - 8);
          v64 = (int)v10;
          if ( (v11 & 0x3C000102) != 0 )
            goto LABEL_16;
          v39 = *(_BYTE *)(v8 - 1);
          if ( v39 == 5 )
          {
            v40 = *(unsigned __int8 *)(v8 - 2);
          }
          else
          {
            if ( (v39 & 0x40) == 0 )
            {
              v41 = 0;
              goto LABEL_94;
            }
            v40 = v39 & 0x3F;
          }
          v41 = 16 * v40;
LABEL_94:
          v42 = v41;
          v62 = v41;
          v43 = v41 + v7;
          if ( v43 < v7 )
          {
LABEL_43:
            v25 = -1073741801;
LABEL_44:
            NtCurrentTeb()->LastStatusValue = v25;
            v26 = NtCurrentTeb();
            v26->LastErrorValue = RtlNtStatusToDosError(v25);
            if ( (v11 & 4) != 0 )
            {
              ExceptionRecord.ExceptionCode = v25;
              ExceptionRecord.ExceptionAddress = RtlRaiseException;
              ExceptionRecord.ExceptionRecord = 0LL;
              ExceptionRecord.NumberParameters = 1;
              ExceptionRecord.ExceptionFlags = 0;
              ExceptionRecord.ExceptionInformation[0] = v7;
              RtlRaiseException(&ExceptionRecord);
            }
            return 0LL;
          }
          v7 = v43;
          if ( v39 == 5 )
            v44 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14);
          else
            v44 = 0LL;
          if ( (int)RtlpCallInterceptRoutine(v64, a1, v8, 5, v44) < 0 )
          {
            v25 = -1073741819;
            goto LABEL_44;
          }
          v45 = *(_BYTE *)(v6 + 15);
          if ( v45 == 4 )
          {
            if ( (v11 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
              RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
            if ( *(_DWORD *)(a1 + 124) )
            {
              *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
              if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
                RtlpAnalyzeHeapFailure(a1, v6);
            }
            *(_WORD *)(v6 + 8) -= v62;
            if ( *(_DWORD *)(a1 + 124) )
            {
              *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
              *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
            }
            if ( (v11 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
            {
              v46 = *(_QWORD *)(a1 + 352);
              if ( (*(_DWORD *)(v46 + 12))-- == 1 )
              {
                *(_QWORD *)(v46 + 16) = 0LL;
                v48 = _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 8), -1, -2);
                if ( v48 != -2 )
                {
                  if ( (*(_BYTE *)(v46 + 8) & 1) != 0 )
                    RtlpNotOwnerCriticalSection(v46);
                  DeferredCriticalSectionEvent = *(_QWORD *)(v46 + 24);
                  if ( !DeferredCriticalSectionEvent )
                    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v46);
                  v69[0] = 0;
                  while ( v48 != _InterlockedCompareExchange(
                                   (volatile signed __int32 *)(v46 + 8),
                                   (v48 & 2 | 1) + v48,
                                   v48) )
                  {
                    RtlBackoff(v69);
                    _m_prefetchw((const void *)(v46 + 8));
                    v48 = *(_DWORD *)(v46 + 8);
                  }
                  if ( (v48 & 2) != 0 )
                    RtlpUnWaitCriticalSectionEx(v46, DeferredCriticalSectionEvent);
                }
                v11 = v63;
              }
            }
          }
          else
          {
            if ( v45 == 5 )
            {
              v50 = *(unsigned __int16 *)(v6 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v45 & 0x40) != 0 )
            {
              v50 = *(unsigned __int16 *)(v6 + 16LL * (v45 & 0x3F) + 12);
            }
            else if ( (v45 & 0x3F) == 0x3F )
            {
              if ( v45 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v53 = *(_DWORD *)(v6 + 8);
                  LOWORD(v67) = v53;
                  if ( (v53 & *(_DWORD *)(a1 + 124)) != 0 )
                    v67 = *(_DWORD *)(a1 + 136) ^ v53;
                  v52 = v67;
                }
                else
                {
                  v52 = *(_WORD *)(v6 + 8);
                }
              }
              else
              {
                if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v6 + 8) ^ a1 ^ (v6 >> 4)) )
                  v51 = 0LL;
                else
                  v51 = *(_QWORD *)(v6
                                  - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v6 >> 4)) >> 12));
                v52 = *(_WORD *)(v51 + 36);
              }
              v50 = *(_QWORD *)(v6 + 16LL * v52);
            }
            else
            {
              v50 = v45 & 0x3F;
            }
            v54 = *(char *)(v6 + 15);
            if ( *(char *)(v6 + 15) >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v57 = *(_DWORD *)(v6 + 8);
                LOWORD(v68) = v57;
                if ( (v57 & *(_DWORD *)(a1 + 124)) != 0 )
                  v68 = *(_DWORD *)(a1 + 136) ^ v57;
                v56 = v68;
              }
              else
              {
                v56 = *(_WORD *)(v6 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v6 + 8) ^ a1 ^ (v6 >> 4)) )
                v55 = 0LL;
              else
                v55 = *(_QWORD *)(v6
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v6 >> 4)) >> 12));
              v56 = *(_WORD *)(v55 + 36);
            }
            v58 = v50 - v42;
            if ( v58 >= 0x3F )
            {
              *(_QWORD *)(v6 + 16LL * v56) = v58;
              *(_BYTE *)(v6 + 15) = ((v54 >> 31) & 0x80) + 63;
            }
            else
            {
              *(_BYTE *)(v6 + 15) = v58 | ((char)v54 >> 7) & 0x80;
            }
          }
          LODWORD(v10) = v64;
          v8 = v6 + 16;
LABEL_16:
          v14 = RtlpReAllocateHeap((void *)a1);
          if ( (dword_18017AE98 & 1) != 0
            && (dword_18017AE98 & 2) != 0
            && NtCurrentPeb()->ProcessHeap
            && (v71 = RtlpHpEnvHandle, a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v71)) )
          {
            if ( v14 )
            {
              if ( (v11 & 0x10000000) == 0 )
              {
                RtlpHpStackTraceRemoveStack(a1, v8);
                RtlpHpStackTraceAddStack(a1, v14);
              }
              goto LABEL_20;
            }
          }
          else if ( v14 )
          {
LABEL_20:
            v10 = (_QWORD *)v14;
            if ( v64 )
            {
              LOWORD(v61) = v62;
              v10 = (_QWORD *)RtlpSetupExtendedBlock(a1, v11, v14, v15, v61, v64);
              RtlpCallInterceptRoutine(v64, a1, (_DWORD)v10, 6, v14);
            }
            return (__int64)v10;
          }
          v7 -= v62;
          if ( (_DWORD)v10 )
          {
            RtlSizeHeap(a1, 0LL, v8);
            LOWORD(v61) = v62;
            v60 = RtlpSetupExtendedBlock(a1, v11, v8, v59, v61, (_DWORD)v10);
            RtlpCallInterceptRoutine((_DWORD)v10, a1, v60, 6, v8);
          }
          goto LABEL_43;
        }
        RtlpLogHeapFailure(8, a1, v6, 0, 0LL, 0LL);
        v17 = 0LL;
      }
      v6 = v17;
      goto LABEL_14;
    }
    return RtlDebugReAllocateHeap((void *)a1);
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v27 = NtCurrentTeb();
    v27->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
}
