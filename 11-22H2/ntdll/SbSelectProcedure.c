/*
 * XREFs of SbSelectProcedure @ 0x18002F390
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18004A378 (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x180127060 (SbExecuteProcedure.c)
 * Callees:
 *     SbObtainTraceHandle @ 0x18002F55C (SbObtainTraceHandle.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002F5D0 (SbpUpdateCacheWithCurrentImpl.c)
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x180030310 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x180031B90 (EtwEventRegister.c)
 *     SbpUpdateCache @ 0x180070A4C (SbpUpdateCache.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     SbpTraceContextUpdate @ 0x180126F84 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  char *pShimData; // r8
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 *v15; // r14
  __int64 *v16; // rsi
  char *v17; // rdi
  char *v18; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // eax
  REGHANDLE v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int16 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v32; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v33; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v34; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONGLONG v35; // [rsp+40h] [rbp-C0h] BYREF
  REGHANDLE RegHandle; // [rsp+48h] [rbp-B8h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+60h] [rbp-A0h]
  __int128 v39; // [rsp+70h] [rbp-90h]
  __int128 v40; // [rsp+80h] [rbp-80h]
  __int128 v41; // [rsp+90h] [rbp-70h]
  __int128 v42; // [rsp+A0h] [rbp-60h]
  __int128 v43; // [rsp+B0h] [rbp-50h]
  __int128 v44; // [rsp+C0h] [rbp-40h]
  _EVENT_DATA_DESCRIPTOR v45; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  unsigned __int16 *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h]
  int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]
  __int128 v56; // [rsp+120h] [rbp+20h]
  __int128 v57; // [rsp+130h] [rbp+30h]
  __int128 v58; // [rsp+140h] [rbp+40h]

  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v7 = a4;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData && (v9 = pShimData + 2016) != 0LL && *((_DWORD *)v9 + 12) )
  {
    v10 = (char *)NtCurrentPeb()->pShimData;
    if ( v10 && (v11 = v10 + 2016) != 0LL && *((_DWORD *)v11 + 12) )
      v12 = *(_QWORD *)v11;
    else
      v12 = 0LL;
    if ( (v12 != *(_QWORD *)v5 || a2 != *(_DWORD *)(v5 + 8)) && !(unsigned int)SbpUpdateCache(v5, a3, v9 + 24, a2) )
      return 0LL;
  }
  else
  {
    SbpUpdateCacheWithCurrentImpl(v5, a3);
  }
  if ( (unsigned int)v7 < *(_DWORD *)(v5 + 12) )
  {
    _mm_lfence();
    v13 = *(_QWORD *)(a3 + 24);
    UserData = 0LL;
    RegHandle = 0LL;
    v14 = -1LL;
    v38 = 0LL;
    v15 = *(__int64 **)(v13 + 8 * v7 + 8);
    v39 = 0LL;
    v31 = 0;
    v40 = 0LL;
    v32 = 0;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    if ( *((_DWORD *)v15 + 11) && (unsigned int)SbObtainTraceHandle(&RegHandle) && RegHandle )
    {
      v20 = *v15;
      UserData.Ptr = (unsigned __int64)v15 + 52;
      v21 = -1LL;
      *(_QWORD *)&UserData.Size = 16LL;
      do
        ++v21;
      while ( *(_WORD *)(v20 + 2 * v21) );
      *(_QWORD *)&v39 = v20;
      v22 = v15[1];
      *(_QWORD *)&v38 = &v31;
      v23 = (unsigned __int16)(2 * (v21 + 1));
      v31 = v23;
      *((_QWORD *)&v39 + 1) = v23;
      v24 = -1LL;
      *((_QWORD *)&v38 + 1) = 2LL;
      do
        ++v24;
      while ( *(_WORD *)(v22 + 2 * v24) );
      *(_QWORD *)&v41 = v22;
      *((_QWORD *)&v40 + 1) = 2LL;
      *(_QWORD *)&v40 = &v32;
      v25 = (unsigned __int16)(2 * (v24 + 1));
      v32 = v25;
      *((_QWORD *)&v41 + 1) = v25;
      EtwEventWrite(RegHandle, &AeSbCallEvent, 5u, &UserData);
    }
    v16 = *(__int64 **)(v5 + 8 * v7 + 16);
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    if ( *((_DWORD *)v16 + 10) )
    {
      v35 = 0LL;
      v17 = (char *)NtCurrentPeb()->pShimData;
      if ( v17 )
      {
        v18 = v17 + 2016;
        if ( v18 )
        {
          if ( *((_DWORD *)v18 + 12) && *((_DWORD *)v18 + 3) )
          {
            v26 = *((_QWORD *)v18 + 2);
            if ( v26 )
              goto LABEL_36;
            if ( !EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v35) )
            {
              v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 2, v35, 0LL);
              if ( v26 )
              {
                EtwNotificationUnregister(v35, 0LL);
              }
              else
              {
                v26 = v35;
                SbpTraceContextUpdate(v35, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
              }
              if ( v26 )
              {
LABEL_36:
                v27 = *v16;
                v45.Ptr = (unsigned __int64)(v16 + 14);
                v28 = -1LL;
                *(_QWORD *)&v45.Size = 16LL;
                do
                  ++v28;
                while ( *(_WORD *)(v27 + 2 * v28) );
                v48 = v27;
                v29 = v16[3];
                v46 = &v33;
                v30 = (unsigned __int16)(2 * (v28 + 1));
                v33 = v30;
                v49 = v30;
                v47 = 2LL;
                v50 = 0;
                do
                  ++v14;
                while ( *(_WORD *)(v29 + 2 * v14) );
                v53 = v29;
                v52 = 2LL;
                v51 = &v34;
                v34 = 2 * (v14 + 1);
                v54 = v34;
                v55 = 0;
                EtwEventWrite(v26, &AeSbImplEvent, 5u, &v45);
              }
            }
          }
        }
      }
    }
    return v16[1];
  }
  return v6;
}
