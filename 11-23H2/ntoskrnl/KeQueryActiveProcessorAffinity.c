/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x1405707A0
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x1402545C0 (KiCopyAffinityEx.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 1310721;
  memset((void *)(a1 + 8), 0, 0xA0uLL);
  KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
