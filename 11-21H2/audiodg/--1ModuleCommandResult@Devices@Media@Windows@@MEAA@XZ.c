/*
 * XREFs of ??1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ @ 0x140073C68
 * Callers:
 *     ??_GModuleCommandResult@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140074C20 (--_GModuleCommandResult@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall Windows::Media::Devices::ModuleCommandResult::~ModuleCommandResult(
        Windows::Media::Devices::ModuleCommandResult *this)
{
  *(_QWORD *)this = &Windows::Media::Devices::ModuleCommandResult::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::ModuleCommandResult::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>((__int64)this);
}
