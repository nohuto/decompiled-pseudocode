/*
 * XREFs of ??_GMPCManagerClientConnection@@UEAAPEAXI@Z @ 0x1801860D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCManagerClientConnection@@UEAA@XZ @ 0x180185B88 (--1MPCManagerClientConnection@@UEAA@XZ.c)
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
