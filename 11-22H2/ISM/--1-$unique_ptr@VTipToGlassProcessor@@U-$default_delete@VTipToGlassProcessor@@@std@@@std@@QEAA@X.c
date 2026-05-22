/*
 * XREFs of ??1?$unique_ptr@VTipToGlassProcessor@@U?$default_delete@VTipToGlassProcessor@@@std@@@std@@QEAA@XZ @ 0x1801DFE88
 * Callers:
 *     ?Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z @ 0x180037968 (-Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??R?$default_delete@VTipToGlassProcessor@@@std@@QEBAXPEAVTipToGlassProcessor@@@Z @ 0x1801DFEA8 (--R-$default_delete@VTipToGlassProcessor@@@std@@QEBAXPEAVTipToGlassProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<TipToGlassProcessor>::~unique_ptr<TipToGlassProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<TipToGlassProcessor>::operator()();
  return result;
}
