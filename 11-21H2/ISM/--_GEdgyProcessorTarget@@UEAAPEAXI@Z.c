/*
 * XREFs of ??_GEdgyProcessorTarget@@UEAAPEAXI@Z @ 0x1801ACA40
 * Callers:
 *     ??_EEdgyProcessorTarget@@WBA@EAAPEAXI@Z @ 0x180053880 (--_EEdgyProcessorTarget@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1EdgyProcessorTarget@@UEAA@XZ @ 0x1801AC898 (--1EdgyProcessorTarget@@UEAA@XZ.c)
 */

EdgyProcessorTarget *__fastcall EdgyProcessorTarget::`scalar deleting destructor'(EdgyProcessorTarget *this, char a2)
{
  EdgyProcessorTarget::~EdgyProcessorTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
