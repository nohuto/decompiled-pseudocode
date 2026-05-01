/*
 * XREFs of ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180022240
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006044 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18007662C (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x1800781CC (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079814 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 */

__int64 __fastcall HampActBeginStateChange(__int64 a1, unsigned __int8 a2)
{
  DWORD v2; // esi
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *Value; // rdi
  __int64 v7; // rdx
  struct _HAM_DEPENDENCY_GROUP *v8; // rsi
  int v9; // r8d
  unsigned int v10; // edi
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rax
  struct _HAM_DEPENDENCY_GROUP *v14; // rdi
  unsigned int v16; // ebx
  char v17; // al
  char v18; // [rsp+30h] [rbp-69h] BYREF
  char v19; // [rsp+31h] [rbp-68h] BYREF
  char v20; // [rsp+32h] [rbp-67h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-65h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v23[12]; // [rsp+48h] [rbp-51h] BYREF
  int v24; // [rsp+54h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v26; // [rsp+70h] [rbp-29h]
  int v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+7Ch] [rbp-1Dh]
  _BYTE *v29; // [rsp+80h] [rbp-19h]
  __int64 v30; // [rsp+88h] [rbp-11h]
  char *v31; // [rsp+90h] [rbp-9h]
  __int64 v32; // [rsp+98h] [rbp-1h]
  char *v33; // [rsp+A0h] [rbp+7h]
  __int64 v34; // [rsp+A8h] [rbp+Fh]
  char *v35; // [rsp+B0h] [rbp+17h]
  __int64 v36; // [rsp+B8h] [rbp+1Fh]

  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = a2;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( *(_QWORD *)(a1 + 72) && *(_QWORD *)(a1 + 64) )
    v8 = HampHostCheckWaitEnterDependencyStateChange((struct _RM_HAM_ACTIVITY_HOST *)v4);
  else
    v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 552);
  if ( (v9 & 1) != 0 )
  {
    v16 = -1073740682;
  }
  else
  {
    v10 = *(unsigned __int8 *)(a1 + 562);
    *(_DWORD *)v23 = 12;
    *(_QWORD *)&v23[4] = 2LL;
    v24 = 14;
    v11 = *((_DWORD *)&EventDescriptor.Keyword + v5 + 1);
    if ( _bittest(&v11, v10) )
    {
      if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
      {
        v18 = *(_BYTE *)(a1 + 563);
        *(_QWORD *)v23 = *(_QWORD *)(a1 + 40);
        v19 = v10;
        v35 = &v18;
        v33 = &v19;
        v31 = &v20;
        v29 = v23;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_1800DC220;
        v20 = v5;
        v36 = 1LL;
        v34 = 1LL;
        v32 = 1LL;
        v30 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 8LL;
        UserData.Size = *(unsigned __int16 *)off_1800DC220;
        v26 = &unk_1800C0339;
        UserData.Reserved = 2;
        v27 = 66;
        v28 = 1;
        v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
        v9 = *(_DWORD *)(a1 + 552);
      }
      v12 = v9 | 1;
      *(_BYTE *)(a1 + 562) = v5;
      *(_DWORD *)(a1 + 552) = v12;
      if ( (_BYTE)v10 != 1 )
      {
        if ( (_BYTE)v10 == 2 )
        {
          LOBYTE(v7) = 6;
          HampActSetPendState(a1, v7);
          goto LABEL_15;
        }
        if ( (unsigned __int8)v10 <= 2u || (unsigned __int8)v10 > 4u )
          goto LABEL_15;
      }
      *(_DWORD *)(a1 + 552) = v12 & 0xFFFFFFDF;
LABEL_15:
      if ( v8 )
      {
        *(_DWORD *)(a1 + 552) |= 2u;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 80);
        v14 = *(struct _HAM_DEPENDENCY_GROUP **)(v13 + 704);
        if ( v14 && !*(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 552) & 2) == 0 )
        {
          HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(v13 + 704));
          v17 = HampDepGroupTryEnterStateChange(v14, (unsigned __int64 *)(*(_QWORD *)(a1 + 80) + 624LL));
          *(_DWORD *)(a1 + 552) &= ~2u;
          *(_DWORD *)(a1 + 552) |= 2 * (v17 & 1);
          HampDepGroupReleaseLockExclusive(v14);
        }
      }
      return 0LL;
    }
    v16 = -1073700861;
  }
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4, v7);
  if ( v8 )
    HampDepGroupRunStateChangeWorker(v8);
  return v16;
}
