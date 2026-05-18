/*
 * XREFs of ??4thread@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180032120
 * Callers:
 *     ?StartPerformanceThread@Engine@1Spectre@@IEAAXXZ @ 0x180036F10 (-StartPerformanceThread@Engine@1Spectre@@IEAAXXZ.c)
 *     ?CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800577F0 (-CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::thread::operator=(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm1
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) )
    abort();
  v2 = *a2;
  result = a1;
  *a2 = 0LL;
  *(_OWORD *)a1 = v2;
  return result;
}
