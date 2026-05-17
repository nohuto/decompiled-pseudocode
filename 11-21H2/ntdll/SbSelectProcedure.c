/*
 * XREFs of SbSelectProcedure @ 0x18004E920
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180051CD0 (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x180125600 (SbExecuteProcedure.c)
 * Callees:
 *     EtwEventWrite @ 0x1800061F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180015AA0 (EtwEventRegister.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18004EB00 (SbpUpdateCacheWithCurrentImpl.c)
 *     SbpUpdateCache @ 0x1800523C0 (SbpUpdateCache.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     SbpTraceContextUpdate @ 0x180125524 (SbpTraceContextUpdate.c)
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
  __int64 v13; // r15
  __int64 *v14; // r12
  __int64 v15; // rdx
  char *v16; // rsi
  char *v17; // rsi
  __int64 *v18; // rsi
  char *v19; // rdi
  char *v20; // rdi
  signed __int64 v22; // r13
  _RTL_USER_PROCESS_PARAMETERS *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // eax
  signed __int64 v30; // r15
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int16 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v37; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v38; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v39; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v42[5]; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+78h] [rbp-88h]
  int v44; // [rsp+7Ch] [rbp-84h]
  unsigned __int16 *v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+98h] [rbp-68h]
  int v49; // [rsp+9Ch] [rbp-64h]
  __int128 v50; // [rsp+A0h] [rbp-60h]
  __int128 v51; // [rsp+B0h] [rbp-50h]
  __int128 v52; // [rsp+C0h] [rbp-40h]
  _QWORD v53[16]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v7 = a4;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = pShimData + 2016) == 0LL || !*((_DWORD *)v9 + 12) )
  {
    SbpUpdateCacheWithCurrentImpl(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 2016) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)SbpUpdateCache(v5, a3, v9 + 24, a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v6;
    _mm_lfence();
    v13 = v7;
    v14 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(v53, 0, sizeof(v53));
    v15 = -1LL;
    v36 = 0;
    v37 = 0;
    if ( !*((_DWORD *)v14 + 11)
      || (v40 = 0LL, (v16 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = v16 + 2016) == 0LL
      || !*((_DWORD *)v17 + 12)
      || !*((_DWORD *)v17 + 3) )
    {
LABEL_16:
      v18 = *(__int64 **)(v5 + 8 * v13 + 16);
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      if ( *((_DWORD *)v18 + 10) )
      {
        v41 = 0LL;
        v19 = (char *)NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 2016;
          if ( v20 )
          {
            if ( *((_DWORD *)v20 + 12) && *((_DWORD *)v20 + 3) )
            {
              v30 = *((_QWORD *)v20 + 2);
              if ( !v30 )
              {
                if ( (unsigned int)EtwEventRegister((int)&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, (__int64)&v41) )
                  return v18[1];
                v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 2, v41, 0LL);
                if ( v30 )
                {
                  EtwNotificationUnregister(v41, 0LL);
                }
                else
                {
                  v30 = v41;
                  ProcessParameters = NtCurrentPeb()->ProcessParameters;
                  SbpTraceContextUpdate(
                    v41,
                    (_DWORD)v20 + 48,
                    0,
                    ProcessParameters->ImagePathName.Length,
                    (__int64)ProcessParameters->ImagePathName.Buffer);
                }
                if ( !v30 )
                  return v18[1];
                v15 = -1LL;
              }
              v32 = *v18;
              v42[0] = v18 + 14;
              v33 = -1LL;
              v42[1] = 16LL;
              do
                ++v33;
              while ( *(_WORD *)(v32 + 2 * v33) );
              v42[4] = v32;
              v34 = v18[3];
              v42[2] = &v38;
              v35 = (unsigned __int16)(2 * (v33 + 1));
              v38 = v35;
              v43 = v35;
              v42[3] = 2LL;
              v44 = 0;
              do
                ++v15;
              while ( *(_WORD *)(v34 + 2 * v15) );
              v47 = v34;
              v46 = 2LL;
              v39 = 2 * (v15 + 1);
              v45 = &v39;
              v48 = v39;
              v49 = 0;
              EtwEventWrite(v30, (int)&AeSbImplEvent, 5, (__int64)v42);
            }
          }
        }
      }
      return v18[1];
    }
    v22 = *((_QWORD *)v17 + 2);
    if ( !v22 )
    {
      if ( (unsigned int)EtwEventRegister((int)&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, (__int64)&v40) )
      {
LABEL_38:
        v15 = -1LL;
        goto LABEL_16;
      }
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, v40, 0LL);
      if ( v22 )
      {
        EtwNotificationUnregister(v40, 0LL);
      }
      else
      {
        v22 = v40;
        v23 = NtCurrentPeb()->ProcessParameters;
        SbpTraceContextUpdate(v40, (_DWORD)v17 + 48, 0, v23->ImagePathName.Length, (__int64)v23->ImagePathName.Buffer);
      }
      v15 = -1LL;
      if ( !v22 )
        goto LABEL_16;
    }
    v24 = *v14;
    v53[0] = (char *)v14 + 52;
    v25 = -1LL;
    v53[1] = 16LL;
    do
      ++v25;
    while ( *(_WORD *)(v24 + 2 * v25) );
    v53[4] = v24;
    v26 = v14[1];
    v53[2] = &v36;
    v27 = (unsigned __int16)(2 * (v25 + 1));
    v36 = v27;
    v53[5] = v27;
    v28 = -1LL;
    v53[3] = 2LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v53[8] = v26;
    v53[7] = 2LL;
    v29 = (unsigned __int16)(2 * (v28 + 1));
    v53[6] = &v37;
    v37 = v29;
    v53[9] = v29;
    EtwEventWrite(v22, (int)&AeSbCallEvent, 5, (__int64)v53);
    goto LABEL_38;
  }
  return 0LL;
}
