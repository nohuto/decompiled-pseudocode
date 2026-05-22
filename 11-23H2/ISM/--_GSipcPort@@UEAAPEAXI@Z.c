/*
 * XREFs of ??_GSipcPort@@UEAAPEAXI@Z @ 0x180118C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1SipcPort@@UEAA@XZ @ 0x1801188E8 (--1SipcPort@@UEAA@XZ.c)
 */

SipcPort *__fastcall SipcPort::`scalar deleting destructor'(SipcPort *this, char a2)
{
  SipcPort::~SipcPort(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
