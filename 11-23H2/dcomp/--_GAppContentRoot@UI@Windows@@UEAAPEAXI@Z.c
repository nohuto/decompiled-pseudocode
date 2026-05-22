/*
 * XREFs of ??_GAppContentRoot@UI@Windows@@UEAAPEAXI@Z @ 0x180011800
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppContentRoot@UI@Windows@@UEAA@XZ @ 0x18001183C (--1AppContentRoot@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Windows::UI::AppContentRoot *__fastcall Windows::UI::AppContentRoot::`scalar deleting destructor'(
        Windows::UI::AppContentRoot *this,
        char a2)
{
  Windows::UI::AppContentRoot::~AppContentRoot(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
