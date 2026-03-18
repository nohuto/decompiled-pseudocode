/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00046D4
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 * Callees:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004880 (RIMAddInjectionDeviceOfType.c)
 *     rimFindReferencedRimObj @ 0x1C0004BD0 (rimFindReferencedRimObj.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C0004D20 (RIMIDECreateDeviceInstancePath.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C004A880 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int ReferencedRimObj; // ebx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v21[18]; // [rsp+60h] [rbp-A0h] BYREF
  char v22; // [rsp+F0h] [rbp-10h] BYREF

  v4 = a1;
  if ( (unsigned int)a1 >= 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v20[0] = 0x1000000LL;
  v20[1] = &v22;
  v19 = -1LL;
  memset(v21, 0, sizeof(v21));
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(v4, 0LL, 0LL, v20);
  if ( ReferencedRimObj >= 0 )
  {
    v9 = 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v9 = 2;
      }
      else
      {
        v9 = 0;
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8);
      }
    }
    ReferencedRimObj = rimFindReferencedRimObj(v9, 0LL, 0LL, &Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3LL, 0LL);
      if ( ReferencedRimObj >= 0 )
      {
        HIDWORD(v21[1]) &= 0xFFFFFFF8;
        v21[10] = 0LL;
        LODWORD(v21[11]) = 0;
        *(_QWORD *)((char *)&v21[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v12, v13) + 880);
        HIDWORD(v21[15]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v21[14] + 4), v14, v15, v16)
                                     + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType(-1, (unsigned int)v20, v4, (unsigned int)v21, 0, (__int64)&v19);
        if ( ReferencedRimObj >= 0 )
          *a2 = v19;
        ZwClose((HANDLE)0xFFFFFFFFFFFFFFFFLL);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
