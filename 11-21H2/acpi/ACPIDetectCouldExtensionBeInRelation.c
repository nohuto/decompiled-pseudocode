/*
 * XREFs of ACPIDetectCouldExtensionBeInRelation @ 0x1C00932F8
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C004E440 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoMatch @ 0x1C0093204 (ACPIDetectPdoMatch.c)
 *     ACPIDetectFilterMatch @ 0x1C0093268 (ACPIDetectFilterMatch.c)
 * Callees:
 *     WPP_RECORDER_SF_IqL @ 0x1C0007298 (WPP_RECORDER_SF_IqL.c)
 *     WPP_RECORDER_SF_IqLL @ 0x1C0007418 (WPP_RECORDER_SF_IqLL.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C00217F4 (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002C054 (ACPIInternalQueryExtendedAddress.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ACPIMatchHardwareId @ 0x1C00930D8 (ACPIMatchHardwareId.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C0093610 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIDetectCouldExtensionBeInRelation(__int64 a1, _DWORD *a2, char a3, char a4, _QWORD *a5)
{
  char v6; // dl
  char v8; // r13
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // esi
  char v12; // al
  __int64 v13; // r14
  struct _DEVICE_OBJECT *v14; // r12
  bool v15; // bl
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-E0h]
  char v21; // [rsp+50h] [rbp-B0h]
  _BYTE v22[7]; // [rsp+51h] [rbp-AFh] BYREF
  int v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v27; // [rsp+80h] [rbp-80h]
  _QWORD v28[9]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v29[16]; // [rsp+D0h] [rbp-30h] BYREF

  v27 = a5;
  v25 = 0LL;
  v6 = 0;
  v21 = 0;
  *a5 = 0LL;
  v8 = 0;
  String2 = 0LL;
  if ( a3 && !_bittest64((const signed __int64 *)(a1 + 8), 0x2Cu)
    || a4 && !_bittest64((const signed __int64 *)(a1 + 8), 0x2Du) )
  {
    return 3221225524LL;
  }
  if ( !a2 || !*a2 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 8);
  if ( (v10 & 0x2000100000000000LL) != 0 )
  {
    v8 = 1;
    ACPIGet(a1, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v25, 0LL);
    v10 = *(_QWORD *)(a1 + 8);
    v6 = 0;
  }
  if ( (v10 & 0xA00000000000LL) == 0 || ACPIDeviceHasFirmwareDependencies(a1) )
    goto LABEL_14;
  result = ACPIGet(v19, 1145653343, 268960278, 0LL, 0, 0LL, 0LL, (__int64)&String2.Buffer, (__int64)&String2);
  if ( (int)result >= 0 )
  {
    v6 = 1;
    String2.MaximumLength = String2.Length;
    v21 = 1;
LABEL_14:
    v11 = 0;
    if ( !*a2 )
      return 0LL;
    while ( 1 )
    {
      v12 = 0;
      v22[0] = 0;
      if ( v6 )
      {
        if ( (int)ACPIMatchHardwareId(*(PDEVICE_OBJECT *)&a2[2 * v11 + 2], &String2, v22) < 0 )
          goto LABEL_27;
        v12 = v22[0];
      }
      if ( v12 || v8 )
      {
        if ( !v8 )
          goto LABEL_33;
        v13 = v25;
        v14 = *(struct _DEVICE_OBJECT **)&a2[2 * v11 + 2];
        v24 = 0LL;
        memset(v28, 0, sizeof(v28));
        LOWORD(v28[0]) = 2331;
        v28[1] = v29;
        memset(v29, 0, sizeof(v29));
        v29[0] = 65600;
        v29[2] = -1;
        v29[3] = -1;
        v15 = 0;
        v23 = ACPIInternalSendSynchronousIrp(v14);
        if ( v23 >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_IqL((__int64)WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18, v20);
          v24 = v29[2];
          if ( (_DWORD)v13 == v29[2] )
          {
            v15 = 1;
            if ( (int)ACPIInternalQueryExtendedAddress(v14, (__int64)&v24) >= 0 )
              v15 = v13 == v24;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_IqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18, v20);
        if ( v23 >= 0 && v15 )
        {
LABEL_33:
          *v27 = *(_QWORD *)&a2[2 * v11 + 2];
          return 0LL;
        }
      }
LABEL_27:
      v6 = v21;
      if ( (unsigned int)++v11 >= *a2 )
        return 0LL;
    }
  }
  return result;
}
