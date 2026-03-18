/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C019C4FC
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x1C019FC14 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C019FD60 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C019FE90 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00044F0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0004880 (RIMAddInjectionDeviceOfType.c)
 *     rimFindReferencedRimObj @ 0x1C0004BD0 (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1C0004CF8 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C0004D20 (RIMIDECreateDeviceInstancePath.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C004A880 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        __int16 a1,
        __int16 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int128 *a6,
        char a7,
        char a8,
        unsigned int a9,
        __int64 a10,
        _QWORD *a11)
{
  __int128 v15; // xmm0
  __int64 v16; // rcx
  int ReferencedRimObj; // edi
  unsigned int v18; // eax
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // r8
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // edx
  int v25; // r8d
  PDEVICE_OBJECT v26; // rcx
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int128 v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+88h] [rbp-78h]
  __int128 v34; // [rsp+98h] [rbp-68h]
  __int128 v35; // [rsp+A8h] [rbp-58h]
  _OWORD v36[9]; // [rsp+C0h] [rbp-40h] BYREF
  char v37; // [rsp+150h] [rbp+50h] BYREF

  Handle = 0LL;
  v32 = *a6;
  v33 = a6[1];
  *(_QWORD *)&v30.Length = 0x1000000LL;
  v34 = a6[2];
  v15 = a6[3];
  v31 = a10;
  v30.Buffer = (PWSTR)&v37;
  v35 = v15;
  memset(v36, 0, sizeof(v36));
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    McTemplateK0_EtwWriteTransfer(v16, &PseudoDevCreationStart, &W32kControlGuid);
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(2, a1, a2, &v30);
  if ( ReferencedRimObj >= 0 )
  {
    Object = 0LL;
    v18 = rimInputTypeFromDeviceTypeAndUsages(2, a1, a2);
    ReferencedRimObj = rimFindReferencedRimObj(v18, v19, v20, (struct _LIST_ENTRY **)&Object);
    if ( ReferencedRimObj < 0 )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v21) = 0;
      }
      if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v22,
          (_DWORD)gRimLog,
          2,
          1,
          19,
          (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
      }
    }
    else
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        if ( a5 )
          HIDWORD(v36[0]) |= 1u;
        *(_QWORD *)&v36[5] = a5;
        v36[1] = v32;
        DWORD2(v36[5]) = a3;
        v36[2] = v33;
        v36[3] = v34;
        v36[4] = v35;
        v23 = *((_QWORD *)gptiCurrent + 53);
        *(_QWORD *)((char *)&v36[7] + 4) = *(_QWORD *)(v23 + 880);
        HIDWORD(v36[7]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 12) & 0x80000000;
        *(_QWORD *)&v36[8] = __PAIR64__(a9, a4);
        HIDWORD(v36[0]) = HIDWORD(v36[0]) & 0xFFFFFFF9 | (2 * (a7 & 1 | (2 * (a8 & 1))));
        *((_QWORD *)&v36[8] + 1) = v31;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((__int64)Handle, &v30, 2u, v36, 0, a11);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v24) = 0;
        }
        if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qd(
            WPP_GLOBAL_Control->AttachedDevice,
            v24,
            v25,
            (_DWORD)gRimLog,
            4,
            1,
            18,
            (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
            *a11,
            ReferencedRimObj);
        }
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      McTemplateK0_EtwWriteTransfer((__int64)v26, &PseudoDevCreationStop, &W32kControlGuid);
  }
  return (unsigned int)ReferencedRimObj;
}
