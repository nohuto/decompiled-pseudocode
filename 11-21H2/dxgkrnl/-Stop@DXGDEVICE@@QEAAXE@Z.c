/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02E762C
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02C49B8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C016404C (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016D390 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C016E1E8 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C016E308 (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D5C7C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C02E4AD0 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1C0329BF8 (-Stop@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C03371C0 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall DXGDEVICE::Stop(DXGDEVICE *this, char a2)
{
  __int64 v4; // rcx
  DXGOVERLAY *i; // rdi
  __int64 v6; // rdi
  DXGPROCESS *v7; // rcx
  const struct _WNF_STATE_NAME *v8; // rdx
  unsigned int v9; // r9d
  int v10; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v12[8]; // [rsp+70h] [rbp-1h] BYREF
  DXGPUSHLOCK *v13; // [rsp+78h] [rbp+7h]
  int v14; // [rsp+80h] [rbp+Fh]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp+17h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1701LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1701LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry1(4LL, this);
  if ( !a2 )
  {
    v4 = *((_QWORD *)this + 5);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
    OutputDuplProcessDestroyDevice(*((struct DXGADAPTER **)this + 231), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 744LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    for ( i = (DXGOVERLAY *)*((_QWORD *)this + 60); i != (DXGDEVICE *)((char *)this + 480) && i; i = *(DXGOVERLAY **)i )
      DXGOVERLAY::Stop(i);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
    DXGDEVICE::FlushPagingQueues(this);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)this + 30, 0);
    DXGPUSHLOCK::AcquireExclusive(v13);
    v6 = *((_QWORD *)this + 7);
    v14 = 2;
    while ( v6 )
    {
      DXGDEVICE::DestroyCoreAllocations(
        (struct _KTHREAD **)this,
        (struct DXGRESOURCE *)v6,
        *(struct DXGADAPTERALLOCATION ***)(v6 + 24));
      v6 = *(_QWORD *)(v6 + 40);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    DXGDEVICE::DrainCoreAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice(this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  }
  *((_DWORD *)this + 144) = 4;
  WdLogSingleEntry1(4LL, this);
  v7 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v10 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v7, v8, &v10, v9) < 0 )
  {
    WdLogSingleEntry1(2LL, 1782LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGPROCESS::SendWnfNotification failed during DXGDEVICE::Stop.",
      1782LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
