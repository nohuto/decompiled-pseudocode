/*
 * XREFs of DxgkOpenAdapterFromDeviceName @ 0x1C01D7F80
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001A56C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkCloseAdapterImpl @ 0x1C016D700 (DxgkCloseAdapterImpl.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0183D20 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiValidateDeviceName @ 0x1C01DB164 (DpiValidateDeviceName.c)
 */

__int64 __fastcall DxgkOpenAdapterFromDeviceName(ULONG64 a1)
{
  ULONG64 v2; // rax
  __int128 v3; // xmm1
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v10; // r14
  int DeviceObjectPointer; // edi
  __int64 v12; // r8
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // rdx
  _QWORD *v17; // rdx
  int v18; // eax
  int v19; // [rsp+50h] [rbp-258h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-250h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-248h] BYREF
  _BYTE v22[24]; // [rsp+68h] [rbp-240h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-228h] BYREF
  WCHAR SourceString[256]; // [rsp+90h] [rbp-218h] BYREF

  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_OWORD *)v2;
  *(_OWORD *)v22 = v3;
  *(_QWORD *)&v22[16] = *(_QWORD *)(v2 + 16);
  if ( (__int64)v3 + 512 > MmUserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( RtlStringCbCopyW(SourceString, 0x200uLL, (size_t *)v3) < 0 )
    return -1073741811LL;
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v10 = Current;
  if ( Current )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( DestinationString.Length > 1u && SourceString[1] == 92 )
      SourceString[1] = 63;
    if ( (int)DpiValidateDeviceName(&DestinationString) < 0 )
    {
      DeviceObjectPointer = -1073741811;
      WdLogSingleEntry1(3LL, -1073741811LL);
    }
    else
    {
      FileObject = 0LL;
      DeviceObject = 0LL;
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      memset(v22, 0, sizeof(v22));
      v13 = 0;
      v19 = 0;
      if ( DeviceObjectPointer < 0 )
        goto LABEL_28;
      *(_QWORD *)v22 = DeviceObject;
      ObfReferenceObject(DeviceObject);
      ObfDereferenceObject(FileObject);
      FileObject = 0LL;
      DeviceObjectPointer = DxgkOpenAdapter((struct _D3DKMT_OPENADAPTER *)v22, v14, v15);
      ObfDereferenceObject(DeviceObject);
      DeviceObject = 0LL;
      if ( DeviceObjectPointer < 0 )
        goto LABEL_28;
      v13 = *(_DWORD *)&v22[8];
      v19 = *(_DWORD *)&v22[8];
      if ( DXGPROCESS::IsRemoteConnection(v10) )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v10 + 11) + 448LL))(*(_QWORD *)&v22[12]);
        DeviceObjectPointer = v18;
        if ( v18 < 0 )
          WdLogSingleEntry1(3LL, v18);
      }
      if ( DeviceObjectPointer < 0 )
      {
LABEL_28:
        *(_QWORD *)&v22[8] = 0LL;
        *(_DWORD *)&v22[16] = 0;
      }
      v16 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = *(_DWORD *)&v22[8];
      v17 = (_QWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = *(_QWORD *)&v22[12];
      if ( DeviceObjectPointer < 0 )
      {
        if ( v13 )
        {
          v19 = v13;
          DxgkCloseAdapterImpl((__int64)&v19, 0, v12);
        }
      }
    }
  }
  else
  {
    DeviceObjectPointer = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)DeviceObjectPointer;
}
