/*
 * XREFs of SfnINSTRINGNULL @ 0x1C0023340
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C02239BC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0024328 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C013CD84 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C02050E4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 */

__int64 __fastcall SfnINSTRINGNULL(__int64 *a1, int a2, ULONG_PTR a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  int v9; // r13d
  int *v10; // rdi
  PERESOURCE *v11; // rax
  __int64 v12; // r14
  __int64 *ThreadWin32Thread; // rax
  unsigned int v14; // r12d
  unsigned __int64 v15; // rdx
  __int64 v16; // r14
  ULONG_PTR v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // r13
  PERESOURCE *v21; // rax
  __int64 v22; // r13
  void **v23; // r9
  unsigned int v24; // r8d
  CHAR *v25; // rdx
  char v26; // r12
  unsigned int v27; // r8d
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  PERESOURCE *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rsi
  int v46; // [rsp+34h] [rbp-364h] BYREF
  int *v47; // [rsp+38h] [rbp-360h]
  int v48; // [rsp+40h] [rbp-358h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-340h] BYREF
  ULONG_PTR v50; // [rsp+60h] [rbp-338h] BYREF
  __int64 v51; // [rsp+68h] [rbp-330h]
  unsigned __int64 v52; // [rsp+70h] [rbp-328h] BYREF
  __int128 v53; // [rsp+78h] [rbp-320h]
  __int128 v54; // [rsp+90h] [rbp-308h]
  __int64 v55; // [rsp+A0h] [rbp-2F8h]
  __int128 v56; // [rsp+A8h] [rbp-2F0h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-2E0h]
  __int64 v58; // [rsp+C0h] [rbp-2D8h]
  __int128 v59; // [rsp+E0h] [rbp-2B8h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-2A8h]
  int v61; // [rsp+100h] [rbp-298h] BYREF
  char v62[92]; // [rsp+104h] [rbp-294h] BYREF
  _BYTE v63[512]; // [rsp+160h] [rbp-238h] BYREF
  int v64; // [rsp+3D0h] [rbp+38h]

  v50 = a3;
  v48 = a2;
  v9 = a7 & 1;
  v64 = v9;
  memset_0(&v61, 0, 0x58uLL);
  v10 = &v61;
  v52 = 0LL;
  v46 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v11 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
  if ( !ExIsResourceAcquiredSharedLite(*v11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v12 = 0LL;
  *(_QWORD *)&v53 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v12 = *ThreadWin32Thread;
    *(_QWORD *)&v53 = *ThreadWin32Thread;
  }
  if ( a1 )
    v51 = a1[5] - *(_QWORD *)(v12 + 472);
  else
    v51 = 0LL;
  v14 = 0;
  LODWORD(v15) = 0;
  if ( a4 && (*((_QWORD *)a4 + 1) >= (unsigned __int64)MmSystemRangeStart || (unsigned int)a4[1] >> 31 != v9) )
  {
    v14 = 1;
    v15 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v15 < *a4 )
      goto LABEL_67;
    if ( a4[1] < 0 && !v9 )
    {
      v15 *= 2LL;
      if ( v15 > 0xFFFFFFFF )
        goto LABEL_67;
    }
  }
  if ( v14 )
  {
    v16 = 8 * v14 + 88;
    v17 = ((unsigned int)v15 + 7LL * v14) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v17;
    if ( v17 <= 0x800 )
    {
      if ( v17 + v16 <= 0x200 )
      {
        v10 = (int *)v63;
        memset_0(v63, 0, sizeof(v63));
      }
      else
      {
        v10 = (int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v17 + v16), 1667461973LL);
        if ( !v10 )
          return 0LL;
      }
      *((_QWORD *)v10 + 2) = (char *)v10 + v16;
      *((_QWORD *)v10 + 4) = 0LL;
      *v10 = v16 + RegionSize;
    }
    else
    {
      v18 = Win32AllocPoolWithQuotaZInit(8 * v14 + 88, 1667461973LL);
      v10 = (int *)v18;
      if ( !v18 )
        return 0LL;
      v19 = (_QWORD *)(v18 + 32);
      *(_QWORD *)(v18 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v18 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        Win32FreePool(v10);
        return 0LL;
      }
      *((_QWORD *)v10 + 2) = *v19;
      *v10 = v16;
    }
    v10[1] = RegionSize;
    v10[2] = 0;
    v10[6] = 88;
    v47 = v10;
  }
  else
  {
    v10 = &v61;
    v47 = &v61;
    memset_0(v62, 0, 0x54uLL);
    v61 = 88;
  }
  v21 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
  if ( !ExIsResourceAcquiredSharedLite(*v21) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v56 = 0LL;
  v57 = 0LL;
  if ( v10 != &v61 && v10 != (int *)v63 )
    PushW32ThreadLock(v10, &v56, Win32FreePool);
  v22 = v51;
  *((_QWORD *)v10 + 5) = v51;
  v10[12] = v48;
  *((_QWORD *)v10 + 7) = v50;
  if ( v14 )
  {
    v23 = (void **)(v10 + 20);
    v24 = *a4;
    v25 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( !v64 )
      {
        v28 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v25, 2 * v24 + 2, v23);
LABEL_40:
        if ( v28 < 0 )
          goto LABEL_67;
        goto LABEL_49;
      }
      v27 = v24 + 1;
    }
    else
    {
      if ( v64 )
      {
        v26 = 1;
        if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v25, (v24 >> 1) + 1, v23, 0) < 0 )
          goto LABEL_67;
        goto LABEL_50;
      }
      v27 = v24 + 2;
    }
    v28 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v25, v27, v23);
    goto LABEL_40;
  }
  if ( a4 )
    v29 = *((_QWORD *)a4 + 1);
  else
    v29 = 0LL;
  *((_QWORD *)v10 + 10) = v29;
LABEL_49:
  v26 = 1;
LABEL_50:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  ThreadLock(a1, &v59);
  v30 = v53;
  v31 = *(_QWORD *)(v53 + 480);
  v53 = *(_OWORD *)(v31 + 64);
  v54 = v53;
  v55 = *(_QWORD *)(v31 + 80);
  *(_QWORD *)(v31 + 72) = v22;
  v32 = 0LL;
  if ( a1 )
    v32 = *a1;
  *(_QWORD *)(*(_QWORD *)(v30 + 480) + 64LL) = v32;
  if ( a1 )
    v33 = *(_QWORD *)(a1[5] + 224);
  else
    v33 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v30 + 480) + 80LL) = v33;
  v34 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
  if ( ExIsResourceAcquiredExclusiveLite(*v34) == 1 || !IS_USERCRIT_OWNED_AT_ALL() )
    v26 = 0;
  UserSessionSwitchLeaveCrit(v36, v35, v37, v38);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v39 = KeUserModeCallback(27LL, v10, (unsigned int)*v10, &v52, &v46);
  EtwTraceEndCallback(27LL);
  if ( v26 )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v41, v40, v42);
  v43 = *(_QWORD *)(v30 + 480);
  *(_OWORD *)(v43 + 64) = v53;
  *(_QWORD *)(v43 + 80) = v55;
  if ( v39 >= 0 && v46 == 24 )
  {
    v44 = (__int64 *)v52;
    if ( v52 + 8 < v52 || v52 + 8 > MmUserProbeAddress )
      v44 = (__int64 *)MmUserProbeAddress;
    v45 = *v44;
    v58 = *v44;
    goto LABEL_68;
  }
LABEL_67:
  v45 = 0LL;
LABEL_68:
  if ( v10 != &v61 && v10 != (int *)v63 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      v50 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &v50, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v56);
  }
  return v45;
}
