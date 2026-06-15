/*
 * XREFs of ?ReleaseConnection@CConnectionNode@@QEAAXPEAUIDeviceGraphObjectCache@@@Z @ 0x14000A7C4
 * Callers:
 *     ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x14000AD30 (-ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CConnectionNode::ReleaseConnection(CConnectionNode *this, struct IDeviceGraphObjectCache *a2)
{
  __int64 v3; // rcx
  void *v4; // rax

  if ( *((_QWORD *)this + 18) )
    *((_QWORD *)this + 9) = 0LL;
  (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)a2 + 48LL))(a2);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = AERTGetDLLRTHeap();
  AERTFree(*((void **)this + 13), v4);
  *((_QWORD *)this + 13) = 0LL;
}
