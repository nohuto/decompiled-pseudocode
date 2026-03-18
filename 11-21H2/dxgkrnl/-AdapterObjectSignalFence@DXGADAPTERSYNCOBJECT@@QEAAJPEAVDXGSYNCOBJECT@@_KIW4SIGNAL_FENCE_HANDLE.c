/*
 * XREFs of ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C019AB9C
 * Callers:
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C019AB18 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0341570 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qpx_EtwWriteTransfer @ 0x1C0059E9C (McTemplateK0qpx_EtwWriteTransfer.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C037CB8C (-VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v9; // r10
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  struct DXGADAPTER *v16; // rcx
  struct DXGADAPTER *v17; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGFASTMUTEX *v20; // [rsp+50h] [rbp-B0h]
  char v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  char v23[25]; // [rsp+68h] [rbp-98h] BYREF
  char v24; // [rsp+81h] [rbp-7Fh]
  _BYTE v25[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v27; // [rsp+98h] [rbp-68h]
  char v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  _BYTE v30[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-30h]
  struct DXGADAPTER *v32; // [rsp+D8h] [rbp-28h]
  char v33; // [rsp+E0h] [rbp-20h]
  char *v34; // [rsp+E8h] [rbp-18h]

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( *(_BYTE *)(v9 + 209) )
  {
    Global = DXGGLOBAL_GetGlobal();
    return DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(*((_QWORD *)Global + 218), a4, a3, a5);
  }
  v24 = 0;
  v27 = (struct DXGADAPTER *)v9;
  v28 = 0;
  v29 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24));
  v32 = (struct DXGADAPTER *)v9;
  v26 = -1LL;
  v33 = 0;
  v34 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24));
  v31 = -1LL;
  COREACCESS::AcquireShared((COREACCESS *)v30, 0LL);
  if ( *((_DWORD *)v32 + 50) == 1 )
  {
    if ( v27 == v32 || (COREACCESS::AcquireShared((COREACCESS *)v25, 0LL), *((_DWORD *)v27 + 50) == 1) )
    {
      v24 = 1;
      v20 = (DXGFASTMUTEX *)(a2 + 32);
      v21 = 0;
      if ( a2 == -32 )
      {
        WdLogSingleEntry1(1LL, 573LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((struct _KTHREAD **)v20 + 3) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 580LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGFASTMUTEX::Acquire(v20);
      *(_QWORD *)v23 = *(_QWORD *)(a1 + 32);
      v10 = *(_QWORD *)(a1 + 16);
      v21 = 1;
      v22 = a3;
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, char *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v10 + 624) + 8LL) + 640LL))(
              0LL,
              0LL,
              0LL,
              0LL,
              1,
              v23,
              0,
              &v22);
      v15 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGADAPTERSYNCOBJECT::SignalFence failed. Status: %I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qpx_EtwWriteTransfer(v13, v12, v14, 0, v23[0], v22);
        LODWORD(v15) = 0;
      }
      if ( v21 )
      {
        v21 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v20);
      }
      goto LABEL_15;
    }
    COREACCESS::Release((COREACCESS *)v25);
  }
  COREACCESS::Release((COREACCESS *)v30);
  WdLogSingleEntry1(4LL, 1252LL);
  LODWORD(v15) = 0;
LABEL_15:
  if ( v24 )
  {
    if ( v27 != v32 )
      COREACCESS::Release((COREACCESS *)v25);
    if ( !v33 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v30, 0LL, 0LL);
    v33 = 0;
    v16 = v32;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v32 + 23) )
    {
      DXGADAPTER::ReleaseCoreResource(v32, v34);
      v16 = v32;
    }
    v34 = 0LL;
    v24 = 0;
  }
  else
  {
    v16 = v32;
  }
  if ( v16 )
  {
    if ( v33 )
    {
      COREACCESS::Release((COREACCESS *)v30);
      v16 = v32;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v16 + 2), v16);
  }
  v17 = v27;
  if ( v27 )
  {
    if ( v28 )
    {
      COREACCESS::Release((COREACCESS *)v25);
      v17 = v27;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v17 + 2), v17);
  }
  return (unsigned int)v15;
}
