/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x180042250
 * Callers:
 *     RtlReAllocateHeap @ 0x1800421C0 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180043778 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x180045C54 (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlSizeHeap @ 0x18003AA50 (RtlSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18003AFAC (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpStackLoggingEnabled @ 0x18003B0F0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpReAllocateHeap @ 0x180041D6C (RtlpHpReAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlRaiseException @ 0x180054840 (RtlRaiseException.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1800666B0 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpProbeUserBufferSafe @ 0x1800768C4 (RtlpProbeUserBufferSafe.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlpCallInterceptRoutine @ 0x1800B085E (RtlpCallInterceptRoutine.c)
 *     RtlpValidateLFHBlock @ 0x1800B12B6 (RtlpValidateLFHBlock.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpSetupExtendedBlock @ 0x180103CC0 (RtlpSetupExtendedBlock.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceAddStack @ 0x180116E50 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180117AA0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

_QWORD *__fastcall RtlpReAllocateHeapInternal(
        unsigned __int16 *HeapHandle,
        int a2,
        _QWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        _WORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r12
  _QWORD *v8; // rbp
  unsigned __int16 v10; // r13
  _QWORD *v11; // r15
  int v12; // r14d
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // ecx
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // r9d
  int v21; // eax
  _WORD *v22; // r10
  int v23; // ecx
  int v24; // edx
  unsigned __int64 v25; // r8
  int v26; // r14d
  unsigned __int64 v27; // r13
  __int64 Heap; // rax
  struct _TEB *v29; // rbx
  _QWORD *v30; // rax
  bool v31; // zf
  int v32; // r13d
  struct _TEB *v33; // rdi
  __int64 v34; // r9
  int v35; // r13d
  int v36; // edx
  __int64 v37; // rax
  unsigned __int16 v38; // dx
  int v39; // eax
  int v40; // eax
  unsigned __int16 v41; // ax
  __int64 v42; // rcx
  char v43; // dl
  unsigned __int16 v44; // ax
  __int64 v45; // r13
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  char v49; // dl
  int v50; // edx
  __int16 v51; // cx
  __int64 v52; // rbp
  signed __int32 v53; // eax
  void *DeferredCriticalSectionEvent; // r13
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  unsigned __int16 v57; // ax
  int v58; // eax
  __int64 v59; // rax
  unsigned __int16 v60; // ax
  int v61; // eax
  unsigned __int64 v62; // r8
  int v63; // r9d
  int v64; // eax
  struct _TEB *v65; // rbx
  int v66; // [rsp+20h] [rbp-138h]
  unsigned __int16 v67; // [rsp+30h] [rbp-128h]
  signed __int32 v68; // [rsp+34h] [rbp-124h]
  int v69; // [rsp+40h] [rbp-118h]
  int v70; // [rsp+40h] [rbp-118h]
  int v71; // [rsp+40h] [rbp-118h]
  int v72; // [rsp+40h] [rbp-118h]
  unsigned int v73; // [rsp+48h] [rbp-110h] BYREF
  __int128 v74; // [rsp+50h] [rbp-108h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v10 = 0;
  v11 = 0LL;
  if ( a3 )
  {
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    {
      v21 = RtlpHpConvertFlagsToSegmentFlags(a2);
      v23 = *((_DWORD *)HeapHandle + 55);
      v24 = 0;
      if ( v23 )
        LOBYTE(v24) = v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
      v25 = (unsigned __int64)v8;
      v26 = v21 | 1;
      if ( !v24 )
        v26 = v21;
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
      {
        v27 = *(v8 - 2);
        v25 = (unsigned __int64)v8 - v27;
      }
      else
      {
        v27 = 0LL;
      }
      if ( v7 + v27 < v7
        || (Heap = RtlpHpReAllocateHeap((__int64)HeapHandle, v26, v25, v7 + v27, a5, v22),
            v11 = (_QWORD *)Heap,
            (unsigned __int64)(Heap - 1) > 0xFFFFFFFFFFFFFFFDuLL) )
      {
        v31 = v11 == 0LL;
        v32 = -1073741801;
        v11 = 0LL;
        if ( !v31 )
          v32 = -1073741819;
        NtCurrentTeb()->LastStatusValue = v32;
        v33 = NtCurrentTeb();
        v33->LastErrorValue = RtlNtStatusToDosError(v32);
        if ( v26 < 0 || *((int *)HeapHandle + 5) < 0 )
        {
          ExceptionRecord.ExceptionCode = v32;
          ExceptionRecord.ExceptionAddress = RtlRaiseException;
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 1;
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.ExceptionInformation[0] = v7;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      else
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          v30 = (_QWORD *)(v27 + Heap);
          *(v30 - 2) = v27;
          if ( v27 > 0x10 )
            *v11 = v27;
          v11 = v30;
        }
        if ( a5 )
          *a5 -= v27;
      }
      if ( RtlpHpStackLoggingEnabled((__int64)HeapHandle) && v11 )
      {
        RtlpHpStackTraceRemoveStack(HeapHandle, v8);
        RtlpHpStackTraceAddStack(HeapHandle, v11);
      }
      return v11;
    }
    else
    {
      if ( a5 )
        *a5 = 0LL;
      if ( a6 )
        *a6 = 0;
      v12 = *((_DWORD *)HeapHandle + 29) | a2;
      if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
      {
        if ( !dword_180181238 )
        {
          v13 = *((_QWORD *)HeapHandle + 49);
          v14 = v13;
          if ( (v13 || (v14 = qword_180187F68) != 0) && a4 > v14 )
          {
            v34 = *((_QWORD *)HeapHandle + 50);
            if ( v34 )
              RtlpLogHeapFailure(20, (_DWORD)HeapHandle, 0, v34, v7, v13);
            goto LABEL_153;
          }
        }
        if ( (HeapHandle[60] & 1) != 0 )
        {
          v16 = RtlpProbeUserBufferSafe(HeapHandle, a3);
        }
        else
        {
          if ( ((unsigned __int8)a3 & 0xF) != 0 )
          {
            v15 = 9;
LABEL_14:
            RtlpLogHeapFailure(v15, (_DWORD)HeapHandle, (_DWORD)a3, 0, 0LL, 0LL);
            v16 = 0LL;
            goto LABEL_15;
          }
          v16 = (unsigned __int64)(a3 - 2);
          _m_prefetchw(a3 - 2);
          if ( *((_BYTE *)a3 - 1) == 5 )
            v16 -= 16LL * *(unsigned __int8 *)(v16 + 14);
          if ( (*(_BYTE *)(v16 + 15) & 0x3F) == 0 )
          {
            LODWORD(a3) = v16;
            v15 = 8;
            goto LABEL_14;
          }
        }
LABEL_15:
        if ( !v16 )
        {
          v35 = -1073741819;
          goto LABEL_154;
        }
        if ( *((_BYTE *)v8 - 1) != 5 )
          goto LABEL_17;
        if ( *(char *)(v16 + 15) >= 0 )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v36 = *((_DWORD *)HeapHandle + 34) ^ *(_DWORD *)(v16 + 8);
            if ( HIBYTE(v36) != ((unsigned __int8)v36 ^ (unsigned __int8)(((unsigned __int16)(HeapHandle[68] ^ *(_WORD *)(v16 + 8)) >> 8) ^ BYTE2(v36))) )
              goto LABEL_59;
          }
        }
        else if ( !(unsigned __int8)RtlpValidateLFHBlock(HeapHandle, v16) )
        {
          goto LABEL_59;
        }
        if ( *(char *)(v16 + 15) >= 0 )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v39 = *(_DWORD *)(v16 + 8);
            LOWORD(v69) = v39;
            if ( (v39 & *((_DWORD *)HeapHandle + 31)) != 0 )
              v69 = *((_DWORD *)HeapHandle + 34) ^ v39;
            v38 = v69;
          }
          else
          {
            v38 = *(_WORD *)(v16 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v16 + 8) ^ (unsigned __int16)HeapHandle ^ (v16 >> 4)) )
            v37 = 0LL;
          else
            v37 = *(_QWORD *)(v16
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v16 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)(v16 >> 4)) >> 12));
          v38 = *(_WORD *)(v37 + 36);
        }
        if ( *(_BYTE *)(v16 + 15) == 4 )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v40 = *(_DWORD *)(v16 + 8);
            LOWORD(v70) = v40;
            if ( (v40 & *((_DWORD *)HeapHandle + 31)) != 0 )
              v70 = *((_DWORD *)HeapHandle + 34) ^ v40;
            v41 = v70;
          }
          else
          {
            v41 = *(_WORD *)(v16 + 8);
          }
          v42 = v38 + *(_QWORD *)(v16 - 16) - v41;
        }
        else
        {
          v42 = 16LL * v38;
        }
        if ( v42 + v16 >= (unsigned __int64)v8 )
        {
          LODWORD(v11) = *((_DWORD *)v8 - 2);
          if ( (v12 & 0x3C000102) == 0 )
          {
            v43 = *((_BYTE *)v8 - 1);
            if ( v43 == 5 )
            {
              v44 = 16 * *((unsigned __int8 *)v8 - 2);
            }
            else if ( (v43 & 0x40) != 0 )
            {
              v44 = 16 * (v43 & 0x3F);
            }
            else
            {
              v44 = 0;
            }
            v45 = v44;
            v67 = v44;
            v46 = v7 + v44;
            if ( v46 < v7 )
            {
LABEL_153:
              v35 = -1073741801;
LABEL_154:
              NtCurrentTeb()->LastStatusValue = v35;
              v65 = NtCurrentTeb();
              v65->LastErrorValue = RtlNtStatusToDosError(v35);
              if ( (v12 & 4) != 0 )
              {
                ExceptionRecord.ExceptionCode = v35;
                ExceptionRecord.ExceptionAddress = RtlRaiseException;
                ExceptionRecord.ExceptionRecord = 0LL;
                ExceptionRecord.NumberParameters = 1;
                ExceptionRecord.ExceptionFlags = 0;
                ExceptionRecord.ExceptionInformation[0] = v7;
                RtlRaiseException(&ExceptionRecord);
              }
              return (_QWORD *)v6;
            }
            v7 = v46;
            if ( v43 == 5 )
              v47 = (__int64)&v8[-2 * *((unsigned __int8 *)v8 - 2)];
            else
              v47 = 0LL;
            if ( (int)RtlpCallInterceptRoutine((_DWORD)v11, (_DWORD)HeapHandle, (_DWORD)v8, 5, v47) < 0 )
            {
              v35 = -1073741819;
              goto LABEL_154;
            }
            v49 = *(_BYTE *)(v16 + 15);
            if ( v49 == 4 )
            {
              if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)v12) & 1) == 0 )
                RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v50 = *(_DWORD *)(v16 + 8) ^ *((_DWORD *)HeapHandle + 34);
                *(_DWORD *)(v16 + 8) = v50;
                if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
                  RtlpAnalyzeHeapFailure(HeapHandle, v16, v48);
              }
              v10 = v67;
              v51 = *(_WORD *)(v16 + 8) - v67;
              *(_WORD *)(v16 + 8) = v51;
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                *(_BYTE *)(v16 + 11) = v51 ^ *(_BYTE *)(v16 + 10) ^ HIBYTE(v51);
                *(_DWORD *)(v16 + 8) ^= *((_DWORD *)HeapHandle + 34);
              }
              if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)v12) & 1) == 0 )
              {
                v52 = *((_QWORD *)HeapHandle + 44);
                v31 = (*(_DWORD *)(v52 + 12))-- == 1;
                if ( v31 )
                {
                  *(_QWORD *)(v52 + 16) = 0LL;
                  v53 = _InterlockedCompareExchange((volatile signed __int32 *)(v52 + 8), -1, -2);
                  v68 = v53;
                  if ( v53 != -2 )
                  {
                    if ( (*(_BYTE *)(v52 + 8) & 1) != 0 )
                    {
                      RtlpNotOwnerCriticalSection(v52);
                      v53 = v68;
                    }
                    DeferredCriticalSectionEvent = *(void **)(v52 + 24);
                    if ( !DeferredCriticalSectionEvent )
                    {
                      DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v52);
                      v53 = v68;
                    }
                    v73 = 0;
                    while ( v53 != _InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v52 + 8),
                                     (v53 & 2 | 1) + v53,
                                     v53) )
                    {
                      RtlBackoff(&v73);
                      _m_prefetchw((const void *)(v52 + 8));
                      v53 = *(_DWORD *)(v52 + 8);
                    }
                    if ( (v53 & 2) != 0 )
                      RtlpUnWaitCriticalSectionEx(v52, DeferredCriticalSectionEvent);
                    v10 = v67;
                  }
                }
              }
            }
            else
            {
              if ( v49 == 5 )
              {
                v55 = *(unsigned __int16 *)(v16 + 12) ^ (unsigned __int64)HeapHandle[70];
              }
              else if ( (v49 & 0x40) != 0 )
              {
                v55 = *(unsigned __int16 *)(v16 + 16LL * (v49 & 0x3F) + 12);
              }
              else if ( (v49 & 0x3F) == 0x3F )
              {
                if ( v49 >= 0 )
                {
                  if ( *((_DWORD *)HeapHandle + 31) )
                  {
                    v58 = *(_DWORD *)(v16 + 8);
                    LOWORD(v71) = v58;
                    if ( (v58 & *((_DWORD *)HeapHandle + 31)) != 0 )
                      v71 = *((_DWORD *)HeapHandle + 34) ^ v58;
                    v57 = v71;
                    v49 = *(_BYTE *)(v16 + 15);
                  }
                  else
                  {
                    v57 = *(_WORD *)(v16 + 8);
                  }
                }
                else
                {
                  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v16 + 8) ^ (unsigned __int16)HeapHandle ^ (v16 >> 4)) )
                    v56 = 0LL;
                  else
                    v56 = *(_QWORD *)(v16
                                    - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v16 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)(v16 >> 4)) >> 12));
                  v57 = *(_WORD *)(v56 + 36);
                  v49 = *(_BYTE *)(v16 + 15);
                }
                v55 = *(_QWORD *)(v16 + 16LL * v57);
              }
              else
              {
                v55 = v49 & 0x3F;
              }
              if ( v49 >= 0 )
              {
                if ( *((_DWORD *)HeapHandle + 31) )
                {
                  v61 = *(_DWORD *)(v16 + 8);
                  LOWORD(v72) = v61;
                  if ( (v61 & *((_DWORD *)HeapHandle + 31)) != 0 )
                    v72 = *((_DWORD *)HeapHandle + 34) ^ v61;
                  v60 = v72;
                }
                else
                {
                  v60 = *(_WORD *)(v16 + 8);
                }
              }
              else
              {
                if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v16 + 8) ^ (unsigned __int16)HeapHandle ^ (v16 >> 4)) )
                  v59 = 0LL;
                else
                  v59 = *(_QWORD *)(v16
                                  - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v16 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)(v16 >> 4)) >> 12));
                v60 = *(_WORD *)(v59 + 36);
              }
              v62 = v55 - v45;
              v10 = v67;
              if ( v62 >= 0x3F )
              {
                *(_QWORD *)(v16 + 16LL * v60) = v62;
                *(_BYTE *)(v16 + 15) = ((v49 >> 7) & 0x80) + 63;
              }
              else
              {
                *(_BYTE *)(v16 + 15) = v62 | (v49 >> 7) & 0x80;
              }
            }
            v8 = (_QWORD *)(v16 + 16);
          }
LABEL_17:
          v18 = RtlpReAllocateHeap(HeapHandle);
          if ( (dword_1801881E8 & 1) != 0
            && (dword_1801881E8 & 2) != 0
            && NtCurrentPeb()->ProcessHeap
            && (v74 = RtlpHpEnvHandle, HeapHandle != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(&v74, v17)) )
          {
            if ( v18 )
            {
              if ( (v12 & 0x10000000) == 0 )
              {
                RtlpHpStackTraceRemoveStack(HeapHandle, v8);
                RtlpHpStackTraceAddStack(HeapHandle, v18);
              }
              goto LABEL_19;
            }
          }
          else if ( v18 )
          {
LABEL_19:
            v6 = v18;
            if ( (_DWORD)v11 )
            {
              LOWORD(v66) = v10;
              v6 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v12, v18, v19, v66, (_DWORD)v11);
              RtlpCallInterceptRoutine((_DWORD)v11, (_DWORD)HeapHandle, v6, 6, v18);
            }
            return (_QWORD *)v6;
          }
          v7 -= v10;
          if ( (_DWORD)v11 )
          {
            RtlSizeHeap(HeapHandle, 0, v8);
            LOWORD(v66) = v10;
            v64 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v12, (_DWORD)v8, v63, v66, (_DWORD)v11);
            RtlpCallInterceptRoutine((_DWORD)v11, (_DWORD)HeapHandle, v64, 6, (__int64)v8);
          }
          goto LABEL_153;
        }
LABEL_59:
        RtlpLogHeapFailure(3, (_DWORD)HeapHandle, v16, (_DWORD)v8, 0LL, 0LL);
        v35 = -1073741811;
        goto LABEL_154;
      }
      return (_QWORD *)RtlDebugReAllocateHeap(HeapHandle);
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v29 = NtCurrentTeb();
    v29->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
}
