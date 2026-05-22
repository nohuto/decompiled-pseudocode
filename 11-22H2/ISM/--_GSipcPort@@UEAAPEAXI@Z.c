/*
 * XREFs of ??_GSipcPort@@UEAAPEAXI@Z @ 0x180126C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1SipcPort@@UEAA@XZ @ 0x180126978 (--1SipcPort@@UEAA@XZ.c)
 */

SipcPort *__fastcall SipcPort::`scalar deleting destructor'(SipcPort *this, char a2)
{
  SipcPort::~SipcPort(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
