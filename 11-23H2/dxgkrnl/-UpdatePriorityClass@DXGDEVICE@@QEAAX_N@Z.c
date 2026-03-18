/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C0186AB8
 * Callers:
 *     DXGDEVICE_UpdatePriorityClass @ 0x1C0003E30 (DXGDEVICE_UpdatePriorityClass.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C0186B0C (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this, bool a2)
{
  int *v2; // rdi
  int *i; // rbx

  v2 = (int *)((char *)this + 496);
  for ( i = (int *)*((_QWORD *)this + 62); i != v2 && i; i = *(int **)i )
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, i[108], a2);
}
