/*
 * XREFs of ??_GMPCHandProcessor@@UEAAPEAXI@Z @ 0x1800A6B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800A6584 (--1MPCHandProcessor@@UEAA@XZ.c)
 */

MPCHandProcessor *__fastcall MPCHandProcessor::`scalar deleting destructor'(MPCHandProcessor *this, char a2)
{
  MPCHandProcessor::~MPCHandProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
