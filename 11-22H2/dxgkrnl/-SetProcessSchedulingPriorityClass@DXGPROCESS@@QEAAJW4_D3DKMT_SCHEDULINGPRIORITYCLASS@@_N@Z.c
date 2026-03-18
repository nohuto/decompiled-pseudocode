/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C01DF1D4
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C01DEF90 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0007F58 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0008088 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     VidSchSetPriorityClassProcessX @ 0x1C01DF320 (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned __int8 a3)
{
  unsigned int v5; // r12d
  __int64 result; // rax
  struct _KTHREAD *v7; // rdi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v9; // r14
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  char *v13; // [rsp+60h] [rbp-A0h] BYREF
  struct _KTHREAD *v14; // [rsp+68h] [rbp-98h]
  _BYTE v15[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a3;
  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3538LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 3538LL, 0LL, 0LL, 0LL, 0LL);
  }
  result = VidSchSetPriorityClassProcessX(this, a2, v5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 78) = a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 27, 0LL);
    this[28] = KeGetCurrentThread();
    v7 = this[40];
    v13 = (char *)(this + 40);
    while ( 1 )
    {
      v14 = v7;
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v13);
      v9 = Current;
      if ( !Current )
        break;
      v10 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, v10, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15, 0LL) >= 0 && (*((_BYTE *)v9 + 1901) & 1) == 0 )
      {
        LOBYTE(v11) = v5;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 736LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v9 + 100),
          *((unsigned int *)this + 108),
          v11);
        v7 = v14;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
      if ( v12[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12);
      v7 = *(struct _KTHREAD **)v7;
    }
    this[28] = 0LL;
    ExReleasePushLockExclusiveEx(this + 27, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
