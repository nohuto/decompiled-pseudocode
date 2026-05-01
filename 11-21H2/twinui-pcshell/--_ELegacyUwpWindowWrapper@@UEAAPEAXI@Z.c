/*
 * XREFs of ??_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z @ 0x1804041C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1LegacyUwpWindowWrapper@@UEAA@XZ @ 0x180403FCC (--1LegacyUwpWindowWrapper@@UEAA@XZ.c)
 */

LegacyUwpWindowWrapper *__fastcall LegacyUwpWindowWrapper::`vector deleting destructor'(
        LegacyUwpWindowWrapper *this,
        char a2)
{
  LegacyUwpWindowWrapper::~LegacyUwpWindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
