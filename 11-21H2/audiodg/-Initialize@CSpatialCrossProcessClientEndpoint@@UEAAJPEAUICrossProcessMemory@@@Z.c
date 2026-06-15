/*
 * XREFs of ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x140093A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000EDC8 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessMemory@@@Z @ 0x14001F13C (--4-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProc.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x1400907D8 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x140092A3C (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x140093CD4 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialCrossProcessClientEndpoint::Initialize(
        CSpatialCrossProcessClientEndpoint *this,
        struct ICrossProcessMemory *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ICrossProcessMemory *v14; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 1288);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessClientEndpoint::Initialize", 136, v4, v5);
  if ( *((_BYTE *)this - 1224) )
  {
    v6 = -2005139440;
    v7 = 138LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpclientendpoint.cpp",
      (const char *)v6);
    goto LABEL_13;
  }
  if ( !a2 )
  {
    v6 = -2147024809;
    v7 = 139LL;
    goto LABEL_5;
  }
  v14 = a2;
  (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = CSpatialCrossProcessBaseEndpoint::MapCPMemory((CSpatialCrossProcessClientEndpoint *)((char *)this - 1320), a2);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v8 = CSparseIndexMapRT::SetMapSize(
           (CSpatialCrossProcessClientEndpoint *)((char *)this + 24),
           *((_DWORD *)this - 257) + *((_DWORD *)this - 258));
    v6 = v8;
    if ( v8 >= 0 )
    {
      *((_QWORD *)this - 148) = 0LL;
      *((_QWORD *)this - 150) = 0LL;
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 3) + 64LL), 1u);
      _InterlockedExchange((volatile __int32 *)this - 306, 1);
      wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=((__int64 *)this - 154, (__int64)a2);
      v6 = 0;
      goto LABEL_12;
    }
    v9 = 150LL;
  }
  else
  {
    v9 = 144LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpclientendpoint.cpp",
    (const char *)(unsigned int)v8);
LABEL_12:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v14);
LABEL_13:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
