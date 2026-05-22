/*
 * XREFs of ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x1800A93A0
 * Callers:
 *     ??_EOneCoreUAPInputHost@@OBI@EAAPEAXI@Z @ 0x180079410 (--_EOneCoreUAPInputHost@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A923C (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 */

OneCoreUAPInputHost *__fastcall OneCoreUAPInputHost::`scalar deleting destructor'(OneCoreUAPInputHost *this, char a2)
{
  OneCoreUAPInputHost::~OneCoreUAPInputHost(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
