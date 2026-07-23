/*
 * XREFs of PoGetProcessorIdleAccounting @ 0x1405C6DA0
 * Callers:
 *     sub_140520920 @ 0x140520920 (sub_140520920.c)
 *     sub_14052C290 @ 0x14052C290 (sub_14052C290.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall PoGetProcessorIdleAccounting(_QWORD *a1)
{
  struct _KPRCB *result; // rax
  __int64 v2; // rdx

  result = KeGetCurrentPrcb();
  v2 = *((_QWORD *)result + 4201);
  if ( a1 )
  {
    if ( v2 )
    {
      result = (struct _KPRCB *)*(unsigned int *)(v2 + 4);
      *a1 = result;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return result;
}
