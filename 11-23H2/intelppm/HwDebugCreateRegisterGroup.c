/*
 * XREFs of HwDebugCreateRegisterGroup @ 0x1C002BCA8
 * Callers:
 *     HwDebugInitializeProcessorSupport @ 0x1C002BBA4 (HwDebugInitializeProcessorSupport.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     HwDebugUpdateRegister @ 0x1C0003490 (HwDebugUpdateRegister.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1C00034F8 (ProcLibTraceRegisterGroupEvents.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     HwDebugInitializeRegister @ 0x1C002BFE8 (HwDebugInitializeRegister.c)
 *     GetPackageAffinity @ 0x1C002C058 (GetPackageAffinity.c)
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
  _QWORD **v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 *v29; // rcx
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
  }
  else
  {
    KeInitializeAffinityEx2(v36, 32LL);
    PackageAffinity = GetPackageAffinity(a1, v36);
    if ( PackageAffinity < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x22u,
          (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
          PackageAffinity,
          v30);
      return (unsigned int)PackageAffinity;
    }
  }
  v18 = (_QWORD **)((char *)&unk_1C001F038 + 16 * a6);
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
  if ( Pool2 )
  {
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
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0x24u,
          (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
          PackageAffinity,
          v30);
      ExFreePoolWithTag(v21, (ULONG)1919119952);
    }
    else
    {
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
            v29 = &v21[3 * *((unsigned __int8 *)v21 + 308) + 39];
            *v29 = v24;
            HwDebugUpdateRegister(v29, v22);
            ++*((_BYTE *)v21 + 308);
          }
        }
        a4 += 16;
        --v11;
      }
      while ( v11 );
      v25 = v32;
      v26 = v32[1];
      if ( (_QWORD **)*v26 != v32 )
        __fastfail(3u);
      v21[1] = v26;
      *v21 = v25;
      *v26 = v21;
      v27 = v33;
      v25[1] = v21;
      *v27 = v21;
      ProcLibTraceRegisterGroupEvents((__int64)v21, 0);
      PackageAffinity = 0;
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x23u,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
    return (unsigned int)-1073741670;
  }
  return (unsigned int)PackageAffinity;
}
