/*
 * XREFs of ??_ECApplication@@MEAAPEAXI@Z @ 0x180025870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1CApplication@@MEAA@XZ @ 0x180025148 (--1CApplication@@MEAA@XZ.c)
 */

CApplication *__fastcall CApplication::`vector deleting destructor'(CApplication *this, char a2)
{
  CApplication::~CApplication(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
