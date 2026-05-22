/*
 * XREFs of ??_ESipcServer@@EEAAPEAXI@Z @ 0x180118C40
 * Callers:
 *     ??_ESipcServer@@GBI@EAAPEAXI@Z @ 0x180067330 (--_ESipcServer@@GBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1SipcServer@@EEAA@XZ @ 0x180118960 (--1SipcServer@@EEAA@XZ.c)
 */

SipcServer *__fastcall SipcServer::`vector deleting destructor'(SipcServer *this, char a2)
{
  SipcServer::~SipcServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
