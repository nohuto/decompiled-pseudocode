/*
 * XREFs of ??_GKModule@@QEAAPEAXI@Z @ 0x1C00CB44C
 * Callers:
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1C013545C (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 * Callees:
 *     ??1DriverService@@QEAA@XZ @ 0x1C01351A4 (--1DriverService@@QEAA@XZ.c)
 */

char *__fastcall KModule::`scalar deleting destructor'(char *P, char a2)
{
  DriverService::~DriverService((DriverService *)(P + 40));
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x62694C4Eu);
  return P;
}
