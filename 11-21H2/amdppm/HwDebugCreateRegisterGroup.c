/*
 * XREFs of HwDebugCreateRegisterGroup @ 0x1C0037568
 * Callers:
 *     HwDebugInitializeProcessorSupport @ 0x1C0037968 (HwDebugInitializeProcessorSupport.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1C0003ED8 (ProcLibTraceRegisterGroupEvents.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     HwDebugUpdateRegister @ 0x1C000A308 (HwDebugUpdateRegister.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000BE00 (memset.c)
 *     GetPackageAffinity @ 0x1C002FF70 (GetPackageAffinity.c)
 *     HwDebugInitializeRegister @ 0x1C0037AC4 (HwDebugInitializeRegister.c)
 */

__int64 __fastcall HwDebugCreateRegisterGroup(__int64 a1, int a2, __int64 a3, unsigned __int8 *a4, _QWORD *a5, int a6)
{
  int v9; // edi
  unsigned __int8 *v10; // r8
  __int64 v11; // r14
  __int64 v12; // r10
  __int64 v13; // r9
  _DWORD *v14; // rdx
  bool v15; // zf
  int v16; // ecx
  int PackageAffinity; // ebx
  _QWORD **v18; // rsi
  _QWORD *i; // rbx
  __int64 Pool2; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rsi
  __int64 j; // rbx
  __int64 v24; // r12
  __int64 *v25; // rcx
  _QWORD **v26; // rsi
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h]
  _QWORD **v32; // [rsp+40h] [rbp-C0h]
  _QWORD *v33; // [rsp+48h] [rbp-B8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-B0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v36[272]; // [rsp+70h] [rbp-90h] BYREF

  v33 = a5;
  memset(v36, 0, 0x108uLL);
  v30 = 0LL;
  *a5 = 0LL;
  v9 = 0;
  v10 = a4;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v11 = 2LL;
  v12 = 2LL;
  do
  {
    if ( *v10 )
    {
      v13 = *v10;
      v14 = (_DWORD *)(*((_QWORD *)v10 + 1) + 12LL);
      do
      {
        v15 = *v14 == a2;
        v16 = v9 + 1;
        v14 += 10;
        if ( !v15 )
          v16 = v9;
        v9 = v16;
        --v13;
      }
      while ( v13 );
    }
    v10 += 16;
    --v12;
  }
  while ( v12 );
  if ( !v9 )
    return 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (unsigned int)-1073741823;
    KeInitializeAffinityEx2(v36, 32LL);
    KeAddProcessorAffinityEx(v36, *(unsigned int *)(a1 + 56));
    goto LABEL_13;
  }
  KeInitializeAffinityEx2(v36, 32LL);
  PackageAffinity = GetPackageAffinity(a1, (__int64)v36);
  if ( PackageAffinity >= 0 )
  {
LABEL_13:
    v18 = (_QWORD **)((char *)&unk_1C0011478 + 16 * a6);
    v32 = v18;
    for ( i = *v18; i != v18; i = (_QWORD *)*i )
    {
      if ( (unsigned int)KeIsEqualAffinityEx(v36, i + 2) )
      {
        *a5 = i;
        return 0;
      }
    }
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(24 * (v9 + 13)), 1919119952LL);
    v21 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0x23u,
          (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids);
      return (unsigned int)-1073741670;
    }
    *(_DWORD *)(Pool2 + 304) = a2;
    KeInitializeAffinityEx2(Pool2 + 16, 32LL);
    KeCopyAffinityEx2(v21 + 2, v36);
    PackageAffinity = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *))(WdfFunctions_01015 + 2520))(
                        WdfDriverGlobals,
                        0LL,
                        v21 + 35);
    if ( PackageAffinity < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0x24u,
          (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
          PackageAffinity,
          v30);
      ExFreePoolWithTag(v21, (ULONG)1919119952);
      return (unsigned int)PackageAffinity;
    }
    v31 = KeQueryInterruptTimePrecise(&v30);
    KeFirstGroupAffinityEx(&Affinity, v36);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v22 = v31;
    do
    {
      for ( j = 0LL; (unsigned int)j < *a4; j = (unsigned int)(j + 1) )
      {
        v24 = *((_QWORD *)a4 + 1) + 40 * j;
        if ( *(_DWORD *)(v24 + 12) == a2
          && (int)HwDebugInitializeRegister(v24, &v21[3 * *((unsigned __int8 *)v21 + 308) + 39]) >= 0 )
        {
          v25 = &v21[3 * *((unsigned __int8 *)v21 + 308) + 39];
          *v25 = v24;
          HwDebugUpdateRegister(v25, v22);
          ++*((_BYTE *)v21 + 308);
        }
      }
      a4 += 16;
      --v11;
    }
    while ( v11 );
    v26 = v32;
    v27 = v32[1];
    if ( (_QWORD **)*v27 != v32 )
      __fastfail(3u);
    v21[1] = v27;
    *v21 = v26;
    *v27 = v21;
    v28 = v33;
    v26[1] = v21;
    *v28 = v21;
    ProcLibTraceRegisterGroupEvents((__int64)v21, 0);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x22u,
      (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
      PackageAffinity,
      v30);
  return (unsigned int)PackageAffinity;
}
