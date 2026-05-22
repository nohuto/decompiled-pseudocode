/*
 * XREFs of ?ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ @ 0x1800F66EC
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180026B30 (-CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 *     ?ManageSharedMemory@CDevice@DirectComposition@@AEAAXXZ @ 0x1800F25D0 (-ManageSharedMemory@CDevice@DirectComposition@@AEAAXXZ.c)
 *     ?RemoveDeadSurfaces@CDevice@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@@Z @ 0x1800F3FD0 (-RemoveDeadSurfaces@CDevice@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@@Z.c)
 */

char __fastcall DirectComposition::CDevice::ShouldBlockForExcessivePending(DirectComposition::CDevice **this)
{
  char v1; // si
  unsigned int v3; // eax
  __int64 v4; // rcx
  DirectComposition::CDevice *v5; // rax
  __int64 Next; // rbx
  DirectComposition::CSurfaceManager *v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx

  v1 = 0;
  DirectComposition::CDevice::RemoveDeadSurfaces((DirectComposition::CDevice *)this, 0LL);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this[20] + 8LL))(this[20]);
    McTemplateU0x_EventWriteTransfer(v4, &DCOMPEVENT_CAP_MAXIMUM_Start, v3);
  }
  v5 = this[77];
  Next = (__int64)v5 - 288;
  if ( v5 == (DirectComposition::CDevice *)(this + 77) )
    Next = 0LL;
  for ( ;
        Next;
        Next = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(
                 (__int64)(this + 76),
                 Next) )
  {
    v7 = *(DirectComposition::CSurfaceManager **)(Next + 312);
    *(_BYTE *)(Next + 355) = 0;
    DirectComposition::CSurfaceManager::CapMaximumAllocations(v7, 1);
    v8 = *(_QWORD *)(Next + 312);
    v9 = *(_QWORD *)(v8 + 216) + *(_QWORD *)(v8 + 256);
    if ( v9 >= (unsigned int)(8 * *(_DWORD *)(v8 + 124))
      && v9 > (((*(_QWORD *)(v8 + 208) + *(_QWORD *)(v8 + 248)) >> 1) & 0x1FFFFFFFFFFFFFFuLL) )
    {
      v1 = 1;
    }
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this[20] + 8LL))(this[20]);
    McTemplateU0x_EventWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"-", v10);
  }
  DirectComposition::CDevice::ManageSharedMemory((DirectComposition::CDevice *)this);
  return v1;
}
