/*
 * XREFs of ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C0053BFC
 * Callers:
 *     DxgRegisterSharedPowerComponent @ 0x1C02E2C8C (DxgRegisterSharedPowerComponent.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C00536FC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x1C00537E4 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ??0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@ZP6AX22@ZP6AX2KIE2@ZPEAV?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@@Z @ 0x1C0308F7C (--0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C030D218 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::RegisterSharedPowerComponent(
        DXGGLOBAL *this,
        struct DXGADAPTER *a2,
        void *const a3,
        void (*a4)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a5)(void *, void *),
        void (*a6)(void *, unsigned int, unsigned int, unsigned __int8, void *),
        void (*a7)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))
{
  int v10; // esi
  char *v11; // r15
  char *v12; // rbx
  _QWORD *v13; // rbp
  DXGSHAREDPOWERINUSELISTOBJECT *v14; // r14
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  DXGSHAREDPOWERINUSELISTOBJECT *v20; // rdi
  __int64 v21; // rax
  unsigned int i; // r15d
  __int64 v23; // rbx
  KIRQL CurrentIrql; // al
  __int64 v25; // r8
  __int64 v26; // r9
  KIRQL v27; // al
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v35; // [rsp+20h] [rbp-C8h]
  int v36; // [rsp+30h] [rbp-B8h]
  struct _KTHREAD **v37; // [rsp+60h] [rbp-88h]
  __int128 v38; // [rsp+70h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  KIRQL v40; // [rsp+F0h] [rbp+8h]

  v37 = (struct _KTHREAD **)((char *)this + 704);
  v10 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 704));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1824));
  v11 = (char *)this + 1856;
  v12 = (char *)*((_QWORD *)this + 232);
  v13 = 0LL;
  v14 = 0LL;
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v10 = -1073741130;
    goto LABEL_29;
  }
  while ( v12 != v11 && v12 )
  {
    if ( *((void *const *)v12 + 3) == a3 && *((struct DXGADAPTER **)v12 + 4) == a2 )
    {
      v10 = -1073740008;
      WdLogSingleEntry1(3LL, -1073740008LL);
      goto LABEL_29;
    }
    v12 = *(char **)v12;
  }
  v16 = (_QWORD *)operator new[](0x10uLL, 0x4B677844u, 256LL, v15);
  v18 = (__int64)v16;
  if ( !v16 )
  {
    v13 = 0LL;
    WdLogSingleEntry1(6LL, 6464LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v32,
        v31,
        v33,
        0LL,
        1,
        -1,
        L"Out of memory allocating pInUseList of type SHAREDPOWERCOMPONENTINUSELIST",
        6464LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v37);
    goto LABEL_28;
  }
  v16[1] = v16;
  *v16 = v16;
  v19 = operator new[](0x48uLL, 0x4B677844u, 64LL, v17);
  if ( !v19
    || (v20 = (DXGSHAREDPOWERINUSELISTOBJECT *)DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
                                                 v19,
                                                 (_DWORD)this,
                                                 (_DWORD)a3,
                                                 (_DWORD)a2,
                                                 (__int64)a4,
                                                 (__int64)a5,
                                                 (__int64)a6,
                                                 v18),
        (v14 = v20) == 0LL) )
  {
    WdLogSingleEntry1(6LL, 6473LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v29,
        v28,
        v30,
        0LL,
        1,
        -1,
        L"Out of memory allocating pNewSharedPowerObj of type DXGSHAREDPOWERREGISTRATIONOBJECT",
        6473LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v37);
    v13 = (_QWORD *)v18;
LABEL_28:
    v10 = -1073741801;
    goto LABEL_29;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 227, &LockHandle);
  v21 = *(_QWORD *)v11;
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  v13 = (_QWORD *)v18;
  *(_QWORD *)v20 = v21;
  *((_QWORD *)v20 + 1) = v11;
  *(_QWORD *)(v21 + 8) = v20;
  *(_QWORD *)v11 = v20;
  if ( a7 )
  {
    for ( i = 0; i < *((_DWORD *)a2 + 760); ++i )
    {
      v23 = *((_QWORD *)a2 + 362) + 520LL * i;
      if ( *(_DWORD *)(v23 + 208) == 7 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v25 = *(unsigned int *)(v23 + 4);
        v36 = *(_DWORD *)(v23 + 212);
        LOBYTE(v26) = *(_BYTE *)(v23 + 360) == 0;
        v40 = CurrentIrql;
        v35 = *(_DWORD *)(v23 + 344);
        v38 = *(_OWORD *)(v23 + 220);
        ((void (__fastcall *)(struct DXGADAPTER *, void *const, __int64, __int64, int, __int128 *, int))a7)(
          a2,
          a3,
          v25,
          v26,
          v35,
          &v38,
          v36);
        if ( v40 != KeGetCurrentIrql() )
        {
          v27 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, this, v40, v27);
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_29:
  *((_QWORD *)this + 229) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1824, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v37);
  if ( v10 < 0 )
  {
    if ( v13 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v13);
    if ( v14 )
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v14);
  }
  return (unsigned int)v10;
}
