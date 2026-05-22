/*
 * XREFs of ?CheckDeviceState@CDevice@DirectComposition@@UEAAJPEAH@Z @ 0x1800EDE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CheckDeviceState(DirectComposition::CDevice *this, int *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  char *v6; // rbp
  bool v7; // zf
  __int64 Next; // rdi
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = (_QWORD *)((char *)this + 96);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  v4 = 0;
  if ( a2 )
  {
    *a2 = 1;
    v5 = *((_QWORD *)this + 77);
    v6 = (char *)this + 608;
    v7 = v5 == (_QWORD)this + 616;
    Next = v5 - 288;
    if ( v7 )
      Next = 0LL;
    if ( Next )
    {
      while ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(Next + 32) + 312LL))(*(_QWORD *)(Next + 32)) >= 0 )
      {
        Next = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext((__int64)v6, Next);
        if ( !Next )
          goto LABEL_10;
      }
      *a2 = 0;
    }
  }
  else
  {
    v4 = -2147024809;
  }
LABEL_10:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v10);
  return v4;
}
