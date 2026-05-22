/*
 * XREFs of ??_GMPCMouseProcessor@@UEAAPEAXI@Z @ 0x1801F3740
 * Callers:
 *     ??_EMPCMouseProcessor@@WBA@EAAPEAXI@Z @ 0x18007EDB0 (--_EMPCMouseProcessor@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCMouseProcessor@@UEAA@XZ @ 0x1801F35F4 (--1MPCMouseProcessor@@UEAA@XZ.c)
 */

MPCMouseProcessor *__fastcall MPCMouseProcessor::`scalar deleting destructor'(MPCMouseProcessor *this, char a2)
{
  MPCMouseProcessor::~MPCMouseProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
