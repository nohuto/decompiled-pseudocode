/*
 * XREFs of ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1801D9190
 * Callers:
 *     ??_EGazeProcessor@@OCI@EAAPEAXI@Z @ 0x18006AF10 (--_EGazeProcessor@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x1801D9000 (--1GazeProcessor@@MEAA@XZ.c)
 */

GazeProcessor *__fastcall GazeProcessor::`scalar deleting destructor'(GazeProcessor *this, char a2)
{
  GazeProcessor::~GazeProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
