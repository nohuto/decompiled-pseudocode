/*
 * XREFs of ??_EMPCManagerClient@@UEAAPEAXI@Z @ 0x180159020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x180158A58 (--1MPCManagerClient@@UEAA@XZ.c)
 */

MPCManagerClient *__fastcall MPCManagerClient::`vector deleting destructor'(MPCManagerClient *this, char a2)
{
  MPCManagerClient::~MPCManagerClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
