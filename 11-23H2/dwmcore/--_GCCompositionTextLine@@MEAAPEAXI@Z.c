/*
 * XREFs of ??_GCCompositionTextLine@@MEAAPEAXI@Z @ 0x1801C2900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x180226B1C (--1CCompositionTextLine@@MEAA@XZ.c)
 */

CCompositionTextLine *__fastcall CCompositionTextLine::`scalar deleting destructor'(
        CCompositionTextLine *this,
        char a2)
{
  CCompositionTextLine::~CCompositionTextLine(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
