/*
 * XREFs of ??1CPinnedList@@UEAA@XZ @ 0x1801A92B0
 * Callers:
 *     ??_GCTaskbandPin@@UEAAPEAXI@Z @ 0x1801A9270 (--_GCTaskbandPin@@UEAAPEAXI@Z.c)
 *     ??_GCPinnedList@@UEAAPEAXI@Z @ 0x18074E850 (--_GCPinnedList@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CPinnedList::~CPinnedList(CPinnedList *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CPinnedList::`vftable';
  *((_QWORD *)this + 1) = &CPinnedList::`vftable'{for `IContextMenu'};
  *((_QWORD *)this + 2) = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::ChainInterfaces<IFlexibleTaskbarPinnedList,IPinnedList2,IPinnedList,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IPinnedList3,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *((_QWORD *)this + 3) = &CPinnedList::`vftable'{for `IPinnedList3'};
  *((_QWORD *)this + 4) = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPinnedListTombstones,IExplorerCommand,CWRLObjectWithSite>'};
  *((_QWORD *)this + 5) = &CPinnedList::`vftable'{for `IExplorerCommand'};
  *((_QWORD *)this + 6) = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  ILFree(*((LPITEMIDLIST *)this + 13));
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
}
