/*
 * XREFs of ??_GSipcPort@@UEAAPEAXI@Z @ 0x1800FD030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1SipcPort@@UEAA@XZ @ 0x1800FCD40 (--1SipcPort@@UEAA@XZ.c)
 */

void **__fastcall SipcPort::`scalar deleting destructor'(void **this, char a2)
{
  SipcPort::~SipcPort(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
