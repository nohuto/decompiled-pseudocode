/*
 * XREFs of ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x140050C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14002F174 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CAudioDGModule *__fastcall CAudioDGModule::`scalar deleting destructor'(CAudioDGModule *this, void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CAudioDGModule::~CAudioDGModule(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
