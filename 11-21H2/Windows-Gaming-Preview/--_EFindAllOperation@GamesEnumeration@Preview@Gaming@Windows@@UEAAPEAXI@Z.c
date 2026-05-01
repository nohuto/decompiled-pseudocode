/*
 * XREFs of ??_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180021A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180021AAC (--1FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *__fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::~FindAllOperation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE8uLL);
  return this;
}
