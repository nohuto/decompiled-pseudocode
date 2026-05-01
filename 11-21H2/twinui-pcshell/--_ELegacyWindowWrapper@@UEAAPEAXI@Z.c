/*
 * XREFs of ??_ELegacyWindowWrapper@@UEAAPEAXI@Z @ 0x1803FB240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1LegacyWindowWrapper@@UEAA@XZ @ 0x1803FB1C0 (--1LegacyWindowWrapper@@UEAA@XZ.c)
 */

LegacyWindowWrapper *__fastcall LegacyWindowWrapper::`vector deleting destructor'(LegacyWindowWrapper *this, char a2)
{
  LegacyWindowWrapper::~LegacyWindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
