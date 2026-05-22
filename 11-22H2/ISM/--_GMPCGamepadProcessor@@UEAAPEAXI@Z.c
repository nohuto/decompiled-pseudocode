/*
 * XREFs of ??_GMPCGamepadProcessor@@UEAAPEAXI@Z @ 0x1801F053C
 * Callers:
 *     ??_EMPCGamepadProcessor@@W7EAAPEAXI@Z @ 0x18007EBF0 (--_EMPCGamepadProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801F01D8 (--1MPCGamepadProcessor@@UEAA@XZ.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::`scalar deleting destructor'(MPCGamepadProcessor *this, char a2)
{
  MPCGamepadProcessor::~MPCGamepadProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
