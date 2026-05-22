/*
 * XREFs of ??_GMPCManagerClientConnection@@UEAAPEAXI@Z @ 0x1801782C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCManagerClientConnection@@UEAA@XZ @ 0x180177D78 (--1MPCManagerClientConnection@@UEAA@XZ.c)
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
