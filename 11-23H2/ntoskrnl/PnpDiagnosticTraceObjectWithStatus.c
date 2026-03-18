/*
 * XREFs of PnpDiagnosticTraceObjectWithStatus @ 0x140365C48
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140365BA0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140866F80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbLoadNode @ 0x14086BB24 (PiDrvDbLoadNode.c)
 *     PiDevCfgProcessDevice @ 0x14087A1F0 (PiDevCfgProcessDevice.c)
 *     PnpRebalance @ 0x14096E8B8 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x140B3DA00 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObjectWithStatus(
        PCEVENT_DESCRIPTOR EventDescriptor,
        unsigned __int16 *a2,
        int a3)
{
  REGHANDLE v3; // rbx
  int v6; // r8d
  __int16 v8; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int *v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+64h] [rbp-Ch]
  int v16; // [rsp+A0h] [rbp+30h] BYREF

  v16 = a3;
  v3 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v6 = *a2;
  UserData.Reserved = 0;
  v12 = 0;
  v15 = 0;
  v8 = (unsigned __int16)v6 >> 1;
  UserData.Ptr = (ULONGLONG)&v8;
  v10 = *((_QWORD *)a2 + 1);
  v13 = &v16;
  v11 = v6;
  UserData.Size = 2;
  v14 = 4;
  return EtwWrite(v3, EventDescriptor, 0LL, 3u, &UserData);
}
