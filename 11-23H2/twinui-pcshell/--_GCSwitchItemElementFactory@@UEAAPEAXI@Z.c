/*
 * XREFs of ??_GCSwitchItemElementFactory@@UEAAPEAXI@Z @ 0x180569300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CSwitchItemElementFactory@@UEAA@XZ @ 0x18056917C (--1CSwitchItemElementFactory@@UEAA@XZ.c)
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
