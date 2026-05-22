/*
 * XREFs of ??_GMPCMouseProcessor@@UEAAPEAXI@Z @ 0x1801C79E4
 * Callers:
 *     ??_EMPCMouseProcessor@@WBA@EAAPEAXI@Z @ 0x1800540A0 (--_EMPCMouseProcessor@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCMouseProcessor@@UEAA@XZ @ 0x1801C7898 (--1MPCMouseProcessor@@UEAA@XZ.c)
 */

MPCMouseProcessor *__fastcall MPCMouseProcessor::`scalar deleting destructor'(MPCMouseProcessor *this, char a2)
{
  MPCMouseProcessor::~MPCMouseProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
