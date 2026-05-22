/*
 * XREFs of ?Release@GazeProcessor@@UEAAKXZ @ 0x1801D9B70
 * Callers:
 *     ?Release@GazeProcessor@@W7EAAKXZ @ 0x18006AFD0 (-Release@GazeProcessor@@W7EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBA@EAAKXZ @ 0x18006AFF0 (-Release@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBI@EAAKXZ @ 0x18006B010 (-Release@GazeProcessor@@WBI@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCA@EAAKXZ @ 0x18006B030 (-Release@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCI@EAAKXZ @ 0x18006B050 (-Release@GazeProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::Release(GazeProcessor *this)
{
  return RefCountedObject::Release((GazeProcessor *)((char *)this + 40));
}
