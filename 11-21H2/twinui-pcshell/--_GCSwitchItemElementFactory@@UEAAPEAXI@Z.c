/*
 * XREFs of ??_GCSwitchItemElementFactory@@UEAAPEAXI@Z @ 0x1804AC880
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CSwitchItemElementFactory@@UEAA@XZ @ 0x1804AC708 (--1CSwitchItemElementFactory@@UEAA@XZ.c)
 */

CSwitchItemElementFactory *__fastcall CSwitchItemElementFactory::`scalar deleting destructor'(
        CSwitchItemElementFactory *this,
        char a2)
{
  CSwitchItemElementFactory::~CSwitchItemElementFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
