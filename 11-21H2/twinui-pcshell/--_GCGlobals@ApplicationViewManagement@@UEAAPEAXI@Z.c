/*
 * XREFs of ??_GCGlobals@ApplicationViewManagement@@UEAAPEAXI@Z @ 0x180178DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x180178E2C (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ApplicationViewManagement::CGlobals *__fastcall ApplicationViewManagement::CGlobals::`scalar deleting destructor'(
        ApplicationViewManagement::CGlobals *this,
        char a2)
{
  ApplicationViewManagement::CGlobals::~CGlobals(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
