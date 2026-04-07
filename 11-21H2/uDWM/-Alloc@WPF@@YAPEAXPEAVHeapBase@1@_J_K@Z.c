/*
 * XREFs of ?Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z @ 0x180062928
 * Callers:
 *     ?Create@CMicaEffectCache@@SAJPEAPEAV1@@Z @ 0x180062A14 (-Create@CMicaEffectCache@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPF::Alloc(WPF *this, struct WPF::HeapBase *a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           a3);
}
