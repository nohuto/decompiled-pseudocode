/*
 * XREFs of ??_GMPCConstantManagerClient@@UEAAPEAXI@Z @ 0x180185A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x18018466C (--1MPCConstantManagerClient@@UEAA@XZ.c)
 */

MPCConstantManagerClient *__fastcall MPCConstantManagerClient::`scalar deleting destructor'(
        MPCConstantManagerClient *this,
        char a2)
{
  MPCConstantManagerClient::~MPCConstantManagerClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
