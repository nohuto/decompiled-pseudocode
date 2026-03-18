/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016D390
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016DF90 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02E762C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x1C004C4F8 (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0166608 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016CC98 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C016D1F8 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1C016D5C8 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C016DA3C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C016E1E8 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0186AFC (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x1C03768BC (-VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(DXGDEVICE *this, struct COREDEVICEACCESS *a2)
{
  struct COREDEVICEACCESS *v4; // rdx
  __int64 v5; // r8
  unsigned int i; // esi
  __int64 v7; // rdi
  ReferenceCounted *v8; // rcx
  DXGPAGINGQUEUE *j; // rdi
  DXGDEVICESYNCOBJECT *k; // rdi
  DXGCONTEXT *m; // rdi
  void *v12; // rdx
  struct DXGADAPTER *v13; // rcx
  unsigned int HostProcess; // eax

  DXGDEVICE::FlushDeferredDestruction(this, a2, 0, 0);
  for ( i = 0; i < *((_DWORD *)this + 464); *((_QWORD *)this + v7 + 207) = 0LL )
  {
    v7 = i;
    v8 = (ReferenceCounted *)*((_QWORD *)this + i + 191);
    if ( v8 )
    {
      ReferenceCounted::Release(v8);
      *((_QWORD *)this + i + 191) = 0LL;
    }
    operator delete(*((void **)this + i++ + 207));
  }
  for ( j = (DXGPAGINGQUEUE *)*((_QWORD *)this + 62); j != (DXGDEVICE *)((char *)this + 496) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, v4);
  for ( k = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 64);
        k != (DXGDEVICE *)((char *)this + 512) && k;
        k = *(DXGDEVICESYNCOBJECT **)k )
  {
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  }
  if ( *((_QWORD *)this + 236) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 8LL) + 616LL))();
    *((_QWORD *)this + 236) = 0LL;
  }
  for ( m = (DXGCONTEXT *)*((_QWORD *)this + 58); m != (DXGDEVICE *)((char *)this + 464) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, (PERESOURCE **)a2);
  v12 = (void *)*((_QWORD *)this + 73);
  if ( v12 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(*((ADAPTER_RENDER **)this + 2), v12, v5);
    *((_QWORD *)this + 73) = 0LL;
  }
  if ( *((_QWORD *)this + 95) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 416LL))();
    *((_QWORD *)this + 95) = 0LL;
  }
  if ( *((_QWORD *)this + 96) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 8LL) + 120LL))();
    *((_QWORD *)this + 96) = 0LL;
  }
  v13 = (struct DXGADAPTER *)*((_QWORD *)this + 231);
  if ( !v13 )
    v13 = *(struct DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  IterateOutputDuplMgrsForRender(
    v13,
    (int (*)(struct OUTPUTDUPL_MGR *, void *))W32kStub_UserRemoveWindowedSwapChain,
    this);
  if ( *((_BYTE *)this + 1870) )
  {
    DXGPROCESS::CloseAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2));
    *((_BYTE *)this + 1870) = 0;
  }
  if ( *((_DWORD *)this + 110) )
  {
    HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyDevice(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4344LL),
      HostProcess,
      *((_DWORD *)this + 110));
    *((_DWORD *)this + 110) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
        &EventDestroyDevice,
        *((unsigned __int8 *)this + 1866),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 108),
        this,
        *((unsigned __int8 *)this + 1865),
        *((unsigned __int8 *)this + 1866),
        *((_DWORD *)this + 109),
        0LL,
        0,
        0LL);
  }
}
