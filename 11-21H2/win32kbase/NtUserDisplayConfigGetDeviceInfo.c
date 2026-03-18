/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C0157A60
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002A270 (EnterSharedCrit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C005FB30 (Win32AllocPoolWithQuotaZInit.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C00705AC (_DeviceInfoTranslateStatusDefault.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C00707F0 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0070B6C (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0070BC4 (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     SetLastNtError @ 0x1C009A910 (SetLastNtError.c)
 *     DrvSampleDisplayState @ 0x1C00BE3F0 (DrvSampleDisplayState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  int *v2; // rsi
  void *v3; // r13
  signed int DeviceInfoInternal; // ebx
  unsigned int *v5; // rdx
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  int v12; // r15d
  unsigned int v13; // eax
  char v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int IsWddmConnectedSession; // eax
  int GetterTypeSize; // eax
  __int64 v21; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // r12d
  __int64 v26; // r14
  __int64 v27; // r15
  _DWORD *v28; // r14
  int v30; // [rsp+28h] [rbp-C0h]
  int v31; // [rsp+40h] [rbp-A8h]
  int v32; // [rsp+44h] [rbp-A4h]
  __int64 v33; // [rsp+48h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v35; // [rsp+78h] [rbp-70h]
  volatile void *Address; // [rsp+108h] [rbp+20h]

  v2 = 0LL;
  v3 = 0LL;
  Address = 0LL;
  v32 = 0;
  v33 = 0LL;
  v31 = 0;
  DeviceInfoInternal = 0;
  if ( !gbVideoInitialized )
  {
    DeviceInfoInternal = -1073741823;
    goto LABEL_68;
  }
  v5 = (unsigned int *)(a1 + 4);
  if ( (unsigned __int64)(a1 + 4) >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  if ( (unsigned int)v6 < 0x14 )
    ExRaiseStatus(-1073741811);
  v2 = (int *)Win32AllocPoolWithQuotaZInit(v6, 1665430357);
  if ( !v2 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    if ( *v10 == -21 && (_DWORD)v6 == 2056 )
    {
      if ( a1 + 2020 < a1 + 2016 || (unsigned __int64)(a1 + 2020) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 504) = 0;
      if ( a1 + 2024 < a1 + 2020 || (unsigned __int64)(a1 + 2024) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 505) = 0;
      v11 = a1 + 2024;
      if ( v11 + 1 < v11 || (unsigned __int64)(v11 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v11 = 1144084230;
    }
    WdLogSingleEntry2(2LL, v6, 1144084230LL);
    ExRaiseStatus(-1073741801);
  }
  if ( ((PsGetCurrentProcessWow64Process(v8, v7, v9) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&a1[v6] > MmUserProbeAddress || &a1[v6] < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, a1, v6);
  v2[1] = v6;
  v12 = *v2;
  if ( *v2 == -21 )
  {
    if ( (_DWORD)v6 != 2056 )
      goto LABEL_31;
    HIDWORD(v33) = v2[504];
    LODWORD(v33) = v2[505];
    *((_QWORD *)v2 + 252) = 0LL;
    v31 = 1;
  }
  else if ( v12 == -15 )
  {
    if ( (_DWORD)v6 != 32 )
    {
LABEL_31:
      DeviceInfoInternal = -1073741811;
      goto LABEL_68;
    }
    v13 = v2[5];
    if ( v13 )
    {
      v3 = (void *)Win32AllocPoolWithQuotaZInit(v13, 1665430357);
      if ( !v3 )
      {
        DeviceInfoInternal = -1073741801;
LABEL_68:
        if ( v31 )
        {
          v34 = 0LL;
          v35 = 0;
          DrvSampleDisplayState(&v34);
          v24 = (unsigned int)v34;
          if ( v33 == __PAIR64__(v34, v35) )
          {
            v25 = 1;
            v26 = v32;
            v27 = DeviceInfoInternal;
          }
          else
          {
            v25 = 0;
            v28 = a1 + 2024;
            if ( v28 + 1 < v28 || (unsigned __int64)(v28 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            *v28 = 0;
            v26 = v32;
            WdLogSingleEntry5(2LL, HIDWORD(v33), (unsigned int)v33, v24, v35, v32);
            v27 = DeviceInfoInternal;
            WdLogSingleEntry2(2LL, DeviceInfoInternal, v32);
          }
          if ( dword_1C0296638 || !v25 )
          {
            WdLogSingleEntry2(2LL, v27, v26);
          }
          else
          {
            dword_1C0296638 = 1;
            LOBYTE(v30) = 0;
            ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, int))qword_1C0296930)(
              403LL,
              2061LL,
              v27,
              v26,
              0LL,
              v30);
          }
        }
        goto LABEL_79;
      }
      Address = (volatile void *)*((_QWORD *)v2 + 3);
      *((_QWORD *)v2 + 3) = v3;
      v12 = *v2;
    }
  }
  v14 = DispConfigTypes::RequiresUserCritShared(v12);
  if ( v14 )
  {
    EnterSharedCrit();
    v12 = *v2;
  }
  if ( !DispConfigTypes::AllowInAnySession(v12) )
  {
    if ( gfSwitchInProgress )
    {
      DeviceInfoInternal = -1073741823;
      goto LABEL_51;
    }
    IsWddmConnectedSession = UserIsWddmConnectedSession();
    v16 = 3221225506LL;
    if ( !IsWddmConnectedSession )
      DeviceInfoInternal = -1073741790;
  }
  if ( DeviceInfoInternal >= 0 )
  {
    GetterTypeSize = DispConfigTypes::GetGetterTypeSize(v12);
    if ( !GetterTypeSize || v2[1] != GetterTypeSize )
      DeviceInfoInternal = -1073741811;
    if ( DeviceInfoInternal >= 0 )
      DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v2, 1);
  }
LABEL_51:
  if ( v14 )
    UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  if ( DeviceInfoInternal < 0 && v31 )
    v32 = v2[506];
  if ( DeviceInfoInternal == -2147483643 )
  {
    DeviceInfoInternal = -1073741789;
  }
  else if ( DeviceInfoInternal != -1073741789 )
  {
    DeviceInfoInternal = DeviceInfoTranslateStatusDefault(*v2, DeviceInfoInternal);
  }
  v21 = (unsigned int)*v2;
  if ( *v2 == -15 )
  {
    *((_QWORD *)v2 + 3) = Address;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( v2[5] )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v21, v15, v17);
        ProbeForWrite(Address, (unsigned int)v2[5], CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)Address, v3, (unsigned int)v2[5]);
        v21 = (unsigned int)*v2;
      }
    }
  }
  if ( (_DWORD)v21 == 3 && DeviceInfoInternal >= 0 )
    v2[7] = 0;
  v23 = PsGetCurrentProcessWow64Process(v21, v15, v17);
  ProbeForWrite(a1, (unsigned int)v2[1], v23 != 0 ? 1 : 4);
  memmove(a1, v2, (unsigned int)v2[1]);
  if ( DeviceInfoInternal < 0 )
    goto LABEL_68;
LABEL_79:
  if ( v3 )
    Win32FreePool((char *)v3);
  if ( v2 )
    Win32FreePool((char *)v2);
  return (unsigned int)DeviceInfoInternal;
}
