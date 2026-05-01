/*
 * XREFs of ??_GPrivilegedOperationsService@@UEAAPEAXI@Z @ 0x18012D828
 * Callers:
 *     ??_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z @ 0x1801F6FD0 (--_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x18012D864 (--1PrivilegedOperationsService@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

PrivilegedOperationsService *__fastcall PrivilegedOperationsService::`scalar deleting destructor'(
        PrivilegedOperationsService *this,
        char a2)
{
  PrivilegedOperationsService::~PrivilegedOperationsService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x100uLL);
  return this;
}
