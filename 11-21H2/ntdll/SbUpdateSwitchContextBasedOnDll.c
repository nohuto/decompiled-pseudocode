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

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, _DWORD *a2, int a3)
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
  REGHANDLE v20; // rcx
  _DWORD *v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v24; // [rsp+88h] [rbp+38h] BYREF
  REGHANDLE RegHandle; // [rsp+98h] [rbp+48h] BYREF

  v24 = a2;
  v4 = 0;
  v5 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v5 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v5 = 0LL;
  }
  RegHandle = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  if ( v5 && a1 )
  {
    SbGetContextDetailsById(4LL, &v22);
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    v8 = v5 + 64;
    SbGetContextDetailsByGuid(v5 + 64, &v21);
    if ( a3 )
    {
      v4 = 1;
      if ( a3 == 1 )
      {
        v14 = *(_QWORD *)(a1 + 192);
        if ( v14 )
        {
          SbGetContextDetailsByGuid(v14, &v24);
          v15 = v24;
          v16 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v16) != *v24 )
          {
            if ( (unsigned __int64)++v16 >= 5 )
              goto LABEL_29;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v16 + 1, 0xFFFFFFFF) != 1 )
            return v4;
          v15 = v24;
LABEL_29:
          if ( v21 == v15 )
          {
            RtlAcquireSRWLockExclusive(&SbpContextLock);
            v23 = 0LL;
            v17 = &unk_18017775C;
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
            SbGetContextDetailsById(v18, &v23);
            v19 = *(_OWORD *)(v23 + 4);
LABEL_35:
            *v8 = v19;
            ++*(_QWORD *)v5;
            if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
              goto LABEL_20;
            v20 = RegHandle;
            if ( !RegHandle )
              goto LABEL_20;
LABEL_42:
            SbpTraceContextUpdate(v20, *(_QWORD *)(a1 + 80));
LABEL_20:
            ++*(_QWORD *)v5;
            RtlReleaseSRWLockExclusive(&SbpContextLock);
          }
        }
      }
    }
    else
    {
      v4 = SbpDetermineDllContext(*(PACTIVATION_CONTEXT *)(a1 + 48));
      if ( v4 )
      {
        v9 = v24;
        v10 = 0LL;
        v11 = v24 + 1;
        *(_QWORD *)(a1 + 192) = v24 + 1;
        v4 = 1;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v10) != *v9 )
        {
          if ( (unsigned __int64)++v10 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v10 + 1, 1u);
        v9 = v24;
LABEL_12:
        v12 = *v11 - *(_QWORD *)(v22 + 4);
        if ( *v11 == *(_QWORD *)(v22 + 4) )
          v12 = v11[1] - *(_QWORD *)(v22 + 12);
        if ( v12
          && *v9 < *v21
          && (*((unsigned __int16 *)v9 + 11) | ((unsigned __int64)*((unsigned __int16 *)v9 + 10) << 16)) >= *((_QWORD *)v5 + 5) )
        {
          RtlAcquireSRWLockExclusive(&SbpContextLock);
          ++*(_QWORD *)v5;
          *v8 = *(_OWORD *)v11;
          if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
            goto LABEL_20;
          v20 = RegHandle;
          if ( !RegHandle )
            goto LABEL_20;
          goto LABEL_42;
        }
      }
    }
  }
  return v4;
}
