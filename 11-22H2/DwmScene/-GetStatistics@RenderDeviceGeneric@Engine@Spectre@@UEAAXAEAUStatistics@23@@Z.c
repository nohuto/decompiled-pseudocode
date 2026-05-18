/*
 * XREFs of ?GetStatistics@RenderDeviceGeneric@Engine@Spectre@@UEAAXAEAUStatistics@23@@Z @ 0x180053400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderDeviceGeneric::GetStatistics(
        Spectre::Engine::RenderDeviceGeneric *this,
        struct Spectre::Engine::Statistics *a2)
{
  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0u;
  *((_OWORD *)a2 + 2) = 0LL;
  *((_OWORD *)a2 + 3) = 0LL;
  *((_OWORD *)a2 + 4) = 0LL;
  *((_OWORD *)a2 + 5) = 0uLL;
  *((_OWORD *)a2 + 6) = 0u;
  *((_QWORD *)a2 + 14) = 0LL;
  *((_QWORD *)a2 + 10) = L"None";
}
