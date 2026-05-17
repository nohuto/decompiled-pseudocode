/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x18002EEF4
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18002ED90 (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 * Callees:
 *     SbpDetermineDllContext @ 0x18002E904 (SbpDetermineDllContext.c)
 *     SbGetContextDetailsById @ 0x18002F13C (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18002F164 (SbGetContextDetailsByGuid.c)
 *     SbObtainTraceHandle @ 0x18002F38C (SbObtainTraceHandle.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     SbpTraceContextUpdate @ 0x180128434 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v8; // r15
  _DWORD *v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  int v20; // ecx
  int v21; // edx
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+88h] [rbp+38h] BYREF
  _DWORD *v26; // [rsp+98h] [rbp+48h] BYREF

  v25 = a2;
  v4 = 0;
  v5 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v5 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v5 = 0LL;
  }
  v22 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  if ( v5 && a1 )
  {
    SbGetContextDetailsById(4LL, &v25);
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    v8 = v5 + 64;
    SbGetContextDetailsByGuid(v5 + 64, &v23);
    if ( a3 )
    {
      v4 = 1;
      if ( a3 == 1 )
      {
        v14 = *(_QWORD *)(a1 + 192);
        if ( v14 )
        {
          SbGetContextDetailsByGuid(v14, &v26);
          v15 = v26;
          v16 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v16) != *v26 )
          {
            if ( (unsigned __int64)++v16 >= 5 )
              goto LABEL_29;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v16 + 1, 0xFFFFFFFF) != 1 )
            return v4;
          v15 = v26;
LABEL_29:
          if ( v23 == v15 )
          {
            RtlAcquireSRWLockExclusive(&SbpContextLock);
            v24 = 0LL;
            v17 = &unk_18018473C;
            v18 = 0LL;
            while ( !*v17 )
            {
              v18 = (unsigned int)(v18 + 1);
              v17 += 2;
              if ( (unsigned int)v18 >= 5 )
              {
                v19 = *((_OWORD *)v5 + 3);
                goto LABEL_35;
              }
            }
            SbGetContextDetailsById(v18, &v24);
            v19 = *(_OWORD *)(v24 + 4);
LABEL_35:
            *v8 = v19;
            ++*(_QWORD *)v5;
            if ( !(unsigned int)SbObtainTraceHandle(&v22) )
              goto LABEL_20;
            v20 = v22;
            if ( !v22 )
              goto LABEL_20;
            v21 = (_DWORD)v5 + 64;
            goto LABEL_43;
          }
        }
      }
    }
    else
    {
      v4 = SbpDetermineDllContext(*(_QWORD *)(a1 + 48), &v26);
      if ( v4 )
      {
        v9 = v26;
        v10 = 0LL;
        v11 = v26 + 1;
        *(_QWORD *)(a1 + 192) = v26 + 1;
        v4 = 1;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v10) != *v9 )
        {
          if ( (unsigned __int64)++v10 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v10 + 1, 1u);
        v9 = v26;
LABEL_12:
        v12 = *v11 - *(_QWORD *)(v25 + 4);
        if ( *v11 == *(_QWORD *)(v25 + 4) )
          v12 = v11[1] - *(_QWORD *)(v25 + 12);
        if ( v12
          && *v9 < *v23
          && (*((unsigned __int16 *)v9 + 11) | ((unsigned __int64)*((unsigned __int16 *)v9 + 10) << 16)) >= *((_QWORD *)v5 + 5) )
        {
          RtlAcquireSRWLockExclusive(&SbpContextLock);
          ++*(_QWORD *)v5;
          *v8 = *(_OWORD *)v11;
          if ( !(unsigned int)SbObtainTraceHandle(&v22) )
            goto LABEL_20;
          v20 = v22;
          if ( !v22 )
            goto LABEL_20;
          v21 = (int)v11;
LABEL_43:
          SbpTraceContextUpdate(v20, v21, 1, *(unsigned __int16 *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_20:
          ++*(_QWORD *)v5;
          RtlReleaseSRWLockExclusive(&SbpContextLock);
        }
      }
    }
  }
  return v4;
}
