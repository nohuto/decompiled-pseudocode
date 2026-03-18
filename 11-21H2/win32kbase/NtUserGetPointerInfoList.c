/*
 * XREFs of NtUserGetPointerInfoList @ 0x1C0159FF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     GetPointerInfoSize @ 0x1C015363C (GetPointerInfoSize.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01CAC1C (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C01CB54C (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C01CB5F0 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        ULONG64 a6,
        ULONG64 a7,
        volatile void *Address)
{
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int PointerInfoSize; // eax
  struct tagTHREADINFO *v16; // r11
  _DWORD *v17; // r15
  _DWORD *v18; // r12
  _OWORD *v19; // rdi
  int v20; // ebx
  __int64 v21; // rcx
  unsigned int *v22; // rax
  unsigned int *v23; // rax
  CTouchProcessor *v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 CurrentProcessWow64Process; // rax
  _DWORD *v27; // rcx
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int128 v34; // xmm5
  int PointerFrameInfoInternal; // eax
  ULONG64 v36; // rcx
  unsigned int v38[14]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+88h] [rbp-C0h]
  __int128 v40; // [rsp+B0h] [rbp-98h]
  __int128 v41; // [rsp+C0h] [rbp-88h]
  __int128 v42; // [rsp+D0h] [rbp-78h]
  __int128 v43; // [rsp+E0h] [rbp-68h]
  __int128 v44; // [rsp+F0h] [rbp-58h]
  __int128 v45; // [rsp+100h] [rbp-48h]
  unsigned int v46; // [rsp+150h] [rbp+8h] BYREF
  int v47; // [rsp+160h] [rbp+18h]
  int v48; // [rsp+168h] [rbp+20h]

  v48 = a4;
  v47 = a3;
  v46 = 0;
  v38[0] = 0;
  LODWORD(v11) = 0;
  v39 = PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( !a1
    || HIWORD(a1)
    || (v12 = a5) == 0
    || (PointerInfoSize = GetPointerInfoSize(a2), (_DWORD)v12 != PointerInfoSize)
    || (v17 = (_DWORD *)a6) == 0LL
    || (v18 = (_DWORD *)a7) == 0LL )
  {
    v20 = 0;
    goto LABEL_45;
  }
  v14 = (unsigned int)v47;
  if ( v47 || a4 )
  {
    v19 = Address;
  }
  else
  {
    v19 = Address;
    if ( !Address )
    {
LABEL_10:
      v20 = 0;
LABEL_45:
      v21 = 87LL;
      goto LABEL_46;
    }
  }
  if ( a4 && (*((_DWORD *)v16 + 314) & 0x100) != 0 )
  {
    v20 = 0;
    v21 = 5LL;
LABEL_46:
    UserSetLastError(v21, v12, v13, v14);
    goto LABEL_47;
  }
  v22 = (unsigned int *)a6;
  if ( a6 >= MmUserProbeAddress )
    v22 = (unsigned int *)MmUserProbeAddress;
  v13 = *v22;
  v46 = *v22;
  v23 = (unsigned int *)a7;
  if ( a7 >= MmUserProbeAddress )
    v23 = (unsigned int *)MmUserProbeAddress;
  v24 = (CTouchProcessor *)*v23;
  v38[0] = *v23;
  if ( v19 )
  {
    if ( !(_DWORD)v13 )
      goto LABEL_10;
    if ( !(_DWORD)v24 )
      goto LABEL_10;
    v25 = v13 * (_QWORD)v24;
    v13 = 0xFFFFFFFFLL;
    if ( v25 > 0xFFFFFFFF )
      goto LABEL_10;
    v11 = v12 * (unsigned int)v25;
    if ( v11 > 0xFFFFFFFF )
      goto LABEL_10;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25, v12, 0xFFFFFFFFLL);
    ProbeForWrite(v19, (unsigned int)v11, CurrentProcessWow64Process != 0 ? 1 : 4);
    v16 = (struct tagTHREADINFO *)v39;
    LODWORD(v14) = v47;
  }
  v20 = 1;
  if ( a1 == 1 )
  {
    v27 = *(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1312);
    if ( !v27 || (*v27 & 1) == 0 )
      goto LABEL_10;
    v46 = 1;
    v38[0] = 1;
    if ( v19 )
    {
      v28 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1312);
      v29 = *(_OWORD *)(v28 + 24);
      v40 = v29;
      v30 = *(_OWORD *)(v28 + 40);
      v41 = v30;
      v31 = *(_OWORD *)(v28 + 56);
      v42 = v31;
      v32 = *(_OWORD *)(v28 + 72);
      v43 = v32;
      v33 = *(_OWORD *)(v28 + 88);
      v44 = v33;
      v34 = *(_OWORD *)(v28 + 104);
      v45 = v34;
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (_OWORD *)MmUserProbeAddress;
      *v19 = v29;
      v19[1] = v30;
      v19[2] = v31;
      v19[3] = v32;
      v19[4] = v33;
      v19[5] = v34;
    }
  }
  else
  {
    if ( v48 )
    {
      PointerFrameInfoInternal = CTouchProcessor::GetPointerFrameInfoInternal(
                                   v24,
                                   v16,
                                   a1,
                                   a2,
                                   v14,
                                   v11,
                                   &v46,
                                   v38,
                                   (unsigned __int8 *)v19);
    }
    else
    {
      v38[0] = 1;
      if ( (_DWORD)v14 )
      {
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoHistoryInternal(
                                     v24,
                                     v16,
                                     a1,
                                     a2,
                                     v11,
                                     &v46,
                                     (unsigned __int8 *)v19);
      }
      else
      {
        v46 = 1;
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoInternal(
                                     v24,
                                     v16,
                                     a1,
                                     a2,
                                     v11,
                                     (struct tagPOINTER_INFO *)v19);
      }
    }
    v20 = PointerFrameInfoInternal;
    if ( !PointerFrameInfoInternal )
      goto LABEL_47;
  }
  v36 = MmUserProbeAddress;
  if ( (unsigned __int64)v17 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  *v17 = v46;
  if ( (unsigned __int64)v18 >= MmUserProbeAddress )
    v18 = (_DWORD *)MmUserProbeAddress;
  *v18 = v38[0];
LABEL_47:
  UserSessionSwitchLeaveCrit(v36, v12, v13, v14);
  return v20;
}
