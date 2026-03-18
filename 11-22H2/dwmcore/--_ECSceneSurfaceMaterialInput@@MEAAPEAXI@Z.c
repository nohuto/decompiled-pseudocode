/*
 * XREFs of ??_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z @ 0x180251540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1802514D0 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 */

CSceneSurfaceMaterialInput *__fastcall CSceneSurfaceMaterialInput::`vector deleting destructor'(
        CSceneSurfaceMaterialInput *this,
        char a2)
{
  CSceneSurfaceMaterialInput::~CSceneSurfaceMaterialInput(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
