/*
 * XREFs of ??1?$unique_ptr@VKernelChannel@DirectComposition@@U?$default_delete@VKernelChannel@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1801002D0
 * Callers:
 *     ?Create@KernelChannel@DirectComposition@@SAJPEAIPEAPEAXPEAPEAVChannel@2@@Z @ 0x18008338C (-Create@KernelChannel@DirectComposition@@SAJPEAIPEAPEAXPEAPEAVChannel@2@@Z.c)
 * Callees:
 *     ??R?$default_delete@VKernelChannel@DirectComposition@@@std@@QEBAXPEAVKernelChannel@DirectComposition@@@Z @ 0x1801002F0 (--R-$default_delete@VKernelChannel@DirectComposition@@@std@@QEBAXPEAVKernelChannel@DirectComposi.c)
 */

__int64 __fastcall std::unique_ptr<DirectComposition::KernelChannel>::~unique_ptr<DirectComposition::KernelChannel>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<DirectComposition::KernelChannel>::operator()();
  return result;
}
