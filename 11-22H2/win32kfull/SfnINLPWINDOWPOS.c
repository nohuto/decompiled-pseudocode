/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1C00947B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall SfnINLPWINDOWPOS(__int64 *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  PERESOURCE *v10; // rax
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  PERESOURCE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // bl
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  ULONG64 v34; // rcx
  __int64 v36; // [rsp+58h] [rbp-E0h]
  __int128 v37; // [rsp+80h] [rbp-B8h]
  __int128 v38; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-98h]
  __int64 v40; // [rsp+B0h] [rbp-88h] BYREF
  int v41; // [rsp+B8h] [rbp-80h]
  __int64 v42; // [rsp+C0h] [rbp-78h]
  __int128 v43; // [rsp+C8h] [rbp-70h]
  __int128 v44; // [rsp+D8h] [rbp-60h]
  __int64 v45; // [rsp+E8h] [rbp-50h]
  __int64 v46; // [rsp+F0h] [rbp-48h]
  __int64 v47; // [rsp+F8h] [rbp-40h]
  int v48; // [rsp+140h] [rbp+8h] BYREF
  int v49; // [rsp+148h] [rbp+10h]
  unsigned __int64 v50; // [rsp+150h] [rbp+18h] BYREF

  v8 = a2;
  v50 = 0LL;
  v48 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v10 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v10) )
  {
    v49 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v11 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v11 = *ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(v11 + 472);
  else
    v13 = 0LL;
  memset_0(&v40, 0, 0x50uLL);
  v40 = v13;
  v41 = v8;
  v42 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v43 = *a4;
  v44 = a4[1];
  v45 = *((_QWORD *)a4 + 4);
  v46 = a5;
  v47 = a6;
  ThreadLock(a1, &v38);
  v17 = *(_QWORD *)(v11 + 480);
  v37 = *(_OWORD *)(v17 + 64);
  v36 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  v18 = 0LL;
  if ( a1 )
    v18 = *a1;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v19;
  v20 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v19, v14, v15, v16);
  v25 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*v20) == 1 || !IS_USERCRIT_OWNED_AT_ALL() )
    v25 = 0;
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  EtwTraceBeginCallback(17LL);
  v26 = KeUserModeCallback(17LL, &v40, 80LL, &v50, &v48);
  EtwTraceEndCallback(17LL);
  if ( v25 )
    EnterSharedCrit(v28, v27, v29);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v33 + 64) = v37;
  *(_QWORD *)(v33 + 80) = v36;
  if ( v26 < 0 || v48 != 24 )
    return 0LL;
  v34 = v50;
  if ( v50 + 8 < v50 || v50 + 8 > MmUserProbeAddress )
    v34 = MmUserProbeAddress;
  return *(_QWORD *)v34;
}
