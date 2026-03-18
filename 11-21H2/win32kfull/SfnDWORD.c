/*
 * XREFs of SfnDWORD @ 0x1C004DC40
 * Callers:
 *     xxxDispatchMessage @ 0x1C00429F0 (xxxDispatchMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00514D0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1C0053C4C (xxxHkCallHook.c)
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C014FD40 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C023CB6C (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall SfnDWORD(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  bool v19; // si
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 result; // rax
  __int64 v27; // [rsp+58h] [rbp-B0h]
  _QWORD v28[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+80h] [rbp-88h]
  int v31; // [rsp+84h] [rbp-84h]
  __int64 v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  __int64 v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int128 v37; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v38; // [rsp+110h] [rbp+8h] BYREF
  int v39; // [rsp+118h] [rbp+10h] BYREF

  v10 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v28[2] = 0LL;
  v11 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v11 = *ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(v11 + 472);
  else
    v13 = 0LL;
  v31 = 0;
  v29 = v13;
  v30 = a2;
  v32 = a3;
  v33 = a4;
  v34 = a5;
  v35 = a6;
  v14 = 0LL;
  v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v15 )
    v14 = *v15;
  v28[0] = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = v28;
  v28[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v11 + 480);
  v37 = *(_OWORD *)(v16 + 64);
  v27 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v13;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v17;
  if ( a1 )
    v10 = *(_QWORD *)(a1[5] + 224);
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v10;
  v19 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v18);
  EtwTraceBeginCallback(2LL);
  v20 = KeUserModeCallback(2LL, &v29, 48LL, &v38, &v39);
  EtwTraceEndCallback(2LL);
  if ( v19 )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v24 + 64) = v37;
  *(_QWORD *)(v24 + 80) = v27;
  if ( v20 < 0 || v39 != 24 )
    return 0LL;
  v25 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  result = *v25;
  v36 = result;
  return result;
}
