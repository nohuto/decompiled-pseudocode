/*
 * XREFs of ??0CWRLExecuteCommandBase@@QEAA@XZ @ 0x180448A20
 * Callers:
 *     ??0VirtualTouchpadUriHandler@@QEAA@XZ @ 0x180448AC8 (--0VirtualTouchpadUriHandler@@QEAA@XZ.c)
 * Callees:
 *     ??0ILaunchTargetMonitor@@QEAA@XZ @ 0x1800A4440 (--0ILaunchTargetMonitor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CWRLExecuteCommandBase *__fastcall CWRLExecuteCommandBase::CWRLExecuteCommandBase(CWRLExecuteCommandBase *this)
{
  ILaunchTargetMonitor::ILaunchTargetMonitor(this);
  ILaunchTargetMonitor::ILaunchTargetMonitor((CWRLExecuteCommandBase *)((char *)this + 8));
  ILaunchTargetMonitor::ILaunchTargetMonitor((CWRLExecuteCommandBase *)((char *)this + 16));
  *((_QWORD *)this + 3) = &CWRLObjectWithSite::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *((_QWORD *)this + 2) = &CWRLExecuteCommandBase::`vftable'{for `IObjectWithSelection'};
  *((_QWORD *)this + 3) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return this;
}
