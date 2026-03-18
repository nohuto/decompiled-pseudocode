/*
 * XREFs of ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0358A24
 * Callers:
 *     DxgkDdiResetVirtualFunction @ 0x1C035A2C4 (DxgkDdiResetVirtualFunction.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C036532C (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResetVirtualFunction(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rbx
  unsigned int v14; // ebx
  DXGPROCESS *v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  _BYTE v20[8]; // [rsp+70h] [rbp-90h] BYREF
  DXGPUSHLOCK *v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+80h] [rbp-80h]
  _BYTE v23[8]; // [rsp+88h] [rbp-78h] BYREF
  DXGPUSHLOCK *v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[64]; // [rsp+D0h] [rbp-30h] BYREF

  v16 = 0LL;
  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1736);
  else
    v6 = *(_QWORD *)(a1 + 1728);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(v6 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v7 = *a3;
  v22 = 1;
  if ( a2 == 1 )
    v8 = *(_QWORD *)(a1 + 1736);
  else
    v8 = *(_QWORD *)(a1 + 1728);
  if ( !v8 || (unsigned int)v7 >= *(_DWORD *)(v8 + 12) || (v9 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v7)) == 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid virtual GPU index: %I64n", *a3, 0LL, 0LL, 0LL, 0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    return 3221225485LL;
  }
  if ( a2 == 1 )
    DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXG_VMBUS_CHANNEL_BASE *)(v9 + 176));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  COREACCESS::COREACCESS((COREACCESS *)v27, *(struct DXGADAPTER *const *)(a1 + 16));
  COREACCESS::AcquireShared((COREACCESS *)v27, 0LL);
  if ( a2 == 1 )
    v10 = *(_QWORD *)(a1 + 1736);
  else
    v10 = *(_QWORD *)(a1 + 1728);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(v10 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v18);
  v11 = *a3;
  v19 = 1;
  if ( a2 == 1 )
    v12 = *(_QWORD *)(a1 + 1736);
  else
    v12 = *(_QWORD *)(a1 + 1728);
  if ( !v12
    || (unsigned int)v11 >= *(_DWORD *)(v12 + 12)
    || !*(_QWORD *)(*(_QWORD *)(v12 + 24) + 8 * v11)
    || (_mm_lfence(), (v13 = *(struct _KTHREAD ***)(*(_QWORD *)(v12 + 24) + 8 * v11)) == 0LL) )
  {
    WdLogSingleEntry1(2LL, *a3);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid virtual GPU index: %I64n", *a3, 0LL, 0LL, 0LL, 0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    return 3221225485LL;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, v13 + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v24);
  v25 = 2;
  v14 = (*((__int64 (__fastcall **)(struct _KTHREAD **, DXGPROCESS **, _QWORD))*v13 + 2))(v13, &v16, 0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  if ( v16 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*((PRKPROCESS *)v16 + 7), &ApcState);
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)v16 + 104));
    DXGPROCESS::Destroy(v16, 0LL, 1);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v16 + 13);
    KeUnstackDetachProcess(&ApcState);
  }
  return v14;
}
