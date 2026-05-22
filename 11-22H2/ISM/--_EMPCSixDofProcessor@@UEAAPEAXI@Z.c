/*
 * XREFs of ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x1801EAEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801E9AE8 (--1MPCSixDofProcessor@@UEAA@XZ.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::`vector deleting destructor'(MPCSixDofProcessor *this, char a2)
{
  MPCSixDofProcessor::~MPCSixDofProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
