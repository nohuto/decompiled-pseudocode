/*
 * XREFs of ??1?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ @ 0x180034124
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x180034294 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z @ 0x180034DA8 (--R-$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CDriverListener>::~unique_ptr<CDriverListener>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CDriverListener>::operator()();
  return result;
}
