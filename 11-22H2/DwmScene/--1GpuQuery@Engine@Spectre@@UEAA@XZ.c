/*
 * XREFs of ??1GpuQuery@Engine@Spectre@@UEAA@XZ @ 0x1800E37DC
 * Callers:
 *     ??1GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C42AC (--1GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 *     ??_EGpuQuery@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800E3800 (--_EGpuQuery@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::GpuQuery::~GpuQuery(Spectre::Engine::GpuQuery *this)
{
  *(_QWORD *)this = &Spectre::Engine::GpuQuery::`vftable';
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
