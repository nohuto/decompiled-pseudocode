/*
 * XREFs of ACPIIsPowerNodeMissingDependencies @ 0x1C0023550
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0022FAC (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0030C38 (ACPIInternalGetDeviceFromNSOBJ.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004B8F4 (WPP_RECORDER_SF_sL.c)
 */

char __fastcall ACPIIsPowerNodeMissingDependencies(__int64 a1)
{
  char v1; // bl
  __int64 v4; // rbp
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 i; // rdi
  __int64 v8; // r12
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8
  int v12; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v13; // [rsp+78h] [rbp+10h] BYREF

  v1 = 0;
  v13 = 0LL;
  v12 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 0x1000LL) == 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 96);
  if ( !v4 )
    return 0;
  v5 = 0;
  v6 = **(_DWORD **)(v4 + 32);
  if ( v6 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v8 = *(_QWORD *)(v4 + 32);
      v9 = AMLIGetNameSpaceObject(*(_BYTE **)(i + v8 + 40), *(__int64 **)(a1 + 32), &v13, 0);
      if ( v9 < 0 )
        break;
      ACPIInternalGetDeviceFromNSOBJ(v13, 0LL, v11, &v12);
      AMLIDereferenceHandleEx(v13);
      if ( v12 != 3 )
        return 1;
      if ( ++v5 >= v6 )
        return v1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        21,
        43,
        (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
        *(_QWORD *)(i + v8 + 40),
        v9);
  }
  return v1;
}
