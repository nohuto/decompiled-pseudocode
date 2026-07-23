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

_QWORD *__fastcall RtlpReAllocateHeapInternal(
        unsigned __int16 *HeapHandle,
        unsigned int a2,
        char *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _WORD *a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  char *v8; // r14
  _QWORD *v10; // rsi
  int v11; // r15d
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // r9d
  __int64 v17; // rax
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  char *v21; // r8
  int v22; // r12d
  __int64 Heap; // rax
  int v24; // esi
  struct _TEB *v25; // rbx
  struct _TEB *v26; // rbx
  _QWORD *v27; // rax
  bool v28; // cf
  unsigned int v29; // r15d
  struct _TEB *v30; // rbx
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int16 v33; // dx
  int v34; // eax
  int v35; // eax
  unsigned __int16 v36; // ax
  __int64 v37; // rcx
  char v38; // dl
  __int16 v39; // ax
  unsigned __int16 v40; // ax
  __int64 v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // cl
  __int64 v45; // rsi
  signed __int32 v47; // r15d
  __int64 DeferredCriticalSectionEvent; // r14
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int16 v51; // ax
  int v52; // eax
  int v53; // r8d
  __int64 v54; // rax
  unsigned __int16 v55; // ax
  int v56; // eax
  unsigned __int64 v57; // rdx
  int v58; // r9d
  int v59; // eax
  int v60; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v61; // [rsp+30h] [rbp-D0h]
  int v62; // [rsp+34h] [rbp-CCh]
  int v63; // [rsp+38h] [rbp-C8h]
  int v64; // [rsp+48h] [rbp-B8h]
  int v65; // [rsp+48h] [rbp-B8h]
  int v66; // [rsp+48h] [rbp-B8h]
  int v67; // [rsp+48h] [rbp-B8h]
  unsigned int v68[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v69; // [rsp+60h] [rbp-A0h]
  __int128 v70; // [rsp+70h] [rbp-90h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+80h] [rbp-80h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v61 = 0;
  v63 = 0;
  v10 = 0LL;
  if ( a3 )
  {
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    {
      v18 = RtlpHpConvertFlagsToSegmentFlags(a2);
      v19 = *((_DWORD *)HeapHandle + 55);
      v20 = 0;
      if ( v19 )
        LOBYTE(v20) = v19 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
      v21 = v8;
      v22 = v18 | 1;
      if ( !v20 )
        v22 = v18;
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
      {
        v6 = *((_QWORD *)v8 - 2);
        v21 = &v8[-v6];
      }
      if ( v6 + v7 < v7
        || (Heap = RtlpHpReAllocateHeap(HeapHandle, (unsigned int)v22, v21),
            v10 = (_QWORD *)Heap,
            (unsigned __int64)(Heap - 1) > 0xFFFFFFFFFFFFFFFDuLL) )
      {
        v28 = v10 != 0LL;
        v10 = 0LL;
        v29 = v28 ? -1073741819 : -1073741801;
        NtCurrentTeb()->LastStatusValue = v29;
        v30 = NtCurrentTeb();
        v30->LastErrorValue = RtlNtStatusToDosError(v29);
        if ( v22 < 0 || *((int *)HeapHandle + 5) < 0 )
        {
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.ExceptionAddress = RtlRaiseException;
          ExceptionRecord.ExceptionCode = v29;
          ExceptionRecord.NumberParameters = 1;
          ExceptionRecord.ExceptionInformation[0] = v7;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      else
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          v27 = (_QWORD *)(v6 + Heap);
          *(v27 - 2) = v6;
          if ( v6 > 0x10 )
            *v10 = v6;
          v10 = v27;
        }
        if ( a5 )
          *a5 -= v6;
      }
      if ( (unsigned int)RtlpHpStackLoggingEnabled(HeapHandle) && v10 )
      {
        RtlpHpStackTraceRemoveStack(HeapHandle, v8);
        RtlpHpStackTraceAddStack(HeapHandle, v10);
      }
      return v10;
    }
    if ( a5 )
      *a5 = 0LL;
    if ( a6 )
      *a6 = 0;
    v11 = *((_DWORD *)HeapHandle + 29) | a2;
    v62 = v11;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
    {
      if ( !dword_180174238 )
      {
        v12 = *((_QWORD *)HeapHandle + 49);
        v13 = v12;
        if ( (v12 || (v13 = qword_18017AC28) != 0) && a4 > v13 )
        {
          v31 = *((_QWORD *)HeapHandle + 50);
          if ( v31 )
            RtlpLogHeapFailure(20, (_DWORD)HeapHandle, 0, v31, v7, v12);
          goto LABEL_43;
        }
      }
      if ( (HeapHandle[60] & 1) != 0 )
      {
        v17 = RtlpProbeUserBufferSafe(HeapHandle, a3);
      }
      else
      {
        if ( ((unsigned __int8)a3 & 0xF) != 0 )
        {
          RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)a3, 0, 0LL, 0LL);
          goto LABEL_14;
        }
        v6 = (unsigned __int64)(a3 - 16);
        _m_prefetchw(a3 - 16);
        if ( *(a3 - 1) == 5 )
          v6 -= 16LL * *(unsigned __int8 *)(v6 + 14);
        if ( (*(_BYTE *)(v6 + 15) & 0x3F) != 0 )
        {
LABEL_14:
          if ( !v6 )
          {
            v24 = -1073741819;
            goto LABEL_44;
          }
          if ( *(v8 - 1) != 5 )
            goto LABEL_16;
          if ( *(char *)(v6 + 15) >= 0 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v69 = *(_DWORD *)(v6 + 8) ^ *((_DWORD *)HeapHandle + 34);
              if ( HIBYTE(v69) != ((unsigned __int8)v69 ^ (unsigned __int8)(BYTE1(v69) ^ BYTE2(v69))) )
                goto LABEL_86;
            }
          }
          else if ( !(unsigned __int8)RtlpValidateLFHBlock(HeapHandle, v6, 0LL) )
          {
LABEL_86:
            RtlpLogHeapFailure(3, (_DWORD)HeapHandle, v6, (_DWORD)v8, 0LL, 0LL);
            v24 = -1073741811;
            goto LABEL_44;
          }
          if ( *(char *)(v6 + 15) >= 0 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v34 = *(_DWORD *)(v6 + 8);
              LOWORD(v64) = v34;
              if ( (v34 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v64 = *((_DWORD *)HeapHandle + 34) ^ v34;
              v33 = v64;
            }
            else
            {
              v33 = *(_WORD *)(v6 + 8);
            }
          }
          else
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v6 + 8) ^ (unsigned __int16)HeapHandle ^ (v6 >> 4)) )
              v32 = 0LL;
            else
              v32 = *(_QWORD *)(v6
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)(v6 >> 4)) >> 12));
            v33 = *(_WORD *)(v32 + 36);
          }
          if ( *(_BYTE *)(v6 + 15) == 4 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v35 = *(_DWORD *)(v6 + 8);
              LOWORD(v65) = v35;
              if ( (v35 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v65 = *((_DWORD *)HeapHandle + 34) ^ v35;
              v36 = v65;
            }
            else
            {
              v36 = *(_WORD *)(v6 + 8);
            }
            v37 = v33 + *(_QWORD *)(v6 - 16) - v36;
          }
          else
          {
            v37 = 16LL * v33;
          }
          if ( v37 + v6 < (unsigned __int64)v8 )
            goto LABEL_86;
          LODWORD(v10) = *((_DWORD *)v8 - 2);
          v63 = (int)v10;
          if ( (v11 & 0x3C000102) != 0 )
            goto LABEL_16;
          v38 = *(v8 - 1);
          if ( v38 == 5 )
          {
            v39 = (unsigned __int8)*(v8 - 2);
          }
          else
          {
            if ( (v38 & 0x40) == 0 )
            {
              v40 = 0;
              goto LABEL_94;
            }
            v39 = v38 & 0x3F;
          }
          v40 = 16 * v39;
LABEL_94:
          v41 = v40;
          v61 = v40;
          v42 = v40 + v7;
          if ( v42 < v7 )
          {
LABEL_43:
            v24 = -1073741801;
LABEL_44:
            NtCurrentTeb()->LastStatusValue = v24;
            v25 = NtCurrentTeb();
            v25->LastErrorValue = RtlNtStatusToDosError(v24);
            if ( (v11 & 4) != 0 )
            {
              ExceptionRecord.ExceptionCode = v24;
              ExceptionRecord.ExceptionAddress = RtlRaiseException;
              ExceptionRecord.ExceptionRecord = 0LL;
              ExceptionRecord.NumberParameters = 1;
              ExceptionRecord.ExceptionFlags = 0;
              ExceptionRecord.ExceptionInformation[0] = v7;
              RtlRaiseException(&ExceptionRecord);
            }
            return 0LL;
          }
          v7 = v42;
          if ( v38 == 5 )
            v43 = (__int64)&v8[-16 * (unsigned __int8)*(v8 - 2)];
          else
            v43 = 0LL;
          if ( (int)RtlpCallInterceptRoutine(v63, (_DWORD)HeapHandle, (_DWORD)v8, 5, v43) < 0 )
          {
            v24 = -1073741819;
            goto LABEL_44;
          }
          v44 = *(_BYTE *)(v6 + 15);
          if ( v44 == 4 )
          {
            if ( (v11 & 1) == 0 && (HeapHandle[58] & 1) == 0 )
              RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              *(_DWORD *)(v6 + 8) ^= *((_DWORD *)HeapHandle + 34);
              if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
                RtlpAnalyzeHeapFailure(HeapHandle, v6);
            }
            *(_WORD *)(v6 + 8) -= v61;
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
              *(_DWORD *)(v6 + 8) ^= *((_DWORD *)HeapHandle + 34);
            }
            if ( (v11 & 1) == 0 && (HeapHandle[58] & 1) == 0 )
            {
              v45 = *((_QWORD *)HeapHandle + 44);
              if ( (*(_DWORD *)(v45 + 12))-- == 1 )
              {
                *(_QWORD *)(v45 + 16) = 0LL;
                v47 = _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 8), -1, -2);
                if ( v47 != -2 )
                {
                  if ( (*(_BYTE *)(v45 + 8) & 1) != 0 )
                    RtlpNotOwnerCriticalSection(v45);
                  DeferredCriticalSectionEvent = *(_QWORD *)(v45 + 24);
                  if ( !DeferredCriticalSectionEvent )
                    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v45);
                  v68[0] = 0;
                  while ( v47 != _InterlockedCompareExchange(
                                   (volatile signed __int32 *)(v45 + 8),
                                   (v47 & 2 | 1) + v47,
                                   v47) )
                  {
                    RtlBackoff(v68);
                    _m_prefetchw((const void *)(v45 + 8));
                    v47 = *(_DWORD *)(v45 + 8);
                  }
                  if ( (v47 & 2) != 0 )
                    RtlpUnWaitCriticalSectionEx(v45, DeferredCriticalSectionEvent);
                }
                v11 = v62;
              }
            }
          }
          else
          {
            if ( v44 == 5 )
            {
              v49 = *(unsigned __int16 *)(v6 + 12) ^ (unsigned __int64)HeapHandle[70];
            }
            else if ( (v44 & 0x40) != 0 )
            {
              v49 = *(unsigned __int16 *)(v6 + 16LL * (v44 & 0x3F) + 12);
            }
            else if ( (v44 & 0x3F) == 0x3F )
            {
              if ( v44 >= 0 )
              {
                if ( *((_DWORD *)HeapHandle + 31) )
                {
                  v52 = *(_DWORD *)(v6 + 8);
                  LOWORD(v66) = v52;
                  if ( (v52 & *((_DWORD *)HeapHandle + 31)) != 0 )
                    v66 = *((_DWORD *)HeapHandle + 34) ^ v52;
                  v51 = v66;
                }
                else
                {
                  v51 = *(_WORD *)(v6 + 8);
                }
              }
              else
              {
                if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v6 + 8) ^ (unsigned __int16)HeapHandle ^ (v6 >> 4)) )
                  v50 = 0LL;
                else
                  v50 = *(_QWORD *)(v6
                                  - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)(v6 >> 4)) >> 12));
                v51 = *(_WORD *)(v50 + 36);
              }
              v49 = *(_QWORD *)(v6 + 16LL * v51);
            }
            else
            {
              v49 = v44 & 0x3F;
            }
            v53 = *(char *)(v6 + 15);
            if ( *(char *)(v6 + 15) >= 0 )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v56 = *(_DWORD *)(v6 + 8);
                LOWORD(v67) = v56;
                if ( (v56 & *((_DWORD *)HeapHandle + 31)) != 0 )
                  v67 = *((_DWORD *)HeapHandle + 34) ^ v56;
                v55 = v67;
              }
              else
              {
                v55 = *(_WORD *)(v6 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v6 + 8) ^ (unsigned __int16)HeapHandle ^ (v6 >> 4)) )
                v54 = 0LL;
              else
                v54 = *(_QWORD *)(v6
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)(v6 >> 4)) >> 12));
              v55 = *(_WORD *)(v54 + 36);
            }
            v57 = v49 - v41;
            if ( v57 >= 0x3F )
            {
              *(_QWORD *)(v6 + 16LL * v55) = v57;
              *(_BYTE *)(v6 + 15) = ((v53 >> 31) & 0x80) + 63;
            }
            else
            {
              *(_BYTE *)(v6 + 15) = v57 | ((char)v53 >> 7) & 0x80;
            }
          }
          LODWORD(v10) = v63;
          v8 = (char *)(v6 + 16);
LABEL_16:
          v14 = RtlpReAllocateHeap(HeapHandle);
          if ( (dword_18017AE98 & 1) != 0
            && (dword_18017AE98 & 2) != 0
            && NtCurrentPeb()->ProcessHeap
            && (v70 = RtlpHpEnvHandle, HeapHandle != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(&v70)) )
          {
            if ( v14 )
            {
              if ( (v11 & 0x10000000) == 0 )
              {
                RtlpHpStackTraceRemoveStack(HeapHandle, v8);
                RtlpHpStackTraceAddStack(HeapHandle, v14);
              }
              goto LABEL_20;
            }
          }
          else if ( v14 )
          {
LABEL_20:
            v10 = (_QWORD *)v14;
            if ( v63 )
            {
              LOWORD(v60) = v61;
              v10 = (_QWORD *)RtlpSetupExtendedBlock((_DWORD)HeapHandle, v11, v14, v15, v60, v63);
              RtlpCallInterceptRoutine(v63, (_DWORD)HeapHandle, (_DWORD)v10, 6, v14);
            }
            return v10;
          }
          v7 -= v61;
          if ( (_DWORD)v10 )
          {
            RtlSizeHeap(HeapHandle, 0, v8);
            LOWORD(v60) = v61;
            v59 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v11, (_DWORD)v8, v58, v60, (_DWORD)v10);
            RtlpCallInterceptRoutine((_DWORD)v10, (_DWORD)HeapHandle, v59, 6, (__int64)v8);
          }
          goto LABEL_43;
        }
        RtlpLogHeapFailure(8, (_DWORD)HeapHandle, v6, 0, 0LL, 0LL);
        v17 = 0LL;
      }
      v6 = v17;
      goto LABEL_14;
    }
    return (_QWORD *)RtlDebugReAllocateHeap(HeapHandle);
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v26 = NtCurrentTeb();
    v26->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
}
