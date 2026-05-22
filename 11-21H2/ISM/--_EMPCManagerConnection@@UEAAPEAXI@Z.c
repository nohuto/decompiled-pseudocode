/*
 * XREFs of ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x1800980F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCManagerConnection@@UEAA@XZ @ 0x180097E18 (--1MPCManagerConnection@@UEAA@XZ.c)
 */

MPCManagerConnection *__fastcall MPCManagerConnection::`vector deleting destructor'(
        MPCManagerConnection *this,
        char a2)
{
  MPCManagerConnection::~MPCManagerConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
