/*
 * XREFs of ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x1800C0D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCManagerConnection@@UEAA@XZ @ 0x1800C0AEC (--1MPCManagerConnection@@UEAA@XZ.c)
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
