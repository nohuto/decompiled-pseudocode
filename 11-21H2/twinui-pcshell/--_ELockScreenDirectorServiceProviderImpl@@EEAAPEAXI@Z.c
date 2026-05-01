/*
 * XREFs of ??_ELockScreenDirectorServiceProviderImpl@@EEAAPEAXI@Z @ 0x180180900
 * Callers:
 *     ??_ELockScreenDirectorServiceProviderImpl@@GDA@EAAPEAXI@Z @ 0x1801F6BD0 (--_ELockScreenDirectorServiceProviderImpl@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1LockScreenDirectorServiceProviderImpl@@EEAA@XZ @ 0x180105DC8 (--1LockScreenDirectorServiceProviderImpl@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

LockScreenDirectorServiceProviderImpl *__fastcall LockScreenDirectorServiceProviderImpl::`vector deleting destructor'(
        LockScreenDirectorServiceProviderImpl *this,
        char a2)
{
  LockScreenDirectorServiceProviderImpl::~LockScreenDirectorServiceProviderImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA8uLL);
  return this;
}
