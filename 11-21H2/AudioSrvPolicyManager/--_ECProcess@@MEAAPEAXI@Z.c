/*
 * XREFs of ??_ECProcess@@MEAAPEAXI@Z @ 0x1800155B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1CProcess@@MEAA@XZ @ 0x180015100 (--1CProcess@@MEAA@XZ.c)
 */

CProcess *__fastcall CProcess::`vector deleting destructor'(CProcess *this, char a2)
{
  CProcess::~CProcess(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
