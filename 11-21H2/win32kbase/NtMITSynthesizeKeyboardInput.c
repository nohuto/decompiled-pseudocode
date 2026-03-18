/*
 * XREFs of NtMITSynthesizeKeyboardInput @ 0x1C0005F10
 * Callers:
 *     <none>
 * Callees:
 *     ProcessKeyboardInjectedInput @ 0x1C00053AC (ProcessKeyboardInjectedInput.c)
 *     IsKeyboardIVEnabled @ 0x1C0006EF4 (IsKeyboardIVEnabled.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     IsKeyStateCached @ 0x1C002CFA0 (IsKeyStateCached.c)
 *     HMValidateHandle @ 0x1C0030A98 (HMValidateHandle.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003DC00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     VKFromVSC @ 0x1C00CD590 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01F41DC (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01F4640 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSynthesizeKeyboardInput(__int64 a1, struct _UNICODE_STRING *a2, volatile void *a3)
{
  int v5; // r14d
  int v6; // ebx
  unsigned int v7; // edi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  struct tagKERNELHANDLETABLEENTRY *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  const struct _KEYBOARD_INPUT_DATA *Buffer; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  void *v28; // r9
  char v29; // di
  unsigned __int8 MaximumLength; // si
  char v31; // cl
  int v32; // r9d
  ULONG v33; // r8d
  int v34; // r8d
  int i; // r10d
  char v36; // si
  unsigned __int64 v37; // rbx
  unsigned __int8 v38; // r11
  _QWORD *v39; // rax
  _DWORD v40[8]; // [rsp+60h] [rbp-F8h] BYREF
  struct _UNICODE_STRING v41; // [rsp+80h] [rbp-D8h] BYREF
  struct _UNICODE_STRING v42; // [rsp+90h] [rbp-C8h]
  struct _UNICODE_STRING v43; // [rsp+A0h] [rbp-B8h]
  struct _UNICODE_STRING v44; // [rsp+B0h] [rbp-A8h]
  struct _UNICODE_STRING v45[4]; // [rsp+E0h] [rbp-78h] BYREF

  v5 = a1;
  v6 = 0;
  v7 = 0;
  v40[4] = 0;
  LOBYTE(a1) = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v9, v11, v12);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v17 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v17 = 0;
        }
        if ( v17 )
        {
          while ( 1 )
          {
            v18 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v18 + 2) = 0LL;
            v23 = *(_QWORD *)v18;
            if ( !*(_DWORD *)(*(_QWORD *)v18 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v14, v15);
              v23 = *(_QWORD *)v18;
            }
            HMUnlockObject(v23, v14, v15, v16);
          }
        }
      }
    }
  }
  memset(v45, 0, sizeof(v45));
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
  {
    v24 = 5LL;
    goto LABEL_25;
  }
  if ( &a2[4] < a2 || (unsigned __int64)&a2[4] > MmUserProbeAddress )
    a2 = (struct _UNICODE_STRING *)MmUserProbeAddress;
  v41 = *a2;
  v42 = a2[1];
  v43 = a2[2];
  v44 = a2[3];
  v45[0] = v41;
  v45[1] = v42;
  v45[2] = v43;
  v45[3] = v44;
  if ( (v5 & 3) != 0 )
  {
    v40[0] = 0;
    if ( *(_DWORD *)(&v42.MaximumLength + 1) == 2 )
    {
      if ( gpfnIVResolveContainerId )
        gpfnIVResolveContainerId((const struct _GUID *)&v45[1].Buffer, (struct CONTAINER_ID *)v40);
    }
    else
    {
      v40[0] = v42.Buffer;
    }
    Buffer = (const struct _KEYBOARD_INPUT_DATA *)v45[2].Buffer;
    if ( (unsigned __int8)IsKeyboardIVEnabled()
      && (unsigned __int8)isRootPartition()
      && CIVChannel::ContainerConnected(*((_DWORD *)gpKeyboardSensor + 318)) )
    {
      if ( v40[0]
        && (v5 & 2) != 0
        && (unsigned int)IVRootDeliver::Keyboard::Detail::SendKeyboardInput(
                           (IVRootDeliver::Keyboard::Detail *)v40,
                           v45,
                           Buffer,
                           v28) )
      {
        goto LABEL_32;
      }
      if ( (v5 & 1) != 0 )
      {
        v29 = *((_BYTE *)&v45[0].MaximumLength + 2);
        if ( (*(_BYTE *)(&v45[0].MaximumLength + 1) & 0x40) != 0 )
        {
          MaximumLength = v45[0].MaximumLength;
        }
        else
        {
          if ( (*(_BYTE *)(&v45[0].MaximumLength + 1) & 2) != 0 )
          {
            v31 = -32;
          }
          else
          {
            v31 = 0;
            if ( (*(_BYTE *)(&v45[0].MaximumLength + 1) & 4) != 0 )
              v31 = -31;
          }
          v41 = 0LL;
          LOBYTE(v41.Length) = v45[0].MaximumLength & 0x7F;
          *(_QWORD *)&v42.Length = *(_QWORD *)&v45[0].Length;
          v42.Buffer = (PWSTR)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v45[0], 8));
          LOBYTE(v25) = v31;
          MaximumLength = VKFromVSC(&v41, v25, v27);
          v29 = *((_BYTE *)&v45[0].MaximumLength + 2);
        }
        LOBYTE(v26) = MaximumLength;
        if ( (unsigned __int8)IsKeyStateCached(v26) )
        {
          if ( (unsigned int)IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
                               (IVRootDeliver::Keyboard::Detail *)v40,
                               (const struct CONTAINER_ID *)MaximumLength,
                               v29 & 1,
                               v32) )
          {
LABEL_32:
            v7 = 0;
            goto LABEL_18;
          }
        }
      }
    }
    goto LABEL_17;
  }
  if ( v5 != 4 )
  {
    if ( v5 != 8 )
      goto LABEL_18;
    LOBYTE(v19) = 19;
    v39 = (_QWORD *)HMValidateHandle(v43.Buffer, v19);
    if ( !v45[2].Buffer || v39 )
    {
      ProcessKeyboardInjectedInput((__int64)v45, v39, (__int64)&v45[3]);
LABEL_17:
      v7 = 1;
      goto LABEL_18;
    }
    v7 = 0;
    v24 = 6LL;
LABEL_25:
    UserSetLastError(v24, v19, v20);
    goto LABEL_18;
  }
  xxxUpdateGlobalsAndSendKeyEvent(
    LOWORD(v41.Buffer),
    v41.Length,
    HIDWORD(v41.Buffer),
    0,
    (__int64)v43.Buffer,
    0LL,
    v42.Length,
    *(_DWORD *)(&v41.MaximumLength + 1),
    0,
    0LL,
    0LL,
    (__int64)&v45[3]);
  v7 = 1;
  if ( a3 )
  {
    v33 = PsGetCurrentProcessWow64Process() != 0 ? 1 : 4;
    ProbeForWrite(a3, 0x100uLL, v33);
    v34 = 0;
    for ( i = 0; ; i = v34 )
    {
      v40[0] = v6;
      if ( v34 >= 256 )
        break;
      v36 = v6 & 3;
      v37 = (unsigned __int64)(unsigned __int8)v6 >> 2;
      v38 = *((_BYTE *)&gafAsyncKeyState + v37);
      if ( ((unsigned __int8)(1 << (2 * v36)) & v38) != 0 )
      {
        *((_BYTE *)a3 + i) = *((_BYTE *)a3 + v34) | 0x80;
        v38 = *((_BYTE *)&gafAsyncKeyState + v37);
      }
      if ( ((unsigned __int8)(1 << (2 * v36 + 1)) & v38) != 0 )
        *((_BYTE *)a3 + i) = *((_BYTE *)a3 + v34) | 1;
      v6 = ++v34;
    }
  }
LABEL_18:
  UserSessionSwitchLeaveCrit();
  return v7;
}
