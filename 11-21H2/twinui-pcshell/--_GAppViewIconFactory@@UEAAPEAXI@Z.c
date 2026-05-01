/*
 * XREFs of ??_GAppViewIconFactory@@UEAAPEAXI@Z @ 0x180453C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1AppViewIconFactory@@UEAA@XZ @ 0x180453B38 (--1AppViewIconFactory@@UEAA@XZ.c)
 */

AppViewIconFactory *__fastcall AppViewIconFactory::`scalar deleting destructor'(AppViewIconFactory *this, char a2)
{
  AppViewIconFactory::~AppViewIconFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
