/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x18004E64C
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18004E44C (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x1800526F0 (LdrpUnloadNode.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     SbGetContextDetailsById @ 0x18004E894 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18004E8BC (SbGetContextDetailsByGuid.c)
 *     SbpDetermineDllContext @ 0x18004F028 (SbpDetermineDllContext.c)
 *     SbObtainTraceHandle @ 0x180086590 (SbObtainTraceHandle.c)
 *     SbpTraceContextUpdate @ 0x180125524 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v8; // r15
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  _DWORD *v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  _DWORD *v20; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm0
  int v23; // ecx
  int v24; // edx
  _DWORD *v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  unsigned int *v28; // [rsp+88h] [rbp+38h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h] BYREF

  v28 = a2;
  v4 = 0;
  v5 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v5 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v5 = 0LL;
  }
  v29 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  if ( v5 && a1 )
  {
    SbGetContextDetailsById(4LL, &v26);
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    v8 = v5 + 64;
    SbGetContextDetailsByGuid(v5 + 64, &v25);
    if ( a3 )
    {
      v4 = 1;
      if ( a3 == 1 )
      {
        v15 = *(_QWORD *)(a1 + 192);
        if ( v15 )
        {
          SbGetContextDetailsByGuid(v15, &v28);
          v17 = v28;
          v18 = 0LL;
          v19 = *v28;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v18) != (_DWORD)v19 )
          {
            if ( (unsigned __int64)++v18 >= 5 )
              goto LABEL_29;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v18 + 1, 0xFFFFFFFF) != 1 )
            return v4;
          v17 = v28;
LABEL_29:
          if ( v25 == v17 )
          {
            RtlAcquireSRWLockExclusive(
              (unsigned __int64)&SbpContextLock,
              (unsigned __int64)&SbDynamicContextDllCount,
              v19,
              v16);
            v27 = 0LL;
            v20 = &unk_18017775C;
            v21 = 0LL;
            while ( !*v20 )
            {
              v21 = (unsigned int)(v21 + 1);
              v20 += 2;
              if ( (unsigned int)v21 >= 5 )
              {
                v22 = *((_OWORD *)v5 + 3);
                goto LABEL_35;
              }
            }
            SbGetContextDetailsById(v21, &v27);
            v22 = *(_OWORD *)(v27 + 4);
LABEL_35:
            *v8 = v22;
            ++*(_QWORD *)v5;
            if ( !(unsigned int)SbObtainTraceHandle(&v29) )
              goto LABEL_20;
            v23 = v29;
            if ( !v29 )
              goto LABEL_20;
            v24 = (_DWORD)v5 + 64;
            goto LABEL_43;
          }
        }
      }
    }
    else
    {
      v4 = SbpDetermineDllContext(*(_QWORD *)(a1 + 48), &v28);
      if ( v4 )
      {
        v10 = (unsigned __int64)v28;
        v11 = 0LL;
        v12 = v28 + 1;
        *(_QWORD *)(a1 + 192) = v28 + 1;
        v4 = 1;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v11) != *(_DWORD *)v10 )
        {
          if ( (unsigned __int64)++v11 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v11 + 1, 1u);
        v10 = (unsigned __int64)v28;
LABEL_12:
        v13 = *v12 - *(_QWORD *)(v26 + 4);
        if ( *v12 == *(_QWORD *)(v26 + 4) )
          v13 = v12[1] - *(_QWORD *)(v26 + 12);
        if ( v13
          && *(_DWORD *)v10 < *v25
          && (*(unsigned __int16 *)(v10 + 22) | ((unsigned __int64)*(unsigned __int16 *)(v10 + 20) << 16)) >= *((_QWORD *)v5 + 5) )
        {
          RtlAcquireSRWLockExclusive(
            (unsigned __int64)&SbpContextLock,
            (unsigned __int64)&SbDynamicContextDllCount,
            v10,
            v9);
          ++*(_QWORD *)v5;
          *v8 = *(_OWORD *)v12;
          if ( !(unsigned int)SbObtainTraceHandle(&v29) )
            goto LABEL_20;
          v23 = v29;
          if ( !v29 )
            goto LABEL_20;
          v24 = (int)v12;
LABEL_43:
          SbpTraceContextUpdate(v23, v24, 1, *(unsigned __int16 *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_20:
          ++*(_QWORD *)v5;
          RtlReleaseSRWLockExclusive(&SbpContextLock);
        }
      }
    }
  }
  return v4;
}
