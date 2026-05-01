/*
 * XREFs of ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180026E30
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180014698 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800262E0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B4BC (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18003B568 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB3C (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BF50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18007BC60 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 */

__int64 __fastcall HampActBeginStateChange(__int64 a1, unsigned __int8 a2)
{
  DWORD v2; // esi
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *Value; // rdi
  __int64 v7; // rdx
  struct _HAM_DEPENDENCY_GROUP *v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  int v11; // eax
  int v13; // ecx
  unsigned int v14; // edi
  unsigned int v15; // edi
  __int64 v16; // rax
  struct _HAM_DEPENDENCY_GROUP *v17; // rdi
  char v18; // al
  char v19; // [rsp+30h] [rbp-69h] BYREF
  char v20; // [rsp+31h] [rbp-68h] BYREF
  char v21; // [rsp+32h] [rbp-67h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-65h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v24[12]; // [rsp+48h] [rbp-51h] BYREF
  int v25; // [rsp+54h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v27; // [rsp+70h] [rbp-29h]
  int v28; // [rsp+78h] [rbp-21h]
  int v29; // [rsp+7Ch] [rbp-1Dh]
  _BYTE *v30; // [rsp+80h] [rbp-19h]
  __int64 v31; // [rsp+88h] [rbp-11h]
  char *v32; // [rsp+90h] [rbp-9h]
  __int64 v33; // [rsp+98h] [rbp-1h]
  char *v34; // [rsp+A0h] [rbp+7h]
  __int64 v35; // [rsp+A8h] [rbp+Fh]
  char *v36; // [rsp+B0h] [rbp+17h]
  __int64 v37; // [rsp+B8h] [rbp+1Fh]

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
  if ( (*(_BYTE *)(a1 + 552) & 1) != 0 )
  {
    v9 = -1073740682;
LABEL_13:
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4);
    if ( v8 )
      HampDepGroupRunStateChangeWorker(v8);
    return v9;
  }
  v10 = *(unsigned __int8 *)(a1 + 562);
  *(_DWORD *)v24 = 12;
  *(_QWORD *)&v24[4] = 2LL;
  v25 = 14;
  v11 = *((_DWORD *)&EventDescriptor.Keyword + v5 + 1);
  if ( !_bittest(&v11, v10) )
  {
    v9 = -1073700861;
    goto LABEL_13;
  }
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v19 = *(_BYTE *)(a1 + 563);
    *(_QWORD *)v24 = *(_QWORD *)(a1 + 40);
    v20 = v10;
    v36 = &v19;
    v34 = &v20;
    v32 = &v21;
    v30 = v24;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    v21 = v5;
    v37 = 1LL;
    v35 = 1LL;
    v33 = 1LL;
    v31 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v27 = &unk_1800C1EFF;
    UserData.Reserved = 2;
    v28 = 66;
    v29 = 1;
    v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  v13 = *(_DWORD *)(a1 + 552) | 1;
  *(_BYTE *)(a1 + 562) = v5;
  *(_DWORD *)(a1 + 552) = v13;
  v14 = v10 - 1;
  if ( !v14 )
    goto LABEL_23;
  v15 = v14 - 1;
  if ( !v15 )
  {
    LOBYTE(v7) = 6;
    HampActSetPendState(a1, v7);
    goto LABEL_24;
  }
  if ( v15 - 1 <= 1 )
LABEL_23:
    *(_DWORD *)(a1 + 552) = v13 & 0xFFFFFFDF;
LABEL_24:
  if ( v8 )
  {
    *(_DWORD *)(a1 + 552) |= 2u;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 80);
    v17 = *(struct _HAM_DEPENDENCY_GROUP **)(v16 + 704);
    if ( v17 && !*(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 552) & 2) == 0 )
    {
      HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(v16 + 704));
      v18 = HampDepGroupTryEnterStateChange(v17, (unsigned __int64 *)(*(_QWORD *)(a1 + 80) + 624LL));
      *(_DWORD *)(a1 + 552) &= ~2u;
      *(_DWORD *)(a1 + 552) |= 2 * (v18 & 1);
      HampDepGroupReleaseLockExclusive(v17);
    }
  }
  return 0LL;
}
