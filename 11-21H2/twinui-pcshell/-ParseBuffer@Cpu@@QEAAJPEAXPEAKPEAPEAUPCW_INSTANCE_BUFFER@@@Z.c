/*
 * XREFs of ?ParseBuffer@Cpu@@QEAAJPEAXPEAKPEAPEAUPCW_INSTANCE_BUFFER@@@Z @ 0x18022C018
 * Callers:
 *     ?UpdateCpuQuery@Cpu@@QEAAJPEAN@Z @ 0x1803458A4 (-UpdateCpuQuery@Cpu@@QEAAJPEAN@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Cpu::ParseBuffer(Cpu *this, void *a2, unsigned int *a3, struct PCW_INSTANCE_BUFFER **a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !a2 )
    return 2147942487LL;
  if ( !*(_QWORD *)a2 )
    return 2147942487LL;
  v4 = *(_QWORD *)a2 + *(unsigned int *)(*(_QWORD *)a2 + 4LL);
  if ( !v4 )
    return 2147942487LL;
  v5 = *(unsigned int *)(v4 + 4);
  *a4 = (struct PCW_INSTANCE_BUFFER *)(v4 + v5);
  if ( !(v4 + v5) )
    return 2147942487LL;
  *a3 = *(_DWORD *)(v4 + 8);
  return 0LL;
}
