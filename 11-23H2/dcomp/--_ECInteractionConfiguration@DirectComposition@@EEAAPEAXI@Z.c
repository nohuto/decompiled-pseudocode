/*
 * XREFs of ??_ECInteractionConfiguration@DirectComposition@@EEAAPEAXI@Z @ 0x1800826E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CInteractionConfiguration *__fastcall DirectComposition::CInteractionConfiguration::`vector deleting destructor'(
        DirectComposition::CInteractionConfiguration *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x28uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
