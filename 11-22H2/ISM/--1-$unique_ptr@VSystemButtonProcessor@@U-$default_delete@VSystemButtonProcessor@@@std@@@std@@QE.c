/*
 * XREFs of ??1?$unique_ptr@VSystemButtonProcessor@@U?$default_delete@VSystemButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1801E0970
 * Callers:
 *     ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180037B60 (-Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x1801E0990 (--R-$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<SystemButtonProcessor>::~unique_ptr<SystemButtonProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SystemButtonProcessor>::operator()();
  return result;
}
