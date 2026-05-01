/*
 * XREFs of ??1CProcessMemoryReport@System@Windows@@UEAA@XZ @ 0x18001A048
 * Callers:
 *     ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x18001A210 (--_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::System::CProcessMemoryReport::~CProcessMemoryReport(__int64 this)
{
  *(_QWORD *)this = &Windows::System::CProcessMemoryReport::`vftable';
  *(_QWORD *)(this + 8) = &Windows::System::CProcessMemoryReport::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(this + 16) = &Windows::System::CProcessMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>(this);
}
