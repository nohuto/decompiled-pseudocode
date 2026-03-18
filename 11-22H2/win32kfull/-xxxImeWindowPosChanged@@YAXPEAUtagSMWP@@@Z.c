/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00D28B0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // r14
  PERESOURCE *v6; // rax
  __int64 v7; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rsi
  struct tagBWL *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  bool v18; // zf
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdi
  _QWORD *v25; // rax
  PERESOURCE *v26; // rax
  __int64 v27; // rdi
  __int64 *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // r15
  __int64 v33; // r8
  ULONG64 *v34; // rdx
  ULONG64 v35; // rdx
  __int64 *v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 **v41; // r14
  __int16 v42; // bx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // [rsp+20h] [rbp-98h]
  __int64 v53; // [rsp+28h] [rbp-90h]
  struct tagBWL *v54; // [rsp+40h] [rbp-78h]
  __int128 v55; // [rsp+48h] [rbp-70h] BYREF
  __int64 v56; // [rsp+58h] [rbp-60h]
  __int128 v57; // [rsp+60h] [rbp-58h] BYREF
  __int64 v58; // [rsp+70h] [rbp-48h]
  __int64 *v59; // [rsp+D0h] [rbp+18h]

  v5 = 0LL;
  v59 = 0LL;
  v6 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  if ( v7 )
  {
    v13 = *(_QWORD *)(v7 + 464);
    if ( v13 )
    {
      v5 = *(__int64 **)(v13 + 24);
      v59 = v5;
    }
  }
  if ( v5 )
  {
    v14 = (_QWORD *)v5[14];
    v15 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v16 = Win32AllocPoolZInit(296LL, 1819767637LL);
      v15 = (struct tagBWL *)v16;
      if ( !v16 )
        return;
      *(_QWORD *)(v16 + 16) = v16 + 280;
    }
    *((_QWORD *)v15 + 1) = (char *)v15 + 32;
    for ( *((_QWORD *)v15 + 3) = gptiCurrent; v14; v14 = (_QWORD *)v14[11] )
    {
      v17 = *((_QWORD *)v15 + 3);
      if ( v17 )
      {
        v18 = v17 == v14[2];
        v19 = 0;
        if ( !v18 )
          goto LABEL_22;
      }
      v19 = 1;
LABEL_22:
      if ( v19 )
      {
        v10 = (_QWORD *)*((_QWORD *)v15 + 1);
        *v10 = *v14;
        v20 = *((_QWORD *)v15 + 1) + 8LL;
        *((_QWORD *)v15 + 1) = v20;
        if ( v20 == *((_QWORD *)v15 + 2) )
        {
          v21 = v20 - (_QWORD)v15;
          v22 = UserReAllocPool(v15, (unsigned int)v21 + 8LL, (unsigned int)v21 + 72LL, 1819767637LL);
          v10 = (_QWORD *)v22;
          if ( v22 )
          {
            v24 = v22 + v21;
            *(_QWORD *)(v22 + 8) = v24;
            *(_QWORD *)(v22 + 16) = v24 + 64;
            v15 = (struct tagBWL *)v22;
            v23 = 1;
          }
          else
          {
            v23 = 0;
          }
          if ( !v23 )
            break;
        }
      }
    }
    v25 = (_QWORD *)*((_QWORD *)v15 + 1);
    if ( (unsigned __int64)v25 < *((_QWORD *)v15 + 2) )
    {
      *v25 = 1LL;
      v26 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v10, v9, v11, v12);
      if ( !ExIsResourceAcquiredSharedLite(*v26) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      v27 = 0LL;
      v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v28 )
        v27 = *v28;
      *((_QWORD *)v15 + 3) = v27;
      *((_QWORD *)v15 + 3) = gptiCurrent;
      *(_QWORD *)v15 = gpbwlList;
      gpbwlList = v15;
      v54 = v15;
      v29 = (_QWORD *)((char *)v15 + 32);
      v30 = gptiCurrent;
      while ( 1 )
      {
        v52 = v29;
        if ( *v29 == 1LL )
          break;
        v31 = ValidateHwnd(*v29);
        v32 = (_QWORD *)v31;
        if ( (*(_DWORD *)(v30 + 488) & 1) != 0 )
          break;
        if ( !v31 || *(_QWORD *)(v31 + 16) != v30 )
          goto LABEL_72;
        if ( (*(_WORD *)(*(_QWORD *)(v31 + 40) + 42LL) & 0x1000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 880LL);
        v33 = v32[5];
        if ( (*(_WORD *)(v33 + 42) & 0x1000) != 0 || **(_WORD **)(v32[17] + 8LL) != *(_WORD *)(gpsi + 898LL) )
          v34 = 0LL;
        else
          v34 = *(_DWORD *)(v33 + 248) ? (ULONG64 *)v32[35] : *(ULONG64 **)(v33 + 296);
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
        if ( !v34 )
          goto LABEL_72;
        v35 = *v34;
        if ( v35 >= MmUserProbeAddress )
          v35 = MmUserProbeAddress;
        v53 = *(_QWORD *)(v35 + 16);
        v36 = 0LL;
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v53 < *(_QWORD *)(gpsi + 8LL) )
        {
          v37 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v53;
          v41 = (__int64 **)HMPkheFromPhe(v37);
          v42 = WORD1(v53) & 0x7FFF;
          if ( ((WORD1(v53) & 0x7FFF) == *(_WORD *)(v37 + 26)
             || v42 == 0x7FFF
             || !v42 && PsGetCurrentProcessWow64Process(v39, v38, v40))
            && (*(_BYTE *)(v37 + 25) & 1) == 0 )
          {
            v18 = *(_BYTE *)(v37 + 24) == 1;
            v30 = gptiCurrent;
            if ( v18 )
              v36 = *v41;
          }
          else
          {
            v30 = gptiCurrent;
          }
          v5 = v59;
        }
        if ( v36 )
        {
          *(_QWORD *)&v55 = *(_QWORD *)(v30 + 416);
          *(_QWORD *)(v30 + 416) = &v55;
          *((_QWORD *)&v55 + 1) = v32;
          HMLockObject(v32);
          ThreadLockAlways(v36, &v57);
          do
          {
            if ( v36 == v5 )
              break;
            v44 = *v36;
            v46 = *((_QWORD *)a1 + 5);
            v47 = *((_DWORD *)a1 + 7) - 1;
            if ( v47 >= 0 )
            {
              while ( v44 != *(_QWORD *)v46 )
              {
                v46 += 168LL;
                if ( --v47 < 0 )
                  goto LABEL_65;
              }
              v44 = (unsigned int)~*(_DWORD *)(v46 + 32);
              if ( (~*(_BYTE *)(v46 + 32) & 3) != 0 )
                xxxSendMessage(v32, 647LL, 6LL, 0LL);
            }
LABEL_65:
            if ( v47 >= 0 )
              break;
            v36 = (__int64 *)v36[13];
            v48 = *((_QWORD *)&v57 + 1);
            *((_QWORD *)&v57 + 1) = v36;
            if ( v36 )
              HMLockObject(v36);
            if ( v48 )
              HMUnlockObject(v48);
          }
          while ( v36 );
          ThreadUnlock1(v44, v43, v45);
          ThreadUnlock1(v50, v49, v51);
          v29 = v52 + 1;
        }
        else
        {
LABEL_72:
          v29 = v52 + 1;
        }
      }
      FreeHwndList(v54);
    }
    else
    {
      Win32FreePool(v15);
    }
  }
}
