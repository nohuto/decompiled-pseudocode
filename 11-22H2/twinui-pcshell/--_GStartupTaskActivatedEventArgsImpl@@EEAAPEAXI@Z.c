/*
 * XREFs of ??_GStartupTaskActivatedEventArgsImpl@@EEAAPEAXI@Z @ 0x18062F730
 * Callers:
 *     ??_EStartupTaskActivatedEventArgsImpl@@GLI@EAAPEAXI@Z @ 0x1802A9F00 (--_EStartupTaskActivatedEventArgsImpl@@GLI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1StartupTaskActivatedEventArgsImpl@@EEAA@XZ @ 0x18062F4B8 (--1StartupTaskActivatedEventArgsImpl@@EEAA@XZ.c)
 */

HSTRING *__fastcall StartupTaskActivatedEventArgsImpl::`scalar deleting destructor'(HSTRING *this, char a2)
{
  StartupTaskActivatedEventArgsImpl::~StartupTaskActivatedEventArgsImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
