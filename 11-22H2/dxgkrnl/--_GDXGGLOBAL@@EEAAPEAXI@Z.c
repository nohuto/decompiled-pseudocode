/*
 * XREFs of ??_GDXGGLOBAL@@EEAAPEAXI@Z @ 0x1C0051BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0311CA0 (--1DXGGLOBAL@@EEAA@XZ.c)
 */

DXGGLOBAL *__fastcall DXGGLOBAL::`scalar deleting destructor'(DXGGLOBAL *P, char a2)
{
  DXGGLOBAL::~DXGGLOBAL(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
