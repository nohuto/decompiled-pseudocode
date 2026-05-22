/*
 * XREFs of ??_GAlpcPort@@UEAAPEAXI@Z @ 0x180126B40
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x18003980C (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x180126D10 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1AlpcPort@@UEAA@XZ @ 0x180126838 (--1AlpcPort@@UEAA@XZ.c)
 */

AlpcPort *__fastcall AlpcPort::`scalar deleting destructor'(AlpcPort *this, char a2)
{
  AlpcPort::~AlpcPort(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
