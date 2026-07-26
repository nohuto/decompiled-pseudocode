/*
 * XREFs of ??_GKModule@@QEAAPEAXI@Z @ 0x1C00D01A4
 * Callers:
 *     ??1?$unique_ptr@UKModule@@U?$default_delete@UKModule@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00D0148 (--1-$unique_ptr@UKModule@@U-$default_delete@UKModule@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1C0141280 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 * Callees:
 *     ??1DriverService@@QEAA@XZ @ 0x1C0140F88 (--1DriverService@@QEAA@XZ.c)
 */

char *__fastcall KModule::`scalar deleting destructor'(char *P, char a2)
{
  DriverService::~DriverService((DriverService *)(P + 40));
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x62694C4Eu);
  return P;
}
