/*
 * XREFs of ?GetStatistics@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXAEAUStatistics@34@@Z @ 0x1800C59E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStatistics@RenderDevice@Engine@Spectre@@UEAAXAEAUStatistics@23@@Z @ 0x180026870 (-GetStatistics@RenderDevice@Engine@Spectre@@UEAAXAEAUStatistics@23@@Z.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::GetStatistics(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this,
        struct Spectre::Engine::Statistics *a2)
{
  _QWORD *v4; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx

  Spectre::Engine::RenderDevice::GetStatistics(this, a2);
  v4 = (_QWORD *)((char *)this + 4600);
  v5 = *((_DWORD *)this + 1139);
  v6 = *((_DWORD *)this + 1138);
  v7 = *((_QWORD *)this + 571) >> 20;
  v8 = *((_QWORD *)this + 573) >> 20;
  if ( *((_QWORD *)this + 578) >= 8uLL )
    v4 = (_QWORD *)*v4;
  *((_QWORD *)a2 + 10) = v4;
  *((_QWORD *)a2 + 11) = v7;
  *((_DWORD *)a2 + 24) = v5;
  *((_DWORD *)a2 + 25) = v6;
  *((_QWORD *)a2 + 13) = v8;
  *((_DWORD *)a2 + 28) = *((_DWORD *)this + 1158);
}
