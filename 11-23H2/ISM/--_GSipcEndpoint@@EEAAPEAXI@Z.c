/*
 * XREFs of ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x180118BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1SharedObjectBase@@MEAA@XZ @ 0x180117F48 (--1SharedObjectBase@@MEAA@XZ.c)
 */

SipcEndpoint *__fastcall SipcEndpoint::`scalar deleting destructor'(SipcEndpoint *this, char a2)
{
  *(_QWORD *)this = &SharedUnknownBase<ISIPCEndpoint>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &SharedUnknownBase<ISIPCEndpoint>::`vftable'{for `ISIPCEndpoint'};
  SharedObjectBase::~SharedObjectBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
