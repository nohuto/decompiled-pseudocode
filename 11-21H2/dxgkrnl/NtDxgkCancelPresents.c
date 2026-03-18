/*
 * XREFs of NtDxgkCancelPresents @ 0x1C03343F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkCancelPresents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rbx
  struct _KTHREAD **Current; // rdi
  __int64 v6; // rdi
  const wchar_t *v7; // r9
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  __int64 v11; // rbx
  __int64 v12; // rbx
  const wchar_t *v13; // r9
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ebx
  struct DXGDEVICE *v17; // [rsp+50h] [rbp-118h] BYREF
  struct DXGDEVICE *v18; // [rsp+58h] [rbp-110h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v20[4]; // [rsp+70h] [rbp-F8h]
  __int128 v21; // [rsp+80h] [rbp-E8h]
  __int64 v22; // [rsp+90h] [rbp-D8h]
  _BYTE v23[8]; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-C8h]
  char v25; // [rsp+A8h] [rbp-C0h]
  _BYTE v26[160]; // [rsp+B0h] [rbp-B8h] BYREF

  v4 = a1;
  v18 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( !Current )
  {
    LODWORD(v6) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v7 = L"Invalid DXGPROCESS. Returning 0x%I64x";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v6;
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_OWORD *)v20 = *(_OWORD *)v4;
    v9 = *(_OWORD *)(v4 + 16);
    v10 = *(_QWORD *)(v4 + 32);
  }
  else
  {
    *(_OWORD *)v20 = *(_OWORD *)v4;
    v9 = *(_OWORD *)(v4 + 16);
    v10 = *(_QWORD *)(v4 + 32);
  }
  v22 = v10;
  v21 = v9;
  if ( v20[0] != 40 )
  {
    LODWORD(v6) = -1073741811;
    WdLogSingleEntry3(2LL, v20[0], 40LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid cbSize:0x%I64x specified. Expected cbsize:0x%I64x. Returning:0x%I64x",
      v20[0],
      40LL,
      -1073741811LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  if ( v20[3] == 1 )
    return 0LL;
  if ( !*((_QWORD *)&v21 + 1) )
  {
    LODWORD(v6) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v7 = L"Invalid CompSurfaceLuid for Cancel Presents, returning 0x%I64x";
    goto LABEL_3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v17, v20[1], Current, &v18);
  if ( !v18 )
  {
    v11 = v20[1];
    LODWORD(v6) = -1073741811;
    WdLogSingleEntry2(2LL, v20[1], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  v12 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( (*(_DWORD *)(v12 + 2664) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL));
    v13 = L"Presentation is not supported on MCDM DXGADAPTER: 0x%I64x";
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v12 + 209) )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL));
    v13 = L"NtDxgkCancelPresents is not currently supported on para-v adapter: 0x%I64x";
LABEL_25:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
    if ( v17 && _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
    LODWORD(v6) = -1073741811;
    return (unsigned int)v6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19, v18);
  v24 = v12;
  v25 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  if ( *(_DWORD *)(v12 + 200) != 1 )
  {
    LODWORD(v6) = -1073741823;
    WdLogSingleEntry2(2LL, v12, -1073741823LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGADAPTER: 0x%I64x stopped, returning 0x%I64x",
      v12,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
    if ( v25 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    if ( v19[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
    if ( !v17 )
      return (unsigned int)v6;
    goto LABEL_19;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v18, 2, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26, 0LL);
  v6 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire CoreDeviceAccess, returning 0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
    if ( v25 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    if ( v19[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
LABEL_18:
    if ( !v17 )
      return (unsigned int)v6;
LABEL_19:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
    return (unsigned int)v6;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 2800)
                                                                                           + 624LL)
                                                                               + 8LL)
                                                                   + 1048LL))(
          *(_QWORD *)(*(_QWORD *)(v12 + 2800) + 632LL),
          *((_QWORD *)&v21 + 1),
          v22,
          v21);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
  if ( v25 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  if ( v19[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
  if ( v17 && _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
  return v16;
}
