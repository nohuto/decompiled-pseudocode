/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01EDEC0
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C01C1FB0 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0013B0C (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01AB974 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01ADE34 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01ADEA8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C01BB228 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C07FC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01C08BC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C01C1F0C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C01E91F0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C01EE1C4 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C034961C (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rdi
  struct _KTHREAD **Current; // rax
  struct DXGPROCESS *v7; // r14
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r9
  int v11; // ebx
  unsigned __int16 v12; // bx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // r9d
  unsigned int v22; // edx
  __int64 v23; // r8
  __int64 v25; // rdi
  int v26; // edx
  const wchar_t *v27; // r9
  unsigned __int16 i; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v29; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v30; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID v31; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[8]; // [rsp+80h] [rbp-80h] BYREF
  DXGPUSHLOCK *v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+90h] [rbp-70h]
  _BYTE v36[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-20h]
  _BYTE v38[432]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v39[10]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v40[8]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v41[64]; // [rsp+318h] [rbp+218h] BYREF
  _BYTE v42[88]; // [rsp+358h] [rbp+258h] BYREF

  v4 = a2;
  v5 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v7 = (struct DXGPROCESS *)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 3362LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 3362LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v29 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, v5, Current, &v29);
  v8 = v29;
  if ( !v29 )
  {
    WdLogSingleEntry1(2LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    v11 = -1073741811;
    goto LABEL_24;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32, v29);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)v8 + 18, 0);
  DXGPUSHLOCK::AcquireExclusive(v34);
  v35 = 2;
  v9 = *((_QWORD *)v8 + 231);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DisableDWMVirtualModeOnVidPnSource function cannot be called on a render only device (0x%I64x)",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    v11 = -1073741637;
    goto LABEL_22;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v38,
    *(struct ADAPTER_DISPLAY **)(v9 + 2792),
    v7);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v38);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v8, 1, v10, 0);
  v11 = COREDEVICEACCESS::AcquireExclusive((__int64)v40, 2u);
  if ( v11 < 0 )
    goto LABEL_21;
  v31 = *(struct _LUID *)(v9 + 404);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v40);
  v12 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v36, 8u, 0);
  for ( i = 8; ; v12 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v36, v12, v13, v14) < v12 )
    {
      v25 = v12;
      WdLogSingleEntry1(6LL, v12);
      v26 = 262145;
      v27 = L"Failed to reserve the memory for active topology. (RequiredPathsCount = %I64u)";
      v11 = -1073741801;
      goto LABEL_38;
    }
    v15 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v36, 0, 0, 0, &i);
    v11 = v15;
    if ( v15 != -1073741789 )
      break;
  }
  if ( v15 < 0 )
  {
    v25 = v15;
    WdLogSingleEntry1(2LL, v15);
    v26 = 0x40000;
    v27 = L"Failed to set active topology, Status = 0x%I64x)";
LABEL_38:
    DxgkLogInternalTriageEvent(0LL, v26, -1, (__int64)v27, v25, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_20;
  }
  v16 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v36, &v31, v4);
  v11 = v16;
  if ( v16 < 0 )
  {
    v25 = v16;
    WdLogSingleEntry1(2LL, v16);
    v26 = 0x40000;
    v27 = L"Failed to set physical mode/IHV clone, (Status = 0x%I64x)";
    goto LABEL_38;
  }
  v17 = 0;
  if ( DxgkGetGlobalRawmodeFlag() )
    v17 = 0x20000;
  v18 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v36, v17, 0);
  v11 = v18;
  if ( v18 < 0 )
  {
    v25 = v18;
    WdLogSingleEntry1(2LL, v18);
    v26 = 0x40000;
    v27 = L"Failed to functionalize the new topology, (Status = 0x%I64x)";
    goto LABEL_38;
  }
  memset(v39, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v39[1]);
  v39[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v39[3]) = 57;
  LOBYTE(v39[6]) = -1;
  v19 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v36, v17, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v39);
  v11 = v19;
  if ( v19 < 0 )
  {
    v25 = v19;
    WdLogSingleEntry1(2LL, v19);
    v26 = 0x40000;
    v27 = L"Failed to apply the new topology, (Status = 0x%I64x)";
    goto LABEL_38;
  }
  v20 = *(_QWORD *)(v37 + 48);
  if ( v20 )
  {
    v21 = *(_DWORD *)(v37 + 40);
    v22 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        v23 = 340LL * v22;
        if ( *(_DWORD *)(v23 + v20 + 88) || *(_DWORD *)(v23 + v20 + 92) || *(_DWORD *)(v23 + v20 + 124) )
          break;
        if ( ++v22 >= v21 )
          goto LABEL_20;
      }
      DxgkNotifyDisplayChange(0LL);
    }
  }
LABEL_20:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v36);
LABEL_21:
  COREACCESS::~COREACCESS((COREACCESS *)v42);
  COREACCESS::~COREACCESS((COREACCESS *)v41);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v38);
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  if ( v32[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
LABEL_24:
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
  }
  return (unsigned int)v11;
}
