/*
 * XREFs of ??_GMPCManagerClientConnection@@UEAAPEAXI@Z @ 0x180159060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCManagerClientConnection@@UEAA@XZ @ 0x180158B1C (--1MPCManagerClientConnection@@UEAA@XZ.c)
 */

MPCManagerClientConnection *__fastcall MPCManagerClientConnection::`scalar deleting destructor'(
        MPCManagerClientConnection *this,
        char a2)
{
  MPCManagerClientConnection::~MPCManagerClientConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
